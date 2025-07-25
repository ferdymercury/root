/*****************************************************************************
 * Project: RooFit                                                           *
 * Package: RooFitModels                                                     *
 * @(#)root/roofit:$Id$
 * Authors:                                                                  *
 *   Kyle Cranmer
 *                                                                           *
 *****************************************************************************/

/** \class RooChiSquarePdf
    \ingroup Roofit

The PDF of the Chi Square distribution for n degrees of freedom.
Oddly, this is hard to find in ROOT (except via relation to GammaDist).
Here we also implement the analytic integral.
**/

#include "RooChiSquarePdf.h"
#include "RooRealVar.h"
#include "RooBatchCompute.h"
#include "RooHelpers.h"

#include "TMath.h"

#include <array>
#include <cmath>


////////////////////////////////////////////////////////////////////////////////

RooChiSquarePdf::RooChiSquarePdf()
{
}

////////////////////////////////////////////////////////////////////////////////

RooChiSquarePdf::RooChiSquarePdf(const char* name, const char* title,
                           RooAbsReal& x, RooAbsReal& ndof):
  RooAbsPdf(name, title),
  _x("x", "Dependent", this, x),
  _ndof("ndof","ndof", this, ndof)
{
   RooHelpers::checkRangeOfParameters(this, {&x, &ndof}, 0.);
}

////////////////////////////////////////////////////////////////////////////////

RooChiSquarePdf::RooChiSquarePdf(const RooChiSquarePdf& other, const char* name) :
  RooAbsPdf(other, name),
  _x("x", this, other._x),
  _ndof("ndof",this,other._ndof)
{
}

////////////////////////////////////////////////////////////////////////////////

double RooChiSquarePdf::evaluate() const
{
   if (_x <= 0)
      return 0;

   return pow(_x, (_ndof / 2.) - 1.) * std::exp(-_x / 2.) / TMath::Gamma(_ndof / 2.) / std::pow(2., _ndof / 2.);
}

////////////////////////////////////////////////////////////////////////////////
/// Compute multiple values of ChiSquare distribution.
void RooChiSquarePdf::doEval(RooFit::EvalContext &ctx) const
{
   std::array<double, 1> extraArgs{_ndof};
   RooBatchCompute::compute(ctx.config(this), RooBatchCompute::ChiSquare, ctx.output(), {ctx.at(_x)}, extraArgs);
}

////////////////////////////////////////////////////////////////////////////////
/// No analytical calculation available (yet) of integrals over subranges

Int_t RooChiSquarePdf::getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName) const
{
  if (rangeName && strlen(rangeName)) {
    return 0 ;
  }

  if (matchArgs(allVars, analVars, _x)) return 1;
  return 0;
}

////////////////////////////////////////////////////////////////////////////////

double RooChiSquarePdf::analyticalIntegral(Int_t code, const char* rangeName) const
{
  assert(1 == code); (void)code;
  double xmin = _x.min(rangeName); double xmax = _x.max(rangeName);

  // TMath::Prob needs ndof to be an integer, or it returns 0.
  //  return TMath::Prob(xmin, _ndof) - TMath::Prob(xmax,_ndof);

  // cumulative is known based on lower incomplete gamma function, or regularized gamma function
  // Wikipedia defines lower incomplete gamma function without the normalization 1/Gamma(ndof),
  // but it is included in the ROOT implementation.
  double pmin = TMath::Gamma(_ndof/2,xmin/2);
  double pmax = TMath::Gamma(_ndof/2,xmax/2);

  // only use this if range is appropriate
  return pmax-pmin;
}
