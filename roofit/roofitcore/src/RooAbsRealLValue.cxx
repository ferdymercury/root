/*****************************************************************************
 * Project: RooFit                                                           *
 * Package: RooFitCore                                                       *
 * @(#)root/roofitcore:$Id$
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

/**
\file RooAbsRealLValue.cxx
\class RooAbsRealLValue
\ingroup Roofitcore

Abstract base class for objects that represent a
real value that may appear on the left hand side of an equation ('lvalue').
Each implementation must provide a setVal() member to allow direct modification
of the value. RooAbsRealLValue may be derived, but its functional relation
to other RooAbsArg must be invertible

This class has methods that export the defined range of the lvalue,
but doesn't hold its values because these limits may be derived
from limits of client object.  The range serve as integration
range when interpreted as a observable and a boundaries when
interpreted as a parameter.
**/

#include "RooAbsRealLValue.h"

#include "RooStreamParser.h"
#include "RooRandom.h"
#include "RooPlot.h"
#include "RooArgList.h"
#include "RooAbsBinning.h"
#include "RooBinning.h"
#include "RooNumber.h"
#include "RooUniformBinning.h"
#include "RooCmdConfig.h"
#include "RooAbsData.h"
#include "RooRealVar.h"
#include "RooMsgService.h"

#include "ROOT/StringUtils.hxx"

#include "TH1.h"
#include "TH2.h"
#include "TH3.h"

#include <cmath>

using std::endl, std::istream, std::ostream;


////////////////////////////////////////////////////////////////////////////////
/// Constructor

RooAbsRealLValue::RooAbsRealLValue(const char *name, const char *title, const char *unit) :
  RooAbsReal(name, title, 0, 0, unit)
{
}



////////////////////////////////////////////////////////////////////////////////
/// Copy constructor

RooAbsRealLValue::RooAbsRealLValue(const RooAbsRealLValue& other, const char* name) :
  RooAbsReal(other,name), RooAbsLValue(other)
{
}

////////////////////////////////////////////////////////////////////////////////
/// Return true if the input value is within our fit range. Otherwise, return
/// false and write a clipped value into clippedValPtr if it is non-zero.
///
/// Implements the following check to see if the value x is in the range [a, b]:
/// check if `[x - eps * x, x + eps * x]` overlaps with `[a, b]`, where the
/// parameter `eps` is defined as:
/// ```
/// std::max(RooNumber::rangeEpsRel() * std::abs(x), RooNumber::rangeEpsAbs())
/// ```
/// By default, RooNumber::rangeEpsRel() and RooNumber::rangeEpsRel() are set to zero.
/// You can change them with RooNumber::setRangeEpsRel(double) and RooNumber::setRangeEpsAbs(double),
/// but this should be only done if there is no other solution.
bool RooAbsRealLValue::inRange(double value, const char* rangeName, double* clippedValPtr) const
{
  // double range = getMax() - getMin() ; // ok for +/-INFINITY
  double clippedValue(value);
  bool isInRange(true) ;

  const RooAbsBinning& binning = getBinning(rangeName) ;
  double min = binning.lowBound() ;
  double max = binning.highBound() ;

  const double epsilon = std::max(RooNumber::rangeEpsRel() * std::abs(value), RooNumber::rangeEpsAbs());

  // test this value against our upper fit limit
  if(!RooNumber::isInfinite(max) && value > (max+epsilon)) {
    clippedValue = max;
    isInRange = false ;
  }
  // test this value against our lower fit limit
  if(!RooNumber::isInfinite(min) && value < min-epsilon) {
    clippedValue = min ;
    isInRange = false ;
  }

  if (clippedValPtr) *clippedValPtr=clippedValue ;

  return isInRange ;
}


////////////////////////////////////////////////////////////////////////////////
/// Vectorized version of RooAbsRealLValue::inRange(double, const char*, double*).
void RooAbsRealLValue::inRange(std::span<const double> values, std::string const& rangeName, std::vector<bool>& out) const {
  if(rangeName.empty()) {
    return;
  }

  const RooAbsBinning& binning = getBinning(rangeName.c_str()) ;
  const double min = binning.lowBound() ;
  const double max = binning.highBound() ;

  const bool infiniteMin = RooNumber::isInfinite(min);
  const bool infiniteMax = RooNumber::isInfinite(max);

  const double epsRel = RooNumber::rangeEpsRel();
  const double epsAbs = RooNumber::rangeEpsAbs();

  for(std::size_t i = 0; i < values.size(); ++i) {
    const double eps = std::max(epsRel * std::abs(values[i]), epsAbs);
    out[i] = out[i] && ((infiniteMax | (values[i] <= (max+eps))) && (infiniteMin | (values[i] >= (min-eps))));
  }

}


////////////////////////////////////////////////////////////////////////////////
/// Check if given value is valid

bool RooAbsRealLValue::isValidReal(double value, bool verbose) const
{
  if (!inRange(value,nullptr)) {
    if (verbose) {
       coutI(InputArguments) << "RooRealVar::isValid(" << GetName() << "): value " << value << " out of range ("
                             << getMin() << " - " << getMax() << ")" << std::endl;
    }
    return false ;
  }
  return true ;
}



////////////////////////////////////////////////////////////////////////////////
/// Read object contents from given stream

bool RooAbsRealLValue::readFromStream(istream& /*is*/, bool /*compact*/, bool /*verbose*/)
{
  return true ;
}



////////////////////////////////////////////////////////////////////////////////
/// Write object contents to given stream

void RooAbsRealLValue::writeToStream(ostream& /*os*/, bool /*compact*/) const
{
}



////////////////////////////////////////////////////////////////////////////////
/// Assignment operator from a double

RooAbsArg& RooAbsRealLValue::operator=(double newValue)
{
  double clipValue ;
  // Clip
  inRange(newValue,nullptr,&clipValue) ;
  setVal(clipValue) ;

  return *this ;
}


////////////////////////////////////////////////////////////////////////////////
/// Create a new RooPlot on the heap with a drawing frame initialized for this
/// object, but no plot contents. Use x.frame() as the first argument to a
/// y.plotOn(...) method, for example. The caller is responsible for deleting
/// the returned object.
///
/// <table>
/// <tr><th> Optional arguments <th>
/// <tr><td> Range(double lo, double hi)          <td> Make plot frame for the specified range
/// <tr><td> Range(const char* name)              <td> Make plot frame for range with the specified name
/// <tr><td> Bins(Int_t nbins)                    <td> Set default binning for datasets to specified number of bins
/// <tr><td> AutoRange(const RooAbsData& data, double margin) <td> Specifies range so that all points in given data set fit
///     inside the range with given margin.
/// <tr><td> AutoSymRange(const RooAbsData& data, double margin) <td> Specifies range so that all points in given data set fit
///     inside the range and center of range coincides with mean of distribution in given dataset.
/// <tr><td> Name(const char* name)               <td> Give specified name to RooPlot object
/// <tr><td> Title(const char* title)             <td> Give specified title to RooPlot object
/// </table>
///
RooPlot* RooAbsRealLValue::frame(const RooCmdArg& arg1, const RooCmdArg& arg2, const RooCmdArg& arg3, const RooCmdArg& arg4,
             const RooCmdArg& arg5, const RooCmdArg& arg6, const RooCmdArg& arg7, const RooCmdArg& arg8) const
{
  RooLinkedList cmdList ;
  cmdList.Add(const_cast<RooCmdArg*>(&arg1)) ; cmdList.Add(const_cast<RooCmdArg*>(&arg2)) ;
  cmdList.Add(const_cast<RooCmdArg*>(&arg3)) ; cmdList.Add(const_cast<RooCmdArg*>(&arg4)) ;
  cmdList.Add(const_cast<RooCmdArg*>(&arg5)) ; cmdList.Add(const_cast<RooCmdArg*>(&arg6)) ;
  cmdList.Add(const_cast<RooCmdArg*>(&arg7)) ; cmdList.Add(const_cast<RooCmdArg*>(&arg8)) ;

  return frame(cmdList) ;
}



////////////////////////////////////////////////////////////////////////////////
/// Back-end function for named argument frame() method

RooPlot* RooAbsRealLValue::frame(const RooLinkedList& cmdList) const
{
  // Define configuration for this method
  RooCmdConfig pc("RooAbsRealLValue::frame(" + std::string(GetName()) + ")");
  pc.defineDouble("min","Range",0,getMin()) ;
  pc.defineDouble("max","Range",1,getMax()) ;
  pc.defineInt("nbins","Bins",0,getBins()) ;
  pc.defineString("rangeName","RangeWithName",0,"") ;
  pc.defineString("name","Name",0,"") ;
  pc.defineString("title","Title",0,"") ;
  pc.defineMutex("Range","RangeWithName","AutoRange") ;
  pc.defineObject("rangeData","AutoRange",0,nullptr) ;
  pc.defineDouble("rangeMargin","AutoRange",0,0.1) ;
  pc.defineInt("rangeSym","AutoRange",0,0) ;

  // Process & check varargs
  pc.process(cmdList) ;
  if (!pc.ok(true)) {
    return nullptr ;
  }

  // Extract values from named arguments
  double xmin(getMin());
  double xmax(getMax());
  if (pc.hasProcessed("Range")) {
    xmin = pc.getDouble("min") ;
    xmax = pc.getDouble("max") ;
    if (xmin==xmax) {
      xmin = getMin() ;
      xmax = getMax() ;
    }
  } else if (pc.hasProcessed("RangeWithName")) {
    const char* rangeName=pc.getString("rangeName",nullptr,true) ;
    xmin = getMin(rangeName) ;
    xmax = getMax(rangeName) ;
  } else if (pc.hasProcessed("AutoRange")) {
    auto rangeData = static_cast<RooAbsData*>(pc.getObject("rangeData")) ;
    const bool error = rangeData->getRange(*this,xmin,xmax);
    if (error) {
      xmin = getMin();
      xmax = getMax();
    }
    if (pc.getInt("rangeSym")==0) {
      // Regular mode: range is from xmin to xmax with given extra margin
      double margin = pc.getDouble("rangeMargin")*(xmax-xmin) ;
      xmin -= margin ;
      xmax += margin ;
      if (xmin<getMin()) xmin = getMin() ;
      if (xmin>getMax()) xmax = getMax() ;
    } else {
      // Symmetric mode: range is centered at mean of distribution with enough width to include
      // both lowest and highest point with margin
      double dmean = rangeData->moment(const_cast<RooRealVar &>(static_cast<RooRealVar const&>(*this)),1) ;
      double ddelta = ((xmax-dmean)>(dmean-xmin)?(xmax-dmean):(dmean-xmin))*(1+pc.getDouble("rangeMargin")) ;
      xmin = dmean-ddelta ;
      xmax = dmean+ddelta ;
      if (xmin<getMin()) xmin = getMin() ;
      if (xmin>getMax()) xmax = getMax() ;
    }
  } else {
    xmin = getMin() ;
    xmax = getMax() ;
  }

  Int_t nbins = pc.getInt("nbins") ;
  const char* name = pc.getString("name",nullptr,true) ;
  const char* title = pc.getString("title",nullptr,true) ;

  RooPlot* theFrame = new RooPlot(*this,xmin,xmax,nbins) ;

  if (name) {
    theFrame->SetName(name) ;
  }
  if (title) {
    theFrame->SetTitle(title) ;
  }

  return theFrame ;
}



////////////////////////////////////////////////////////////////////////////////
/// Create a new RooPlot on the heap with a drawing frame initialized for this
/// object, but no plot contents. Use x.frame() as the first argument to a
/// y.plotOn(...) method, for example. The caller is responsible for deleting
/// the returned object.

RooPlot *RooAbsRealLValue::frame(double xlo, double xhi, Int_t nbins) const
{
  return new RooPlot(*this,xlo,xhi,nbins);
}



////////////////////////////////////////////////////////////////////////////////
/// Create a new RooPlot on the heap with a drawing frame initialized for this
/// object, but no plot contents. Use x.frame() as the first argument to a
/// y.plotOn(...) method, for example. The caller is responsible for deleting
/// the returned object.

RooPlot *RooAbsRealLValue::frame(double xlo, double xhi) const
{
  return new RooPlot(*this,xlo,xhi,getBins());
}



////////////////////////////////////////////////////////////////////////////////
/// Create a new RooPlot on the heap with a drawing frame initialized for this
/// object, but no plot contents. Use x.frame() as the first argument to a
/// y.plotOn(...) method, for example. The caller is responsible for deleting
/// the returned object.
///
/// The current fit range may not be open ended or empty.

RooPlot *RooAbsRealLValue::frame(Int_t nbins) const
{
  // Plot range of variable may not be infinite or empty
  if (getMin()==getMax()) {
    coutE(InputArguments) << "RooAbsRealLValue::frame(" << GetName() << ") ERROR: empty fit range, must specify plot range" << std::endl ;
    return nullptr ;
  }
  if (RooNumber::isInfinite(getMin())||RooNumber::isInfinite(getMax())) {
    coutE(InputArguments) << "RooAbsRealLValue::frame(" << GetName() << ") ERROR: open ended fit range, must specify plot range" << std::endl ;
    return nullptr ;
  }

  return new RooPlot(*this,getMin(),getMax(),nbins);
}



////////////////////////////////////////////////////////////////////////////////
/// Create a new RooPlot on the heap with a drawing frame initialized for this
/// object, but no plot contents. Use x.frame() as the first argument to a
/// y.plotOn(...) method, for example. The caller is responsible for deleting
/// the returned object.
///
/// The current fit range may not be open ended or empty.

RooPlot *RooAbsRealLValue::frame() const
{
  // Plot range of variable may not be infinite or empty
  if (getMin()==getMax()) {
    coutE(InputArguments) << "RooAbsRealLValue::frame(" << GetName() << ") ERROR: empty fit range, must specify plot range" << std::endl ;
    return nullptr ;
  }
  if (RooNumber::isInfinite(getMin())||RooNumber::isInfinite(getMax())) {
    coutE(InputArguments) << "RooAbsRealLValue::frame(" << GetName() << ") ERROR: open ended fit range, must specify plot range" << std::endl ;
    return nullptr ;
  }

  return new RooPlot(*this,getMin(),getMax(),getBins());
}



////////////////////////////////////////////////////////////////////////////////
/// Copy cache of another RooAbsArg to our cache

void RooAbsRealLValue::copyCache(const RooAbsArg* source, bool valueOnly, bool setValDirty)
{
  RooAbsReal::copyCache(source,valueOnly,setValDirty) ;
  setVal(_value) ; // force back-propagation
}


////////////////////////////////////////////////////////////////////////////////
/// Structure printing

void RooAbsRealLValue::printMultiline(ostream& os, Int_t contents, bool verbose, TString indent) const
{
  RooAbsReal::printMultiline(os,contents,verbose,indent);
  os << indent << "--- RooAbsRealLValue ---" << std::endl;
  TString unit(_unit);
  if(!unit.IsNull()) unit.Prepend(' ');
  os << indent << "  Fit range is [ ";
  if(hasMin()) {
    os << getMin() << unit << " , ";
  }
  else {
    os << "-INF , ";
  }
  if(hasMax()) {
    os << getMax() << unit << " ]" << std::endl;
  }
  else {
    os << "+INF ]" << std::endl;
  }
}



////////////////////////////////////////////////////////////////////////////////
/// Set a new value sampled from a uniform distribution over the fit range.
/// Prints a warning and does nothing if the fit range is not finite.

void RooAbsRealLValue::randomize(const char* rangeName)
{
  RooAbsBinning& binning = getBinning(rangeName) ;
  double min = binning.lowBound() ;
  double max = binning.highBound() ;

  if(!RooNumber::isInfinite(min) && !RooNumber::isInfinite(max)) {
    setValFast(min + RooRandom::uniform()*(max-min));
  }
  else {
    coutE(Generation) << fName << "::" << ClassName() << ":randomize: fails with unbounded fit range" << std::endl;
  }
}



////////////////////////////////////////////////////////////////////////////////
/// Set value to center of bin 'ibin' of binning 'rangeName' (or of
/// default binning if no range is specified)

void RooAbsRealLValue::setBin(Int_t ibin, const char* rangeName)
{
  // Check range of plot bin index
  if (ibin<0 || ibin>=numBins(rangeName)) {
    coutE(InputArguments) << "RooAbsRealLValue::setBin(" << GetName() << ") ERROR: bin index " << ibin
           << " is out of range (0," << getBins(rangeName)-1 << ")" << std::endl ;
    return ;
  }

  // Set value to center of requested bin
  setValFast(getBinning(rangeName).binCenter(ibin)) ;
}



////////////////////////////////////////////////////////////////////////////////
/// Set value to center of bin 'ibin' of binning 'binning'

void RooAbsRealLValue::setBin(Int_t ibin, const RooAbsBinning& binning)
{
  // Set value to center of requested bin
  setValFast(binning.binCenter(ibin)) ;
}



////////////////////////////////////////////////////////////////////////////////
/// Set a new value sampled from a uniform distribution over the fit range.
/// Prints a warning and does nothing if the fit range is not finite.

void RooAbsRealLValue::randomize(const RooAbsBinning& binning)
{
  double range= binning.highBound() - binning.lowBound() ;
  setVal(binning.lowBound() + RooRandom::uniform()*range);
}



////////////////////////////////////////////////////////////////////////////////
/// Check if fit range is usable as plot range, i.e. it is neither
/// open ended, nor empty

bool RooAbsRealLValue::fitRangeOKForPlotting() const
{
  return (hasMin() && hasMax() && (getMin()!=getMax())) ;
}



////////////////////////////////////////////////////////////////////////////////
/// Check if current value is inside range with given name. Multiple comma-separated
/// ranges can be passed. In this case, it will be checked if the value is in any of
/// these ranges.
///
/// Implements the following check to see if the value x is in the range [a, b]:
/// check if `[x - eps * x, x + eps * x]` overlaps with `[a, b]`, where the
/// parameter `eps` is defined as:
/// ```
/// std::max(RooNumber::rangeEpsRel() * std::abs(x), RooNumber::rangeEpsAbs())
/// ```
/// By default, RooNumber::rangeEpsRel() and RooNumber::rangeEpsRel() are set to zero.
/// You can change them with RooNumber::setRangeEpsRel(double) and RooNumber::setRangeEpsAbs(double),
/// but this should be only done if there is no other solution.
bool RooAbsRealLValue::inRange(const char* name) const
{
  const double val = getVal() ;
  const double epsilon = std::max(RooNumber::rangeEpsRel() * std::abs(val), RooNumber::rangeEpsAbs());
  if (!name || name[0] == '\0') {
    const auto minMax = getRange(nullptr);
    return minMax.first - epsilon <= val && val <= minMax.second + epsilon;
  }

  const auto& ranges = ROOT::Split(name, ",");
  return std::any_of(ranges.begin(), ranges.end(), [val,epsilon,this](const std::string& range){
    const auto minMax = this->getRange(range.c_str());
    return minMax.first - epsilon <= val && val <= minMax.second + epsilon;
  });
}



////////////////////////////////////////////////////////////////////////////////

TH1* RooAbsRealLValue::createHistogram(const char *name, const RooCmdArg& arg1, const RooCmdArg& arg2,
               const RooCmdArg& arg3, const RooCmdArg& arg4, const RooCmdArg& arg5,
               const RooCmdArg& arg6, const RooCmdArg& arg7, const RooCmdArg& arg8) const

  // Create an empty ROOT histogram TH1,TH2 or TH3 suitabe to store information represent by the RooAbsRealLValue
  //
  // This function accepts the following arguments
  //
  // name -- Name of the ROOT histogram
  //
  // Binning(const char* name)                    -- Apply binning with given name to x axis of histogram
  // Binning(RooAbsBinning& binning)              -- Apply specified binning to x axis of histogram
  // Binning(int_t nbins)                         -- Apply specified binning to x axis of histogram
  // Binning(int_t nbins, double lo, double hi)   -- Apply specified binning to x axis of histogram
  // ConditionalObservables(const RooArgSet& set) -- Do not normalized PDF over following observables when projecting PDF into histogram
  //
  // YVar(const RooAbsRealLValue& var,...)    -- Observable to be mapped on y axis of ROOT histogram
  // ZVar(const RooAbsRealLValue& var,...)    -- Observable to be mapped on z axis of ROOT histogram
  //
  // The YVar() and ZVar() arguments can be supplied with optional Binning() arguments to control the binning of the Y and Z axes, e.g.
  // createHistogram("histo",x,Binning(-1,1,20), YVar(y,Binning(-1,1,30)), ZVar(z,Binning("zbinning")))
  //
  // The caller takes ownership of the returned histogram
{
  RooLinkedList l ;
  l.Add((TObject*)&arg1) ;  l.Add((TObject*)&arg2) ;
  l.Add((TObject*)&arg3) ;  l.Add((TObject*)&arg4) ;
  l.Add((TObject*)&arg5) ;  l.Add((TObject*)&arg6) ;
  l.Add((TObject*)&arg7) ;  l.Add((TObject*)&arg8) ;

  return createHistogram(name,l) ;
}



////////////////////////////////////////////////////////////////////////////////
/// Create empty 1,2 or 3D histogram
/// Arguments recognized
///
/// YVar() -- RooRealVar defining Y dimension with optional range/binning
/// ZVar() -- RooRealVar defining Z dimension with optional range/binning
/// AxisLabel() -- Vertical axis label
/// Binning() -- Range/Binning specification of X axis

TH1* RooAbsRealLValue::createHistogram(const char *name, const RooLinkedList& cmdList) const
{
  // Define configuration for this method
  RooCmdConfig pc("RooAbsRealLValue::createHistogram(" + std::string(GetName()) + ")");

  pc.defineObject("xbinning","Binning",0,nullptr) ;
  pc.defineString("xbinningName","BinningName",0,"") ;
  pc.defineInt("nxbins","BinningSpec",0) ;
  pc.defineDouble("xlo","BinningSpec",0,0) ;
  pc.defineDouble("xhi","BinningSpec",1,0) ;

  pc.defineObject("yvar","YVar",0,nullptr) ;
  pc.defineObject("ybinning","YVar::Binning",0,nullptr) ;
  pc.defineString("ybinningName","YVar::BinningName",0,"") ;
  pc.defineInt("nybins","YVar::BinningSpec",0) ;
  pc.defineDouble("ylo","YVar::BinningSpec",0,0) ;
  pc.defineDouble("yhi","YVar::BinningSpec",1,0) ;

  pc.defineObject("zvar","ZVar",0,nullptr) ;
  pc.defineObject("zbinning","ZVar::Binning",0,nullptr) ;
  pc.defineString("zbinningName","ZVar::BinningName",0,"") ;
  pc.defineInt("nzbins","ZVar::BinningSpec",0) ;
  pc.defineDouble("zlo","ZVar::BinningSpec",0,0) ;
  pc.defineDouble("zhi","ZVar::BinningSpec",1,0) ;

  pc.defineString("axisLabel","AxisLabel",0,"Events") ;

  pc.defineDependency("ZVar","YVar") ;

  // Process & check varargs
  pc.process(cmdList) ;
  if (!pc.ok(true)) {
    return nullptr ;
  }

  // Initialize arrays for call to implementation version of createHistogram
  const char* axisLabel = pc.getString("axisLabel") ;
  const RooAbsBinning* binning[3] ;
  bool ownBinning[3]  = { false, false, false } ;
  RooArgList vars ;

  // Prepare X dimension
  vars.add(*this) ;
  if (pc.hasProcessed("Binning")) {
    binning[0] = static_cast<RooAbsBinning*>(pc.getObject("xbinning")) ;
  } else if (pc.hasProcessed("BinningName")) {
    binning[0] = &getBinning(pc.getString("xbinningName",nullptr,true)) ;
  } else if (pc.hasProcessed("BinningSpec")) {
    double xlo = pc.getDouble("xlo") ;
    double xhi = pc.getDouble("xhi") ;
    binning[0] = new RooUniformBinning((xlo==xhi)?getMin():xlo,(xlo==xhi)?getMax():xhi,pc.getInt("nxbins")) ;
    ownBinning[0] = true ;
  } else {
    binning[0] = &getBinning() ;
  }

  if (pc.hasProcessed("YVar")) {
    RooAbsRealLValue& yvar = *static_cast<RooAbsRealLValue*>(pc.getObject("yvar")) ;
    vars.add(yvar) ;
    if (pc.hasProcessed("YVar::Binning")) {
      binning[1] = static_cast<RooAbsBinning*>(pc.getObject("ybinning")) ;
    } else if (pc.hasProcessed("YVar::BinningName")) {
      binning[1] = &yvar.getBinning(pc.getString("ybinningName",nullptr,true)) ;
    } else if (pc.hasProcessed("YVar::BinningSpec")) {
      double ylo = pc.getDouble("ylo") ;
      double yhi = pc.getDouble("yhi") ;
      binning[1] = new RooUniformBinning((ylo==yhi)?yvar.getMin():ylo,(ylo==yhi)?yvar.getMax():yhi,pc.getInt("nybins")) ;
      ownBinning[1] = true ;
    } else {
      binning[1] = &yvar.getBinning() ;
    }
  }

  if (pc.hasProcessed("ZVar")) {
    RooAbsRealLValue& zvar = *static_cast<RooAbsRealLValue*>(pc.getObject("zvar")) ;
    vars.add(zvar) ;
    if (pc.hasProcessed("ZVar::Binning")) {
      binning[2] = static_cast<RooAbsBinning*>(pc.getObject("zbinning")) ;
    } else if (pc.hasProcessed("ZVar::BinningName")) {
      binning[2] = &zvar.getBinning(pc.getString("zbinningName",nullptr,true)) ;
    } else if (pc.hasProcessed("ZVar::BinningSpec")) {
      double zlo = pc.getDouble("zlo") ;
      double zhi = pc.getDouble("zhi") ;
      binning[2] = new RooUniformBinning((zlo==zhi)?zvar.getMin():zlo,(zlo==zhi)?zvar.getMax():zhi,pc.getInt("nzbins")) ;
      ownBinning[2] = true ;
    } else {
      binning[2] = &zvar.getBinning() ;
    }
  }


  TH1* ret = createHistogram(name, vars, axisLabel, binning) ;

  if (ownBinning[0]) delete binning[0] ;
  if (ownBinning[1]) delete binning[1] ;
  if (ownBinning[2]) delete binning[2] ;

  return ret ;
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 1D-histogram with appropriate scale and labels for this variable.
/// This method uses the default plot range which can be changed using the
/// setPlotMin(),setPlotMax() methods, and the default binning which can be
/// changed with setPlotBins(). The caller takes ownership of the returned
/// object and is responsible for deleting it.

TH1F *RooAbsRealLValue::createHistogram(const char *name, const char *yAxisLabel) const
{
  // Check if the fit range is usable as plot range
  if (!fitRangeOKForPlotting()) {
    coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
           << ") ERROR: fit range empty or open ended, must explicitly specify range" << std::endl ;
    return nullptr ;
  }

  RooArgList list(*this) ;
  double xlo = getMin() ;
  double xhi = getMax() ;
  Int_t nbins = getBins() ;

  // coverity[ARRAY_VS_SINGLETON]
  return static_cast<TH1F*>(createHistogram(name, list, yAxisLabel, &xlo, &xhi, &nbins));
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 1D-histogram with appropriate scale and labels for this variable.
/// This method uses the default plot range which can be changed using the
/// setPlotMin(),setPlotMax() methods, and the default binning which can be
/// changed with setPlotBins(). The caller takes ownership of the returned
/// object and is responsible for deleting it.

TH1F *RooAbsRealLValue::createHistogram(const char *name, const char *yAxisLabel, double xlo, double xhi, Int_t nBins) const
{
  RooArgList list(*this) ;

  // coverity[ARRAY_VS_SINGLETON]
  return static_cast<TH1F*>(createHistogram(name, list, yAxisLabel, &xlo, &xhi, &nBins));
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 1D-histogram with appropriate scale and labels for this variable.

TH1F *RooAbsRealLValue::createHistogram(const char *name, const char *yAxisLabel, const RooAbsBinning& bins) const
{
  RooArgList list(*this) ;
  const RooAbsBinning* pbins = &bins ;

  // coverity[ARRAY_VS_SINGLETON]
  return static_cast<TH1F*>(createHistogram(name, list, yAxisLabel, &pbins));
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 2D-histogram with appropriate scale and labels for this variable (x)
/// and the specified y variable. This method uses the default plot ranges for x and y which
/// can be changed using the setPlotMin(),setPlotMax() methods, and the default binning which
/// can be changed with setPlotBins(). The caller takes ownership of the returned object
/// and is responsible for deleting it.

TH2F *RooAbsRealLValue::createHistogram(const char *name, const RooAbsRealLValue &yvar, const char *zAxisLabel,
               double* xlo, double* xhi, Int_t* nBins) const
{
  if ((!xlo && xhi) || (xlo && !xhi)) {
    coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
           << ") ERROR must specify either no range, or both limits" << std::endl ;
    return nullptr ;
  }

  double xlo_fit[2] ;
  double xhi_fit[2] ;
  Int_t nbins_fit[2] ;

  double *xlo2 = xlo;
  double *xhi2 = xhi;
  Int_t *nBins2 = nBins;

  if (!xlo2) {

    if (!fitRangeOKForPlotting()) {
      coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
      << ") ERROR: fit range empty or open ended, must explicitly specify range" << std::endl ;
      return nullptr ;
    }
    if (!yvar.fitRangeOKForPlotting()) {
      coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
      << ") ERROR: fit range of " << yvar.GetName() << " empty or open ended, must explicitly specify range" << std::endl ;
      return nullptr ;
    }

    xlo_fit[0] = getMin() ;
    xhi_fit[0] = getMax() ;

    xlo_fit[1] = yvar.getMin() ;
    xhi_fit[1] = yvar.getMax() ;

    xlo2 = xlo_fit ;
    xhi2 = xhi_fit ;
  }

  if (!nBins2) {
    nbins_fit[0] = getBins() ;
    nbins_fit[1] = yvar.getBins() ;
    nBins2 = nbins_fit ;
  }


  RooArgList list(*this,yvar) ;
  // coverity[OVERRUN_STATIC]
  return static_cast<TH2F*>(createHistogram(name, list, zAxisLabel, xlo2, xhi2, nBins2));
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 2D-histogram with appropriate scale and labels for this variable (x)
/// and the specified y variable.

TH2F *RooAbsRealLValue::createHistogram(const char *name, const RooAbsRealLValue &yvar,
               const char *zAxisLabel, const RooAbsBinning** bins) const
{
  RooArgList list(*this,yvar) ;
  return static_cast<TH2F*>(createHistogram(name, list, zAxisLabel, bins));
}



////////////////////////////////////////////////////////////////////////////////
/// Create an empty 3D-histogram with appropriate scale and labels for this variable (x)
/// and the specified y,z variables. This method uses the default plot ranges for x,y,z which
/// can be changed using the setPlotMin(),setPlotMax() methods, and the default binning which
/// can be changed with setPlotBins(). The caller takes ownership of the returned object
/// and is responsible for deleting it.

TH3F *RooAbsRealLValue::createHistogram(const char *name, const RooAbsRealLValue &yvar, const RooAbsRealLValue &zvar,
               const char *tAxisLabel, double* xlo, double* xhi, Int_t* nBins) const
{
  if ((!xlo && xhi) || (xlo && !xhi)) {
    coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
           << ") ERROR must specify either no range, or both limits" << std::endl ;
    return nullptr ;
  }

  double xlo_fit[3] ;
  double xhi_fit[3] ;
  Int_t nbins_fit[3] ;

  double *xlo2 = xlo;
  double *xhi2 = xhi;
  Int_t* nBins2 = nBins;
  if (!xlo2) {

    if (!fitRangeOKForPlotting()) {
      coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
             << ") ERROR: fit range empty or open ended, must explicitly specify range" << std::endl ;
      return nullptr ;
    }
    if (!yvar.fitRangeOKForPlotting()) {
      coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
             << ") ERROR: fit range of " << yvar.GetName() << " empty or open ended, must explicitly specify range" << std::endl ;
      return nullptr ;
    }
    if (!zvar.fitRangeOKForPlotting()) {
      coutE(InputArguments) << "RooAbsRealLValue::createHistogram(" << GetName()
             << ") ERROR: fit range of " << zvar.GetName() << " empty or open ended, must explicitly specify range" << std::endl ;
      return nullptr ;
    }

    xlo_fit[0] = getMin() ;
    xhi_fit[0] = getMax() ;

    xlo_fit[1] = yvar.getMin() ;
    xhi_fit[1] = yvar.getMax() ;

    xlo_fit[2] = zvar.getMin() ;
    xhi_fit[2] = zvar.getMax() ;

    xlo2 = xlo_fit ;
    xhi2 = xhi_fit ;
  }

  if (!nBins2) {
    nbins_fit[0] = getBins() ;
    nbins_fit[1] = yvar.getBins() ;
    nbins_fit[2] = zvar.getBins() ;
    nBins2 = nbins_fit ;
  }

  RooArgList list(*this,yvar,zvar) ;
  return static_cast<TH3F*>(createHistogram(name, list, tAxisLabel, xlo2, xhi2, nBins2));
}


TH3F *RooAbsRealLValue::createHistogram(const char *name, const RooAbsRealLValue &yvar, const RooAbsRealLValue &zvar,
               const char* tAxisLabel, const RooAbsBinning** bins) const
{
  // Create an empty 3D-histogram with appropriate scale and labels for this variable (x)
  // and the specified y,z variables.

  RooArgList list(*this,yvar,zvar) ;
  return static_cast<TH3F*>(createHistogram(name, list, tAxisLabel, bins));
}




////////////////////////////////////////////////////////////////////////////////
/// Create 1-, 2- or 3-d ROOT histogram with labels taken
/// from the variables in 'vars' and the with range and binning
/// specified in xlo,xhi and nBins. The dimensions of the arrays xlo,xhi,
/// nBins should match the number of objects in vars.

TH1 *RooAbsRealLValue::createHistogram(const char *name, RooArgList &vars, const char *tAxisLabel,
                   double* xlo, double* xhi, Int_t* nBins)
{
  const RooAbsBinning* bin[3] ;
  Int_t ndim = vars.size() ;
  bin[0] = new RooUniformBinning(xlo[0],xhi[0],nBins[0]) ;
  bin[1] = (ndim>1) ? new RooUniformBinning(xlo[1],xhi[1],nBins[1]) : nullptr ;
  bin[2] = (ndim>2) ? new RooUniformBinning(xlo[2],xhi[2],nBins[2]) : nullptr ;

  TH1* ret = createHistogram(name,vars,tAxisLabel,bin) ;

  if (bin[0]) delete bin[0] ;
  if (bin[1]) delete bin[1] ;
  if (bin[2]) delete bin[2] ;
  return ret ;
}



////////////////////////////////////////////////////////////////////////////////
/// Create a 1,2, or 3D-histogram with appropriate scale and labels.
/// Binning and ranges are taken from the variables themselves and can be changed by
/// calling their setPlotMin/Max() and setPlotBins() methods. A histogram can be filled
/// using RooAbsReal::fillHistogram() or RooTreeData::fillHistogram().
/// The caller takes ownership of the returned object and is responsible for deleting it.

TH1 *RooAbsRealLValue::createHistogram(const char *name, RooArgList &vars, const char *tAxisLabel, const RooAbsBinning** bins)
{
  // Check that we have 1-3 vars
  Int_t dim= vars.size();
  if(dim < 1 || dim > 3) {
    oocoutE(nullptr,InputArguments) << "RooAbsReal::createHistogram: dimension not supported: " << dim << std::endl;
    return nullptr;
  }

  // Check that all variables are AbsReals and prepare a name of the form <name>_<var1>_...
  TString histName(name);
  histName.Append("_");
  const RooAbsRealLValue *xyz[3];

  Int_t index;
  for(index= 0; index < dim; index++) {
    const RooAbsArg *arg= vars.at(index);
    xyz[index]= dynamic_cast<const RooAbsRealLValue*>(arg);
    if(!xyz[index]) {
      oocoutE(nullptr,InputArguments) << "RooAbsRealLValue::createHistogram: variable is not real lvalue: " << arg->GetName() << std::endl;
      return nullptr;
    }
    histName.Append("_");
    histName.Append(arg->GetName());
  }
  TString histTitle(histName);
  histTitle.Prepend("Histogram of ");

  // Create the histogram
  TH1 *histogram = nullptr;
  switch(dim) {
  case 1:
    if (bins[0]->isUniform()) {
      histogram= new TH1F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->lowBound(),bins[0]->highBound());
    } else {
      histogram= new TH1F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->array());
    }
    break;
  case 2:
    if (bins[0]->isUniform() && bins[1]->isUniform()) {
      histogram= new TH2F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->lowBound(),bins[0]->highBound(),
           bins[1]->numBins(),bins[1]->lowBound(),bins[1]->highBound());
    } else {
      histogram= new TH2F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->array(),
           bins[1]->numBins(),bins[1]->array());
    }
    break;
  case 3:
    if (bins[0]->isUniform() && bins[1]->isUniform() && bins[2]->isUniform()) {
      histogram= new TH3F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->lowBound(),bins[0]->highBound(),
           bins[1]->numBins(),bins[1]->lowBound(),bins[1]->highBound(),
           bins[2]->numBins(),bins[2]->lowBound(),bins[2]->highBound()) ;
    } else {
      histogram= new TH3F(histName.Data(), histTitle.Data(),
           bins[0]->numBins(),bins[0]->array(),
           bins[1]->numBins(),bins[1]->array(),
           bins[2]->numBins(),bins[2]->array()) ;
    }
    break;
  }
  if(!histogram) {
    oocoutE(nullptr,InputArguments) << "RooAbsReal::createHistogram: unable to create a new histogram" << std::endl;
    return nullptr;
  }

  // Set the histogram coordinate axis labels from the titles of each variable, adding units if necessary.
  for(index= 0; index < dim; index++) {
    TString axisTitle(xyz[index]->getTitle(true));
    switch(index) {
    case 0:
      histogram->SetXTitle(axisTitle.Data());
      break;
    case 1:
      histogram->SetYTitle(axisTitle.Data());
      break;
    case 2:
      histogram->SetZTitle(axisTitle.Data());
      break;
    default:
      assert(0);
      break;
    }
  }

  // Set the t-axis title if given one
  if((nullptr != tAxisLabel) && (0 != strlen(tAxisLabel))) {
    TString axisTitle(tAxisLabel);
    axisTitle.Append(" / ( ");
    for(Int_t index2= 0; index2 < dim; index2++) {
      double delta= bins[index2]->averageBinWidth() ; // xyz[index2]->getBins();
      if(index2 > 0) axisTitle.Append(" x ");
      axisTitle.Append(Form("%g",delta));
      if(strlen(xyz[index2]->getUnit())) {
   axisTitle.Append(" ");
   axisTitle.Append(xyz[index2]->getUnit());
      }
    }
    axisTitle.Append(" )");
    switch(dim) {
    case 1:
      histogram->SetYTitle(axisTitle.Data());
      break;
    case 2:
      histogram->SetZTitle(axisTitle.Data());
      break;
    case 3:
      // not supported in TH1
      break;
    default:
      assert(0);
      break;
    }
  }

  return histogram;
}


bool RooAbsRealLValue::isJacobianOK(const RooArgSet&) const
{
  // Interface function to indicate that this lvalue
  // has a unit or constant jacobian terms with respect to
  // the observable passed as argument. This default implementation
  // always returns true (i.e. jacobian is constant)
  return true ;
}


RooFit::OwningPtr<RooAbsReal> RooAbsRealLValue::createIntegral(const RooArgSet&, const RooArgSet*, const RooNumIntConfig*, const char*) const
{
  std::stringstream errStream;
  errStream << "Attempting to integrate the " << ClassName() << " \"" << GetName()
            << "\", but integrating a RooAbsRealLValue is not allowed!";
  const std::string errString = errStream.str();
  coutE(InputArguments) << errString << std::endl;
  throw std::runtime_error(errString);
}
