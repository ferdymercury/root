/*****************************************************************************
 * Project: RooFit                                                           *
 * Package: RooFitCore                                                       *
 *    File: $Id$
 * Authors:                                                                  *
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu       *
 *   DK, David Kirkby,    UC Irvine,         dkirkby@uci.edu                 *
 *                                                                           *
 * Copyright (c) 2000-2005, Regents of the University of California          *
 *                          and Stanford University. All rights reserved.    *
 *                                                                           *
 * Redistribution and use in source and binary forms,                        *
 * with or without modification, are permitted according to the terms        *
 * listed in LICENSE (http://roofit.sourceforge.net/license.txt)             *
 *****************************************************************************/
#ifndef ROO_DERIVATIVE
#define ROO_DERIVATIVE

#include "RooAbsReal.h"
#include "RooRealProxy.h"
#include "RooSetProxy.h"

namespace ROOT{ namespace Math {
class RichardsonDerivator;
}}

class RooRealVar;
class RooArgList ;

class RooDerivative : public RooAbsReal {
public:

  RooDerivative() ;
  RooDerivative(const char *name, const char *title, RooAbsReal& func, RooRealVar& x, Int_t order=1, double eps=0.001) ;
  RooDerivative(const char *name, const char *title, RooAbsReal& func, RooRealVar& x, const RooArgSet& nset, Int_t order=1, double eps=0.001) ;
  ~RooDerivative() override ;

  RooDerivative(const RooDerivative& other, const char* name = nullptr);
  TObject* clone(const char* newname=nullptr) const override { return new RooDerivative(*this, newname); }

  Int_t order() const { return _order ; }
  double eps() const { return _eps ; }
  void setEps(double e) { _eps = e ; }

  bool redirectServersHook(const RooAbsCollection& /*newServerList*/, bool /*mustReplaceAll*/, bool /*nameChange*/, bool /*isRecursive*/) override ;

protected:

  Int_t _order = 1;                                       ///< Derivation order
  double _eps = 1e-7;                                     ///< Precision
  RooSetProxy  _nset ;                                    ///< Normalization set (optional)
  RooRealProxy _func ;                                    ///< Input function
  RooRealProxy _x     ;                                   ///< Observable
  mutable std::unique_ptr<RooFunctor> _ftor;                   ///<! Functor binding of RooAbsReal
  mutable std::unique_ptr<ROOT::Math::RichardsonDerivator> _rd; ///<! Derivator

  double evaluate() const override;

  ClassDefOverride(RooDerivative,1) // Representation of derivative of any RooAbsReal
};

#endif
