//*CMZ :  2.20/05 15/12/98  09.17.19  by  Rene Brun
//*CMZ :  2.20/03 05/12/98  16.28.27  by  Rene Brun
//*CMZ :  2.20/00 04/11/98  21.54.21  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  15.31.03  by  Rene Brun
//*CMZ :  2.00/09 22/06/98  12.31.33  by  Fons Rademakers
//*CMZ :  2.00/06 15/05/98  09.13.20  by  Rene Brun
//*CMZ :  2.00/04 21/04/98  13.01.32  by  Rene Brun
//*CMZ :  2.00/03 24/03/98  11.33.57  by  Rene Brun
//*CMZ :  2.00/00 08/03/98  16.01.30  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  16.49.56  by  Fons Rademakers
//*-- Author :    Rene Brun   18/08/95

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

#include <fstream.h>

#include "TROOT.h"
#include "TMath.h"
#include "TH1.h"
#include "TGraph.h"
#include "TVirtualPad.h"
#include "TView.h"
#include "TStyle.h"
#include "TRandom.h"
#include "Api.h"
#include "TInterpreter.h"

TF1 *gF1 = 0;

ClassImp(TF1)

//______________________________________________________________________________
//
// a TF1 object is a 1-Dim function defined between a lower and upper limit.
// The function may be a simple function (see TFormula) or a precompiled
// user function.
// The function may have associated parameters.
// TF1 graphics function is via the TH1/TGraph drawing functions.
//
//  The following types of functions can be created:
//    A- Expression using variable x and no parameters
//    B- Expression using variable x with parameters
//    C- A general C function with parameters
//
//      Example of a function of type A
//
//   TF1 *f1 = new TF1("f1","sin(x)/x",0,10);
//   f1->Draw();
//Begin_Html
/*
<img src="gif/function1.gif">
*/
//End_Html
//
//      Example of a function of type B
//   TF1 *f1 = new TF1("f1","[0]x*sin([1]*x",-3,3);
//    This creates a function of variable x with 2 parameters.
//    The parameters must be initialized via:
//      f1->SetParameter(0,value_first_parameter);
//      f1->SetParameter(1,value_second_parameter);
//    Parameters may be given a name:
//      f1->SetParName(0,"Constant");
//
//     Example of function of type C
//   Consider the macro myfunc.C below
//-------------macro myfunc.C-----------------------------
//Double_t myfunction(Double_t *x, Double_t *par)
//{
//   Float_t xx =x[0];
//   Double_t f = TMath::Abs(par[0]*sin(par[1]*xx)/xx);
//   return f;
//}
//void myfunc()
//{
//   TF1 *f1 = new TF1("myfunc",myfunction,0,10,2);
//   f1->SetParameters(2,1);
//   f1->SetParNames("constant","coefficient");
//   f1->Draw();
//}
//void myfit()
//{
//   TH1F *h1=new TH1F("h1","test",100,0,10);
//   h1->FillRandom("myfunc",20000);
//   TF1 *f1=gROOT->GetFunction("myfunc");
//   f1->SetParameters(800,1);
//   h1.Fit("myfunc");
//}
//--------end of macro myfunc.C---------------------------------
//
// In an interactive session you can do:
//   Root > .L myfunc.C
//   Root > myfunc();
//   Root > myfit();
//

//______________________________________________________________________________
TF1::TF1(): TFormula(), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*F1 default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

   fType      = 0;
   fFunction  = 0;
   fParErrors = 0;
   fParMin    = 0;
   fParMax    = 0;
   fChisquare = 0;
   fIntegral  = 0;
   fParent    = 0;
   fNpfits    = 0;
   fNsave     = 0;
   fSave      = 0;
   fHistogram = 0;
   fMinimum   = -1111;
   fMaximum   = -1111;
   fMethodCall = 0;
}


//______________________________________________________________________________
TF1::TF1(const char *name,const char *formula, Float_t xmin, Float_t xmax)
      :TFormula(name,formula), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*F1 constructor using a formula definition*-*-*-*-*-*-*-*-*-*-*
//*-*          =========================================
//*-*
//*-*  See TFormula constructor for explanation of the formula syntax.
//*-*
//*-*  Creates a function of type A or B between xmin and xmax
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fXmin      = xmin;
   fXmax      = xmax;
   fNpx       = 100;
   fType      = 0;
   fFunction  = 0;
   if (fNpar) {
      fParErrors = new Double_t[fNpar];
      fParMin    = new Double_t[fNpar];
      fParMax    = new Double_t[fNpar];
      for (int i = 0; i < fNpar; i++) {
         fParErrors[i]  = 0;
         fParMin[i]     = 0;
         fParMax[i]     = 0;
      }
   } else {
      fParErrors = 0;
      fParMin    = 0;
      fParMax    = 0;
   }
   fChisquare = 0;
   fIntegral  = 0;
   fParent    = 0;
   fNpfits    = 0;
   fNsave     = 0;
   fSave      = 0;
   fHistogram = 0;
   fMinimum   = -1111;
   fMaximum   = -1111;
   fMethodCall = 0;

   if (!gStyle) return;
   SetLineColor(gStyle->GetFuncColor());
   SetLineWidth(gStyle->GetFuncWidth());
   SetLineStyle(gStyle->GetFuncStyle());
}


//______________________________________________________________________________
TF1::TF1(const char *name,void *fcn, Float_t xmin, Float_t xmax, Int_t npar)
      :TFormula(), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*F1 constructor using pointer to an interpreted function*-*-*-*
//*-*          =======================================================
//*-*
//*-*  See TFormula constructor for explanation of the formula syntax.
//*-*
//*-*  Creates a function of type C between xmin and xmax.
//*-*  The function is defined with npar parameters
//*-*  fcn must be a function of type:
//*-*     Double_t fcn(Double_t *x, Double_t *params)
//*-*
//*-*  This constructor is called for functions of type C by CINT.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fXmin       = xmin;
   fXmax       = xmax;
   fNpx        = 100;
   fType       = 2;
   fFunction   = 0;
   if (npar > 0 ) fNpar = npar;
   if (fNpar) {
      fNames      = new TString[fNpar];
      fParams     = new Double_t[fNpar];
      fParErrors  = new Double_t[fNpar];
      fParMin     = new Double_t[fNpar];
      fParMax     = new Double_t[fNpar];
      for (int i = 0; i < fNpar; i++) {
         fParams[i]     = 0;
         fParErrors[i]  = 0;
         fParMin[i]     = 0;
         fParMax[i]     = 0;
      }
   } else {
      fParErrors = 0;
      fParMin    = 0;
      fParMax    = 0;
   }
   fChisquare  = 0;
   fIntegral   = 0;
   fParent     = 0;
   fNpfits     = 0;
   fNsave      = 0;
   fSave       = 0;
   fHistogram  = 0;
   fMinimum    = -1111;
   fMaximum    = -1111;
   fMethodCall = 0;
   if (!fcn) return;
   TF1 *f1old = (TF1*)gROOT->GetListOfFunctions()->FindObject(name);
   if (f1old) delete f1old;

   char *funcname = G__p2f2funcname(fcn);
   if (funcname) {
      fMethodCall = new TMethodCall();
      fMethodCall->InitWithPrototype(funcname,"Double_t*,Double_t*");
      fNumber = -1;
   } else {
      Printf("Function:%s cannot be compiled",name);
   }

   SetName(name);
   SetTitle(funcname);
   gROOT->GetListOfFunctions()->Add(this);

   if (!gStyle) return;
   SetLineColor(gStyle->GetFuncColor());
   SetLineWidth(gStyle->GetFuncWidth());
   SetLineStyle(gStyle->GetFuncStyle());
}

//______________________________________________________________________________
TF1::TF1(const char *name,Double_t (*fcn)(Double_t *, Double_t *), Float_t xmin, Float_t xmax, Int_t npar)
      :TFormula(), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*F1 constructor using a pointer to real function*-*-*-*-*-*-*-*
//*-*          ===============================================
//*-*
//*-*   npar is the number of free parameters used by the function
//*-*
//*-*   This constructor creates a function of type C when invoked
//*-*   with the normal C++ compiler.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fXmin       = xmin;
   fXmax       = xmax;
   fNpx        = 100;
   fType       = 1;
   fFunction   = fcn;
   if (npar > 0 ) fNpar = npar;
   if (fNpar) {
      fNames      = new TString[fNpar];
      fParams     = new Double_t[fNpar];
      fParErrors  = new Double_t[fNpar];
      fParMin     = new Double_t[fNpar];
      fParMax     = new Double_t[fNpar];
      for (int i = 0; i < fNpar; i++) {
         fParams[i]     = 0;
         fParErrors[i]  = 0;
         fParMin[i]     = 0;
         fParMax[i]     = 0;
      }
   } else {
      fParErrors = 0;
      fParMin    = 0;
      fParMax    = 0;
   }
   fChisquare  = 0;
   fIntegral   = 0;
   fNsave      = 0;
   fSave       = 0;
   fParent     = 0;
   fNpfits     = 0;
   fHistogram  = 0;
   fMinimum    = -1111;
   fMaximum    = -1111;
   fMethodCall = 0;

//*-*- Store formula in linked list of formula in ROOT

   SetName((char *)name);
   if (gROOT->GetListOfFunctions()->FindObject(name)) return;
   gROOT->GetListOfFunctions()->Add(this);

   if (!gStyle) return;
   SetLineColor(gStyle->GetFuncColor());
   SetLineWidth(gStyle->GetFuncWidth());
   SetLineStyle(gStyle->GetFuncStyle());

}

//______________________________________________________________________________
TF1::~TF1()
{
//*-*-*-*-*-*-*-*-*-*-*F1 default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =====================

   if (fParMin)    delete [] fParMin;
   if (fParMax)    delete [] fParMax;
   if (fParErrors) delete [] fParErrors;
   if (fIntegral)  delete [] fIntegral;
   if (fSave)      delete [] fSave;
   delete fHistogram;
   delete fMethodCall;

   if (fParent) {
      if (fParent->InheritsFrom(TH1::Class())) {
         ((TH1*)fParent)->GetListOfFunctions()->Remove(this);
         return;
      }
      if (fParent->InheritsFrom("TGraph")) {
         ((TGraph*)fParent)->GetListOfFunctions()->Remove(this);
         return;
      }
      fParent = 0;
   }
}

//______________________________________________________________________________
TF1::TF1(const TF1 &f1)
{
   ((TF1&)f1).Copy(*this);
}

//______________________________________________________________________________
void TF1::Browse(TBrowser *)
{
    Draw();
    gPad->Update();
}


//______________________________________________________________________________
void TF1::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this F1 to a new F1*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   TFormula::Copy(obj);
   TAttLine::Copy((TF1&)obj);
   TAttFill::Copy((TF1&)obj);
   TAttMarker::Copy((TF1&)obj);
   ((TF1&)obj).fXmin = fXmin;
   ((TF1&)obj).fXmax = fXmax;
   ((TF1&)obj).fNpx  = fNpx;
   ((TF1&)obj).fType = fType;
   ((TF1&)obj).fFunction  = fFunction;
   ((TF1&)obj).fChisquare = fChisquare;
   ((TF1&)obj).fNpfits = fNpfits;
   ((TF1&)obj).fMinimum = fMinimum;
   ((TF1&)obj).fMaximum = fMaximum;
   if (fNpar) {
      ((TF1&)obj).fParErrors = new Double_t[fNpar];
      ((TF1&)obj).fParMin    = new Double_t[fNpar];
      ((TF1&)obj).fParMax    = new Double_t[fNpar];
   }
   Int_t i;
   for (i=0;i<fNpar;i++)   ((TF1&)obj).fParErrors[i] = fParErrors[i];
   for (i=0;i<fNpar;i++)   ((TF1&)obj).fParMin[i]    = fParMin[i];
   for (i=0;i<fNpar;i++)   ((TF1&)obj).fParMax[i]    = fParMax[i];
   if (fMethodCall) {
      TMethodCall *m = new TMethodCall();
      m->InitWithPrototype(fMethodCall->GetMethodName(),fMethodCall->GetProto());
      ((TF1&)obj).fMethodCall  = m;
   }
}

//______________________________________________________________________________
Double_t TF1::Derivative(Double_t x, Double_t *params, Float_t epsilon)
{
//*-*-*-*-*-*-*-*-*Return derivative of function at point x*-*-*-*-*-*-*-*
//
//    The derivative is computed by computing the value of the function
//   at point x-epsilon and point x+epsilon.
//   if params is NULL, use the current values of parameters

   Double_t xx[2];
   if (epsilon <= 0) epsilon = 0.001;
   epsilon *= fXmax-fXmin;
   xx[0] = x - epsilon;
   xx[1] = x + epsilon;
   if (xx[0] < fXmin) xx[0] = fXmin;
   if (xx[1] > fXmax) xx[1] = fXmax;

   Double_t f1,f2,deriv;
   InitArgs(&xx[0],params);
   f1    = EvalPar(&xx[0],params);
   InitArgs(&xx[1],params);
   f2    = EvalPar(&xx[1],params);
   deriv = (f2-f1)/(2*epsilon);
   return deriv;
}

//______________________________________________________________________________
Int_t TF1::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to a function*-*-*-*-*
//*-*                  ===============================================
//*-*  Compute the closest distance of approach from point px,py to this function.
//*-*  The distance is computed in pixels units.
//*-*
//*-*  Algorithm:
//*-*
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   if (!fHistogram) return 9999;
   Int_t distance = fHistogram->DistancetoPrimitive(px,py);
   if (distance <= 0) return distance;

   Double_t xx[1];
   Float_t x     = gPad->AbsPixeltoX(px);
   xx[0]         = gPad->PadtoX(x);
   Double_t fval = Eval(xx[0]);
   Float_t y     = gPad->YtoPad(fval);
   Int_t pybin   = gPad->YtoAbsPixel(y);
   return TMath::Abs(py - pybin);
}

//______________________________________________________________________________
void TF1::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this function with its current attributes*-*-*-*-*
//*-*                  ==============================================
//*-*
//*-* Possible option values are:
//*-*   "SAME"  superimpose on top of existing picture
//*-*   "L"     connect all computed points with a straight line
//*-*   "C"     connect all computed points with a smooth curve.
//*-*
//*-* Note that the default value is "L". Therefore to draw on top
//*-* of an existing picture, specify option "LSAME"
//*-*
//*-* NB. You must use DrawCopy if you want to draw several times the same
//*-*     function in the current canvas.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();

   AppendPad(option);
}

//______________________________________________________________________________
void TF1::DrawCopy(Option_t *option)
{
//*-*-*-*-*-*-*-*Draw a copy of this function with its current attributes*-*-*
//*-*            ========================================================
//*-*
//*-*  This function MUST be used instead of Draw when you want to draw
//*-*  the same function with different parameters settings in the same canvas.
//*-*
//*-* Possible option values are:
//*-*   "SAME"  superimpose on top of existing picture
//*-*   "L"     connect all computed points with a straight line
//*-*   "C"     connect all computed points with a smooth curve.
//*-*
//*-* Note that the default value is "L". Therefore to draw on top
//*-* of an existing picture, specify option "LSAME"
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TF1 *newf1 = new TF1();
   Copy(*newf1);
   newf1->AppendPad(option);
}

//______________________________________________________________________________
void TF1::DrawF1(const char *formula, Float_t xmin, Float_t xmax, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Draw formula between xmin and xmax*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==================================
//*-*

   if (Compile((char*)formula)) return;

   SetRange(xmin, xmax);

   Draw(option);

}

//______________________________________________________________________________
void TF1::DrawPanel()
{
//*-*-*-*-*-*-*Display a panel with all function drawing options*-*-*-*-*-*
//*-*          =================================================
//*-*
//*-*   See class TDrawPanelHist for example

   if (gPad) {
      //gROOT->SetSelectedPrimitive(gPad->GetSelected());
      //gROOT->SetSelectedPad(gPad->GetSelectedPad());
      gROOT->SetSelectedPrimitive(this);
      gROOT->SetSelectedPad(gPad);
   }
   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("drawpanelhist")) {
      char cmd[] = "drawpanelhist = new TDrawPanelHist(\"drawpanelhist\",\"Hist Draw Panel\",330,450)";
      gInterpreter->ProcessLine(cmd);
      return;
   }
   char cmdupd[] = "drawpanelhist->SetDefaults()";
   gInterpreter->ProcessLine(cmdupd);
}

//______________________________________________________________________________
Double_t TF1::Eval(Double_t x, Double_t y, Double_t z)
{
//*-*-*-*-*-*-*-*-*-*-*Evaluate this formula*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =====================
//*-*
//*-*   Computes the value of this function (general case for a 3-d function)
//*-*   at point x,y,z.
//*-*   For a 1-d function give y=0 and z=0
//*-*   The current value of variables x,y,z is passed through x, y and z.
//*-*   The parameters used will be the ones in the array params if params is given
//*-*    otherwise parameters will be taken from the stored data members fParams
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
  Double_t xx[3];
  xx[0] = x;
  xx[1] = y;
  xx[2] = z;

  InitArgs(xx,fParams);

  return TF1::EvalPar(xx,fParams);
}

//______________________________________________________________________________
Double_t TF1::EvalPar(Double_t *x, Double_t *params)
{
//*-*-*-*-*-*Evaluate function with given coordinates and parameters*-*-*-*-*-*
//*-*        =======================================================
//*-*
//      Compute the value of this function at point defined by array x
//      and current values of parameters in array params.
//      If argument params is omitted or equal 0, the internal values
//      of parameters (array fParams) will be used instead.
//      For a 1-D function only x[0] must be given.
//      In case of a multi-dimemsional function, the arrays x must be
//      filled with the corresponding number of dimensions.
//
//   WARNING. In case of an interpreted function (fType=2), it is the
//   user's responsability to initialize the parameters via InitArgs
//   before calling this function.
//   InitArgs should be called at least once to specify the addresses
//   of the arguments x and params.
//   InitArgs should be called everytime these addresses change.
//

   if (fType == 0) return TFormula::EvalPar(x,params);
   Double_t result = 0;
   if (fType == 1)  {
      if (fFunction) result = (*fFunction)(x,params);
      else           result = GetSave(x);
   }
   if (fType == 2) {
      if (fMethodCall) fMethodCall->Execute(result);
      else             result = GetSave(x);
   }
   return result;
}

//______________________________________________________________________________
void TF1::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//*-*  This member function is called when a F1 is clicked with the locator
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fHistogram->ExecuteEvent(event,px,py);

   if (!gPad->GetView()) {
      if (event == kMouseMotion)  gPad->SetCursor(kHand);
   }
}

//______________________________________________________________________________
void TF1::GetParLimits(Int_t ipar, Double_t &parmin, Double_t &parmax)
{
//*-*-*-*-*-*Return limits for parameter ipar*-*-*-*
//*-*        ================================

   parmin = 0;
   parmax = 0;
   if (ipar < 0 || ipar > fNpar-1) return;
   if (fParMin) parmin = fParMin[ipar];
   if (fParMax) parmax = fParMax[ipar];
}

//______________________________________________________________________________
Double_t TF1::GetRandom()
{
//*-*-*-*-*-*Return a random number following this function shape*-*-*-*-*-*-*
//*-*        ====================================================
//*-*
//*-*   The distribution contained in the function fname (TF1) is integrated
//*-*   over the channel contents.
//*-*   It is normalized to 1.
//*-*   Getting one random number implies:
//*-*     - Generating a random number between 0 and 1 (say r1)
//*-*     - Look in which bin in the normalized integral r1 corresponds to
//*-*     - make a linear interpolation in the returned bin
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*

//  Check if integral array must be build
   Int_t i;
   Float_t dx = (fXmax-fXmin)/fNpx;
   if (fIntegral == 0) {
      fIntegral = new Double_t[fNpx+1];
      fIntegral[0] = 0;
      Double_t integ;
      Int_t intNegative = 0;
      for (i=0;i<fNpx;i++) {
         integ = Integral(fXmin+i*dx, fXmin+i*dx+dx);
         if (integ < 0) {intNegative++; integ = -integ;}
         fIntegral[i+1] = fIntegral[i] + integ;
      }
      if (intNegative > 0) {
         Warning("GetRandom","function:%s has %d negative values: abs assumed",GetName(),intNegative);
      }
      if (fIntegral[fNpx] == 0) {
         Error("GetRandom","Integral of function is zero");
         return 0;
      }
      for (i=1;i<=fNpx;i++) {  // normalize integral to 1
         fIntegral[i] /= fIntegral[fNpx];
      }
   }

// return random number
   Float_t r  = gRandom->Rndm();
   Int_t bin  = TMath::BinarySearch(fNpx,fIntegral,r);
   Float_t dy = fIntegral[bin+1] - fIntegral[bin];
   if (dy > 0) return fXmin + (r-fIntegral[bin])*dx/dy +dx*bin;
   else        return fXmin + dx*bin;
}

//______________________________________________________________________________
void TF1::GetRange(Float_t &xmin, Float_t &xmax)
{
//*-*-*-*-*-*-*-*-*-*-*Return range of a 1-D function*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================

   xmin = fXmin;
   xmax = fXmax;
}

//______________________________________________________________________________
void TF1::GetRange(Float_t &xmin, Float_t &ymin,  Float_t &xmax, Float_t &ymax)
{
//*-*-*-*-*-*-*-*-*-*-*Return range of a 2-D function*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================

   xmin = fXmin;
   xmax = fXmax;
   ymin = 0;
   ymax = 0;
}

//______________________________________________________________________________
void TF1::GetRange(Float_t &xmin, Float_t &ymin, Float_t &zmin, Float_t &xmax, Float_t &ymax, Float_t &zmax)
{
//*-*-*-*-*-*-*-*-*-*-*Return range of function*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   xmin = fXmin;
   xmax = fXmax;
   ymin = 0;
   ymax = 0;
   zmin = 0;
   zmax = 0;
}


//______________________________________________________________________________
Double_t TF1::GetSave(Double_t *xx)
{
    // Get value corresponding to X in array of fSave values

   if (fNsave <= 0) return 0;
   if (fSave == 0) return 0;
   Float_t xmin = Float_t(fSave[fNsave+2]);
   Float_t xmax = Float_t(fSave[fNsave+3]);
   Float_t x    = Float_t(xx[0]);
   Float_t dx   = (xmax-xmin)/fNsave;
   if (x < xmin || x > xmax) return 0;
   if (dx <= 0) return 0;

   Int_t bin     = Int_t((x-xmin)/dx);
   Float_t xlow  = xmin + bin*dx;
   Float_t xup   = xlow + dx;
   Double_t ylow = fSave[bin];
   Double_t yup  = fSave[bin+1];
   Double_t y    = ((xup*ylow-xlow*yup) + x*(yup-ylow))/dx;
   return y;
}

//______________________________________________________________________________
void TF1::InitArgs(Double_t *x, Double_t *params)
{
//*-*-*-*-*-*-*-*-*-*-*Initialize parameters addresses*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================

   if (fMethodCall) {
      Long_t args[2];
      args[0] = (Long_t)x;
      if (params) args[1] = (Long_t)params;
      else        args[1] = (Long_t)fParams;
      fMethodCall->SetParamPtrs(args);
   }
}

//______________________________________________________________________________
Double_t TF1::Integral(Float_t a, Float_t b, Double_t *params, Float_t epsilon)
{
//*-*-*-*-*-*-*-*-*Return Integral of function between a and b*-*-*-*-*-*-*-*
//
//   based on original CERNLIB routine DGAUSS by Sigfried Kolbig
//   converted to C++ by Rene Brun
//
//Begin_Html
/*
<BR>
<P>
This function computes,
to an attempted specified accuracy, the value of the integral
 <P> <IMG WIDTH=140 HEIGHT=45 ALIGN=BOTTOM ALT="displaymath120" SRC="gif/gaus_img1.gif"  > <P>

<p><b>Usage:</b><p>
In any arithmetic expression, this function
has the approximate value of the integral I.
<DL COMPACT>
<DT>a,b
<DD>End-points of integration interval. Note that <TT>B</TT>
may be less than <TT>A</TT>.
<DT>params
<DD>Array of function parameters. If 0, use current parameters.
<DT>epsilon
<DD>Accuracy parameter (see <B>Accuracy</B>).
</DL>
<P>
<p><b>Method:</b><p>
For any interval [<I>a</I>,<I>b</I>] we define  <IMG WIDTH=49 HEIGHT=26 ALIGN=MIDDLE ALT="tex2html_wrap_inline128" SRC="gif/gaus_img3.gif"  >  and  <IMG WIDTH=55 HEIGHT=26 ALIGN=MIDDLE ALT="tex2html_wrap_inline130" SRC="gif/gaus_img4.gif"  >  to be the
8-point and 16-point Gaussian quadrature approximations to
     <P> <IMG WIDTH=120 HEIGHT=40 ALIGN=BOTTOM ALT="displaymath132" SRC="gif/gaus_img5.gif"  > <P>
and define
<P> <IMG WIDTH=220 HEIGHT=57 ALIGN=BOTTOM ALT="displaymath134" SRC="gif/gaus_img6.gif"  > <P>
Then,
<P> <IMG WIDTH=180 HEIGHT=57 ALIGN=BOTTOM ALT="displaymath138" SRC="gif/gaus_img7.gif"  > <P>
<P>
where, starting with  <IMG WIDTH=48 HEIGHT=22 ALIGN=MIDDLE ALT="tex2html_wrap_inline140" SRC="gif/gaus_img8.gif"  >  and finishing with  <IMG WIDTH=49 HEIGHT=22 ALIGN=MIDDLE ALT="tex2html_wrap_inline142" SRC="gif/gaus_img9.gif"  > ,
the subdivision points  <IMG WIDTH=107 HEIGHT=26 ALIGN=MIDDLE ALT="tex2html_wrap_inline144" SRC="gif/gaus_img10.gif"  >  are given by
<P> <IMG WIDTH=180 HEIGHT=40 ALIGN=BOTTOM ALT="displaymath146" SRC="gif/gaus_img11.gif"  > <P>
with  <IMG WIDTH=8 HEIGHT=11 ALIGN=BOTTOM ALT="tex2html_wrap_inline148" SRC="gif/gaus_img12.gif"  >  equal to the first member of the sequence
 <IMG WIDTH=66 HEIGHT=26 ALIGN=MIDDLE ALT="tex2html_wrap_inline150" SRC="gif/gaus_img13.gif"  >  for which
 <IMG WIDTH=117 HEIGHT=26 ALIGN=MIDDLE ALT="tex2html_wrap_inline152" SRC="gif/gaus_img14.gif"  > .
If, at any stage in the process of subdivision, the ratio
  <P> <IMG WIDTH=180 HEIGHT=42 ALIGN=BOTTOM ALT="displaymath154" SRC="gif/gaus_img15.gif"  > <P>
is so small that 1+0.005<I>q</I> is indistinguishable from 1 to
machine accuracy, an error exit occurs with the function value
set equal to zero.
<P>
<p><b>Accuracy:</b><p>
Unless there is severe cancellation of positive and negative
values of <I>f</I>(<I>x</I>) over the interval [<I>A</I>,<I>B</I>], the argument <TT>EPS</TT>
may be considered as specifying a bound on the <I>relative</I> error of
<I>I</I> in the case  |<I>I</I>|&gt;1, and a bound on the <I>absolute</I> error in
the case |<I>I</I>|&lt;1. More precisely, if <I>k</I> is the number of sub-intervals
contributing to the approximation (see Method), and if
<P> <IMG WIDTH=180 HEIGHT=50 ALIGN=BOTTOM ALT="displaymath170" SRC="gif/gaus_img16.gif"  > <P>
then the relation
<P> <IMG WIDTH=140 HEIGHT=50 ALIGN=BOTTOM ALT="displaymath172" SRC="gif/gaus_img17.gif"  > <P>
will nearly always be true, provided the routine terminates
without printing an error message. For functions
<I>f</I> having no singularities in the closed interval [<I>A</I>,<I>B</I>]
the accuracy will usually be much higher than this.
<P>
<p><b>Error handling:</b><p>
The requested accuracy cannot be
obtained (see <B>Method</B>).
The function value is set equal to zero.
<P>
<p><b>Notes:</b><p>
Values of the function <I>f</I>(<I>x</I>) at the interval end-points
<I>A</I> and <I>B</I> are not required. The subprogram may therefore
be used when these values are undefined.
<BR><HR>
*/
//End_Html
//---------------------------------------------------------------

  const Double_t Z1 = 1;
  const Double_t HF = Z1/2;
  const Double_t CST = 5*Z1/1000;

  Double_t x[12] = { 0.96028985649753623,  0.79666647741362674,
                     0.52553240991632899,  0.18343464249564980,
                     0.98940093499164993,  0.94457502307323258,
                     0.86563120238783174,  0.75540440835500303,
                     0.61787624440264375,  0.45801677765722739,
                     0.28160355077925891,  0.09501250983763744};

  Double_t w[12] = { 0.10122853629037626,  0.22238103445337447,
                     0.31370664587788729,  0.36268378337836198,
                     0.02715245941175409,  0.06225352393864789,
                     0.09515851168249278,  0.12462897125553387,
                     0.14959598881657673,  0.16915651939500254,
                     0.18260341504492359,  0.18945061045506850};

  Double_t h, aconst, bb, aa, c1, c2, u, s8, s16, f1, f2;
  Double_t xx[1];
  Int_t i;

  InitArgs(xx,params);

  h = 0;
  if (b == a) return h;
  aconst = CST/TMath::Abs(b-a);
  bb = a;
CASE1:
  aa = bb;
  bb = b;
CASE2:
  c1 = HF*(bb+aa);
  c2 = HF*(bb-aa);
  s8 = 0;
  for (i=0;i<4;i++) {
     u     = c2*x[i];
     xx[0] = c1+u;
     f1    = EvalPar(xx,params);
     xx[0] = c1-u;
     f2    = EvalPar(xx,params);
     s8   += w[i]*(f1 + f2);
  }
  s16 = 0;
  for (i=4;i<12;i++) {
     u     = c2*x[i];
     xx[0] = c1+u;
     f1    = EvalPar(xx,params);
     xx[0] = c1-u;
     f2    = EvalPar(xx,params);
     s16  += w[i]*(f1 + f2);
  }
  s16 = c2*s16;
  if (TMath::Abs(s16-c2*s8) <= epsilon*(1. + TMath::Abs(s16))) {
     h += s16;
     if(bb != b) goto CASE1;
  } else {
     bb = c1;
     if(1. + aconst*TMath::Abs(c2) != 1) goto CASE2;
     h = s8;  //this is a crude approximation (cernlib function returned 0 !)
  }
  return h;
}

//______________________________________________________________________________
void TF1::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this function with its current attributes*-*-*-*-*
//*-*                  ===============================================

   const Int_t kLogX = BIT(15);
   Int_t i;
   Double_t xv[1];

   TString opt = option;
   opt.ToLower();
   Float_t xmin, xmax, pmin, pmax;
   pmin = gPad->PadtoX(gPad->GetUxmin());
   pmax = gPad->PadtoX(gPad->GetUxmax());
   xmin = fXmin;
   xmax = fXmax;
   if (opt.Contains("same")) {
      if (xmax < pmin) return;  // Otto: completely outside
      if (xmin > pmax) return;
      if (xmin < pmin) xmin = pmin;
      if (xmax > pmax) xmax = pmax;
   } else {
      gPad->Clear();
   }

//*-*-  Create a temporary histogram and fill each channel with the function value
   if (fHistogram) {
      if (!gPad->GetLogx()  &&  fHistogram->TestBit(kLogX)) { delete fHistogram; fHistogram = 0;}
      if ( gPad->GetLogx()  && !fHistogram->TestBit(kLogX)) { delete fHistogram; fHistogram = 0;}
   }

   if (fHistogram) {
      if (xmin != fXmin || xmax != fXmax) fHistogram->GetXaxis()->SetLimits(xmin,xmax);
   } else {
//      if logx, we must bin in logx and not in x !!!
//      otherwise if several decades, one gets crazy results
      if (xmin > 0 && gPad->GetLogx()) {
         Float_t *xbins  = new Float_t[fNpx+1];
         Float_t xlogmin = TMath::Log10(xmin);
         Float_t xlogmax = TMath::Log10(xmax);
         Float_t dlogx   = (xlogmax-xlogmin)/((Float_t)fNpx);
         for (i=0;i<=fNpx;i++) {
            xbins[i] = gPad->PadtoX(xlogmin+ i*dlogx);
         }
         fHistogram = new TH1F("Func",(char*)GetTitle(),fNpx,xbins);
         fHistogram->SetBit(kLogX);
         delete [] xbins;
      } else {
         fHistogram = new TH1F("Func",(char*)GetTitle(),fNpx,xmin,xmax);
      }
      if (!fHistogram) return;
      fHistogram->SetDirectory(0);
   }
   InitArgs(xv,fParams);
   for (i=1;i<=fNpx;i++) {
      xv[0] = fHistogram->GetBinCenter(i);
      fHistogram->SetBinContent(i,EvalPar(xv,fParams));
   }

//*-*- Copy Function attributes to histogram attributes
   fHistogram->SetMinimum(fMinimum);
   fHistogram->SetMaximum(fMaximum);
   fHistogram->SetLineColor(GetLineColor());
   fHistogram->SetLineStyle(GetLineStyle());
   fHistogram->SetLineWidth(GetLineWidth());
   fHistogram->SetFillColor(GetFillColor());
   fHistogram->SetFillStyle(GetFillStyle());
   fHistogram->SetMarkerColor(GetMarkerColor());
   fHistogram->SetMarkerStyle(GetMarkerStyle());
   fHistogram->SetMarkerSize(GetMarkerSize());

//*-*-  Draw the histogram
   if (opt.Length() == 0)  fHistogram->Paint("lf");
   else if (opt == "same") fHistogram->Paint("lfsame");
   else                    fHistogram->Paint(option);

}

//______________________________________________________________________________
void TF1::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this function with its attributes*-*-*-*-*-*-*-*-*-*
//*-*                  ==================================
   TFormula::Print(option);
   if (fHistogram) fHistogram->Print(option);
}

//______________________________________________________________________________
void TF1::Save(Float_t xmin, Float_t xmax)
{
    // Save values of function in array fSave

   if (fSave != 0) {fSave = 0; delete [] fSave;}
   fNsave = fNpx;
   if (fNsave <= 0) return;
   fSave  = new Double_t[fNsave+10];
   Int_t i;
   Float_t dx = (xmax-xmin)/fNsave;
   Double_t xv[1];
   InitArgs(xv,fParams);
   for (i=0;i<=fNsave;i++) {
      xv[0]    = xmin + dx*i;
      fSave[i] = EvalPar(xv,fParams);
   }
   fSave[fNsave+2] = xmin;
   fSave[fNsave+3] = xmax;
}

//______________________________________________________________________________
void TF1::SavePrimitive(ofstream &out, Option_t *option)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TF1::Class())) {
       out<<"   ";
   } else {
       out<<"   TF1 *";
   }
   out<<GetName()<<" = new TF1("<<quote<<GetName()<<quote<<","<<quote<<GetTitle()<<quote<<","<<fXmin<<","<<fXmax<<");"<<endl;
   if (GetFillColor() != 0) {
      out<<"   "<<GetName()<<"->SetFillColor("<<GetFillColor()<<");"<<endl;
   }
   if (GetFillStyle() != 1001) {
      out<<"   "<<GetName()<<"->SetFillStyle("<<GetFillStyle()<<");"<<endl;
   }
   if (GetMarkerColor() != 1) {
      out<<"   "<<GetName()<<"->SetMarkerColor("<<GetMarkerColor()<<");"<<endl;
   }
   if (GetMarkerStyle() != 1) {
      out<<"   "<<GetName()<<"->SetMarkerStyle("<<GetMarkerStyle()<<");"<<endl;
   }
   if (GetMarkerSize() != 1) {
      out<<"   "<<GetName()<<"->SetMarkerSize("<<GetMarkerSize()<<");"<<endl;
   }
   if (GetLineColor() != 1) {
      out<<"   "<<GetName()<<"->SetLineColor("<<GetLineColor()<<");"<<endl;
   }
   if (GetLineWidth() != 4) {
      out<<"   "<<GetName()<<"->SetLineWidth("<<GetLineWidth()<<");"<<endl;
   }
   if (GetLineStyle() != 1) {
      out<<"   "<<GetName()<<"->SetLineStyle("<<GetLineStyle()<<");"<<endl;
   }
   if (GetNpx() != 100) {
      out<<"   "<<GetName()<<"->SetNpx("<<GetNpx()<<");"<<endl;
   }
   if (GetChisquare() != 0) {
      out<<"   "<<GetName()<<"->SetChisquare("<<GetChisquare()<<");"<<endl;
   }
   Double_t parmin, parmax;
   for (Int_t i=0;i<fNpar;i++) {
      out<<"   "<<GetName()<<"->SetParameter("<<i<<","<<GetParameter(i)<<");"<<endl;
      out<<"   "<<GetName()<<"->SetParError("<<i<<","<<GetParError(i)<<");"<<endl;
      GetParLimits(i,parmin,parmax);
      out<<"   "<<GetName()<<"->SetParLimits("<<i<<","<<parmin<<","<<parmax<<");"<<endl;
   }
   out<<"   "<<GetName()<<"->Draw("
      <<quote<<option<<quote<<");"<<endl;
}

//______________________________________________________________________________
void TF1::SetNpx(Int_t npx)
{
//*-*-*-*-*-*-*-*Set the number of points used to draw the function*-*-*-*-*-*
//*-*            ==================================================

   if(npx > 4 && npx < 10000) fNpx = npx;
   Update();
}

//______________________________________________________________________________
void TF1::SetParLimits(Int_t ipar, Double_t parmin, Double_t parmax)
{
//*-*-*-*-*-*Set limits for parameter ipar*-*-*-*
//*-*        =============================
//     The specified limits will be used in a fit operation
//     when the option "B" is specified (Bounds).

   if (ipar < 0 || ipar > fNpar-1) return;
   if (!fParMin) fParMin = new Double_t[fNpar];
   if (!fParMax) fParMax = new Double_t[fNpar];
   fParMin[ipar] = parmin;
   fParMax[ipar] = parmax;
}

//______________________________________________________________________________
void TF1::SetRange(Float_t xmin, Float_t xmax)
{
//*-*-*-*-*-*Initialize the upper and lower bounds to draw the function*-*-*-*
//*-*        ==========================================================
//     The function range is also used in an histogram fit operation
//     when the option "R" is specified.

   fXmin = xmin;
   fXmax = xmax;
   Update();
}

//_______________________________________________________________________
void TF1::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      Version_t v = b.ReadVersion();
      TFormula::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b >> fXmin;
      b >> fXmax;
      b >> fNpx;
      b >> fType;
      b >> fChisquare;
      b.ReadArray(fParErrors);
      if (v > 1) {
         b.ReadArray(fParMin);
         b.ReadArray(fParMax);
      } else {
         fParMin = new Double_t[fNpar+1];
         fParMax = new Double_t[fNpar+1];
      }
      b >> fNpfits;
      if (v == 1) {
         b >> fHistogram;
         delete fHistogram; fHistogram = 0;
      }
      if (v > 1) {
         b >> fMinimum;
         b >> fMaximum;
      }
      if (v > 2) {
         b >> fNsave;
         if (fNsave > 0) {
            fSave = new Double_t[fNsave+10];
            b.ReadArray(fSave);
         } else fSave = 0;
      }
   } else {
      b.WriteVersion(TF1::IsA());
      TFormula::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b << fXmin;
      b << fXmax;
      b << fNpx;
      b << fType;
      b << fChisquare;
      b.WriteArray(fParErrors,fNpar);
      b.WriteArray(fParMin,fNpar);
      b.WriteArray(fParMax,fNpar);
      b << fNpfits;
      b << fMinimum;
      b << fMaximum;
      b << fNsave;
      if (fNsave > 0) b.WriteArray(fSave, fNsave+10);
   }
}

//_______________________________________________________________________
void TF1::Update()
{
// called by functions such as SetRange, SetNpx, SetParameters
// to force the deletion of the associated histogram or Integral

   delete fHistogram;
   fHistogram = 0;
   if (fIntegral) {delete [] fIntegral; fIntegral = 0;}
}
