//*CMZ :  2.20/05 13/12/98  10.53.59  by  Rene Brun
//*CMZ :  2.20/03 05/12/98  16.30.31  by  Rene Brun
//*CMZ :  2.20/01 01/12/98  22.34.08  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  09.30.54  by  Rene Brun
//*-- Author :    Rene Brun   23/08/95

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

#include "TROOT.h"
#include "TF2.h"
#include "TMath.h"
#include "TRandom.h"
#include "TH2.h"
#include "TVirtualPad.h"

ClassImp(TF2)

//______________________________________________________________________________
//
// a 2-Dim function with parameters
// TF2 graphics function is via the TH1 drawing functions.
//
//      Example of a function
//
//   TF2 *f2 = new TF2("f2","sin(x)*sin(y)/(x*y)",0,5,0,5);
//   f2->Draw();
//Begin_Html
/*
<img src="gif/function2.gif">
*/
//End_Html
//
//      See TF1 class for the list of functions formats
//

//______________________________________________________________________________
TF2::TF2(): TF1()
{
//*-*-*-*-*-*-*-*-*-*-*F2 default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

}


//______________________________________________________________________________
TF2::TF2(const char *name,const char *formula, Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax)
      :TF1(name,formula,xmin,xmax)
{
//*-*-*-*-*-*-*F2 constructor using a formula definition*-*-*-*-*-*-*-*-*-*-*
//*-*          =========================================
//*-*
//*-*  See TFormula constructor for explanation of the formula syntax.
//*-*
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fYmin   = ymin;
   fYmax   = ymax;
   fNpx    = 30;
   fNpy    = 30;
   fNlevels= 20;

}

//______________________________________________________________________________
TF2::TF2(const char *name, void *fcn, Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax, Int_t npar)
      : TF1(name, fcn, xmin, xmax, npar)
{
//*-*-*-*-*-*-*F2 constructor using a pointer to an interpreted function*-*-*
//*-*          =========================================================
//*-*
//*-*   npar is the number of free parameters used by the function
//*-*
//*-*  Creates a function of type C between xmin and xmax and ymin,ymax.
//*-*  The function is defined with npar parameters
//*-*  fcn must be a function of type:
//*-*     Double_t fcn(Double_t *x, Double_t *params)
//*-*
//*-*  This constructor is called for functions of type C by CINT.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fYmin   = ymin;
   fYmax   = ymax;
   fNpx    = 30;
   fNpy    = 30;
   fNlevels= 20;

}

//______________________________________________________________________________
TF2::TF2(const char *name, Double_t (*fcn)(Double_t *, Double_t *), Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax, Int_t npar)
      : TF1(name, fcn, xmin, xmax, npar)
{
//*-*-*-*-*-*-*F2 constructor using a pointer to a compiled function*-*-*-*-*
//*-*          =====================================================
//*-*
//*-*   npar is the number of free parameters used by the function
//*-*
//*-*   This constructor creates a function of type C when invoked
//*-*   with the normal C++ compiler.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fYmin   = ymin;
   fYmax   = ymax;
   fNpx    = 30;
   fNpy    = 30;
   fNlevels= 20;

}

//______________________________________________________________________________
TF2::~TF2()
{
//*-*-*-*-*-*-*-*-*-*-*F2 default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =====================

}

//______________________________________________________________________________
TF2::TF2(const TF2 &f2)
{
   ((TF2&)f2).Copy(*this);
}

//______________________________________________________________________________
void TF2::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this F2 to a new F2*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   TF1::Copy(obj);
   ((TF2&)obj).fYmin    = fYmin;
   ((TF2&)obj).fYmax    = fYmax;
   ((TF2&)obj).fNpy     = fNpy;
   ((TF2&)obj).fNlevels = fNlevels;
}

//______________________________________________________________________________
Int_t TF2::DistancetoPrimitive(Int_t px, Int_t py)
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

   return TF1::DistancetoPrimitive(px, py);

}

//______________________________________________________________________________
void TF2::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this function with its current attributes*-*-*-*-*
//*-*                  ==============================================
//*-* NB. You must use DrawCopy if you want to draw several times the same
//*-*     function in the current canvas.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();

   AppendPad(option);
}

//______________________________________________________________________________
void TF2::DrawCopy(Option_t *option)
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
//*-* Note that the default value is "F". Therefore to draw on top
//*-* of an existing picture, specify option "SL"
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TF2 *newf2 = new TF2();
   Copy(*newf2);
   newf2->AppendPad(option);
}

//______________________________________________________________________________
void TF2::DrawF2(const char *formula, Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Draw formula between xmin,ymin and xmax,ymax*-*-*-*-*-*-*-*
//*-*                ============================================
//*-*

   if (Compile((char*)formula)) return;

   SetRange(xmin, ymin, xmax, ymax);

   Draw(option);

}

//______________________________________________________________________________
void TF2::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//*-*  This member function is called when a F2 is clicked with the locator
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TF1::ExecuteEvent(event, px, py);
}

//______________________________________________________________________________
Double_t TF2::GetRandom()
{
//*-*-*-*-*-*Return a random number following this function shape*-*-*-*-*-*-*
//*-*        ====================================================
//*-*
   printf("GetRandom cannot be called for TF2/3, use GetRandom2/3 instead\n");
   return 0;  // not yet implemented
}

//______________________________________________________________________________
void TF2::GetRandom2(Float_t &xrandom, Float_t &yrandom)
{
//*-*-*-*-*-*Return 2 random numbers following this function shape*-*-*-*-*-*
//*-*        =====================================================
//*-*
//*-*   The distribution contained in this TF2 function is integrated
//*-*   over the cell contents.
//*-*   It is normalized to 1.
//*-*   Getting the two random numbers implies:
//*-*     - Generating a random number between 0 and 1 (say r1)
//*-*     - Look in which cell in the normalized integral r1 corresponds to
//*-*     - make a linear interpolation in the returned cell
//*-*

   //  Check if integral array must be build
   Int_t i,j,cell;
   Float_t dx   = (fXmax-fXmin)/fNpx;
   Float_t dy   = (fYmax-fYmin)/fNpy;
   Int_t ncells = fNpx*fNpy;
   Double_t xx[2];
   if (fIntegral == 0) {
      fIntegral = new Double_t[ncells+1];
      fIntegral[0] = 0;
      Double_t integ;
      Int_t intNegative = 0;
      cell = 0;
      for (j=0;j<fNpy;j++) {
         xx[1] = fYmin+(j+0.5)*dy;
         for (i=0;i<fNpx;i++) {
            xx[0] = fXmin+(i+0.5)*dx;
            integ = EvalPar(xx,fParams);
            if (integ < 0) {intNegative++; integ = -integ;}
            fIntegral[cell+1] = fIntegral[cell] + integ;
            cell++;
         }
      }
      if (intNegative > 0) {
         Warning("GetRandom2","function:%s has %d negative values: abs assumed",GetName(),intNegative);
      }
      if (fIntegral[ncells] == 0) {
         Error("GetRandom2","Integral of function is zero");
         return;
      }
      for (i=1;i<=ncells;i++) {  // normalize integral to 1
         fIntegral[i] /= fIntegral[ncells];
      }
   }

// return random numbers
   Float_t r,ddx,ddy,dxint;
   r     = gRandom->Rndm();
   cell  = TMath::BinarySearch(ncells,fIntegral,r);
   dxint = fIntegral[cell+1] - fIntegral[cell];
   if (dxint > 0) ddx = dx*(r - fIntegral[cell])/dxint;
   else           ddx = 0;
   ddy = dy*gRandom->Rndm();
   j   = cell/fNpx;
   i   = cell%fNpx;
   xrandom = fXmin +dx*i +ddx;
   yrandom = fYmin +dy*j +ddy;
}

//______________________________________________________________________________
void TF2::GetRange(Float_t &xmin, Float_t &ymin,  Float_t &xmax, Float_t &ymax)
{
//*-*-*-*-*-*-*-*-*-*-*Return range of a 2-D function*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================

   xmin = fXmin;
   xmax = fXmax;
   ymin = fYmin;
   ymax = fYmax;
}

//______________________________________________________________________________
void TF2::GetRange(Float_t &xmin, Float_t &ymin, Float_t &zmin, Float_t &xmax, Float_t &ymax, Float_t &zmax)
{
//*-*-*-*-*-*-*-*-*-*-*Return range of function*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   xmin = fXmin;
   xmax = fXmax;
   ymin = fYmin;
   ymax = fYmax;
   zmin = 0;
   zmax = 0;
}

//______________________________________________________________________________
void TF2::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Paint this 2-D function with its current attributes*-*-*-*-*
//*-*              ===================================================

   Int_t i,j,bin;
   Float_t dx, dy;
   Double_t xv[2];

   TString opt = option;
   opt.ToLower();
   if (!opt.Contains("same")) gPad->Clear();

//*-*-  Create a temporary histogram and fill each channel with the function value
   if (!fHistogram) {
      fHistogram = new TH2F("Func",(char*)GetTitle(),fNpx,fXmin,fXmax,fNpy,fYmin,fYmax);
      if (!fHistogram) return;
      fHistogram->SetDirectory(0);
   }
   InitArgs(xv,fParams);
   dx = (fXmax - fXmin)/Float_t(fNpx);
   dy = (fYmax - fYmin)/Float_t(fNpy);
   for (i=1;i<=fNpx;i++) {
      xv[0] = fXmin + (Float_t(i) - 0.5)*dx;
      for (j=1;j<=fNpy;j++) {
         xv[1] = fYmin + (Float_t(j) - 0.5)*dy;
         bin   = j*(fNpx + 2) + i;
         fHistogram->SetBinContent(bin,EvalPar(xv,fParams));
      }
   }
   fHistogram->Fill(fXmin-1,fYmin-1,0);  //This call to force fNentries non zero

//*-*- Copy Function attributes to histogram attributes
   fHistogram->SetMinimum(fMinimum);
   fHistogram->SetMaximum(fMaximum);
   fHistogram->SetContour(GetContour());
   fHistogram->SetLineColor(GetLineColor());
   fHistogram->SetLineStyle(GetLineStyle());
   fHistogram->SetLineWidth(GetLineWidth());
   fHistogram->SetFillColor(GetFillColor());
   fHistogram->SetFillStyle(GetFillStyle());
   fHistogram->SetMarkerColor(GetMarkerColor());
   fHistogram->SetMarkerStyle(GetMarkerStyle());
   fHistogram->SetMarkerSize(GetMarkerSize());

//*-*-  Draw the histogram
   if (opt.Length() == 0)  fHistogram->Paint("cont3");
   else if (opt == "same") fHistogram->Paint("cont2same");
   else                    fHistogram->Paint(option);

}

//______________________________________________________________________________
void TF2::SetNpy(Int_t npy)
{
//*-*-*-*-*-*-*-*Set the number of points used to draw the function*-*-*-*-*-*
//*-*            ==================================================

   if(npy > 4 && npy < 1000) fNpy = npy;
   Update();
}

//______________________________________________________________________________
void TF2::SetRange(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax)
{
//*-*-*-*-*-*Initialize the upper and lower bounds to draw the function*-*-*-*
//*-*        ==========================================================

   fXmin = xmin;
   fXmax = xmax;
   fYmin = ymin;
   fYmax = ymax;
   Update();
}
