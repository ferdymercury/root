//*CMZ :  2.22/09 13/07/99  11.20.05  by  Rene Brun
//*CMZ :  2.22/08 07/07/99  17.08.28  by  Rene Brun
//*CMZ :  2.22/07 05/07/99  16.38.25  by  Rene Brun
//*CMZ :  2.22/06 25/06/99  14.39.44  by  Rene Brun
//*CMZ :  2.22/05 15/06/99  10.08.10  by  Rene Brun
//*CMZ :  2.22/04 03/06/99  09.35.52  by  Rene Brun
//*CMZ :  2.22/03 31/05/99  12.31.17  by  Rene Brun
//*CMZ :  2.22/01 20/05/99  14.18.15  by  Rene Brun
//*CMZ :  2.22/00 06/04/99  09.37.32  by  Rene Brun
//*CMZ :  2.21/08 26/03/99  23.08.29  by  Rene Brun
//*CMZ :  2.21/07 03/03/99  11.34.48  by  Rene Brun
//*CMZ :  2.21/06 18/02/99  09.06.08  by  Rene Brun
//*CMZ :  2.21/05 07/02/99  11.41.46  by  Rene Brun
//*CMZ :  2.21/04 03/02/99  10.51.28  by  Rene Brun
//*CMZ :  2.21/03 22/01/99  08.40.27  by  Rene Brun
//*CMZ :  2.21/02 18/01/99  16.21.47  by  Rene Brun
//*CMZ :  2.21/01 11/01/99  08.42.36  by  Rene Brun
//*CMZ :  2.20/06 17/12/98  09.41.03  by  Rene Brun
//*CMZ :  2.20/05 13/12/98  17.39.54  by  Rene Brun
//*CMZ :  2.20/04 09/12/98  20.54.12  by  Rene Brun
//*CMZ :  2.20/03 05/12/98  16.34.23  by  Rene Brun
//*CMZ :  2.20/02 03/12/98  19.03.56  by  Rene Brun
//*CMZ :  2.20/00 26/11/98  15.21.11  by  Rene Brun
//*CMZ :  2.00/13 23/10/98  08.41.08  by  Rene Brun
//*CMZ :  2.00/12 09/10/98  09.56.39  by  Rene Brun
//*CMZ :  2.00/11 01/09/98  03.04.04  by  Rene Brun
//*CMZ :  2.00/10 29/07/98  22.00.10  by  Rene Brun
//*CMZ :  2.00/09 22/06/98  12.31.55  by  Fons Rademakers
//*CMZ :  2.00/08 02/06/98  19.48.14  by  Rene Brun
//*CMZ :  2.00/07 17/05/98  00.04.45  by  Rene Brun
//*CMZ :  2.00/06 14/05/98  23.21.52  by  Rene Brun
//*CMZ :  2.00/04 06/04/98  12.59.08  by  Rene Brun
//*CMZ :  2.00/03 27/03/98  17.57.23  by  Rene Brun
//*CMZ :  2.00/00 06/03/98  17.53.17  by  Rene Brun
//*CMZ :  1.03/09 07/01/98  08.24.24  by  Fons Rademakers
//*-- Author :    Rene Brun   26/12/94

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <fstream.h>
#include <iostream.h>

#include "TROOT.h"
#include "TH1.h"
#include "TH2.h"
#include "TF2.h"
#include "TF3.h"
#include "TVirtualPad.h"
#include "TPaveStats.h"
#include "TFrame.h"
#include "TText.h"
#include "TLine.h"
#include "TPolyLine.h"
#include "TPolymarker3D.h"
#include "TMarker3DBox.h"
#include "TPoints.h"
#include "TStyle.h"
#include "Foption.h"
#include "TGraph.h"
#include "TGaxis.h"
#include "TColor.h"
#include "TLego.h"
#include "TView.h"
#include "TMath.h"
#include "TRandom.h"
#include "TMinuit.h"
#include "Hoption.h"
#include "Hparam.h"
#include "TInterpreter.h"
#include "TProfile.h"

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*The H I S T O G R A M   Classes*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
//*-*
//*-*  ROOT supports the following histogram types:
//*-*
//*-*   1-D histograms:
//*-*      TH1C : histograms with one byte per channel. Maximum bin content = 255
//*-*      TH1S : histograms with one short per channel. Maximum bin content = 65535
//*-*      TH1F : histograms with one float per channel. Maximum precision 7 digits
//*-*      TH1D : histograms with one double per channel. Maximum precision 14 digits
//*-*
//*-*   2-D histograms:
//*-*      TH2C : histograms with one byte per channel. Maximum bin content = 255
//*-*      TH2S : histograms with one short per channel. Maximum bin content = 65535
//*-*      TH2F : histograms with one float per channel. Maximum precision 7 digits
//*-*      TH2D : histograms with one double per channel. Maximum precision 14 digits
//*-*
//*-*   3-D histograms:
//*-*      TH3C : histograms with one byte per channel. Maximum bin content = 255
//*-*      TH3S : histograms with one short per channel. Maximum bin content = 65535
//*-*      TH3F : histograms with one float per channel. Maximum precision 7 digits
//*-*      TH3D : histograms with one double per channel. Maximum precision 14 digits
//*-*
//*-*   Profile histograms: See class TProfile
//*-*
//*-*- All histogram classes are derived from the base class TH1
//*-*   The TH*C classes also inherit from the array class TArrayC.
//*-*   The TH*S classes also inherit from the array class TArrayS.
//*-*   The TH*F classes also inherit from the array class TArrayF.
//*-*   The TH*D classes also inherit from the array class TArrayD.
//*-*
//*-*   Convention for numbering bins
//*-*   =============================
//*-*   For all histogram types: nbins, xlow, xup
//*-*     bin = 0;       underflow bin
//*-*     bin = 1;       first bin with low-edge xlow INCLUDED
//*-*     bin = nbins;   last bin with upper-edge xup EXCLUDED
//*-*     bin = nbins+1; overflow bin
//*-*
//Begin_Html
/*
<img src="gif/th1_classtree.gif">
*/
//End_Html
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

TH1 *gCurrentHist = 0;

Foption_t Foption;
Hoption_t Hoption;
Hparam_t  Hparam;

const Int_t kNMAX = 2000;

static Float_t xbuf[kNMAX];
static Float_t ybuf[kNMAX];
static Int_t xfirst,xlast,yfirst,ylast,zfirst,zlast;
static Float_t xmin, xmax, ymin, ymax, zmin, zmax, binwidx, binwidy, binwidz;
TAxis *xaxis, *yaxis, *zaxis;
TH1 *hlist[10];
TLego *gLego;
Int_t gNIDS = 0;
const Float_t kHMAX = 1.05;
const Int_t kMAXCONTOUR  = 104;
const Int_t kCloseDirectory = BIT(7);
const Int_t kNoStats     = BIT(9);
const Int_t kAxisRange   = BIT(11);
const Int_t kCenterTitle = BIT(12);

R__EXTERN TF1 *gF1;

extern void H1InitGaus();
extern void H1InitExpo();
extern void H1InitPolynom();
extern void H1FitChisquare(Int_t &npar, Double_t *gin, Double_t &f, Double_t *u, Int_t flag);
extern void H1FitLikelihood(Int_t &npar, Double_t *gin, Double_t &f, Double_t *u, Int_t flag);
extern void H1LeastSquareFit(Int_t n, Int_t m, Double_t *a);
extern void H1LeastSquareLinearFit(Int_t ndata, Double_t &a0, Double_t &a1, Int_t &ifail);
extern void H1LeastSquareSeqnd(Int_t n, Double_t *a, Int_t idim, Int_t &ifail, Int_t k, Double_t *b);


ClassImp(TH1)

//______________________________________________________________________________
TH1::TH1(): TNamed(), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*Histogram default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================
   fDirectory = 0;
   fFunctions = new TList(this);
   fIntegral  = 0;
}

//______________________________________________________________________________
TH1::~TH1()
{
//*-*-*-*-*-*-*-*-*-*-*Histogram default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   if (!TestBit(kNotDeleted)) return;
   if (fIntegral) {delete [] fIntegral; fIntegral = 0;}
   if (fFunctions) { fFunctions->Delete(); delete fFunctions; }
   if (fDirectory) {
      if (!fDirectory->TestBit(kCloseDirectory)) fDirectory->GetList()->Remove(this);
   }
   fDirectory = 0;
   fFunctions = 0;
}

//______________________________________________________________________________
TH1::TH1(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
    :TNamed(name,title), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*Normal constructor for fix bin size histograms*-*-*-*-*-*-*
//*-*              ==============================================
//
//     Creates the main histogram structure:
//        name   : name of histogram (avoid blanks)
//        title  : histogram title
//        nbins  : number of bins
//        xlow   : low edge of first bin
//        xup    : upper edge of last bin (not included in last bin)
//
//      When an histogram is created, it is automatically added to the list
//      of special objects in the current directory.
//      To find the pointer to this histogram in the current directory
//      by its name, do:
//      TH1F *h1 = (TH1F*)gDirectory->FindObject(name);
//
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Build();
   if (nbins <= 0) nbins = 1;
   fXaxis.Set(nbins,xlow,xup);
   fNcells = fXaxis.GetNbins()+2;
}

//______________________________________________________________________________
TH1::TH1(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
    :TNamed(name,title), TAttLine(), TAttFill(), TAttMarker()
{
//*-*-*-*-*-*-*Normal constructor for variable bin size histograms*-*-*-*-*-*-*
//*-*          ===================================================
//
//  Creates the main histogram structure:
//     name   : name of histogram (avoid blanks)
//     title  : histogram title
//     nbins  : number of bins
//     xbins  : array of low-edges for each bin
//              This is an array of size nbins+1
//
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Build();
   if (nbins <= 0) nbins = 1;
   if (xbins) fXaxis.Set(nbins,xbins);
   else       fXaxis.Set(nbins,0,1);
   fNcells = fXaxis.GetNbins()+2;
}

//______________________________________________________________________________
void TH1::Browse(TBrowser *)
{
    Draw();
    gPad->Update();
}


//______________________________________________________________________________
void TH1::Build()
{
//*-*-*-*-*-*-*-*-*-*Creates histogram basic data structure*-*-*-*-*-*-*-*-*-*
//*-*                ======================================

   fIntegral      = 0;
   fEntries       = 0;
   fNormFactor    = 0;
   fTsumw         = fTsumw2=fTsumwx=fTsumwx2=0;
   fMaximum       = -1111;
   fMinimum       = -1111;
   fXaxis.SetName("xaxis");
   fYaxis.SetName("yaxis");
   fZaxis.SetName("zaxis");
   fYaxis.Set(1,0.,1.);
   fZaxis.Set(1,0.,1.);
   fContour.Set(0);

   UseCurrentStyle();

   if (gDirectory) {
      TH1 *hold = (TH1*)gDirectory->GetList()->FindObject(GetName());
      if (hold) {
         Warning("Build","Replacing existing histogram: %s",GetName());
         gDirectory->GetList()->Remove(hold);
       //  delete hold;
      }
      gDirectory->Append(this);
   }
   fDirectory = gDirectory;
   fFunctions = new TList(this);
}

//______________________________________________________________________________
void TH1::Add(TH1 *h1, Float_t c1)
{
   // Performs the operation: this = this + c1*h1
   // if errors are defined (see TH1::Sumw2), errors are also recalculated.
   // Note that if h1 has Sumw2 set, Sumw2 is automatically called for this
   // if not already set.

   if (!h1) {
      Error("Add","Attempt to add a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()) {
      Error("Add","Attempt to add histograms with different number of bins");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Add","Attempt to add histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 has Sumw2 set
   if (fSumw2.fN == 0 && h1->GetSumw2N() != 0) Sumw2();

//*-*- Add statistics
   Float_t ac1 = TMath::Abs(c1);
   fEntries += ac1*h1->GetEntries();
   fTsumw   += ac1*h1->fTsumw;
   fTsumw2  += ac1*h1->fTsumw2;
   fTsumwx  += ac1*h1->fTsumwx;
   fTsumwx2 += ac1*h1->fTsumwx2;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t cu;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            cu  = c1*h1->GetBinContent(bin);
            AddBinContent(bin,cu);
            if (fSumw2.fN) {
               Double_t error1 = h1->GetBinError(bin);
               fSumw2.fArray[bin] += c1*c1*error1*error1;
            }
         }
      }
   }
}

//______________________________________________________________________________
void TH1::Add(TH1 *h1, TH1 *h2, Float_t c1, Float_t c2)
{
//*-*-*-*-*Replace contents of this histogram by the addition of h1 and h2*-*-*
//*-*      ===============================================================
//
//   this = c1*h1 + c2*h2
//   if errors are defined (see TH1::Sumw2), errors are also recalculated
//   Note that if h1 or h2 have Sumw2 set, Sumw2 is automatically called for this
//   if not already set.
//

   if (!h1 || !h2) {
      Error("Add","Attempt to add a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()
    || nbinsx != h2->GetNbinsX() || nbinsy != h2->GetNbinsY() || nbinsz != h2->GetNbinsZ()) {
      Error("Add","Attempt to add histograms with different number of bins");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Add","Attempt to add histograms with different axis limits");
   }
   if (GetXaxis()->GetXmin() != h2->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h2->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h2->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h2->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h2->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h2->GetZaxis()->GetXmax()) {
       Warning("Add","Attempt to add histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 or h2 have Sumw2 set
   if (fSumw2.fN == 0 && (h1->GetSumw2N() != 0 || h2->GetSumw2N() != 0)) Sumw2();

//*-*- Add statistics
   Float_t ac1 = TMath::Abs(c1);
   Float_t ac2 = TMath::Abs(c2);
   fEntries = ac1*h1->GetEntries() + ac2*h2->GetEntries();
   fTsumw   = ac1*h1->fTsumw       + ac2*h2->fTsumw;
   fTsumw2  = ac1*h1->fTsumw2      + ac2*h2->fTsumw2;
   fTsumwx  = ac1*h1->fTsumwx      + ac2*h2->fTsumwx;
   fTsumwx2 = ac1*h1->fTsumwx2     + ac2*h2->fTsumwx2;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t cu;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            cu  = c1*h1->GetBinContent(bin)+ c2*h2->GetBinContent(bin);
            SetBinContent(bin,cu);
            if (fSumw2.fN) {
               Double_t error1 = h1->GetBinError(bin);
               Double_t error2 = h2->GetBinError(bin);
               fSumw2.fArray[bin] = c1*c1*error1*error1 + c2*c2*error2*error2;
            }
         }
      }
   }
}


//______________________________________________________________________________
void TH1::AddBinContent(Int_t)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by 1*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================
   AbstractMethod("AddBinContent");
}

//______________________________________________________________________________
void TH1::AddBinContent(Int_t, Stat_t)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by a weight w*-*-*-*-*-*-*-*-*-*-*
//*-*                ===================================
   AbstractMethod("AddBinContent");
}

//______________________________________________________________________________
Double_t TH1::ComputeIntegral()
{
//  Compute integral (cumulative sum of bins)
//  The result stored in fIntegral is used by the GetRandom functions.
//  This function is automatically called by GetRandom when the fIntegral
//  array does not exist or when the number of entries in the histogram
//  has changed since the previous call to GetRandom.
//  The resulting integral is normalized to 1

   Int_t bin, binx, biny, binz, ibin;

// delete previously computed integral (if any)
   if (fIntegral) delete [] fIntegral;

//*-*- Allocate space to store the integral and compute integral
   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   Int_t nxy    = nbinsx*nbinsy;
   Int_t nbins  = nxy*nbinsz;

   fIntegral = new Double_t[nbins+2];
   ibin = 0;
   fIntegral[ibin] = 0;
   for (binz=1;binz<=nbinsz;binz++) {
      for (biny=1;biny<=nbinsy;biny++) {
         for (binx=1;binx<=nbinsx;binx++) {
            ibin++;
            bin  = GetBin(binx, biny, binz);
            fIntegral[ibin] = fIntegral[ibin-1] + GetBinContent(bin);
         }
      }
   }

//*-*- Normalize integral to 1
   if (fIntegral[nbins] == 0 ) {
      Printf(" Error in ComputeIntegral, Integral = zero"); return 0;
   }
   for (bin=1;bin<=nbins;bin++)  fIntegral[bin] /= fIntegral[nbins];
   fIntegral[nbins+1] = fEntries;
   return fIntegral[nbins];
}

//______________________________________________________________________________
void TH1::Copy(TObject &obj)
{
//*-*-*-*-*-*-*Copy this histogram structure to newth1*-*-*-*-*-*-*-*-*-*-*-*
//*-*          =======================================

   TNamed::Copy(obj);
   ((TH1&)obj).fDimension = fDimension;
   ((TH1&)obj).fNormFactor= fNormFactor;
   ((TH1&)obj).fEntries   = fEntries;
   ((TH1&)obj).fNcells    = fNcells;
   ((TH1&)obj).fBarOffset = fBarOffset;
   ((TH1&)obj).fBarWidth  = fBarWidth;
   ((TH1&)obj).fTsumw     = fTsumw;
   ((TH1&)obj).fTsumw2    = fTsumw2;
   ((TH1&)obj).fTsumwx    = fTsumwx;
   ((TH1&)obj).fTsumwx2   = fTsumwx2;
   ((TH1&)obj).fMaximum   = fMaximum;
   ((TH1&)obj).fMinimum   = fMinimum;
   ((TH1&)obj).fOption    = fOption;
   TAttLine::Copy(((TH1&)obj));
   TAttFill::Copy(((TH1&)obj));
   TAttMarker::Copy(((TH1&)obj));
   fXaxis.Copy(((TH1&)obj).fXaxis);
   fYaxis.Copy(((TH1&)obj).fYaxis);
   fZaxis.Copy(((TH1&)obj).fZaxis);
   fContour.Copy(((TH1&)obj).fContour);
   fSumw2.Copy(((TH1&)obj).fSumw2);
//   fFunctions->Copy(((TH1&)obj).fFunctions);
   gDirectory->Append(&obj);
//   ((TH1&)obj).AppendDirectory();
   ((TH1&)obj).fDirectory = gDirectory;
}

//______________________________________________________________________________
Int_t TH1::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to a line*-*-*-*-*-*
//*-*                  ===========================================
//*-*  Compute the closest distance of approach from point px,py to elements
//*-*  of an histogram.
//*-*  The distance is computed in pixels units.
//*-*
//*-*  Algorithm:
//*-*  Currently, this simple model computes the distance from the mouse
//*-*  to the histogram contour only.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   const Int_t big = 9999;
   const Int_t kMaxDiff = 7;

   Float_t x = gPad->AbsPixeltoX(px);

   Int_t puxmin = gPad->XtoAbsPixel(gPad->GetUxmin());
   Int_t puymin = gPad->YtoAbsPixel(gPad->GetUymin());
   Int_t puxmax = gPad->XtoAbsPixel(gPad->GetUxmax());
   Int_t puymax = gPad->YtoAbsPixel(gPad->GetUymax());

//*-*- return if point is not in the histogram area

//*-*- If a 3-D view exists, check distance to axis
   TView *view = gPad->GetView();
   Int_t d1,d2,d3;
   if (view) {
      Float_t ratio;
      d3 = view->GetDistancetoAxis(3, px, py, ratio);
      if (d3 <= kMaxDiff) {gPad->SetSelected(&fZaxis); return 0;}
      d1 = view->GetDistancetoAxis(1, px, py, ratio);
      if (d1 <= kMaxDiff) {gPad->SetSelected(&fXaxis); return 0;}
      d2 = view->GetDistancetoAxis(2, px, py, ratio);
      if (d2 <= kMaxDiff) {gPad->SetSelected(&fYaxis); return 0;}
      if ( px > puxmin && px < puxmax && py > puymax && py < puymin) return 0;
      return big;
   }
//*-*- check if point is close to an axis
   yaxis = GetYaxis();
   Int_t xyaxis = puxmin - Int_t((puxmax-puxmin)*yaxis->GetLabelOffset());
   Int_t dyaxis = Int_t(2*(puymin-puymax)*yaxis->GetLabelSize());
   if (px >= xyaxis-dyaxis && px <= xyaxis && py >puymax && py < puymin) {
      if (!strstr(gPad->GetPadPointer()->GetDrawOption(),"same")) {
         gPad->SetSelected(&fYaxis);
         return 0;
      }
   }
   xaxis = GetXaxis();
   Int_t yxaxis = puymin + Int_t((puymin-puymax)*xaxis->GetLabelOffset());
   if (yxaxis < puymin) yxaxis = puymin;
   Int_t dxaxis = Int_t((puymin-puymax)*xaxis->GetLabelSize());
   if (py <= yxaxis+dxaxis && py >= yxaxis && px <puxmax && px > puxmin) {
      if (!strstr(gPad->GetPadPointer()->GetDrawOption(),"same")) {
         gPad->SetSelected(&fXaxis);
         return 0;
       }
    }

//*-*- if object is 2-D or 3-D return this object
   if (GetDimension() == 2) {
      Int_t delta2 = 5; //Give a margin of delta2 pixels to be in the 2-d area
      if ( px > puxmin + delta2
        && px < puxmax - delta2
        && py > puymax + delta2
        && py < puymin - delta2) return 0;
   }

//*-*- point is inside histogram area. Find channel number
   Int_t bin      = fXaxis.FindBin(gPad->PadtoX(x));
   Float_t binval = GetBinContent(bin);
   Int_t pybin    = gPad->YtoAbsPixel(gPad->YtoPad(binval));
   if (TMath::Abs(py - pybin) <= kMaxDiff) return TMath::Abs(py - pybin);

//*-*- Loop on the list of associated functions and user objects
   TObject *f;
   TIter   next(fFunctions);
   while ((f = (TObject*) next())) {
      Int_t dist = f->DistancetoPrimitive(px,py);
      if (dist < kMaxDiff) {gPad->SetSelected(f); return dist;}
   }
   return big;
}

//______________________________________________________________________________
void TH1::Divide(TH1 *h1)
{
//*-*-*-*-*-*-*-*-*-*-*Divide this histogram by h1*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===========================
//
//   this = this/h1
//   if errors are defined (see TH1::Sumw2), errors are also recalculated.
//   Note that if h1 has Sumw2 set, Sumw2 is automatically called for this
//   if not already set.
//

   if (!h1) {
      Error("Divide","Attempt to divide a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()) {
      Error("Divide","Attempt to divide histograms with different number of bins");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Divide","Attempt to divide histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 has Sumw2 set
   if (fSumw2.fN == 0 && h1->GetSumw2N() != 0) Sumw2();

//*-*- Reset statistics
   fEntries = fTsumw   = fTsumw2 = fTsumwx = fTsumwx2 = 0;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t c0,c1,w,z,x;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = GetBin(binx,biny,binz);
            c0  = GetBinContent(bin);
            c1  = h1->GetBinContent(bin);
            if (c1) w = c0/c1;
            else    w = 0;
            SetBinContent(bin,w);
            z = TMath::Abs(w);
            x = fXaxis.GetBinCenter(binx);
            fEntries++;
            fTsumw   += z;
            fTsumw2  += z*z;
            fTsumwx  += z*x;
            fTsumwx2 += z*x*x;
            if (fSumw2.fN) {
               Double_t e0 = GetBinError(bin);
               Double_t e1 = h1->GetBinError(bin);
               Double_t c12= c1*c1;
               if (!c1) { fSumw2.fArray[bin] = 0; continue;}
               fSumw2.fArray[bin] = (e0*e0*c1*c1 + e1*e1*c0*c0)/(c12*c12);
            }
         }
      }
   }
}


//______________________________________________________________________________
void TH1::Divide(TH1 *h1, TH1 *h2, Float_t c1, Float_t c2, Option_t *option)
{
//*-*-*-*-*Replace contents of this histogram by the division of h1 by h2*-*-*
//*-*      ==============================================================
//
//   this = c1*h1/(c2*h2)
//
//   if errors are defined (see TH1::Sumw2), errors are also recalculated
//   Note that if h1 or h2 have Sumw2 set, Sumw2 is automatically called for this
//   if not already set.
//

   TString opt = option;
   opt.ToLower();
   Bool_t binomial = kFALSE;
   if (opt.Contains("b")) binomial = kTRUE;
   if (!h1 || !h2) {
      Error("Divide","Attempt to divide a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()
    || nbinsx != h2->GetNbinsX() || nbinsy != h2->GetNbinsY() || nbinsz != h2->GetNbinsZ()) {
      Error("Divide","Attempt to divide histograms with different number of bins");
      return;
   }
   if (!c2) {
      Error("Divide","Coefficient of dividing histogram cannot be zero");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Divide","Attempt to divide histograms with different axis limits");
   }
   if (GetXaxis()->GetXmin() != h2->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h2->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h2->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h2->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h2->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h2->GetZaxis()->GetXmax()) {
       Warning("Divide","Attempt to divide histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 or h2 have Sumw2 set
   if (fSumw2.fN == 0 && (h1->GetSumw2N() != 0 || h2->GetSumw2N() != 0)) Sumw2();

//*-*- Reset statistics
   fEntries = fTsumw   = fTsumw2 = fTsumwx = fTsumwx2 = 0;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t b1,b2,w,z,x,d1,d2;
   d1 = c1*c1;
   d2 = c2*c2;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            b1  = h1->GetBinContent(bin);
            b2  = h2->GetBinContent(bin);
            if (b2) w = c1*b1/(c2*b2);
            else    w = 0;
            SetBinContent(bin,w);
            z = TMath::Abs(w);
            x = fXaxis.GetBinCenter(binx);
            fEntries++;
            fTsumw   += z;
            fTsumw2  += z*z;
            fTsumwx  += z*x;
            fTsumwx2 += z*x*x;
            if (fSumw2.fN) {
               Double_t e1 = h1->GetBinError(bin);
               Double_t e2 = h2->GetBinError(bin);
               Double_t b22= b2*b2*d2;
               if (!b2) { fSumw2.fArray[bin] = 0; continue;}
               if (binomial) {
                  fSumw2.fArray[bin] = TMath::Abs(w*(1-w)/(c2*b2));
               } else {
                  fSumw2.fArray[bin] = d1*d2*(e1*e1*b2*b2 + e2*e2*b1*b1)/(b22*b22);
               }
            }
         }
      }
   }
}

//______________________________________________________________________________
void TH1::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this histogram with options*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================
//*-*
//*-*  This histogram is added in the list of objects to be drawn in the
//*-*  current pad.
//*-*  It is important to note that only a reference to this histogram is added.
//*-*  This means that if the histogram contents change between pad redraws,
//*-*  the current histogram contents will be shown.
//*-*  Use function DrawCopy to force a copy of the histogram at the time
//*-*  of the Draw operation in the Pad list.
//*-*
//*-*  The following options are supported on all types:
//*-*    "SAME"   : Superimpose on previous picture in the same pad
//*-*    "CYL"    : Use Cylindrical coordinates
//*-*    "POL"    : Use Polar coordinates
//*-*    "SPH"    : Use Spherical coordinates
//*-*    "PSR"    : Use PseudoRapidity/Phi coordinates
//*-*    "LEGO"   : Draw a lego plot with hidden line removal
//*-*    "LEGO1"  : Draw a lego plot with hidden surface removal
//*-*    "LEGO2"  : Draw a lego plot using colors to show the cell contents
//*-*    "SURF"   : Draw a surface plot with hidden line removal
//*-*    "SURF1"  : Draw a surface plot with hidden surface removal
//*-*    "SURF2"  : Draw a surface plot using colors to show the cell contents
//*-*    "SURF3"  : same as SURF with in addition a contour view drawn on the top
//*-*    "SURF4"  : Draw a surface using Gouraud shading
//*-*
//*-*  The following options are supported for 1-D types:
//*-*    "AH"     : Draw histogram, but not the axis labels and tick marks
//*-*    "B"      : Bar chart option
//*-*    "C"      : Draw a smooth Curve througth the histogram bins
//*-*    "E"      : Draw error bars
//*-*    "E0"     : Draw error bars including bins with o contents
//*-*    "E1"     : Draw error bars with perpendicular lines at the edges
//*-*    "E2"     : Draw error bars with rectangles
//*-*    "E3"     : Draw a fill area througth the end points of the vertical error bars
//*-*    "E4"     : Draw a smoothed filled area through the end points of the error bars
//*-*    "L"      : Draw a line througth the bin contents
//*-*    "P"      : Draw current marker at each bin
//*-*    "*H"     : Draw histogram with a * at each bin
//*-*
//*-*
//*-*  The following options are supported for 2-D types:
//*-*    "ARR"    : arrow mode. Shows gradient between adjacent cells
//*-*    "BOX"    : a box is drawn for each cell with surface proportional to contents
//*-*    "COL"    : a box is drawn for each cell with a color scale varying with contents
//*-*    "COLZ"   : same as "COL". In addition the color mapping is also drawn
//*-*    "CONT"   : Draw a contour plot (same as CONT3)
//*-*    "CONT0"  : Draw a contour plot using colors to distinguish contours
//*-*    "CONT1"  : Draw a contour plot using line styles to distinguish contours
//*-*    "CONT2"  : Draw a contour plot using the same line style for all contours
//*-*    "CONT3"  : Draw a contour plot using fill area colors
//*-*    "FB"     : With LEGO or SURFACE, suppress the Front-Box
//*-*    "BB"     : With LEGO or SURFACE, suppress the Back-Box
//*-*    "SCAT"   : Draw a scatter-plot (default)
//*-*
//*-*  Note that most options above can be concatenated, example:
//*-*  h-Draw("e1same");
//*-*  Options are case insensitive
//*-*
//*-*  Whe using the options "BOX", "COL" or "COLZ", the color palette used
//*-*  is the one defined in the current style (see TStyle::SetPalette)
//*-*
//*-*  When using the "CONT" or "SURF" or "LEGO" options, the number
//*-*  of contour levels can be changed via TH1::SetContour.
//*-*  (default is 20 equidistant levels)
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) {
      //the following statement is necessary in case one attempts to draw
      //a temporary histogram already in the current pad
      if (TestBit(kCanDelete)) gPad->GetListOfPrimitives()->Remove(this);
      gPad->Clear();
   }
   AppendPad(option);
}

//______________________________________________________________________________
TH1 *TH1::DrawCopy(Option_t *)
{
//*-*-*-*-*-*-*Copy this histogram and Draw in the current pad*-*-*-*-*-*-*-*
//*-*          ===============================================
//*-*
//*-*  Once the histogram is drawn into the pad, any further modification
//*-*  using graphics input will be made on the copy of the histogram,
//*-*  and not to the original object.
//*-*
//*-*  See Draw for the list of options
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   AbstractMethod("DrawCopy");
   return 0;
}

//______________________________________________________________________________
void TH1::DrawPanel()
{
//*-*-*-*-*-*-*Display a panel with all histogram drawing options*-*-*-*-*-*
//*-*          ==================================================
//*-*
//*-*   See class TDrawPanelHist for example

   gCurrentHist = this;
   if (gPad) {
      //TObject *pr = gPad->GetSelected();
      TObject *pr = 0;
      if (!pr) pr = this;
      //TVirtualPad *pad = gPad->GetSelectedPad();
      TVirtualPad *pad = 0;
      if (!pad) pad = gPad;
      gROOT->SetSelectedPrimitive(pr);
      gROOT->SetSelectedPad(pad);
   } else {
      Error("DrawPanel", "need to draw histogram first");
      return;
   }

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("drawpanelhist")) {
      char cmd[] = "TDrawPanelHist *drawpanelhist = new TDrawPanelHist(\"drawpanelhist\",\"Hist Draw Panel\",330,450);";
      gInterpreter->ProcessLine(cmd);
      return;
   }
   char cmdupd[] = "drawpanelhist->SetDefaults(); drawpanelhist->Show();";
   gInterpreter->ProcessLine(cmdupd);
}

//______________________________________________________________________________
void TH1::Eval(TF1 *f1, Option_t *option)
{
//*-*-*-*-*Evaluate function f1 at the center of bins of this histogram-*-*-*-*
//*-*      ============================================================
//*-*
//*-*  If option "R" is specified, the function is evaluated only
//*-*  for the bins included in the function range.
//*-*  If option "A" is specified, the value of the function is added to the
//*-*  existing bin contents
//*-*  If option "S" is specified, the value of the function is used to
//*-*  generate an integer value, distributed according to the Poisson
//*-*  distribution, with f1 as the mean.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Double_t x[3];
   Int_t stat,add,bin,binx,biny,binz,nbinsx, nbinsy, nbinsz;
   if (!f1) return;
   Double_t fu;
   TString opt = option;
   opt.ToLower();
   if (opt.Contains("a")) add  = 1;
   else                   add  = 0;
   if (opt.Contains("s")) stat = 1;
   else                   stat = 0;
   nbinsx  = fXaxis.GetNbins();
   nbinsy  = fYaxis.GetNbins();
   nbinsz  = fZaxis.GetNbins();

   for (binz=1;binz<=nbinsz;binz++) {
      x[2]  = fZaxis.GetBinCenter(binz);
      for (biny=1;biny<=nbinsy;biny++) {
         x[1]  = fYaxis.GetBinCenter(biny);
         for (binx=1;binx<=nbinsx;binx++) {
            bin = GetBin(binx,biny,binz);
            x[0]  = fXaxis.GetBinCenter(binx);
            fu = f1->Eval(x[0],x[1],x[2]);
            if (stat) fu = gRandom->Poisson(fu);
            if (add) AddBinContent(bin,fu);
            else     SetBinContent(bin,fu);
         }
      }
   }
}

//______________________________________________________________________________
void TH1::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//*-*  This member function is called when a histogram is clicked with the locator
//*-*
//*-*  If Left button clicked on the bin top value, then the content of this bin
//*-*  is modified according to the new position of the mouse when it is released.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   static Int_t bin, px1, py1, px2, py2, pyold;
   Float_t xlow, xup, ylow, binval, x, baroffset, barwidth, binwidth;

//*-*- come here if we have a lego/surface in the pad
   if (gPad->GetView()) {
      gPad->GetView()->ExecuteRotateView(event, px, py);
      return;
   }

   switch (event) {

   case kButton1Down:

      gGXW->SetLineColor(-1);
      TAttLine::Modify();

      // No break !!!

   case kMouseMotion:

      if (Hoption.Bar) {
         baroffset = GetBarOffset();
         barwidth  = GetBarWidth();
      } else {
         baroffset = 0;
         barwidth  = 1;
      }
      x        = gPad->AbsPixeltoX(px);
      bin      = fXaxis.FindBin(gPad->PadtoX(x));
      binwidth = GetBinWidth(bin);
      xlow     = gPad->XtoPad(GetBinLowEdge(bin) + baroffset*binwidth);
      xup      = gPad->XtoPad(xlow + barwidth*binwidth);
      ylow     = gPad->GetUymin();
      px1      = gPad->XtoAbsPixel(xlow);
      px2      = gPad->XtoAbsPixel(xup);
      py1      = gPad->YtoAbsPixel(ylow);
      py2      = py;
      pyold    = py;
      if (gROOT->GetEditHistograms()) gPad->SetCursor(kArrowVer);
      else                            gPad->SetCursor(kPointer);

      break;

   case kButton1Motion:

      if (gROOT->GetEditHistograms()) {
         gGXW->DrawBox(px1, py1, px2, py2,TGXW::kHollow);  //*-* Draw the old box
         py2 += py - pyold;
         gGXW->DrawBox(px1, py1, px2, py2,TGXW::kHollow);  //*-* Draw the new box
         pyold = py;
      }

      break;

   case kButton1Up:

      if (gROOT->GetEditHistograms()) {
         binval = gPad->PadtoY(gPad->AbsPixeltoY(py2));
         SetBinContent(bin,binval);
         PaintInit();   // recalculate Hparam structure and recalculate range
      }

      // might resize pad pixmap so should be called before any paint routine
      RecalculateRange();

      gPad->Modified(kTRUE);
      gGXW->SetLineColor(-1);

      break;

   case kButton1Locate:

      ExecuteEvent(kButton1Down, px, py);

      while (1) {
         px = py = 0;
         event = gGXW->RequestLocator(1, 1, px, py);

         ExecuteEvent(kButton1Motion, px, py);

         if (event != -1) {                     // button is released
            ExecuteEvent(kButton1Up, px, py);
            return;
         }
      }
   }
}

//______________________________________________________________________________
Int_t TH1::Fill(Axis_t x)
{
//*-*-*-*-*-*-*-*-*-*Increment bin with abscissa X by 1*-*-*-*-*-*-*-*-*-*-*
//*-*                ==================================
//*-*
//*-* if x is less than the low-edge of the first bin, the Underflow bin is incremented
//*-* if x is greater than the upper edge of last bin, the Overflow bin is incremented
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by 1 in the bin corresponding to x.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t bin;
   fEntries++;
   bin =fXaxis.FindBin(x);
   AddBinContent(bin);
   if (fSumw2.fN) ++fSumw2.fArray[bin];
   if (bin == 0 || bin > fXaxis.GetNbins()) return -1;
   ++fTsumw;
   ++fTsumw2;
   fTsumwx  += x;
   fTsumwx2 += x*x;
   return bin;
}

//______________________________________________________________________________
Int_t TH1::Fill(Axis_t x, Stat_t w)
{
//*-*-*-*-*-*-*-*Increment bin with abscissa X with a weight w*-*-*-*-*-*-*-*
//*-*            =============================================
//*-*
//*-* if x is less than the low-edge of the first bin, the Underflow bin is incremented
//*-* if x is greater than the upper edge of last bin, the Overflow bin is incremented
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by w^2 in the bin corresponding to x.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   //authorize calling this function for 2-d histograms. assume weight=1
   if (fDimension == 2) {
      return Fill12(x, w);
   }

   Int_t bin;
   fEntries++;
   bin =fXaxis.FindBin(x);
   AddBinContent(bin, w);
   if (fSumw2.fN) fSumw2.fArray[bin] += w*w;
   if (bin == 0 || bin > fXaxis.GetNbins()) return -1;
   Stat_t z= (w > 0 ? w : -w);
   fTsumw   += z;
   fTsumw2  += z*z;
   fTsumwx  += z*x;
   fTsumwx2 += z*x*x;
   return bin;
}

//______________________________________________________________________________
void TH1::FillN(Int_t ntimes, Axis_t *x, Double_t *w, Int_t stride)
{
//*-*-*-*-*-*-*-*Fill this histogram with an array x and weights w*-*-*-*-*
//*-*            =================================================
//*-*
//*-* ntimes:  number of entries in arrays x and w (array size must be ntimes*stride)
//*-* x:       array of values to be histogrammed
//*-* w:       array of weighs
//*-* stride:  step size through arrays x and w
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by w[i]^2 in the bin corresponding to x[i].
//*-* if w is NULL each entry is assumed a weight=1
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t bin,i;
   fEntries += ntimes;
   Double_t ww = 1;
   Int_t nbins   = fXaxis.GetNbins();
   ntimes *= stride;
   for (i=0;i<ntimes;i+=stride) {
      bin =fXaxis.FindBin(x[i]);
      if (w) ww = w[i];
      AddBinContent(bin, ww);
      if (fSumw2.fN) fSumw2.fArray[bin] += ww*ww;
      if (bin == 0 || bin > nbins) continue;
      Stat_t z= (ww > 0 ? ww : -ww);
      fTsumw   += z;
      fTsumw2  += z*z;
      fTsumwx  += z*x[i];
      fTsumwx2 += z*x[i]*x[i];
   }
}

//______________________________________________________________________________
Int_t TH1::Fill12(Axis_t x,Axis_t y)
{
//*-*-*-*-*-*-*-*-*-*-*Increment cell defined by x,y by 1*-*-*-*-*-*-*-*-*-*
//*-*                  ==================================
//*-*
//*-* if x or/and y is less than the low-edge of the corresponding axis first bin,
//*-*   the Underflow cell is incremented.
//*-* if x or/and y is greater than the upper edge of corresponding axis last bin,
//*-*   the Overflow cell is incremented.
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by 1in the cell corresponding to x,y.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t binx, biny, bin;
   fEntries++;
   binx = fXaxis.FindBin(x);
   biny = fYaxis.FindBin(y);
   bin  = biny*(fXaxis.GetNbins()+2) + binx;
   AddBinContent(bin);
   if (fSumw2.fN) ++fSumw2.fArray[bin];
   if (binx == 0 || binx > fXaxis.GetNbins()) return -1;
   if (biny == 0 || biny > fYaxis.GetNbins()) return -1;
   ++fTsumw;
   ++fTsumw2;
   fTsumwx  += x;
   fTsumwx2 += x*x;
   return bin;
}

//______________________________________________________________________________
Int_t TH1::Fill(Axis_t x, Axis_t y, Stat_t w)
{
//*-*-*-*-*-*-*-*-*-*-*Increment cell defined by x,y by a weight w*-*-*-*-*-*
//*-*                  ===========================================
//*-*
//*-* if x or/and y is less than the low-edge of the corresponding axis first bin,
//*-*   the Underflow cell is incremented.
//*-* if x or/and y is greater than the upper edge of corresponding axis last bin,
//*-*   the Overflow cell is incremented.
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by w^2 in the cell corresponding to x,y.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   //authorize calling this function for 3-d histograms. assume weight=1
   if (fDimension == 3) {
      return Fill(x, y, w, 1);
   }

   Int_t binx, biny, bin;
   fEntries++;
   binx = fXaxis.FindBin(x);
   biny = fYaxis.FindBin(y);
   bin  = biny*(fXaxis.GetNbins()+2) + binx;
   AddBinContent(bin,w);
   if (fSumw2.fN) fSumw2.fArray[bin] += w*w;
   if (binx == 0 || binx > fXaxis.GetNbins()) return -1;
   if (biny == 0 || biny > fYaxis.GetNbins()) return -1;
   Stat_t z= (w > 0 ? w : -w);
   fTsumw   += z;
   fTsumw2  += z*z;
   fTsumwx  += z*x;
   fTsumwx2 += z*x*x;
   return bin;
}

//______________________________________________________________________________
Int_t TH1::Fill(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
{
//*-*-*-*-*-*-*-*-*-*-*Increment cell defined by x,y,z by a weight w*-*-*-*-*
//*-*                  =============================================
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by w^2 in the cell corresponding to x,y,z.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t binx, biny, binz, bin;
   fEntries++;
   binx = fXaxis.FindBin(x);
   biny = fYaxis.FindBin(y);
   binz = fZaxis.FindBin(z);
   bin  =  binx + (fXaxis.GetNbins()+2)*(biny + (fYaxis.GetNbins()+2)*binz);
   AddBinContent(bin,w);
   if (fSumw2.fN) fSumw2.fArray[bin] += w*w;
   if (binx == 0 || binx > fXaxis.GetNbins()) return -1;
   if (biny == 0 || biny > fYaxis.GetNbins()) return -1;
   if (binz == 0 || binz > fZaxis.GetNbins()) return -1;
   return bin;
}

//______________________________________________________________________________
void TH1::FillN(Int_t ntimes, Axis_t *x, Axis_t *y, Double_t *w, Int_t stride)
{
//*-*-*-*-*-*-*Fill a 2-D histogram with an array of values and weights*-*-*-*
//*-*          ========================================================
//*-*
//*-* ntimes:  number of entries in arrays x and w (array size must be ntimes*stride)
//*-* x:       array of x values to be histogrammed
//*-* y:       array of y values to be histogrammed
//*-* w:       array of weights
//*-* stride:  step size through arrays x, y and w
//*-*
//*-* If the storage of the sum of squares of weights has been triggered,
//*-* via the function Sumw2, then the sum of the squares of weights is incremented
//*-* by w[i]^2 in the cell corresponding to x[i],y[i].
//*-* if w is NULL each entry is assumed a weight=1
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t binx, biny, bin, i;
   fEntries += ntimes;
   Double_t ww = 1;
   ntimes *= stride;
   for (i=0;i<ntimes;i+=stride) {
      binx = fXaxis.FindBin(x[i]);
      biny = fYaxis.FindBin(y[i]);
      bin  = biny*(fXaxis.GetNbins()+2) + binx;
      if (w) ww = w[i];
      AddBinContent(bin,ww);
      if (fSumw2.fN) fSumw2.fArray[bin] += ww*ww;
      if (binx == 0 || binx > fXaxis.GetNbins()) continue;
      if (biny == 0 || biny > fYaxis.GetNbins()) continue;
      Stat_t z= (ww > 0 ? ww : -ww);
      fTsumw   += z;
      fTsumw2  += z*z;
      fTsumwx  += z*x[i];
      fTsumwx2 += z*x[i]*x[i];
   }
}

//______________________________________________________________________________
void TH1::FillRandom(char *fname, Int_t ntimes)
{
//*-*-*-*-*-*-*Fill histogram following distribution in function fname*-*-*-*
//*-*          =======================================================
//*-*
//*-*   The distribution contained in the function fname (TF1) is integrated
//*-*   over the channel contents.
//*-*   It is normalized to 1.
//*-*   Getting one random number implies:
//*-*     - Generating a random number between 0 and 1 (say r1)
//*-*     - Look in which bin in the normalized integral r1 corresponds to
//*-*     - Fill histogram channel
//*-*   ntimes random numbers are generated
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*

   Int_t bin, binx, biny, binz, ibin, loop;
   Double_t r1, x, y,z, xv[3];
//*-*- Search for fname in the list of ROOT defined functions
   gF1 = gROOT->GetFunction(fname);
   if (!gF1) { Printf("Error Unknow function: %s",fname); return; }

//*-*- Allocate temporary space to store the integral and compute integral
   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   Int_t nxy    = nbinsx*nbinsy;
   Int_t nbins  = nxy*nbinsz;

   Double_t *integral = new Double_t[nbins+1];
   ibin = 0;
   integral[ibin] = 0;
   for (binz=1;binz<=nbinsz;binz++) {
      xv[2] = fZaxis.GetBinCenter(binz);
      for (biny=1;biny<=nbinsy;biny++) {
         xv[1] = fYaxis.GetBinCenter(biny);
         for (binx=1;binx<=nbinsx;binx++) {
            xv[0] = fXaxis.GetBinCenter(binx);
            ibin++;
            integral[ibin] = integral[ibin-1] + gF1->Eval(xv[0],xv[1],xv[2]);
         }
      }
   }

//*-*- Normalize integral to 1
   if (integral[nbins] == 0 ) {
      Printf(" Error in FillRandom, Integral = zero"); return;
   }
   for (bin=1;bin<=nbins;bin++)  integral[bin] /= integral[nbins];

//*-*--------------Start main loop ntimes
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   Bool_t profile = kFALSE;
   if (IsA() == TProfile::Class()) profile = kTRUE;
   for (loop=0;loop<ntimes;loop++) {
      r1 = gRandom->Rndm(loop);
      ibin = TMath::BinarySearch(nbins,&integral[0],r1);
      binz = ibin/nxy;
      biny = (ibin - nxy*binz)/nbinsx;
      binx = 1 + ibin - nbinsx*(biny + nbinsy*binz);
      if (nbinsz) binz++;
      if (nbinsy) biny++;
      x    = GetBinCenter(binx);
      y    = GetBinCenter(biny);
      z    = GetBinCenter(binz);
      if (fDimension == 1) {
         if (profile) Fill(x,y,1.);
         else         Fill(x, 1.);
      }
      else if (fDimension == 2) Fill(x,y, 1.);
      else if (fDimension == 3) Fill(x,y,z, 1.);
  }
  delete [] integral;
}

//______________________________________________________________________________
void TH1::FillRandom(TH1 *h, Int_t ntimes)
{
//*-*-*-*-*-*-*Fill histogram following distribution in histogram h*-*-*-*
//*-*          ====================================================
//*-*
//*-*   The distribution contained in the histogram h (TH1) is integrated
//*-*   over the channel contents.
//*-*   It is normalized to 1.
//*-*   Getting one random number implies:
//*-*     - Generating a random number between 0 and 1 (say r1)
//*-*     - Look in which bin in the normalized integral r1 corresponds to
//*-*     - Fill histogram channel
//*-*   ntimes random numbers are generated
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*

   if (!h) { Printf("Error Null histogram"); return; }
   if (fDimension != h->GetDimension()) {
      Printf("Error Histograms with different dimensions"); return;
   }

   if (h->ComputeIntegral() == 0) return;

   Int_t loop;
   Axis_t x,y,z;
   if (fDimension == 1) {
      for (loop=0;loop<ntimes;loop++) {
         x = h->GetRandom();
         Fill(x);
      }
   } else if (fDimension == 2) {
      for (loop=0;loop<ntimes;loop++) {
         h->GetRandom2(x,y);
         Fill(x,y,1.);
      }
   } else {
      for (loop=0;loop<ntimes;loop++) {
         h->GetRandom3(x,y,z);
         Fill(x,y,z,1.);
      }
   }
}

//______________________________________________________________________________
void TH1::Fit(const Text_t *fname ,Option_t *option ,Option_t *goption, Float_t xxmin, Float_t xxmax)
{
//*-*-*-*-*-*-*-*-*-*-*Fit histogram with function fname*-*-*-*-*-*-*-*-*-*-*
//*-*                  =================================
//*-*
//*-*   fname is the name of an already predefined function created by TF1 or TF2
//*-*   Predefined functions such as Gaus, Expo and Poln are automatically
//*-*   created by ROOT.
//*-*
//*-*   The list of fit options is given in parameter option.
//*-*      option = "W"  Set all errors to 1
//*-*             = "I" Use integral of function in bin instead of value at bin center
//*-*             = "L" Use Loglikelihood method (default is chisquare method)
//*-*             = "Q" Quiet mode (minimum printing)
//*-*             = "V" Verbose mode (default is between Q and V)
//*-*             = "E" Perform better Errors estimation using Minos technique
//*-*             = "R" Use the Range specified in the function range
//*-*             = "N" Do not store the graphics function, do not draw
//*-*             = "0" Do not plot the result of the fit. By default the fitted function
//*-*                   is drawn unless the option"N" above is specified.
//*-*             = "+" Add this new fitted function to the list of fitted functions
//*-*                   (by default, any previous function is deleted)
//*-*
//*-*   When the fit is drawn (by default), the parameter goption may be used
//*-*   to specify a list of graphics options. See TH1::Draw for a complete
//*-*   list of these options.
//*-*
//*-*   In order to use the Range option, one must first create a function
//*-*   with the expression to be fitted. For example, if your histogram
//*-*   has a defined range between -4 and 4 and you want to fit a gaussian
//*-*   only in the interval 1 to 3, you can do:
//*-*        TF1 *f1 = new TF1("f1","gaus",1,3);
//*-*        histo->Fit("f1","R");
//*-*
//*-*   You can specify boundary limits for some or all parameters via
//*-*        f1->SetParLimits(p_number, parmin, parmax);
//*-*   if parmin>=parmax, the parameter is fixed
//*-*   Note that you are not forced to fix the limits for all parameters.
//*-*   For example, if you fit a function with 6 parameters, you can do:
//*-*     func->SetParameters(0,3.1,1.e-6,0.1,-8,100);
//*-*     func->SetParLimits(4,-10,-4);
//*-*     func->SetParLimits(5, 1,1);
//*-*   With this setup, parameters 0->3 can vary freely
//*-*   Parameter 4 has boundaries [-10,-4] with initial value -8
//*-*   Parameter 5 is fixed to 100.
//*-*
//*-*   Note that option "I" gives better results but is slower.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Int_t i, ierf, npar,nvpar,nparx,icstat;
   Double_t par, we, al, bl;
   Double_t eplus,eminus,eparab,globcc,amin,edm,errdef,werr;
   Double_t params[100];
   TF1 *fnew1;
   TF2 *fnew2;
   TF3 *fnew3;

   Double_t *arglist = new Double_t[100];
   xfirst  = fXaxis.GetFirst();
   xlast   = fXaxis.GetLast();
   binwidx = fXaxis.GetBinWidth(xlast);
   xmin    = fXaxis.GetBinLowEdge(xfirst);
   xmax    = fXaxis.GetBinLowEdge(xlast) +binwidx;
   yfirst  = fYaxis.GetFirst();
   ylast   = fYaxis.GetLast();
   binwidy = fYaxis.GetBinWidth(ylast);
   ymin    = fYaxis.GetBinLowEdge(yfirst);
   ymax    = fYaxis.GetBinLowEdge(ylast) +binwidy;
   zfirst  = fZaxis.GetFirst();
   zlast   = fZaxis.GetLast();
   binwidz = fZaxis.GetBinWidth(zlast);
   zmin    = fZaxis.GetBinLowEdge(zfirst);
   zmax    = fZaxis.GetBinLowEdge(zlast) +binwidz;
   xaxis   = &fXaxis;
   yaxis   = &fYaxis;
   zaxis   = &fZaxis;
   gCurrentHist = this;

//*-*- Check if Minuit is initialized and create special functions
   if (!gMinuit) gMinuit = new TMinuit(25);
   gMinuit->mncler();
   gMinuit->SetObjectFit(this);

//*-*- Get pointer to the function by searching in the list of functions in ROOT
   gF1 = gROOT->GetFunction(fname);
   if (!gF1) { Printf("Unknown function: %s",fname); return; }
   npar = gF1->GetNpar();
   if (npar <=0) { Printf("Illegal number of parameters = %d",npar); return; }

//*-*- Check that function has same dimension as histogram
   if (gF1->GetNdim() == 1 && GetDimension() > 1) {
      Printf("Error function %s is not 2-D",fname); return; }
   if (gF1->GetNdim() == 2 && GetDimension() < 2) {
      Printf("Error function %s is not 1-D",fname); return; }
   if (xxmin != xxmax) gF1->SetRange(xxmin,ymin,zmin,xxmax,ymax,zmax);

//*-*- Decode list of options into Foption
   if (!FitOptionsMake(option)) return;
   if (xxmin != xxmax) {
      gF1->SetRange(xxmin,ymin,zmin,xxmax,ymax,zmax);
      Foption.Range = 1;
   }
//*-*- Is a Fit range specified?
   Float_t fxmin, fymin, fzmin, fxmax, fymax, fzmax;
   if (Foption.Range) {
      gF1->GetRange(fxmin, fymin, fzmin, fxmax, fymax, fzmax);
      if (fxmin > xmin) xmin = fxmin;
      if (fymin > ymin) ymin = fymin;
      if (fzmin > zmin) zmin = fzmin;
      if (fxmax < xmax) xmax = fxmax;
      if (fymax < ymax) ymax = fymax;
      if (fzmax < zmax) zmax = fzmax;
      xfirst = fXaxis.FindBin(xmin); if (xfirst < 1) xfirst = 1;
      xlast  = fXaxis.FindBin(xmax); if (xlast > fXaxis.GetLast()) xlast = fXaxis.GetLast();
      yfirst = fYaxis.FindBin(ymin); if (yfirst < 1) yfirst = 1;
      ylast  = fYaxis.FindBin(ymax); if (ylast > fYaxis.GetLast()) ylast = fYaxis.GetLast();
      zfirst = fZaxis.FindBin(zmin); if (zfirst < 1) zfirst = 1;
      zlast  = fZaxis.FindBin(zmax); if (zlast > fZaxis.GetLast()) zlast = fZaxis.GetLast();
   } else {
      gF1->SetRange(xmin,ymin,zmin,xmax,ymax,zmax);
   }

//*-*- If case of a predefined function, then compute initial values of parameters
   Int_t special = gF1->GetNumber();
   if      (special == 100)      H1InitGaus();
   else if (special == 400)      H1InitGaus();
   else if (special == 200)      H1InitExpo();
   else if (special == 299+npar) H1InitPolynom();

//*-*- Some initialisations
   if (!Foption.Verbose) {
      arglist[0] = -1;
      gMinuit->mnexcm("SET PRINT", arglist,1,ierf);
      arglist[0] = 0;
      gMinuit->mnexcm("SET NOW",   arglist,0,ierf);
   }

//*-*- Set error criterion for chisquare or likelihood methods
//*-*-  MINUIT ERRDEF should not be set to 0.5 in case of loglikelihood fit.
//*-*-  because the FCN is already multiplied by 2 in H1FitLikelihood
   if (!Foption.Like) {
      arglist[0] = 1;
      gMinuit->SetFCN(H1FitChisquare);
   } else {
      arglist[0] = 1;
      gMinuit->SetFCN(H1FitLikelihood);
   }
   gMinuit->mnexcm("SET ERR",arglist,1,ierf);

//*-*- Transfer names and initial values of parameters to Minuit
   Int_t nfixed = 0;
   for (i=0;i<npar;i++) {
      par = gF1->GetParameter(i);
      gF1->GetParLimits(i,al,bl);
      if (al*bl != 0 && al >= bl) {
         al = bl = 0;
         arglist[nfixed] = i+1;
         nfixed++;
      }
      we = 0.1*TMath::Abs(bl-al);
      if (we == 0) we = 0.3*TMath::Abs(par);
      if (we == 0) we = binwidx;
      gMinuit->mnparm(i,gF1->GetParName(i),par,we,al,bl,ierf);
   }
   if(nfixed > 0)gMinuit->mnexcm("FIX",arglist,nfixed,ierf); // Otto

//*-*- Set Gradient
   if (Foption.Gradient) {
      if (Foption.Gradient == 1) arglist[0] = 1;
      else                       arglist[0] = 0;
      gMinuit->mnexcm("SET GRAD",arglist,1,ierf);
   }

//*-*- Reset Print level
   if (Foption.Verbose) {
      arglist[0] = 0; gMinuit->mnexcm("SET PRINT", arglist,1,ierf);
   }

//*-*- Perform minimization
   arglist[0] = gMinuit->GetMaxIterations();
   arglist[1] = 1; //epsilon
   gMinuit->mnexcm("MIGRAD",arglist,2,ierf);
   if (Foption.Errors) {
      gMinuit->mnexcm("HESSE",arglist,0,ierf);
      gMinuit->mnexcm("MINOS",arglist,0,ierf);
   }

//*-*- Get return status
   for (i=0;i<npar;i++) {
      gMinuit->mnpout(i,gF1->GetParName(i), par,we,al,bl,ierf);
      if (Foption.Errors) werr = we;
      else {
         gMinuit->mnerrs(i,eplus,eminus,eparab,globcc);
         if (eplus > 0 && eminus < 0) werr = 0.5*(eplus-eminus);
         else                         werr = we;
      }
      params[i] = par;
      gF1->SetParameter(i,par);
      gF1->SetParError(i,werr);
   }
   gMinuit->mnstat(amin,edm,errdef,nvpar,nparx,icstat);

//*-*- Print final values of parameters.
   if (!Foption.Quiet) {
      if (Foption.Errors) gMinuit->mnprin(4,amin);
      else                gMinuit->mnprin(3,amin);
   }
   delete [] arglist;

//*-*  If Log Likelihood, compute an equivalent chisquare
   if (Foption.Like) H1FitChisquare(npar, params, amin, params, 1);

   gF1->SetChisquare(amin);

//*-*- Store fitted function in histogram functions list and draw
   if (!Foption.Nostore) {
      if (!Foption.Plus) fFunctions->Delete();
      if (GetDimension() < 2) {
         fnew1 = new TF1();
         gF1->Copy(*fnew1);
         fFunctions->Add(fnew1);
         fnew1->SetParent(this);
         fnew1->Save(xmin,xmax);
      } else if (GetDimension() < 3) {
         fnew2 = new TF2();
         gF1->Copy(*fnew2);
         fFunctions->Add(fnew2);
         fnew2->SetParent(this);
      } else {
         fnew3 = new TF3();
         gF1->Copy(*fnew3);
         fFunctions->Add(fnew3);
         fnew3->SetParent(this);
      }
      if (TestBit(kCanDelete)) return;
      if (!Foption.Nograph && GetDimension() < 3) Draw(goption);
   }
}

//______________________________________________________________________________
void TH1::FitPanel()
{
//*-*-*-*-*-*-*Display a panel with all histogram fit options*-*-*-*-*-*
//*-*          ==============================================
//*-*
//*-*   See class TFitPanel for example

   gCurrentHist = this;
   if (gPad) {
      //TObject *pr = gPad->GetSelected();
      TObject *pr = 0;
      if (!pr) pr = this;
      //TVirtualPad *pad = gPad->GetSelectedPad();
      TVirtualPad *pad = 0;
      if (!pad) pad = gPad;
      gROOT->SetSelectedPrimitive(pr);
      gROOT->SetSelectedPad(pad);
   } else {
      Error("FitPanel", "need to draw histogram first");
      return;
   }

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("fitpanel")) {
      char cmd[] = "TFitPanel *fitpanel = new TFitPanel(\"fitpanel\",\"Fit Panel\",300,400);";
      gInterpreter->ProcessLine(cmd);
      return;
   }
   char cmdupd[] = "fitpanel->SetDefaults(); fitpanel->Show();";
   gInterpreter->ProcessLine(cmdupd);
}

//______________________________________________________________________________
void TH1::FitSlicesX(TF1 *f1, Int_t binmin, Int_t binmax, Int_t cut, Option_t *option)
{
// Project slices along X in case of a 2-D histogram, then fit each slice
// with function f1 and make a histogram for each fit parameter
// Only bins along Y between binmin and binmax are considered.
// if f1=0, a gaussian is assumed
// Before invoking this function, one can set a subrange to be fitted along X
// via f1->SetRange(xmin,xmax)
// The argument option (default="QNR") can be used to change the fit options.
//     "Q" means Quiet mode
//     "N" means do not show the result of the fit
//     "R" means fit the function in the specified function range
//
// Note that the generated histograms are added to the list of objects
// in the current directory. It is the user's responsability to delete
// these histograms.
//
//  Example: Assume a 2-d histogram h2
//   Root > h2->FitSlicesX(); produces 4 TH1D histograms
//          with h2_0 containing parameter 0(Constant) for a Gaus fit
//                    of each bin in Y projected along X
//          with h2_1 containing parameter 1(Mean) for a gaus fit
//          with h2_2 containing parameter 2(RMS)  for a gaus fit
//          with h2_chi2 containing the chisquare/number of degrees of freedom for a gaus fit
//
//   Root > h2->FitSlicesX(0,15,22,10);
//          same as above, but only for bins 15 to 22 along Y
//          and only for bins in Y for which the corresponding projection
//          along X has more than cut bins filled.
//

   //only valid for 2-D histogram
   if (fDimension != 2) {
      printf("Error in FitSlicesX: Function only valid for 2-D histograms");
      return;
   }

   Int_t nbins  = fYaxis.GetNbins();
   if (binmin < 1) binmin = 1;
   if (binmax > nbins) binmax = nbins;
   if (binmax < binmin) {binmin = 1; binmax = nbins;}

   //default is to fit with a gaussian
   if (f1 == 0) {
      f1 = gROOT->GetFunction("gaus");
      if (f1 == 0) f1 = new TF1("gaus","gaus",fXaxis.GetXmin(),fXaxis.GetXmax());
      else         f1->SetRange(fXaxis.GetXmin(),fXaxis.GetXmax());
   }
   const char *fname = f1->GetName();
   Int_t npar = f1->GetNpar();
   Double_t *parsave = new Double_t[npar];
   f1->GetParameters(parsave);

   //Create one histogram for each function parameter
   Int_t ipar;
   char name[80], title[80];
   TH1D *hlist[25];
   for (ipar=0;ipar<npar;ipar++) {
      sprintf(name,"%s_%d",GetName(),ipar);
      sprintf(title,"Fitted value of par[%d]=%s",ipar,f1->GetParName(ipar));
      hlist[ipar] = new TH1D(name,title, nbins, fYaxis.GetXmin(), fYaxis.GetXmax());
   }
   sprintf(name,"%s_chi2",GetName());
   TH1D *hchi2 = new TH1D(name,"chisquare", nbins, fYaxis.GetXmin(), fYaxis.GetXmax());

   //Loop on all bins in Y, generate a projection along X
   Int_t bin;
   Int_t nentries;
   for (bin=binmin;bin<=binmax;bin++) {
      TH1D *hpx = ProjectionX("_temp",bin,bin,"e");
      if (hpx == 0) continue;
      nentries = Int_t(hpx->GetEntries());
      if (nentries == 0 || nentries < cut) {delete hpx; continue;}
      f1->SetParameters(parsave);
      hpx->Fit(fname,option);
      Int_t npfits = f1->GetNumberFitPoints();
      if (npfits > npar && npfits >= cut) {
         for (ipar=0;ipar<npar;ipar++) {
            hlist[ipar]->Fill(GetBinCenter(bin),f1->GetParameter(ipar));
            hlist[ipar]->SetBinError(bin,f1->GetParError(ipar));
         }
         hchi2->Fill(GetBinCenter(bin),f1->GetChisquare()/(npfits-npar));
      }
      delete hpx;
   }
   delete [] parsave;
}

//______________________________________________________________________________
void TH1::FitSlicesY(TF1 *f1, Int_t binmin, Int_t binmax, Int_t cut, Option_t *option)
{
// Project slices along Y in case of a 2-D histogram, then fit each slice
// with function f1 and make a histogram for each fit parameter
// Only bins along X between binmin and binmax are considered.
// if f1=0, a gaussian is assumed
// Before invoking this function, one can set a subrange to be fitted along Y
// via f1->SetRange(ymin,ymax)
// The argument option (default="QNR") can be used to change the fit options.
//     "Q" means Quiet mode
//     "N" means do not show the result of the fit
//     "R" means fit the function in the specified function range
//
// Note that the generated histograms are added to the list of objects
// in the current directory. It is the user's responsability to delete
// these histograms.
//
//  Example: Assume a 2-d histogram h2
//   Root > h2->FitSlicesY(); produces 4 TH1D histograms
//          with h2_0 containing parameter 0(Constant) for a Gaus fit
//                    of each bin in X projected along Y
//          with h2_1 containing parameter 1(Mean) for a gaus fit
//          with h2_2 containing parameter 2(RMS)  for a gaus fit
//          with h2_chi2 containing the chisquare/number of degrees of freedom for a gaus fit
//
//   Root > h2->FitSlicesY(0,15,22,10);
//          same as above, but only for bins 15 to 22 along X
//          and only for bins in X for which the corresponding projection
//          along Y has more than cut bins filled.
//
// A complete example of this function is given in begin_html <a href="examples/fitslicesy.C.html">tutorial:fitslicesy.C</a> end_html
// with the following output:
//Begin_Html
/*
<img src="gif/fitslicesy.gif">
*/
//End_Html

   //only valid for 2-D histogram
   if (fDimension != 2) {
      printf("Error in FitSlicesY: Function only valid for 2-D histograms");
      return;
   }

   Int_t nbins  = fXaxis.GetNbins();
   if (binmin < 1) binmin = 1;
   if (binmax > nbins) binmax = nbins;
   if (binmax < binmin) {binmin = 1; binmax = nbins;}

   //default is to fit with a gaussian
   if (f1 == 0) {
      f1 = gROOT->GetFunction("gaus");
      if (f1 == 0) f1 = new TF1("gaus","gaus",fYaxis.GetXmin(),fYaxis.GetXmax());
      else         f1->SetRange(fYaxis.GetXmin(),fYaxis.GetXmax());
   }
   const char *fname = f1->GetName();
   Int_t npar = f1->GetNpar();
   Double_t *parsave = new Double_t[npar];
   f1->GetParameters(parsave);

   //Create one histogram for each function parameter
   Int_t ipar;
   char name[80], title[80];
   TH1D *hlist[25];
   for (ipar=0;ipar<npar;ipar++) {
      sprintf(name,"%s_%d",GetName(),ipar);
      sprintf(title,"Fitted value of par[%d]=%s",ipar,f1->GetParName(ipar));
      hlist[ipar] = new TH1D(name,title, nbins, fXaxis.GetXmin(), fXaxis.GetXmax());
   }
   sprintf(name,"%s_chi2",GetName());
   TH1D *hchi2 = new TH1D(name,"chisquare", nbins, fXaxis.GetXmin(), fXaxis.GetXmax());

   //Loop on all bins in X, generate a projection along Y
   Int_t bin;
   Int_t nentries;
   for (bin=binmin;bin<=binmax;bin++) {
      TH1D *hpy = ProjectionY("_temp",bin,bin,"e");
      if (hpy == 0) continue;
      nentries = Int_t(hpy->GetEntries());
      if (nentries == 0 || nentries < cut) {delete hpy; continue;}
      f1->SetParameters(parsave);
      hpy->Fit(fname,option);
      Int_t npfits = f1->GetNumberFitPoints();
      if (npfits > npar && npfits >= cut) {
         for (ipar=0;ipar<npar;ipar++) {
            hlist[ipar]->Fill(GetBinCenter(bin),f1->GetParameter(ipar));
            hlist[ipar]->SetBinError(bin,f1->GetParError(ipar));
         }
         hchi2->Fill(GetBinCenter(bin),f1->GetChisquare()/(npfits-npar));
      }
      delete hpy;
   }
   delete [] parsave;
}

//______________________________________________________________________________
void TH1::FitSlicesZ(TF1 *f1, Int_t binminx, Int_t binmaxx, Int_t binminy, Int_t binmaxy, Int_t cut, Option_t *option)
{
// Project slices along Z in case of a 3-D histogram, then fit each slice
// with function f1 and make a 2-d histogram for each fit parameter
// Only cells in the bin range [binminx,binmaxx] and [binminy,binmaxy] are considered.
// if f1=0, a gaussian is assumed
// Before invoking this function, one can set a subrange to be fitted along Z
// via f1->SetRange(zmin,zmax)
// The argument option (default="QNR") can be used to change the fit options.
//     "Q" means Quiet mode
//     "N" means do not show the result of the fit
//     "R" means fit the function in the specified function range
//
//
//  Example: Assume a 3-d histogram h3
//   Root > h3->FitSlicesZ(); produces 4 TH2D histograms
//          with h3_0 containing parameter 0(Constant) for a Gaus fit
//                    of each cell in X,Y projected along Z
//          with h3_1 containing parameter 1(Mean) for a gaus fit
//          with h3_2 containing parameter 2(RMS)  for a gaus fit
//          with h3_chi2 containing the chisquare/number of degrees of freedom for a gaus fit
//
//   Root > h3->Fit(0,15,22,0,0,10);
//          same as above, but only for bins 15 to 22 along X
//          and only for cells in X,Y for which the corresponding projection
//          along Z has more than cut bins filled.

   //only valid for 3-D histogram
   if (fDimension != 3) {
      printf("Error in FitSlicesZ: Function only valid for 3-D histograms");
      return;
   }

   Int_t nbinsx  = fXaxis.GetNbins();
   Int_t nbinsy  = fYaxis.GetNbins();
   Int_t nbinsz  = fZaxis.GetNbins();
   if (binminx < 1) binminx = 1;
   if (binmaxx > nbinsx) binmaxx = nbinsx;
   if (binmaxx < binminx) {binminx = 1; binmaxx = nbinsx;}
   if (binminy < 1) binminy = 1;
   if (binmaxy > nbinsy) binmaxy = nbinsy;
   if (binmaxy < binminy) {binminy = 1; binmaxy = nbinsy;}

   //default is to fit with a gaussian
   if (f1 == 0) {
      f1 = gROOT->GetFunction("gaus");
      if (f1 == 0) f1 = new TF1("gaus","gaus",fZaxis.GetXmin(),fZaxis.GetXmax());
      else         f1->SetRange(fZaxis.GetXmin(),fZaxis.GetXmax());
   }
   const char *fname = f1->GetName();
   Int_t npar = f1->GetNpar();
   Double_t *parsave = new Double_t[npar];
   f1->GetParameters(parsave);

   //Create one 2-d histogram for each function parameter
   Int_t ipar;
   char name[80], title[80];
   TH2D *hlist[25];
   for (ipar=0;ipar<npar;ipar++) {
      sprintf(name,"%s_%d",GetName(),ipar);
      sprintf(title,"Fitted value of par[%d]=%s",ipar,f1->GetParName(ipar));
      hlist[ipar] = new TH2D(name,title, nbinsx, fXaxis.GetXmin(), fXaxis.GetXmax()
                                       , nbinsy, fYaxis.GetXmin(), fYaxis.GetXmax());
   }
   sprintf(name,"%s_chi2",GetName());
   TH2D *hchi2 = new TH2D(name,"chisquare", nbinsx, fXaxis.GetXmin(), fXaxis.GetXmax()
                                          , nbinsy, fYaxis.GetXmin(), fYaxis.GetXmax());

   //Loop on all cells in X,Y generate a projection along Z
   TH1D *hpz = new TH1D("R_temp","_temp",nbinsz, fZaxis.GetXmin(), fZaxis.GetXmax());
   Int_t bin,binx,biny,binz;
   for (biny=binminy;biny<=binmaxy;biny++) {
      Float_t y = fYaxis.GetBinCenter(biny);
      for (binx=binminx;binx<=binmaxx;binx++) {
         Float_t x = fXaxis.GetBinCenter(binx);
         hpz->Reset();
         Int_t nfill = 0;
         for (binz=1;binz<=nbinsz;binz++) {
            bin = GetBin(binx,biny,binz);
            Float_t w = GetBinContent(bin);
            if (w == 0) continue;
            hpz->Fill(fZaxis.GetBinCenter(binz),w);
            hpz->SetBinError(binz,GetBinError(bin));
            nfill++;
         }
         if (nfill < cut) continue;
         f1->SetParameters(parsave);
         hpz->Fit(fname,option);
         Int_t npfits = f1->GetNumberFitPoints();
         if (npfits > npar && npfits >= cut) {
            for (ipar=0;ipar<npar;ipar++) {
               hlist[ipar]->Fill(x,y,f1->GetParameter(ipar));
               hlist[ipar]->SetCellError(binx,biny,f1->GetParError(ipar));
            }
            hchi2->Fill(x,y,f1->GetChisquare()/(npfits-npar));
         }
      }
   }
   delete [] parsave;
   delete hpz;
}

//______________________________________________________________________________
Text_t *TH1::GetObjectInfo(Int_t px, Int_t py)
{
//   Redefines TObject::GetObjectInfo.
//   Displays the histogram info (bin number, contents, integral up to bin
//   corresponding to cursor position px,py
//
   if (!gPad) return "";
   static char info[64];
   Float_t x = gPad->PadtoX(gPad->AbsPixeltoX(px));
   Float_t y = gPad->PadtoY(gPad->AbsPixeltoY(py));
   const char *drawOption = GetDrawOption();
   Float_t xmin, xmax, uxmin,uxmax;
   Float_t ymin, ymax, uymin,uymax;
   if (GetDimension() == 2) {
      if (gPad->GetView() || strncmp(drawOption,"cont",4) == 0
                          || strncmp(drawOption,"CONT",4) == 0) {
         uxmin=gPad->GetUxmin();
         uxmax=gPad->GetUxmax();
         xmin = fXaxis.GetBinLowEdge(fXaxis.GetFirst());
         xmax = fXaxis.GetBinUpEdge(fXaxis.GetLast());
         x = xmin +(xmax-xmin)*(x-uxmin)/(uxmax-uxmin);
         uymin=gPad->GetUymin();
         uymax=gPad->GetUymax();
         ymin = fYaxis.GetBinLowEdge(fYaxis.GetFirst());
         ymax = fYaxis.GetBinUpEdge(fYaxis.GetLast());
         y = ymin +(ymax-ymin)*(y-uymin)/(uymax-uymin);
      }
   }
   Int_t binx,biny,binmin;
   binx   = fXaxis.FindBin(x);
   binmin = fXaxis.GetFirst();
   if (GetDimension() == 1) {
      Double_t integ = 0;
      for (Int_t bin=binmin;bin<=binx;bin++) {integ += GetBinContent(bin);}
      sprintf(info,"(x=%g, y=%g, binx=%d, binc=%g, Sum=%g)",x,y,binx,GetBinContent(binx),integ);
   } else {
      biny = fYaxis.FindBin(y);
      sprintf(info,"(x=%g, y=%g, binx=%d, biny=%d, binc=%g)",x,y,binx,biny,GetCellContent(binx,biny));
   }
   return info;
}

//______________________________________________________________________________
Int_t TH1::MakeChopt(Option_t *choptin)
{
//*-*-*-*-*-*-*-*-*Decode string chopt and fill Hoption structure*-*-*-*-*-*-*
//*-*              ==============================================

   char *l;
   static char chopt[33];
   Int_t nch = strlen(choptin);
   for (Int_t i=0;i<nch;i++) chopt[i] = toupper(choptin[i]);
   chopt[nch] = 0;

   Hoption.Axis = Hoption.Bar    = Hoption.Curve   = Hoption.Error = 0;
   Hoption.Hist = Hoption.Line   = Hoption.Mark    = Hoption.Fill  = 0;
   Hoption.Same = Hoption.Func   = Hoption.Plus    = Hoption.Scat  = 0;
   Hoption.Star = Hoption.Arrow  = Hoption.Box     = Hoption.Text  = 0;
   Hoption.Char = Hoption.Color  = Hoption.Contour = Hoption.Logx  = 0;
   Hoption.Logy = Hoption.Logz   = Hoption.Lego    = Hoption.Surf  = 0;

//*-* special 2-D options
   Hoption.Zscale      = 0;
   Hoption.FrontBox    = 1;
   Hoption.BackBox     = 1;
   Hoption.System      = kCARTESIAN;

   if (GetDimension() > 1) Hoption.Scat = 1;
   if (!nch) Hoption.Hist = 1;
   if (fSumw2.fN) Hoption.Error = 1;
   if (GetListOfFunctions()->First()) Hoption.Func = 2;
   if (fSumw2.fN) Hoption.Error = 2;

   l = strstr(chopt,"SAME");
   if (l) {
      if (nch == 4) Hoption.Hist = 1;
      Hoption.Same = 1;
      strncpy(l,"    ",4);
   }

   l = strstr(chopt,"LEGO");
   if (l) {
      Hoption.Scat = 0;
      Hoption.Lego = 1; strncpy(l,"    ",4);
      if (l[4] == '1') { Hoption.Lego = 11; l[4] = ' '; }
      if (l[4] == '2') { Hoption.Lego = 12; l[4] = ' '; }
      l = strstr(chopt,"FB");   if (l) { Hoption.FrontBox = 0; strncpy(l,"  ",2); }
      l = strstr(chopt,"BB");   if (l) { Hoption.BackBox = 0;  strncpy(l,"  ",2); }
   }
   l = strstr(chopt,"SURF");
   if (l) {
      Hoption.Scat = 0;
      Hoption.Surf = 1; strncpy(l,"    ",4);
      if (l[4] == '1') { Hoption.Surf = 11; l[4] = ' '; }
      if (l[4] == '2') { Hoption.Surf = 12; l[4] = ' '; }
      if (l[4] == '3') { Hoption.Surf = 13; l[4] = ' '; }
      if (l[4] == '4') { Hoption.Surf = 14; l[4] = ' '; }
      l = strstr(chopt,"FB");   if (l) { Hoption.FrontBox = 0; strncpy(l,"  ",2); }
      l = strstr(chopt,"BB");   if (l) { Hoption.BackBox = 0;  strncpy(l,"  ",2); }
   }
   l = strstr(chopt,"CONT");
   if (l) {
      Hoption.Scat = 0;
      Hoption.Contour = 1; strncpy(l,"    ",4);
      if (l[4] == '1') { Hoption.Contour = 11; l[4] = ' '; }
      if (l[4] == '2') { Hoption.Contour = 12; l[4] = ' '; }
      if (l[4] == '3') { Hoption.Contour = 13; l[4] = ' '; }
   }
   l = strstr(chopt,"+-");   if (l) { Hoption.Plus = 2; strncpy(l,"  ",2); }
   l = strstr(chopt,"-+");   if (l) { Hoption.Plus = 2; strncpy(l,"  ",2); }

   l = strstr(chopt,"ARR" ); if (l) { Hoption.Arrow  = 1; strncpy(l,"   ", 3); Hoption.Scat = 0; }
   l = strstr(chopt,"BOX" ); if (l) { Hoption.Box    = 1; strncpy(l,"   ", 3); Hoption.Scat = 0; }
   l = strstr(chopt,"COLZ"); if (l) { Hoption.Color  = 2; strncpy(l,"   ", 4); Hoption.Scat = 0; }
   l = strstr(chopt,"COL" ); if (l) { Hoption.Color  = 1; strncpy(l,"   ", 3); Hoption.Scat = 0; }
   l = strstr(chopt,"CHAR"); if (l) { Hoption.Char   = 1; strncpy(l,"    ",4); Hoption.Scat = 0; }
   l = strstr(chopt,"FUNC"); if (l) { Hoption.Func   = 2; strncpy(l,"    ",4); Hoption.Hist = 0; }
   l = strstr(chopt,"HIST"); if (l) { Hoption.Hist   = 2; strncpy(l,"    ",4); Hoption.Func = 0; Hoption.Error = 0;}
   l = strstr(chopt,"SCAT"); if (l) { Hoption.Scat   = 1; strncpy(l,"    ",4); }
   l = strstr(chopt,"TEXT"); if (l) { Hoption.Text   = 1; strncpy(l,"    ",4); Hoption.Scat = 0; }
   l = strstr(chopt,"POL");  if (l) { Hoption.System = kPOLAR;       strncpy(l,"   ",3); }
   l = strstr(chopt,"CYL");  if (l) { Hoption.System = kCYLINDRICAL; strncpy(l,"   ",3); }
   l = strstr(chopt,"SPH");  if (l) { Hoption.System = kSPHERICAL;   strncpy(l,"   ",3); }
   l = strstr(chopt,"PSR");  if (l) { Hoption.System = kRAPIDITY;    strncpy(l,"   ",3); }

   if (strstr(chopt,"A")) Hoption.Axis =1;
   if (strstr(chopt,"B")) Hoption.Bar  =1;
   if (strstr(chopt,"C")) { Hoption.Curve =1; Hoption.Hist = -1;}
   if (strstr(chopt,"E")) Hoption.Error =1;
   if (strstr(chopt,"F")) Hoption.Fill =1;
   if (strstr(chopt,"L")) { Hoption.Line =1; Hoption.Hist = -1;}
   if (strstr(chopt,"P")) { Hoption.Mark =1; Hoption.Hist = 0;}
   if (strstr(chopt,"*")) Hoption.Star =1;
   if (strstr(chopt,"+")) Hoption.Plus =1;
   if (strstr(chopt,"-")) Hoption.Plus =-1;
   if (strstr(chopt,"H")) Hoption.Hist =2;
   if (strstr(chopt,"E0")) Hoption.Error =10;
   if (strstr(chopt,"E1")) Hoption.Error =11;
   if (strstr(chopt,"E2")) Hoption.Error =12;
   if (strstr(chopt,"E3")) Hoption.Error =13;
   if (strstr(chopt,"E4")) Hoption.Error =14;

   if (Hoption.Surf == 14 && Hoption.System != kCARTESIAN) {
      Hoption.System = kCARTESIAN;
      Warning("MakeChopt","option SURF4 only supported in Cartesian mode");
   }
//
//   if (fSumw2.fN && !Hoption.Error) Hoption.Error = 2;

//*-*   Copy options from current style
   Hoption.Logx = gPad->GetLogx();
   Hoption.Logy = gPad->GetLogy();
   Hoption.Logz = gPad->GetLogz();

//*-*-   Check options incompatibilities
   if (Hoption.Bar) Hoption.Hist = -1;
   if (Hoption.Same + Hoption.Plus > 1) {
      Error("MakeChopt", "select only one of the options S,+");
      return 0;
   }
   if (Hoption.Plus) {
      if (Hoption.Line || Hoption.Curve || Hoption.Text || Hoption.Mark) {
         Error("MakeChopt", "options L,C,T,P are incompatible with options U and K");
         if (Hoption.Hist && Hoption.Bar) return 0;
      }
   }
   if (Hoption.Error || Hoption.Func || Hoption.Star) {
      if (Hoption.Plus) {
         Error("MakeChopt", "U, + options incompatible with errors/function");
         return 0;
      }
   }
   return 1;
}

//______________________________________________________________________________
Int_t TH1::FitOptionsMake(Option_t *choptin)
{
//*-*-*-*-*-*-*-*-*Decode string choptin and fill Foption structure*-*-*-*-*-*
//*-*              ================================================

   Foption.Quiet   = 0;
   Foption.Verbose = 0;
   Foption.Bound   = 0;
   Foption.Like    = 0;
   Foption.W1      = 0;
   Foption.Errors  = 0;
   Foption.Range   = 0;
   Foption.Gradient= 0;
   Foption.Nograph = 0;
   Foption.Nostore = 0;
   Foption.Plus    = 0;
   Foption.Integral= 0;

   Int_t nch = strlen(choptin);
   if (!nch) return 1;

   char chopt[32];
   strcpy(chopt,choptin);

   for (Int_t i=0;i<nch;i++) chopt[i] = toupper(choptin[i]);

   if (strstr(chopt,"Q")) Foption.Quiet   = 1;
   if (strstr(chopt,"V")){Foption.Verbose = 1; Foption.Quiet   = 0;}
   if (strstr(chopt,"L")) Foption.Like    = 1;
   if (strstr(chopt,"W")) Foption.W1      = 1;
   if (strstr(chopt,"E")) Foption.Errors  = 1;
   if (strstr(chopt,"R")) Foption.Range   = 1;
   if (strstr(chopt,"G")) Foption.Gradient= 1;
   if (strstr(chopt,"N")) Foption.Nostore = 1;
   if (strstr(chopt,"0")) Foption.Nograph = 1;
   if (strstr(chopt,"+")) Foption.Plus    = 1;
   if (strstr(chopt,"I")) Foption.Integral= 1;
   return 1;
}

//______________________________________________________________________________
void H1FitChisquare(Int_t &npar, Double_t *gin, Double_t &f, Double_t *u, Int_t flag)
{
//*-*-*-*-*-*Minimization function for H1s using a Chisquare method*-*-*-*-*-*
//*-*        ======================================================

   Double_t cu,eu,fu,fsum;
   Double_t dersum[100], grad[100];
   Double_t x[3];
   Int_t bin,binx,biny,binz,k;
   Float_t binlow, binup, binsize;

   Int_t npfits = 0;

   npar = gF1->GetNpar();
   if (flag == 2) for (k=0;k<npar;k++) dersum[k] = gin[k] = 0;

   TH1 *hfit = (TH1*)gMinuit->GetObjectFit();
   gF1->InitArgs(x,u);
   f = 0;
   for (binz=zfirst;binz<=zlast;binz++) {
      x[2]  = zaxis->GetBinCenter(binz);
      for (biny=yfirst;biny<=ylast;biny++) {
         x[1]  = yaxis->GetBinCenter(biny);
         for (binx=xfirst;binx<=xlast;binx++) {
            bin = hfit->GetBin(binx,biny,binz);
            cu  = hfit->GetBinContent(bin);
            x[0]  = xaxis->GetBinCenter(binx);
            if (Foption.Integral) {
               binlow  = xaxis->GetBinLowEdge(binx);
               binsize = xaxis->GetBinWidth(binx);
               binup   = binlow + binsize;
               fu      = gF1->Integral(binlow,binup,u)/binsize;
            } else {
               fu = gF1->EvalPar(x,u);
            }
            if (Foption.W1) {
               if (cu == 0) continue;
               eu = 1;
            } else {
               eu  = hfit->GetBinError(bin);
               if (eu <= 0) continue;
            }
            if (flag == 2) {
               for (k=0;k<npar;k++) dersum[k] += 1; //should be the derivative
            }
            npfits++;
            if (flag == 2) {
               for (k=0;k<npar;k++) grad[k] += dersum[k]*(fu-cu)/eu; dersum[k] = 0;
            }
            fsum = (cu-fu)/eu;
            f += fsum*fsum;
//printf("binx=%d, x=%g, cu=%g, fu=%g, eu=%g, fsum=%g, f=%g, u1=%g, u2=%g, u3=%g\n",binx,x[0],cu,fu,eu,fsum,f,u[0],u[1],u[2]);

         }
      }
   }
   gF1->SetNumberFitPoints(npfits);
}

//______________________________________________________________________________
void H1FitLikelihood(Int_t &npar, Double_t *gin, Double_t &f, Double_t *u, Int_t flag)
{
//*-*-*-*-*-*Minimization function for H1s using a Likelihood method*-*-*-*-*-*
//*-*        =======================================================
//     Basically, it forms the likelihood by determining the Poisson
//     probability that given a number of entries in a particualar bin,
//     the fit would predict it's value.  This is then done for each bin,
//     and the sum of the logs is taken as the likelihood.

   Double_t cu,eu,fu,fobs,fsub;
   Double_t dersum[100], grad[100];
   Double_t x[3];
   Int_t bin,binx,biny,binz,k,icu;
   Float_t binlow, binup, binsize;

   Int_t npfits = 0;

   npar = gF1->GetNpar();
   if (flag == 2) for (k=0;k<npar;k++) dersum[k] = gin[k] = 0;

   TH1 *hfit = (TH1*)gMinuit->GetObjectFit();
   gF1->InitArgs(x,u);
   f = 0;
   for (binz=zfirst;binz<=zlast;binz++) {
      x[2]  = zaxis->GetBinCenter(binz);
      for (biny=yfirst;biny<=ylast;biny++) {
         x[1]  = yaxis->GetBinCenter(biny);
         for (binx=xfirst;binx<=xlast;binx++) {
            bin = hfit->GetBin(binx,biny,binz);
            cu  = hfit->GetBinContent(bin);
            x[0]  = xaxis->GetBinCenter(binx);
            if (Foption.Integral) {
               binlow  = xaxis->GetBinLowEdge(binx);
               binsize = xaxis->GetBinWidth(binx);
               binup   = binlow + binsize;
               fu      = gF1->Integral(binlow,binup,u)/binsize;
            } else {
               fu = gF1->EvalPar(x,u);
            }
            if (Foption.W1) {
               if (cu == 0 && flag == 2) continue;
               eu = 1;
            } else {
               eu  = hfit->GetBinError(bin);
               if (eu <= 0) continue;
            }
            if (flag == 2) {
               for (k=0;k<npar;k++) dersum[k] += 1; //should be the derivative
            }
            npfits++;
            if (flag == 2) {
               for (k=0;k<npar;k++) grad[k] += dersum[k]*(fu-cu)/eu; dersum[k] = 0;
            }
            if (fu < 1.e-9) fu = 1.e-9;
            icu = Int_t(cu);
            fsub = -fu +icu*TMath::Log(fu);
            fobs = 0;
            if (icu > 1) {
               for (Int_t j=1;j<=icu;j++) fobs += TMath::Log(j);
            }
            fsub -= fobs;
            f -= fsub;
//printf("binx=%d, x=%g, cu=%g, icu=%d, fu=%g, eu=%g, fsub=%g, f=%g, u1=%g, u2=%g, u3=%g\n",binx,x[0],cu,icu,fu,eu,fsub,f,u[0],u[1],u[2]);

         }
      }
   }
   f *= 2;
   gF1->SetNumberFitPoints(npfits);
}

//______________________________________________________________________________
void H1InitGaus()
{
//*-*-*-*-*-*Compute Initial values of parameters for a gaussian*-*-*-*-*-*-*
//*-*        ===================================================

   Double_t allcha, sumx, sumx2, x, val, rms, mean;
   Int_t bin;
   static Double_t sqrtpi = 2.506628;

//*-*- Compute mean value and RMS of the histogram in the given range
   Double_t valmax = gCurrentHist->GetBinContent(xfirst);
   allcha = sumx = sumx2 = 0;
   for (bin=xfirst;bin<=xlast;bin++) {
      x       = gCurrentHist->GetBinCenter(bin);
      val     = TMath::Abs(gCurrentHist->GetBinContent(bin));
      if (val > valmax) valmax = val;
      sumx   += val*x;
      sumx2  += val*x*x;
      allcha += val;
   }
   if (allcha == 0) return;
   mean = sumx/allcha;
   rms  = TMath::Sqrt(sumx2/allcha - mean*mean);
   if (rms == 0) rms = binwidx*(xlast-xfirst+1)/4;
   //if the distribution is really gaussian, the best approximation
   //is binwidx*allcha/(sqrtpi*rms)
   //However, in case of non-gaussian tails, this underestimates
   //the normalisation constant. In this case the maximum value
   //is a better approximation.
   //We take the average of both quantities
   Double_t constant = 0.5*(valmax+binwidx*allcha/(sqrtpi*rms));

   //In case the mean value is outside the histo limits and
   //the RMS is bigger than the range, we take
   //  mean = center of bins
   //  rms  = half range
   Float_t xmin = gCurrentHist->GetXaxis()->GetXmin();
   Float_t xmax = gCurrentHist->GetXaxis()->GetXmax();
   if ((mean < xmin || mean > xmax) && rms > (xmax-xmin)) {
      mean = 0.5*(xmax+xmin);
      rms  = 0.5*(xmax-xmin);
   }
   gF1->SetParameter(0,constant);
   gF1->SetParameter(1,mean);
   gF1->SetParameter(2,rms);
   gF1->SetParLimits(2,0,10*rms);
}

//______________________________________________________________________________
void H1InitExpo()
{
//*-*-*-*-*-*Compute Initial values of parameters for an exponential*-*-*-*-*
//*-*        =======================================================

   Double_t constant, slope;
   Int_t ifail;
   Int_t nchanx = xlast - xfirst + 1;

   H1LeastSquareLinearFit(-nchanx, constant, slope, ifail);

   gF1->SetParameter(0,constant);
   gF1->SetParameter(1,slope);

}

//______________________________________________________________________________
void H1InitPolynom()
{
//*-*-*-*-*-*Compute Initial values of parameters for a polynom*-*-*-*-*-*-*
//*-*        ===================================================

   Double_t fitpar[25];

   Int_t nchanx = xlast - xfirst + 1;
   Int_t npar   = gF1->GetNpar();

   if (nchanx <=1 || npar == 1) {
      fitpar[0] = gCurrentHist->GetSumOfWeights()/Float_t(nchanx);
   } else {
      H1LeastSquareFit( nchanx, npar, fitpar);
   }
   for (Int_t i=0;i<npar;i++) gF1->SetParameter(i, fitpar[i]);
}

//______________________________________________________________________________
void H1LeastSquareFit(Int_t n, Int_t m, Double_t *a)
{
//*-*-*-*-*-*-*-*Least squares lpolynomial fitting without weights*-*-*-*-*-*-*
//*-*            =================================================
//*-*
//*-*  n   number of points to fit
//*-*  m   number of parameters
//*-*  a   array of parameters
//*-*
//*-*   based on CERNLIB routine LSQ: Translated to C++ by Rene Brun
//*-*   (E.Keil.  revised by B.Schorr, 23.10.1981.)
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    static Double_t zero = 0.;
    static Double_t one = 1.;
    static Int_t idim = 20;

    static Double_t  b[400]	/* was [20][20] */;
    static Int_t i, k, l, ifail;
    static Double_t power;
    static Double_t da[20], xk, yk;

    if (m <= 2) {
       H1LeastSquareLinearFit(n, a[0], a[1], ifail);
       return;
    }
    if (m > idim || m > n) return;
    b[0]  = Float_t(n);
    da[0] = zero;
    for (l = 2; l <= m; ++l) {
	b[l-1]           = zero;
	b[m + l*20 - 21] = zero;
	da[l-1]          = zero;
    }
    for (k = xfirst; k <= xlast; ++k) {
	xk     = gCurrentHist->GetBinCenter(k);
	yk     = gCurrentHist->GetBinContent(k);
	power  = one;
	da[0] += yk;
	for (l = 2; l <= m; ++l) {
	    power   *= xk;
	    b[l-1]  += power;
	    da[l-1] += power*yk;
	}
	for (l = 2; l <= m; ++l) {
	    power            *= xk;
	    b[m + l*20 - 21] += power;
	}
    }
    for (i = 3; i <= m; ++i) {
	for (k = i; k <= m; ++k) {
	    b[k - 1 + (i-1)*20 - 21] = b[k + (i-2)*20 - 21];
	}
    }
    H1LeastSquareSeqnd(m, b, idim, ifail, 1, da);

    for (i=0; i<m; ++i) a[i] = da[i];

}

//______________________________________________________________________________
void H1LeastSquareLinearFit(Int_t ndata, Double_t &a0, Double_t &a1, Int_t &ifail)
{
//*-*-*-*-*-*-*-*-*-*Least square linear fit without weights*-*-*-*-*-*-*-*-*
//*-*                =======================================
//*-*
//*-*   extracted from CERNLIB LLSQ: Translated to C++ by Rene Brun
//*-*   (added to LSQ by B. Schorr, 15.02.1982.)
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

    static Double_t xbar, ybar, x2bar;
    static Int_t i, n;
    static Double_t xybar;
    static Float_t fn, xk, yk;
    static Double_t det;

    n     = TMath::Abs(ndata);
    ifail = -2;
    xbar  = ybar = x2bar = xybar = 0;
    for (i = xfirst; i <= xlast; ++i) {
	xk = gCurrentHist->GetBinCenter(i);
	yk = gCurrentHist->GetBinContent(i);
	if (ndata < 0) {
	    if (yk <= 0) yk = 1e-9;
	    yk = TMath::Log(yk);
	}
	xbar  += xk;
	ybar  += yk;
	x2bar += xk*xk;
	xybar += xk*yk;
    }
    fn    = Float_t(n);
    det   = fn*x2bar - xbar*xbar;
    ifail = -1;
    if (det <= 0) {
       a0 = ybar/fn;
       a1 = 0;
       return;
    }
    ifail = 0;
    a0 = (x2bar*ybar - xbar*xybar) / det;
    a1 = (fn*xybar - xbar*ybar) / det;

}

//______________________________________________________________________________
void H1LeastSquareSeqnd(Int_t n, Double_t *a, Int_t idim, Int_t &ifail, Int_t k, Double_t *b)
{
//*-*-*-*-*-*-*-*Extracted from CERN Program library routine DSEQN*-*-*-*-*-*
//*-*            =================================================
//*-*
//*-*        : Translated to C++ by Rene Brun
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    Int_t a_dim1, a_offset, b_dim1, b_offset;
    static Int_t nmjp1, i, j, l;
    static Int_t im1, jp1, nm1, nmi;
    static Double_t s1, s21, s22;
    static Double_t one = 1.;

    /* Parameter adjustments */
    b_dim1 = idim;
    b_offset = b_dim1 + 1;
    b -= b_offset;
    a_dim1 = idim;
    a_offset = a_dim1 + 1;
    a -= a_offset;

    if (idim < n) return;

    ifail = 0;
    for (j = 1; j <= n; ++j) {
	if (a[j + j*a_dim1] <= 0) { ifail = -1; return; }
	a[j + j*a_dim1] = one / a[j + j*a_dim1];
	if (j == n) continue;
	jp1 = j + 1;
	for (l = jp1; l <= n; ++l) {
	    a[j + l*a_dim1] = a[j + j*a_dim1] * a[l + j*a_dim1];
	    s1 = -a[l + (j+1)*a_dim1];
	    for (i = 1; i <= j; ++i) { s1 = a[l + i*a_dim1] * a[i + (j+1)*a_dim1] + s1; }
	    a[l + (j+1)*a_dim1] = -s1;
	}
    }
    if (k <= 0) return;

    for (l = 1; l <= k; ++l) {
	b[l*b_dim1 + 1] = a[a_dim1 + 1]*b[l*b_dim1 + 1];
    }
    if (n == 1) return;
    for (l = 1; l <= k; ++l) {
	for (i = 2; i <= n; ++i) {
	    im1 = i - 1;
	    s21 = -b[i + l*b_dim1];
	    for (j = 1; j <= im1; ++j) {
		s21 = a[i + j*a_dim1]*b[j + l*b_dim1] + s21;
	    }
	    b[i + l*b_dim1] = -a[i + i*a_dim1]*s21;
	}
	nm1 = n - 1;
	for (i = 1; i <= nm1; ++i) {
	    nmi = n - i;
	    s22 = -b[nmi + l*b_dim1];
	    for (j = 1; j <= i; ++j) {
		nmjp1 = n - j + 1;
		s22 = a[nmi + nmjp1*a_dim1]*b[nmjp1 + l*b_dim1] + s22;
	    }
	    b[nmi + l*b_dim1] = -s22;
	}
    }
}


//______________________________________________________________________________
Int_t TH1::GetBin(Int_t binx, Int_t biny, Int_t binz)
{
//*-*-*-*-*-*Return Global bin number corresponding to binx,y,z*-*-*-*-*-*-*
//*-*        ==================================================
//*-*
//*-*   2-D and 3-D histograms are represented with a one dimensional
//*-*   structure.
//*-*   This has the advantage that all existing functions, such as
//*-*     GetBinContent, GetBinError, GetBinFunction work for all dimensions.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t nx, ny, nz;
   if (GetDimension() < 2) {
      nx  = fXaxis.GetNbins()+2;
      if (binx < 0)   binx = 0;
      if (binx >= nx) binx = nx-1;
      return binx;
   }
   if (GetDimension() < 3) {
      nx  = fXaxis.GetNbins()+2;
      if (binx < 0)   binx = 0;
      if (binx >= nx) binx = nx-1;
      ny  = fYaxis.GetNbins()+2;
      if (biny < 0)   biny = 0;
      if (biny >= ny) biny = ny-1;
      return  binx + nx*biny;
   }
   if (GetDimension() < 4) {
      nx  = fXaxis.GetNbins()+2;
      if (binx < 0)   binx = 0;
      if (binx >= nx) binx = nx-1;
      ny  = fYaxis.GetNbins()+2;
      if (biny < 0)   biny = 0;
      if (biny >= ny) biny = ny-1;
      nz  = fZaxis.GetNbins()+2;
      if (binz < 0)   binz = 0;
      if (binz >= nz) binz = nz-1;
      return  binx + nx*(biny +ny*binz);
   }
   return -1;
}

//______________________________________________________________________________
Axis_t TH1::GetRandom()
{
// return a random number distributed according the histogram bin contents.
// This function checks if the bins integral exists. If not, the integral
// is evaluated, normalized to one.
// The integral is automatically recomputed if the number of entries
// is not the same then when the integral was computed.

   if (fDimension > 1) {
      Error("GetRandom","Function only valid for 1-d histograms");
      return 0;
   }
   Int_t nbinsx = GetNbinsX();
   Double_t integral;
   if (fIntegral) {
      if (fIntegral[nbinsx+1] != fEntries) integral = ComputeIntegral();
   } else {
      integral = ComputeIntegral();
      if (integral == 0 || fIntegral == 0) return 0;
   }
   Float_t r1 = gRandom->Rndm();
   Int_t ibin = TMath::BinarySearch(nbinsx,&fIntegral[0],r1);
   return GetBinLowEdge(ibin+1)
      +GetBinWidth(ibin+1)*(fIntegral[ibin+1]-r1)/(fIntegral[ibin+1] - fIntegral[ibin]);
}

//______________________________________________________________________________
void TH1::GetRandom2(Axis_t &x, Axis_t &y)
{
// return 2 random numbers along axis x and y distributed according
// the cellcontents of a 2-dim histogram

   if (fDimension != 2) {
      Error("GetRandom","Function only valid for 2-d histograms");
      return;
   }
   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbins  = nbinsx*nbinsy;
   Double_t integral;
   if (fIntegral) {
      if (fIntegral[nbins+1] != fEntries) integral = ComputeIntegral();
   } else {
      integral = ComputeIntegral();
      if (integral == 0 || fIntegral == 0) return;
   }
   Float_t r1 = gRandom->Rndm();
   Int_t ibin = TMath::BinarySearch(nbins,&fIntegral[0],r1);
   Int_t biny = ibin/nbinsx;
   Int_t binx = ibin - nbinsx*biny;
   x = fXaxis.GetBinLowEdge(binx+1)
      +fXaxis.GetBinWidth(binx+1)*(fIntegral[ibin+1]-r1)/(fIntegral[ibin+1] - fIntegral[ibin]);
   y = fYaxis.GetBinLowEdge(biny+1) + fYaxis.GetBinWidth(biny+1)*gRandom->Rndm();
}

//______________________________________________________________________________
void TH1::GetRandom3(Axis_t &x, Axis_t &y, Axis_t &z)
{
// return 3 random numbers along axis x , y and z distributed according
// the cellcontents of a 3-dim histogram

   if (fDimension != 3) {
      Error("GetRandom","Function only valid for 3-d histograms");
      return;
   }
   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   Int_t nxy    = nbinsx*nbinsy;
   Int_t nbins  = nxy*nbinsz;
   Double_t integral;
   if (fIntegral) {
      if (fIntegral[nbins+1] != fEntries) integral = ComputeIntegral();
   } else {
      integral = ComputeIntegral();
      if (integral == 0 || fIntegral == 0) return;
   }
   Float_t r1 = gRandom->Rndm();
   Int_t ibin = TMath::BinarySearch(nbins,&fIntegral[0],r1);
   Int_t binz = ibin/nxy;
   Int_t biny = (ibin - nxy*binz)/nbinsx;
   Int_t binx = ibin - nbinsx*(biny + nbinsy*binz);
   x = fXaxis.GetBinLowEdge(binx+1)
      +fXaxis.GetBinWidth(binx+1)*(fIntegral[ibin+1]-r1)/(fIntegral[ibin+1] - fIntegral[ibin]);
   y = fYaxis.GetBinLowEdge(biny+1) + fYaxis.GetBinWidth(biny+1)*gRandom->Rndm();
   z = fZaxis.GetBinLowEdge(binz+1) + fZaxis.GetBinWidth(binz+1)*gRandom->Rndm();
}

//______________________________________________________________________________
Stat_t TH1::GetBinContent(Int_t)
{
//*-*-*-*-*-*-*Return content of global bin number bin*-*-*-*-*-*-*-*-*-*-*-*
//*-*          =======================================
   AbstractMethod("GetBinContent");
   return 0;
}

//______________________________________________________________________________
void TH1::Multiply(TH1 *h1)
{
//*-*-*-*-*-*-*-*-*-*-*Multiply this histogram by h1*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================
//
//   this = this*h1
//
//   If errors of this are available (TH1::Sumw2), errors are recalculated.
//   Note that if h1 has Sumw2 set, Sumw2 is automatically called for this
//   if not already set.

   if (!h1) {
      Error("Multiply","Attempt to multiply by a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()) {
      Error("Multiply","Attempt to multiply histograms with different number of bins");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Multiply","Attempt to multiply histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 has Sumw2 set
   if (fSumw2.fN == 0 && h1->GetSumw2N() != 0) Sumw2();

//*-*- Reset statistics
   fEntries = fTsumw   = fTsumw2 = fTsumwx = fTsumwx2 = 0;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t c0,c1,w,z,x;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = GetBin(binx,biny,binz);
            c0  = GetBinContent(bin);
            c1  = h1->GetBinContent(bin);
            w   = c0*c1;
            SetBinContent(bin,w);
            z = TMath::Abs(w);
            x = fXaxis.GetBinCenter(binx);
            fEntries++;
            fTsumw   += z;
            fTsumw2  += z*z;
            fTsumwx  += z*x;
            fTsumwx2 += z*x*x;
            if (fSumw2.fN) {
               Double_t e0 = GetBinError(bin);
               Double_t e1 = h1->GetBinError(bin);
               fSumw2.fArray[bin] = (e0*e0*c1*c1 + e1*e1*c0*c0);
            }
         }
      }
   }
}


//______________________________________________________________________________
void TH1::Multiply(TH1 *h1, TH1 *h2, Float_t c1, Float_t c2, Option_t *option)
{
//*-*-*-*-*Replace contents of this histogram by multiplication of h1 by h2*-*
//*-*      ================================================================
//
//   this = (c1*h1)*(c2*h2)
//
//   If errors of this are available (TH1::Sumw2), errors are recalculated.
//   Note that if h1 or h2 have Sumw2 set, Sumw2 is automatically called for this
//   if not already set.
//

   TString opt = option;
   opt.ToLower();
//   Bool_t binomial = kFALSE;
//   if (opt.Contains("b")) binomial = kTRUE;
   if (!h1 || !h2) {
      Error("Multiply","Attempt to multiply by a non-existing histogram");
      return;
   }

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
//*-*- Check histogram compatibility
   if (nbinsx != h1->GetNbinsX() || nbinsy != h1->GetNbinsY() || nbinsz != h1->GetNbinsZ()
    || nbinsx != h2->GetNbinsX() || nbinsy != h2->GetNbinsY() || nbinsz != h2->GetNbinsZ()) {
      Error("Multiply","Attempt to multiply histograms with different number of bins");
      return;
   }
//*-*- Issue a Warning if histogram limits are different
   if (GetXaxis()->GetXmin() != h1->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h1->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h1->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h1->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h1->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h1->GetZaxis()->GetXmax()) {
       Warning("Multiply","Attempt to multiply histograms with different axis limits");
   }
   if (GetXaxis()->GetXmin() != h2->GetXaxis()->GetXmin() ||
       GetXaxis()->GetXmax() != h2->GetXaxis()->GetXmax() ||
       GetYaxis()->GetXmin() != h2->GetYaxis()->GetXmin() ||
       GetYaxis()->GetXmax() != h2->GetYaxis()->GetXmax() ||
       GetZaxis()->GetXmin() != h2->GetZaxis()->GetXmin() ||
       GetZaxis()->GetXmax() != h2->GetZaxis()->GetXmax()) {
       Warning("Multiply","Attempt to multiply histograms with different axis limits");
   }
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;

//*-* Create Sumw2 if h1 or h2 have Sumw2 set
   if (fSumw2.fN == 0 && (h1->GetSumw2N() != 0 || h2->GetSumw2N() != 0)) Sumw2();

//*-*- Reset statistics
   fEntries = fTsumw   = fTsumw2 = fTsumwx = fTsumwx2 = 0;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Double_t b1,b2,w,z,x,d1,d2;
   d1 = c1*c1;
   d2 = c2*c2;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            b1  = h1->GetBinContent(bin);
            b2  = h2->GetBinContent(bin);
            w   = (c1*b1)*(c2*b2);
            SetBinContent(bin,w);
            z = TMath::Abs(w);
            x = fXaxis.GetBinCenter(binx);
            fEntries++;
            fTsumw   += z;
            fTsumw2  += z*z;
            fTsumwx  += z*x;
            fTsumwx2 += z*x*x;
            if (fSumw2.fN) {
               Double_t e1 = h1->GetBinError(bin);
               Double_t e2 = h2->GetBinError(bin);
               fSumw2.fArray[bin] = d1*d2*(e1*e1*b2*b2 + e2*e2*b1*b1);
            }
         }
      }
   }
}

//______________________________________________________________________________
void TH1::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*Control routine to paint any kind of histograms*-*-*-*-*-*-*
//*-*              ===============================================
//
//  This function is automatically called by TCanvas::Update.
//  (see TH1::Draw for the list of options)

   TH1 *oldhist = gCurrentHist;
   gCurrentHist = this;
   Float_t minsav = fMinimum;

   if (!MakeChopt(option)) return; //check options and fill Hoption structure

   if (GetDimension() > 2) {
      PaintH3(option);
      fMinimum = minsav;
      gCurrentHist = oldhist;
      return;
   }
   TView *view = gPad->GetView();
   if (view) {
      if (!Hoption.Lego && !Hoption.Surf ) {
         delete view;
         gPad->SetView(0);
      }
   }
   if (GetDimension() > 1 || Hoption.Lego || Hoption.Surf ) {
      PaintTable();
      fMinimum = minsav;
      gCurrentHist = oldhist;
      return;
   }

   if (!PaintInit()) return;  //fill Hparam structure with histo parameters

//*-*-      Picture surround (if new page) and page number (if requested).
//*-*-      Histogram surround (if not option "Same").

   PaintFrame();

//*-*------
//*-*-      do not draw histogram if error bars required
   if (!Hoption.Error) {
      if (Hoption.Hist) PaintHist();
   }
//*-*------

//*-*-     test for error bars or option E
   if (Hoption.Error || Hoption.Mark) {
      PaintErrors();
      if (Hoption.Hist == 2) PaintHist();
   }

//*-*-     test for associated function
   if (Hoption.Func) {
      Hoption_t hoptsave = Hoption;
      Hparam_t  hparsave = Hparam;
      PaintFunction();
      Hoption = hoptsave;
      Hparam  = hparsave;
   }

   PaintAxis();     //*-* Draw the axes
   PaintTitle();    //*-* Draw histogram title
//   PaintFile();     //*-* Draw Current File name corresp to current directory
//   PaintDate();     //*-* Draw date/time
     //*-* Draw box with histogram statistics and/or fit parameters
   if (!Hoption.Same) {
      TF1 *fit = (TF1*)fFunctions->First();
      if (!TestBit(kNoStats)) {  // bit set via TH1::SetStats
         PaintStat(gStyle->GetOptStat(),fit);
      }
   }
   fMinimum = minsav;
   gCurrentHist = oldhist;

}

//______________________________________________________________________________
void TH1::PaintArrows()
{
//*-*-*-*-*-*-*-*Control function to draw a table as an arrow plot*-*-*-*-*-*
//*-*            =================================================
//*-*
//*-*    For each cell (i,j) an arrow is drawn
//*-*    The orientation of the arrow follows the cell gradient
//Begin_Html
/*
<img src="gif/PaintArrows.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Style_t linesav   = GetLineStyle();
   Width_t widthsav  = GetLineWidth();
   SetLineStyle(1);
   SetLineWidth(1);
   TAttLine::Modify();

   Float_t dx, dy, si, co, anr, x1, x2, y1, y2, xc, yc, dxn, dyn;
   Int_t   ncx = Hparam.xlast - Hparam.xfirst + 1;
   Int_t   ncy = Hparam.ylast - Hparam.yfirst + 1;
   Float_t xrg = gPad->GetUxmin();
   Float_t yrg = gPad->GetUymin();
   Float_t xln = gPad->GetUxmax() - xrg;
   Float_t yln = gPad->GetUymax() - yrg;
   Float_t cx  = (xln/Float_t(ncx) -0.03)/2;
   Float_t cy  = (yln/Float_t(ncy) -0.03)/2;
   Float_t dn = 1.E-30;

   for (Int_t id=1;id<=2;id++) {
      for (Int_t j=Hparam.yfirst; j<=Hparam.ylast;j++) {
         for (Int_t i=Hparam.xfirst; i<=Hparam.xlast;i++) {
            if (i == Hparam.xfirst) {
               dx = GetCellContent(i+1, j) - GetCellContent(i, j);
            } else if (i == Hparam.xlast) {
               dx = GetCellContent(i, j) - GetCellContent(i-1, j);
            } else {
               dx = 0.5*(GetCellContent(i+1, j) - GetCellContent(i-1, j));
            }
            if (j == Hparam.yfirst) {
               dy = GetCellContent(i, j+1) - GetCellContent(i, j);
            } else if (j == Hparam.ylast) {
               dy = GetCellContent(i, j) - GetCellContent(i, j-1);
            } else {
               dy = 0.5*(GetCellContent(i, j+1) - GetCellContent(i, j-1));
            }
            if (id == 1) {
               dn = TMath::Max(dn, TMath::Abs(dx));
               dn = TMath::Max(dn, TMath::Abs(dy));
            } else if (id == 2) {
               xc  = xrg + xln*(Float_t(i - Hparam.xfirst+1)-0.5)/Float_t(ncx);
               dxn = cx*dx/dn;
               x1  = xc - dxn;
               x2  = xc + dxn;
               yc  = yrg + yln*(Float_t(j - Hparam.yfirst+1)-0.5)/Float_t(ncy);
               dyn = cy*dy/dn;
               y1  = yc - dyn;
               y2  = yc + dyn;
               xbuf[0] = x1;
               xbuf[1] = x2;
               ybuf[0] = y1;
               ybuf[1] = y2;
               if (TMath::Abs(x2-x1) > 0.01 || TMath::Abs(y2-y1) > 0.01) {
                  anr = 0.005*.5*TMath::Sqrt(2/(dxn*dxn + dyn*dyn));
                  si  = anr*(dxn + dyn);
                  co  = anr*(dxn - dyn);
                  xbuf[2] = x2 - si;
                  ybuf[2] = y2 + co;
                  gPad->PaintPolyLine(3, xbuf, ybuf);
                  xbuf[0] = x2;
                  xbuf[1] = x2 - co;
                  ybuf[0] = y2;
                  ybuf[1] = y2 - si;
                  gPad->PaintPolyLine(2, xbuf, ybuf);
               }
               else {
                  gPad->PaintPolyLine(2, xbuf, ybuf);
               }
            }
         }
      }
   }
   SetLineStyle(linesav);
   SetLineWidth(widthsav);
   TAttLine::Modify();
}

//______________________________________________________________________________
void TH1::PaintAxis()
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw axis of an histogram*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    =========================
//
//   Assume tx = gPad->GetTickx() and ty = gPad->GetTicky()
//   by default only the left Y axis and X bottom axis are drawn (tx = ty = 0)
//    tx = 1 ;  tick marks on top side are drawn (inside)
//    tx = 2;   tick marks and labels on top side are drawn
//    ty = 1;   tick marks on right side are drawn (inside)
//    ty = 2;   tick marks and labels on right side are drawn
//       Use TPad::SetTicks(tx,ty) to set these options

   if (Hoption.Same) return;
   if (Hoption.Axis) return;

   static char chopt[10] = "";
   Float_t gridl = 0;
   Int_t ndiv, ndivx, ndivy, nx1, nx2,ndivsave;
   Float_t umin, umax, uminsave, umaxsave;

   Float_t axmin = gPad->GetUxmin();
   Float_t axmax = gPad->GetUxmax();
   Float_t aymin = gPad->GetUymin();
   Float_t aymax = gPad->GetUymax();
   char *cw = 0;

//*-*- X axis
   ndivx = GetNdivisions("X");
   ndivy = GetNdivisions("Y");
   if (ndivx > 1000) {
      nx2   = ndivx/100;
      nx1   = TMath::Max(1, ndivx%100);
      ndivx = 100*nx2 + Int_t(Float_t(nx1)*gPad->GetAbsWNDC());
   }
   TGaxis axis;
   axis.SetTextAngle(0);
   axis.SetLineColor(fXaxis.GetAxisColor());
   axis.SetTextColor(fXaxis.GetLabelColor());
   axis.SetTextFont(fXaxis.GetLabelFont());
   axis.SetLabelFont(fXaxis.GetLabelFont());
   axis.SetLabelSize(fXaxis.GetLabelSize());
   axis.SetLabelOffset(fXaxis.GetLabelOffset());
   axis.SetTickSize(fXaxis.GetTickLength());
   axis.SetTitle((char*)fXaxis.GetTitle());
   axis.SetTitleOffset(fXaxis.GetTitleOffset());
   axis.SetTitleSize(fXaxis.GetTitleSize());
   axis.SetBit(kCenterTitle, fXaxis.TestBit(kCenterTitle));

   chopt[0] = 0;
   strcat(chopt, "SDH");
   if (ndivx < 0) strcat(chopt, "N");
   if (gPad->GetGridx()) {
      gridl = (aymax-aymin)/(gPad->GetY2() - gPad->GetY1());
      strcat(chopt, "W");
   }

   if (Hoption.Logx) {
      strcat(chopt, "G");
      ndiv =TMath::Abs(ndivx);
      umin = TMath::Power(10,Hparam.xmin);
      umax = TMath::Power(10,Hparam.xmax);
   } else {
      ndiv =TMath::Abs(ndivx);
      umin = Hparam.xmin;
      umax = Hparam.xmax;
   }
   uminsave = umin;
   umaxsave = umax;
   ndivsave = ndiv;
   axis.PaintAxis(Hparam.xmin, Hparam.ymin,
                  Hparam.xmax, Hparam.ymin,
                  umin, umax,  ndiv, chopt, gridl);
   if (gPad->GetTickx()) {
      strcat(chopt, "-");
      if (gPad->GetTickx() < 2) strcat(chopt, "U");
      if ((cw=strstr(chopt,"W"))) *cw='z';
      axis.SetTitle("");
      axis.PaintAxis(Hparam.xmin, Hparam.ymax,
                     Hparam.xmax, Hparam.ymax,
                     uminsave, umaxsave,  ndivsave, chopt, gridl);
   }
//*-*- Y axis
   axis.SetLineColor(fYaxis.GetAxisColor());
   axis.SetTextColor(fYaxis.GetLabelColor());
   axis.SetTextFont(fYaxis.GetLabelFont());
   axis.SetLabelFont(fYaxis.GetLabelFont());
   axis.SetLabelSize(fYaxis.GetLabelSize());
   axis.SetLabelOffset(fYaxis.GetLabelOffset());
   axis.SetTickSize(fYaxis.GetTickLength());
   axis.SetTitle((char*)fYaxis.GetTitle());
   axis.SetTitleOffset(fYaxis.GetTitleOffset());
   axis.SetTitleSize(fYaxis.GetTitleSize());
   axis.SetBit(kCenterTitle, fYaxis.TestBit(kCenterTitle));

      chopt[0] = 0;
   strcat(chopt, "SDH");
   if (ndivy < 0) {
      nx2   = ndivy/100;
      nx1   = TMath::Max(1, ndivy%100);
      ndivy = 100*nx2 + Int_t(Float_t(nx1)*gPad->GetAbsHNDC());
      strcat(chopt, "N");
   }
   if (gPad->GetGridy()) {
      gridl = (axmax-axmin)/(gPad->GetX2() - gPad->GetX1());
      strcat(chopt, "W");
   }
   if (Hoption.Logy) {
      strcat(chopt, "G");
      ndiv =TMath::Abs(ndivy);
      umin = TMath::Power(10,Hparam.ymin);
      umax = TMath::Power(10,Hparam.ymax);
   } else {
      ndiv =TMath::Abs(ndivy);
      umin = Hparam.ymin;
      umax = Hparam.ymax;
   }
   uminsave = umin;
   umaxsave = umax;
   ndivsave = ndiv;
   axis.PaintAxis(Hparam.xmin, Hparam.ymin,
                  Hparam.xmin, Hparam.ymax,
                  umin, umax,  ndiv, chopt, gridl);
   if (gPad->GetTicky()) {
      if (gPad->GetTicky() < 2) {
         strcat(chopt, "U");
         axis.SetTickSize(-fYaxis.GetTickLength());
      } else {
         strcat(chopt, "+L");
      }
      if ((cw=strstr(chopt,"W"))) *cw='z';
      axis.SetTitle("");
      axis.PaintAxis(Hparam.xmax, Hparam.ymin,
                     Hparam.xmax, Hparam.ymax,
                     uminsave, umaxsave,  ndivsave, chopt, gridl);
   }
}


//______________________________________________________________________________
void TH1::PaintBoxes()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a box plot*-*-*-*-*-*
//*-*            ==============================================
//*-*
//*-*    For each cell (i,j) a box is drawn.
//*-*    The size of the box is proportional to the cell content.
//Begin_Html
/*
<img src="gif/PaintBox.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Style_t linesav   = GetLineStyle();
   Width_t widthsav  = GetLineWidth();
   Style_t fillsav   = GetFillStyle();
   if (GetFillColor() == 0)  SetFillStyle(0);
   SetLineStyle(1);
   SetLineWidth(1);
   TAttLine::Modify();
   TAttFill::Modify();

   Float_t z, xk,xstep, yk, ystep, xcent, ycent, xlow, xup, ylow, yup;
   Float_t dz = Hparam.zmax - Hparam.zmin;

   for (Int_t j=Hparam.yfirst; j<=Hparam.ylast;j++) {
      yk    = fYaxis.GetBinLowEdge(j);
      ystep = fYaxis.GetBinWidth(j);
      ycent = 0.5*ystep;
      for (Int_t i=Hparam.xfirst; i<=Hparam.xlast;i++) {
         Int_t bin  = j*(fXaxis.GetNbins()+2) + i;
         xk    = fXaxis.GetBinLowEdge(i);
         xstep = fXaxis.GetBinWidth(i);
         xcent = 0.5*xstep;
         z     = GetBinContent(bin);
         if (Hoption.Logz) {
            if (z != 0) z = TMath::Log10(z);
            else        z = Hparam.zmin;
         }
         if (z <= Hparam.zmin) continue;
         xup  = xcent*(z - Hparam.zmin)/dz + xk + xcent;
         xlow = 2*(xk + xcent) - xup;
         if (Hoption.Logx) {
            if (xup > 0)  xup  = TMath::Log10(xup);
            else continue;
            if (xlow > 0) xlow = TMath::Log10(xlow);
            else continue;
         }
         yup  = ycent*(z - Hparam.zmin)/dz + yk + ycent;
         ylow = 2*(yk + ycent) - yup;
         if (Hoption.Logy) {
            if (yup > 0)  yup  = TMath::Log10(yup);
            else continue;
            if (ylow > 0) ylow = TMath::Log10(ylow);
            else continue;
         }
         if (xlow < gPad->GetUxmin()) continue;
         if (ylow < gPad->GetUymin()) continue;
         if (xup  > gPad->GetUxmax()) continue;
         if (yup  > gPad->GetUymax()) continue;
         gGXW->SetFillColor(GetFillColor()); //is redefined in TPad::PaintBox
         gPad->PaintBox(xlow, ylow, xup, yup);
      }
   }
   SetFillStyle(fillsav);
   SetLineStyle(linesav);
   SetLineWidth(widthsav);
   TAttLine::Modify();
}

//______________________________________________________________________________
void TH1::PaintColorLevels()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a color plot*-*-*-*-*-*
//*-*            ================================================
//*-*
//*-*    For each cell (i,j) a box is drawn with a color proportional
//*-*    to the cell content.
//*-*    The color table used is defined in the current style (gStyle).
//*-*    The color palette in TStyle can be modified via TStyle::SetPalette.
//Begin_Html
/*
<img src="gif/PaintCol.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*


   Float_t z, xk,xstep, yk, ystep, xlow, xup, ylow, yup;
   Float_t dz = Hparam.zmax - Hparam.zmin;
   if (dz <= 0) return;

   Style_t fillsav   = GetFillStyle();
   Style_t colsav    = GetFillColor();
//   SetFillStyle(1000);
   TAttFill::Modify();

   Int_t ncolors = gStyle->GetNumberOfColors();
   Float_t scale = ncolors/dz;
   Int_t color;
   for (Int_t j=Hparam.yfirst; j<=Hparam.ylast;j++) {
      yk    = fYaxis.GetBinLowEdge(j);
      ystep = fYaxis.GetBinWidth(j);
      for (Int_t i=Hparam.xfirst; i<=Hparam.xlast;i++) {
         Int_t bin  = j*(fXaxis.GetNbins()+2) + i;
         xk    = fXaxis.GetBinLowEdge(i);
         xstep = fXaxis.GetBinWidth(i);
         z     = GetBinContent(bin);
         if (Hoption.Logz) {
            if (z != 0) z = TMath::Log10(z);
            else        z = Hparam.zmin;
         }
         if (z <= Hparam.zmin) continue;
         xup  = xk + xstep;
         xlow = xk;
         if (Hoption.Logx) {
            if (xup > 0)  xup  = TMath::Log10(xup);
            else continue;
            if (xlow > 0) xlow = TMath::Log10(xlow);
            else continue;
         }
         yup  = yk + ystep;
         ylow = yk;
         if (Hoption.Logy) {
            if (yup > 0)  yup  = TMath::Log10(yup);
            else continue;
            if (ylow > 0) ylow = TMath::Log10(ylow);
            else continue;
         }
         if (xlow < gPad->GetUxmin()) continue;
         if (ylow < gPad->GetUymin()) continue;
         if (xup  > gPad->GetUxmax()) continue;
         if (yup  > gPad->GetUymax()) continue;
         color = Int_t((z- Hparam.zmin)*scale);
         if (z >= Hparam.zmax) color = ncolors-1;
         SetFillColor(gStyle->GetColorPalette(color));
         TAttFill::Modify();
         gPad->PaintBox(xlow, ylow, xup, yup);
      }
   }

   if (Hoption.Color > 1) PaintPalette();

   SetFillStyle(fillsav);
   SetFillColor(colsav);
   TAttFill::Modify();

}

//______________________________________________________________________________
void TH1::PaintPalette()
{
//*-*-*-*-*-*-*-*Paint the color palette on the right side of the pad*-*-*-*-*
//*-*            ====================================================

   Float_t xup  = gPad->GetUxmax();
   Float_t x2   = gPad->GetX2();
   Float_t ymin = gPad->GetUymin();
   Float_t ymax = gPad->GetUymax();
   Float_t xr   = 0.05*(x2 - gPad->GetX1());
   Float_t xmin = xup +0.1*xr;
   Float_t xmax = xmin + xr;
   if (xmax > x2) xmax = x2-0.01*xr;
   Int_t ncolors = gStyle->GetNumberOfColors();
   Float_t dy = (ymax-ymin)/ncolors;
   for (Int_t i=0;i<ncolors;i++) {
      SetFillColor(gStyle->GetColorPalette(i));
      TAttFill::Modify();
      gPad->PaintBox(xmin,ymin+i*dy,xmax,ymin+(i+1)*dy);
   }
   TGaxis axis;
   Int_t ndiv = 10;
   Float_t wmin = Hparam.zmin;
   Float_t wmax = Hparam.zmax;
   if (Hoption.Logz) {
      wmin = TMath::Power(10.,wmin);
      wmax = TMath::Power(10.,wmax);
      axis.PaintAxis(xmax,ymin,xmax,ymax,wmin,wmax,ndiv,"+LG");
   } else {
      axis.PaintAxis(xmax,ymin,xmax,ymax,wmin,wmax,ndiv,"+L");
   }
}

//______________________________________________________________________________
void TH1::PaintContour()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a contour plot*-*-*-*-*-*
//*-*            =================================================
//*-*  Hoption.Contour may have the following values:
//*-*     1  The contour is drawn with filled colour levels.
//*-*        The levels are equidistant.
//*-*    11  Use colour to distinguish contours.
//*-*    12  Use line style to distinguish contours.
//*-*    13  Line style and colour are the same for all contours.
//Begin_Html
/*
<img src="gif/PaintContour1.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Int_t i, j, count, ncontour, icol, iend, icont, n, lj, m, ix, jx, ljfill;
   Int_t itars, mode, ir[4];
   Float_t xsave, ysave, thesave,phisave,x[4], y[4], zc[4];

   if (Hoption.Contour == 1) {
      Hoption.Surf = 12;
      thesave = gPad->GetTheta();
      phisave = gPad->GetPhi();
      gPad->SetPhi(0.0001);
      gPad->SetTheta(89.99);
      PaintSurface();
      gPad->SetPhi(phisave);
      gPad->SetTheta(thesave);
      delete gPad->GetView();
      gPad->SetView(0);
      return;
   }

   Float_t *xarr  = new Float_t[kMAXCONTOUR];
   Float_t *yarr  = new Float_t[kMAXCONTOUR];
   Int_t  *itarr  = new Int_t[kMAXCONTOUR];
   for (i=0;i<kMAXCONTOUR;i++) itarr[i] = 0;

   ncontour  = GetContour();
   if (!ncontour) {
      ncontour = 20;
      SetContour(ncontour);
   }
   if (ncontour > kMAXCONTOUR) {
      Warning("PaintContour", "maximum number of contours is %d, asked for %d",
              kMAXCONTOUR, ncontour);
      ncontour = kMAXCONTOUR-1;
   }
   Float_t *levels = fContour.GetArray();
   Int_t linesav   = GetLineStyle();
   Int_t colorsav  = GetLineColor();
   if (Hoption.Contour == 13) {
      TAttLine::Modify();
   }

   iend = 1;
   Int_t k;
   for (icont=1; icont<=iend; icont++) {
      for (j=Hparam.yfirst; j<=Hparam.ylast-1; j++) {
         y[0] = fYaxis.GetBinCenter(j);
         y[1] = y[0];
         y[2] = fYaxis.GetBinCenter(j+1);
         y[3] = y[2];
         if (y[0] < gPad->GetUymin() || y[0] > gPad->GetUymax()) continue;
         if (y[2] < gPad->GetUymin() || y[2] > gPad->GetUymax()) continue;
         for (i=Hparam.xfirst; i<=Hparam.xlast-1; i++) {
            zc[0] = GetCellContent(i, j);
            zc[1] = GetCellContent(i+1, j);
            zc[2] = GetCellContent(i+1, j+1);
            zc[3] = GetCellContent(i, j+1);
            for (k=0;k<4;k++) {
               ir[k] = TMath::BinarySearch(ncontour,levels,zc[k]);
               if (zc[k] > levels[ncontour-1]) ir[k] = ncontour-1;
            }
            if (ir[0] != ir[1] || ir[1] != ir[2] || ir[2] != ir[3] || ir[3] != ir[0]) {
               x[0] = fXaxis.GetBinCenter(i);
               x[3] = x[0];
               x[1] = fXaxis.GetBinCenter(i+1);
               x[2] = x[1];
               if (x[0] < gPad->GetUxmin() || x[0] > gPad->GetUxmax()) continue;
               if (x[2] < gPad->GetUxmin() || x[2] > gPad->GetUxmax()) continue;
               if (zc[0] < zc[1]) n = 0; else n = 1;
               if (zc[2] < zc[3]) m = 2; else m = 3;
               if (zc[n] > zc[m]) n = m;
               n++;
               lj=1;
               for (ix=1;ix<=4;ix++) {
                  m = n%4 + 1;
                  ljfill = PaintContourLine(zc[n-1],ir[n-1],x[n-1],y[n-1],zc[m-1],
                        ir[m-1],x[m-1],y[m-1],&xarr[lj-1],&yarr[lj-1],&itarr[lj-1]);
                  lj += 2*ljfill;
                  n = m;
               }
               if (zc[0] < zc[1]) n = 0; else n = 1;
               if (zc[2] < zc[3]) m = 2; else m = 3;
               if (zc[n] > zc[m]) n = m;
               n++;
               lj=2;
               for (ix=1;ix<=4;ix++) {
                  if (n == 1) m = 4;
                  else        m = n-1;
                  ljfill = PaintContourLine(zc[n-1],ir[n-1],x[n-1],y[n-1],zc[m-1],
                        ir[m-1],x[m-1],y[m-1],&xarr[lj-1],&yarr[lj-1],&itarr[lj-1]);
                  lj += 2*ljfill;
                  n = m;
               }
//*-*- Re-order endpoints

               count = 0;
               for (ix=1; ix<=lj-5; ix +=2) {
                  count = 0;
                  while (itarr[ix-1] != itarr[ix]) {
                     xsave = xarr[ix];
                     ysave = yarr[ix];
                     itars = itarr[ix];
                     for (jx=ix; jx<=lj-5; jx +=2) {
                        xarr[jx]  = xarr[jx+2];
                        yarr[jx]  = yarr[jx+2];
                        itarr[jx] = itarr[jx+2];
                     }
                     xarr[lj-3]  = xsave;
                     yarr[lj-3]  = ysave;
                     itarr[lj-3] = itars;
                     if (count > 100) break;
                     count++;
                  }
               }
               if (count > 100) continue;

               for (ix=1; ix<=lj-2; ix +=2) {
                  icol = (4*itarr[ix])/ncontour+1;
                  if (Hoption.Contour == 11) {
                      SetLineColor(icol);
                  }
                  if (Hoption.Contour == 12) {
                      mode = icol%5;
                      if (mode == 0) mode = 5;
                      SetLineStyle(mode);
                  }
                  TAttLine::Modify();
                  gPad->PaintPolyLine(2,&xarr[ix-1],&yarr[ix-1]);
               }
            }
         }
      }
   }
   SetLineStyle(linesav);
   SetLineColor(colorsav);
   delete [] xarr;
   delete [] yarr;
   delete [] itarr;
}

//______________________________________________________________________________
Int_t TH1::PaintContourLine(Float_t elev1, Int_t icont1, Float_t x1, Float_t y1,
                            Float_t elev2, Int_t icont2, Float_t x2, Float_t y2,
                            Float_t *xarr, Float_t *yarr, Int_t *itarr)
{
//*-*-*-*-*-*-*-*Fill the matrix XARR YARR for Contour Plot*-*-*-*-*-*-*-*
//*-*            ==========================================
//*-*

   Bool_t vert;
   Float_t tlen, tdif, elev, diff, pdif, xlen;
   Int_t n, i, icount;

   if (x1 == x2) {
      vert = kTRUE;
      tlen = y2 - y1;
   } else {
      vert = kFALSE;
      tlen = x2 - x1;
   }

   n = icont1 + 1;
   tdif = elev2 - elev1;
   i = 0;
   icount = 0;
   while (n <= icont2 && i <= kMAXCONTOUR/2 -3) {
      elev = GetContourLevel(n);
      diff = elev - elev1;
      pdif = diff/tdif;
      xlen = tlen*pdif;
      if (vert) {
         xarr[i] = x1;
         yarr[i] = y1 + xlen;
      } else {
         xarr[i] = x1 + xlen;
         yarr[i] = y1;
      }
      itarr[i] = n;
      icount++;
      i +=2;
      n++;
   }
   return icount;
}

//______________________________________________________________________________
Int_t TH1::PaintInit()
{
//*-*-*-*-*-*-*Compute histogram parameters used by the drawing routines*-*-*-*
//*-*          =========================================================

   if (GetDimension() > 1 || Hoption.Lego || Hoption.Surf) return 1;

   static const char *where = "PaintInit";
   Float_t YMARGIN = 0.05;
   Int_t maximum = 0;
   Int_t minimum = 0;
   if (fMaximum != -1111) maximum = 1;
   if (fMinimum != -1111) minimum = 1;

//*-*  Compute X axis parameters

   Int_t last   = fXaxis.GetLast();
   Int_t first  = fXaxis.GetFirst();
   Hparam.xlowedge = GetBinLowEdge(first);
   Hparam.xbinsize = GetBinWidth(first);
   Hparam.xlast = last;
   Hparam.xfirst= first;
   Hparam.xmin  = Hparam.xlowedge;
   Hparam.xmax  = GetBinLowEdge(last)+GetBinWidth(last);

//*-*-   if log scale in X, replace xmin,max by the log
   if (Hoption.Logx) {
      if (Hparam.xlowedge <=0 ) {
         Hparam.xlowedge = 0.1*Hparam.xbinsize;
         Hparam.xmin  = Hparam.xlowedge;
      }
      if (Hparam.xmin <=0 || Hparam.xmax <=0) {
         Error(where, "cannot set X axis to log scale");
         return 0;
      }
      Hparam.xfirst= fXaxis.FindBin(Hparam.xmin);
      Hparam.xlast = fXaxis.FindBin(Hparam.xmax);
      Hparam.xmin  = TMath::Log10(Hparam.xmin);
      Hparam.xmax  = TMath::Log10(Hparam.xmax);
   }

//*-*  Compute Y axis parameters
   Float_t BIGP = TMath::Power(10,32);
   Float_t ymax = -BIGP;
   Float_t ymin = BIGP;
   Float_t c1, e1;
   Double_t xv[1];
   Double_t fval;
   Int_t i;
   TObject *f;
   TF1 *f1;
   Stat_t allchan = 0;
   for (i=first; i<=last;i++) {
      c1 = GetBinContent(i);
      ymax = TMath::Max(ymax,c1);
      if (Hoption.Error) {
         e1 = GetBinError(i);
         ymax = TMath::Max(ymax,c1+e1);
      }
      if (Hoption.Func) {
         xv[0] = fXaxis.GetBinCenter(i);
         TIter   next(fFunctions);
         while ((f = (TObject*) next())) {
            if (f->IsA() == TF1::Class()) {
               f1 = (TF1*)f;
               if (xv[0] < f1->GetXmin() || xv[0] > f1->GetXmax()) continue;
               fval = f1->Eval(xv[0],0,0);
               ymax = TMath::Max(ymax,Float_t(fval));
               if (Hoption.Logy) {
                  if (fval > 0.3*c1) ymin = TMath::Min(ymin,Float_t(fval));
               }
            }
         }
      }
      if (Hoption.Logy) {
         if (c1 > 0) ymin = TMath::Min(ymin,c1);
      }
      else           ymin = TMath::Min(ymin,c1);
      allchan += c1;
   }

//*-*- Take into account maximum , minimum

   Float_t xm = ymin;
   if (maximum) ymax = fMaximum;
   if (minimum) xm   = fMinimum;
   if (Hoption.Logy && xm <= 0) {
      Error(where, "log scale requested with zero or negative argument (%f)", xm);
      return 0;
   }
   else ymin = xm;
   if (ymin >= ymax && !Hoption.Plus) {
      if (Hoption.Logy) {
         if (ymax > 0) ymin = 0.001*ymax;
         else {
            Error(where, "log scale is requested but maximum is less or equal 0 (%f)", ymax);
            return 0;
         }
      }
      else {
         ymax = ymin + 1;
         ymin = ymin - 1;
      }
   }

//*-*- take into account normalization factor
   Hparam.allchan = allchan;
   Stat_t factor = allchan;
   if (fNormFactor > 0) factor = fNormFactor;
   if (allchan) factor /= allchan;
   if (factor == 0) factor = 1;
   Hparam.factor = factor;
   ymax = factor*ymax;
   ymin = factor*ymin;

//*-*-----
//*-*-     For log scales, histogram coordinates are LOG10(ymin) and
//*-*-     LOG10(ymax). Final adjustment (if not option "Same"
//*-*-     or "+" for ymax) of ymax and ymin for logarithmic scale, if
//*-*-     Maximum and Minimum are not defined.
//*-*-----
   if (Hoption.Logy) {
      if (ymin <=0 || ymax <=0) {
         Error(where, "Cannot set Y axis to log scale");
         return 0;
      }
      ymin = TMath::Log10(ymin);
      if (!minimum) ymin += TMath::Log10(0.5);
      ymax = TMath::Log10(ymax);
      if (!maximum && !Hoption.Plus) ymax += TMath::Log10(2*(0.9/0.95));
      if (!Hoption.Same) {
         Hparam.ymin = ymin;
         Hparam.ymax = ymax;
      }
      return 1;
   }
//*-*-----
//*-*-     final adjustment of ymin for linear scale.
//*-*-     if minimum is not set , then ymin is set to zero if >0
//*-*-     or to ymin - margin if <0.
//*-*-----
   if (!minimum) {
      if (ymin >= 0) ymin = 0;
      else           ymin -= YMARGIN*(ymax-ymin);
   }
//*-*-----
//*-*-     final adjustment of YMAXI for linear scale (if not option "Same"):
//*-*-     decrease histogram height to MAX% of allowed height if HMAXIM
//*-*-     has not been called.
//*-*-----
   if (!maximum && !Hoption.Plus) {
      ymax += YMARGIN*(ymax-ymin);
   }
   Hparam.ymin = ymin;
   Hparam.ymax = ymax;
   return 1;
}

//______________________________________________________________________________
void TH1::PaintErrors()
{
//*-*-*-*-*-*-*-*-*-*-*Draw histogram error bars*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*-
//*-*-   Draws error bars for the current histogram. The current polymarker
//*-*-   is drawn at the centre of the errors according to CHOPT:
//*-*-
//*-*-   ' ' Coordinates are expressed in histogram coordinates
//*-*-       (of the last drawn histogram). Error bars are drawn.
//*-*-   '1' Small lines are drawn at the end of the error bars.
//*-*-   '2' Error rectangles are drawn.
//*-*-   '3' A filled area is drawn through the end points of the vertical
//*-*-       error bars.
//*-*-   '4' A smoothed filled area is drawn through the end points of the
//*-*-       vertical error bars.
//*-*-   '0' Turn off the symbols clipping.
//Begin_Html
/*
<img src="gif/PaintErrors.gif">
*/
//End_Html
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   const Int_t BASEMARKER=10;
   Float_t xp, yp, ex1, ex2, ey1, ey2;
   Float_t delta;
   Float_t s2x, s2y, bxsize, bysize, symbolsize, xerror;
   Float_t xi1, xi2, xi3, xi4, yi1, yi2, yi3, yi4;
   Float_t xmin, xmax, ymin, ymax;
   Float_t logxmin = 0;
   Float_t logymin = 0;
   Int_t k, npoints, first, last, fixbin;
   Int_t if1 = 0;
   Int_t if2 = 0;
   Int_t drawmarker, errormarker;
   Int_t option0, option1, option2, option3, option4, optionE;
//*-*-_____________________________

   Float_t *xline = 0;
   Float_t *yline = 0;
   option0 = option1 = option2 = option3 = option4 = optionE = 0;
   if (Hoption.Error == 10) option0 = 1;
   if (Hoption.Error == 11) option1 = 1;
   if (Hoption.Error == 12) option2 = 1;
   if (Hoption.Error == 13) option3 = 1;
   if (Hoption.Error == 14) {option4 = 1; option3 = 1;}
   if (option2+option3 == 0) optionE = 1;
   if (Hoption.Error == 0) optionE = 0;
   if (fXaxis.GetXbins()->fN) fixbin = 0;
   else                       fixbin = 1;

   errormarker = GetMarkerStyle();
   xerror      = gStyle->GetErrorX();
   symbolsize  = GetMarkerSize();

//*-*-      set the graphics attributes

   TAttLine::Modify();
   TAttFill::Modify();
   TAttMarker::Modify();

//*-*-      initiate the first and last bin

   first      = Hparam.xfirst;
   last       = Hparam.xlast;
   npoints    = last - first  +1;
   if (errormarker == 1) symbolsize = 0.01;
   Float_t factor = Hparam.factor;
//   xmin       = Hparam.xmin;
//   xmax       = Hparam.xmax;
   xmin       = gPad->GetUxmin();
   xmax       = gPad->GetUxmax();
   ymin       = gPad->GetUymin();
   ymax       = gPad->GetUymax();
   bxsize     = 0.01*symbolsize*(xmax-xmin);

//*-*-      initialize the filled area drawing

   if (option3) {
      xline = new Float_t[2*npoints];
      yline = new Float_t[2*npoints];
      if (!xline || !yline) {
         Error("PaintErrors", "too many points, out of memory");
         return;
      }
      if1 = 1;
      if2 = 2*npoints;
   }

//*-*-      define the offset of the error bars due to the symbol size

   s2x    = gPad->PixeltoX(Int_t(0.5*symbolsize*BASEMARKER)) - gPad->PixeltoX(0);
   s2y    =-gPad->PixeltoY(Int_t(0.5*symbolsize*BASEMARKER)) + gPad->PixeltoY(0);
   bxsize = 0.5*s2x;
   bysize = 0.5*s2y;

//*-*-      initialize the first point

   if (fixbin) {
      if (Hoption.Logx) xp = TMath::Power(10,Hparam.xmin) + 0.5*Hparam.xbinsize;
      else              xp = Hparam.xmin + 0.5*Hparam.xbinsize;
   }
   else {
      delta = GetBinWidth(first);
      xp    = GetBinLowEdge(first) + 0.5*delta;
   }

//*      if errormarker = 0 or symbolsize = 0. no symbol is drawn

   if (Hoption.Logx) logxmin = TMath::Power(10,Hparam.xmin);
   if (Hoption.Logy) logymin = TMath::Power(10,Hparam.ymin);

//*-*----------------------- Loop over the points---------------------

   for (k=first; k<=last; k++) {

//*-*-      get the data

//*-*- xp      = X position of the current point
//*-*- yp      = Y position of the current point
//*-*- ex1   = Low X error
//*-*- ex2   = Up X error
//*-*- ey1   = Low Y error
//*-*- ey2   = Up Y error
//*-*- (xi,yi) = Error bars corrdinates

      if (xp < xmin) goto L30;
      if (xp > xmax) break;
      yp = factor*GetBinContent(k);
      if (fixbin) ex1 = xerror*Hparam.xbinsize;
      else {
         delta = GetBinWidth(k);
         ex1 = xerror*delta;
      }
      ey1 = factor*GetBinError(k);
      ex2 = ex1;
      ey2 = ey1;
      if (Hoption.Logy && yp <= 0) goto L30;
      if (Hoption.Logx && xp <= 0) goto L30;

      xi4 = xp;
      xi3 = xp;
      xi2 = xp + ex2;
      xi1 = xp - ex1;

      yi1 = yp;
      yi2 = yp;
      yi3 = yp - ey1;
      yi4 = yp + ey2;

//*-*-      take the LOG if necessary

      if (Hoption.Logx) {
         xi1 = TMath::Log10(TMath::Max(xi1,logxmin));
         xi2 = TMath::Log10(TMath::Max(xi2,logxmin));
         xi3 = TMath::Log10(TMath::Max(xi3,logxmin));
         xi4 = TMath::Log10(TMath::Max(xi4,logxmin));
      }
      if (Hoption.Logy) {
         yi1 = TMath::Log10(TMath::Max(yi1,logymin));
         yi2 = TMath::Log10(TMath::Max(yi2,logymin));
         yi3 = TMath::Log10(TMath::Max(yi3,logymin));
         yi4 = TMath::Log10(TMath::Max(yi4,logymin));
      }

//*-*-      test if error bars are not outside the limits
//*-*-      otherwise they are truncated

      xi1 = TMath::Max(xi1,xmin);
      xi2 = TMath::Min(xi2,xmax);
      yi3 = TMath::Max(yi3,ymin);
      yi4 = TMath::Min(yi4,ymax);

//*-*-      test if the marker is on the frame limits. If "Yes", the
//*-*-      marker will be not drawn and the error bars will be readjusted.

      drawmarker = kTRUE;
      if (!option0) {   // <=====Please check
         if (yi1 < ymin || yi1 > ymax) goto L30;
//         if (((yi1-s2y) < ymin && (yi1+s2y) > ymin)
//          || ((yi1-s2y) < ymax && (yi1+s2y) > ymax)
//          || ((xi3-s2x) < xmin && (xi3+s2x) > xmin)
//          || ((xi3-s2x) < xmax && (xi3+s2x) > xmax))
//         drawmarker = kFALSE;
          if (ey1 <= 0) drawmarker = kFALSE;
      }
      if (!symbolsize || !errormarker) drawmarker = kFALSE;

//*-*-      draw the error rectangles

      if (option2) gPad->PaintBox(xi1,yi3,xi2,yi4);

//*-*-      keep points for fill area drawing

      if (option3) {
         xline[if1-1] = xi3;
         xline[if2-1] = xi3;
         yline[if1-1] = yi4;
         yline[if2-1] = yi3;
         if1++;
         if2--;
      }

//*-*-      draw the error bars

      if (optionE && drawmarker) {
         if (yi3 < yi1 - s2y) gPad->PaintLine(xi3,yi3,xi4,yi1 - s2y);
         if (yi1 + s2y < yi4) gPad->PaintLine(xi3,yi1 + s2y,xi4,yi4);
         if (xi1 < xi3 - s2x) gPad->PaintLine(xi1,yi1,xi3 - s2x,yi2);
         if (xi3 + s2x < xi2) gPad->PaintLine(xi3 + s2x,yi1,xi2,yi2);
      }
      if (optionE && !drawmarker) {
         if (yi3 < yi4) gPad->PaintLine(xi3,yi3,xi4,yi4);
         if (yi1 < yi4) gPad->PaintLine(xi3,yi1,xi4,yi4);
         if (xi1 < xi3) gPad->PaintLine(xi1,yi1,xi3,yi2);
         if (xi3 < xi2) gPad->PaintLine(xi3,yi1,xi2,yi2);
      }

//*-*-      draw line at the end of the error bars

      if (option1) {
         if (yi3 < yi1-s2y) gPad->PaintLine(xi3 - bxsize,yi3,xi3 + bxsize,yi3);
         if (yi4 > yi1+s2y) gPad->PaintLine(xi3 - bxsize,yi4,xi3 + bxsize,yi4);
         if (xi1 < xi3-s2x) gPad->PaintLine(xi1,yi1 - bysize,xi1,yi1 + bysize);
         if (xi2 > xi3+s2x) gPad->PaintLine(xi2,yi1 - bysize,xi2,yi1 + bysize);
      }

//*-*-      draw the marker

      if (drawmarker) gPad->PaintPolyMarker(1, &xi3, &yi1);

L30:
      if (fixbin) xp += Hparam.xbinsize;
      else {
         if (k < last) {
            delta = GetBinWidth(k+1);
            xp    = GetBinLowEdge(k+1) + 0.5*delta;
         }
      }
   }  //end of for loop

//*-*-      draw the filled area

   if (option3) {
      TGraph graph;
      graph.SetFillStyle(GetFillStyle());
      graph.SetFillColor(GetFillColor());
      if (option4) graph.PaintGraph(2*npoints,xline,yline,"FC");
      else         graph.PaintGraph(2*npoints,xline,yline,"F");
      delete [] xline;
      delete [] yline;
   }
}

//______________________________________________________________________________
void TH1::PaintFrame()
{
//*-*-*-*-*-*-*-*-*-*Calculate range and clear pad (canvas)*-*-*-*-*-*-*-*-*-*
//*-*                ======================================
   if (Hoption.Same) return;

   RecalculateRange();

   if (Hoption.Lego || Hoption.Surf || Hoption.Contour == 1) {
      TObject *frame = gPad->GetPrimitive("TFrame");
      if (frame) gPad->GetListOfPrimitives()->Remove(frame);
      return;
   }
   gPad->PaintPadFrame(Hparam.xmin,Hparam.ymin,Hparam.xmax,Hparam.ymax);
}

//______________________________________________________________________________
void TH1::PaintFunction()
{
//*-*-*-*-*-*-*-*-*-*-*Paint functions associated to an histogram*-*-*-*-*-*-*
//*-*                  ==========================================
//
//   An associated function is created by TH1::Fit. Note that more than
//   on fitted function can be associated with one histogram (see TH1::Fit).
//
//   A TF1 object can be added to the list of associated functions directly
//   by a user without calling TH1::Fit.
//   To add a new function to the list of associated functions, do
//     h->GetListOfFunctions()->Add(f1);
//   To retrieve a function by name from this list, do:
//     TF1 *f1 = (TF1*)h->GetListOfFunctions()->FindObject(name);
//   or
//     TF1 *f1 = h->GetFunction(name);
//
   TObject *f;
   TIter   next(fFunctions);
   while ((f = (TObject*) next())) {
      if (f->IsA() == TF1::Class()) f->Paint("lsame");
      else                          f->Paint();
   }
}

//______________________________________________________________________________
void TH1::PaintHist()
{
//*-*-*-*-*-*-*-*-*-*Control routine to draw an histogram*-*-*-*-*-*-*-*-*-*-*
//*-*                ====================================

   static char chopth[17];
   static char choptg[5];
   static char chtemp[9];


   Int_t htype, oldhtype;
   Int_t i, j, first, last, nbins, fixbin;
   Float_t c1, yb, y1, y2, ym1, ym2, yadd, ycur, ypre;
   Float_t ync, ynext, ypc;
   yb = ynext = 0;

   strcpy(chopth, "                ");
   strcpy(choptg, "    ");
   strcpy(chtemp, "        ");

   Float_t ymin = Hparam.ymin;
   Float_t ymax = Hparam.ymax;
   Float_t baroffset = GetBarOffset();
   Float_t barwidth  = GetBarWidth();
   Float_t baroffsetsave = gStyle->GetBarOffset();
   Float_t barwidthsave  = gStyle->GetBarWidth();
   gStyle->SetBarOffset(baroffset);
   gStyle->SetBarWidth(barwidth);

//*-*-   Create "LIFE" structure to keep current histogram status

   first = Hparam.xfirst;
   last  = Hparam.xlast;
   nbins = last - first + 1;

   Float_t *keepx = 0;
   Float_t *keepy = 0;
   if (fXaxis.GetXbins()->fN) fixbin = 0;
   else                       fixbin = 1;
   if (!Hoption.Plus) {
      if (fixbin) keepx = new Float_t[2];
      else        keepx = new Float_t[nbins+1];
      keepy = new Float_t[nbins];
   }
   Float_t logymin = 0;
   if (Hoption.Logy) logymin = TMath::Power(10,ymin);

//*-*-  Loop on histogram bins

   for (j=first; j<=last;j++) {
      c1 = Hparam.factor*GetBinContent(j);
      if (TMath::Abs(ymax-ymin) > 0) {
         if (Hoption.Logy) yb = TMath::Log10(TMath::Max(c1,logymin));
         else              yb = c1;
      }
      yb = TMath::Max(yb, ymin);
      yb = TMath::Min(yb, ymax);

      if (Hoption.Plus) {
//*-*         compute y1, y2
         y1 = keepy[j-first];
         y2 = yb;
         if (Hoption.Plus == 1 || Hoption.Plus == -1) {
            if (Hoption.Logy)
               y2 = TMath::Log10(TMath::Power(10,y1) + Hoption.Plus*TMath::Power(10,y2));
            else
               y2 = y1 +y2*Hoption.Plus;
         }
//*-*         compute ym1, ym2
         if (!Hoption.Bar) {
            yadd = Hparam.factor*GetBinContent(j);
            if (Hoption.Logy) ycur = TMath::Power(10,keepy[j-first]);
            else              ycur = keepy[j-first];
            if (j != last) {
               ync = Hparam.factor*GetBinContent(j+1);
               if (Hoption.Logy) ycur = TMath::Power(10,keepy[j-first+1]);
               else              ycur = keepy[j-first+1];
            }
            else { ync = ynext = 0;}
            if (j != first) {
               ypc = Hparam.factor*GetBinContent(j-1);
               if (Hoption.Logy) ypre = TMath::Power(10,keepy[j-first]);
               else              ypre = keepy[j-first];
            }
            else { ypc = ypre = 0;}
            if (Hoption.Plus == 1) {
                ym1 = TMath::Max(TMath::Min(ycur+yadd,ypre),ycur);
                ym2 = TMath::Max(TMath::Min(ycur+yadd,ynext+ync),ycur);
            }
            else if(Hoption.Plus == -1) {
                ym1 = TMath::Max(TMath::Min(ycur-yadd,ypre),ycur);
                ym2 = TMath::Max(TMath::Min(ycur-yadd,ynext-ync),ycur);
            }
            else {
               if (ycur > yadd) { ym1 = TMath::Max(yadd,ypc); ym2 = TMath::Max(yadd,ync); }
               else {             ym1 = TMath::Min(yadd,ypc); ym2 = TMath::Min(yadd,ync); }
            }
            if (Hoption.Logy) {
               if (ym1 > 0) ym1 = TMath::Log10(ym1);
               if (ym2 > 0) ym2 = TMath::Log10(ym2);
            }
         }

//*-*-           Compute X1 X2
         if (Hoption.Logy && c1 <= 0) continue;

//*-*- Update the current plot

         if (Hoption.Plus == 1 || Hoption.Plus == -1) keepy[j-first-1] = y2;
      }
      else {
         keepy[j-first] = yb;
      }
   } // end of for loop

   if (Hoption.Plus) return;

//*-*-          Draw histogram according to value of FillStyle and FillColor

   if (fixbin) { keepx[0] = Hparam.xmin; keepx[1] = Hparam.xmax; }
   else {
      for (i=0; i<=nbins; i++) keepx[i] = fXaxis.GetXbins()->fArray[i+first-1];
   }

//*-*-     Prepare Fill area (systematic with option "Bar").

   oldhtype = GetFillStyle();
   htype    = oldhtype;
   if (Hoption.Bar) {
      if (htype == 0 || htype == 1000) htype = 1001;
   }

   Width_t lw = Width_t(GetLineWidth()*gPad->GetAbsHNDC() + 0.5);

//*-*-     Code option for GrapHist

   if (Hoption.Line) chopth[0] = 'L';
   if (Hoption.Star) chopth[1] = '*';
   if (Hoption.Mark) chopth[2] = 'P';
   if (Hoption.Curve || Hoption.Hist || Hoption.Bar) {
      if (Hoption.Curve)      chopth[3] = 'C';
      if (Hoption.Hist > 0) { chopth[4] = 'H';  strcpy(choptg,"H"); }
      else if (Hoption.Bar) { chopth[5] = 'B';  strcpy(choptg,"B"); }
      if (GetFillColor() && htype) {
         if (Hoption.Logy) {
            chopth[6] = '1';
            if (strlen(choptg)) {
               strcpy(chtemp,"1");
               strcat(chtemp, choptg);
               strncpy(choptg, chtemp,4);
            }
         }
         if (Hoption.Hist > 0 || Hoption.Curve) {
            chopth[7] = 'F';
            if (strlen(choptg)) {
               strcpy(chtemp,"F");
               strcat(chtemp, choptg);
               strncpy(choptg, chtemp,4);
            }
         }
      }
   }
   if (!fixbin && strlen(chopth)) {
      chopth[8] = 'N';
      if (strlen(choptg)) {
         strcpy(chtemp,"N");
         strcat(chtemp, choptg);
         strncpy(choptg, chtemp,4);
      }
   }

   if (!strlen(chopth)) {
      if (GetFillColor() && htype) {
         if (!Hoption.Logy) {
            if (!Hoption.Bar) {
               if (fixbin) { strcpy(chopth,"F");   strcpy(choptg,"F   "); }
               else        { strcpy(chopth,"FN");  strcpy(choptg,"FN  "); }
            }
            else {
               if (fixbin) { strcpy(chopth,"B");   strcpy(choptg,"B   "); }
               else        { strcpy(chopth,"BN");  strcpy(choptg,"BN  "); }
            }
         }
         else {
            if (!Hoption.Bar) {
               if (fixbin) { strcpy(chopth,"F1");  strcpy(choptg,"F1  "); }
               else        { strcpy(chopth,"F1N"); strcpy(choptg,"F1N "); }
            }
            else {
               if (fixbin) { strcpy(chopth,"B1");  strcpy(choptg,"B1  "); }
               else        { strcpy(chopth,"B1N"); strcpy(choptg,"B1N "); }
            }
         }
      }
      else {
         if (fixbin) { strcpy(chopth,"H");   strcpy(choptg,"H   "); }
         else        { strcpy(chopth,"HN");  strcpy(choptg,"HN  "); }
      }
   }

//*-*-     Option LOGX

   if (Hoption.Logx) {
      chopth[9]  = 'G';
      chopth[10] = 'X';
      if (strlen(choptg)) {
         strcpy(chtemp,"GX");
         strcat(chtemp, choptg);
         strncpy(choptg, chtemp,4);
      }
      if (fixbin) {
         keepx[0] = TMath::Power(10,keepx[0]);
         keepx[1] = TMath::Power(10,keepx[1]);
      }
   }

//*-*-     Draw the histogram

   TGraph graph;
   graph.SetLineWidth(lw);
   graph.SetLineStyle(GetLineStyle());
   graph.SetLineColor(GetLineColor());
   graph.SetFillStyle(htype);
   graph.SetFillColor(GetFillColor());
   if (fixbin) {
      graph.PaintGrapHist(nbins, keepx, keepy ,chopth);
   }
   else {
      graph.PaintGrapHist(nbins, keepx, keepy ,chopth);
   }
   delete [] keepx;
   delete [] keepy;
   gStyle->SetBarOffset(baroffsetsave);
   gStyle->SetBarWidth(barwidthsave);

   htype=oldhtype;
}

//______________________________________________________________________________
void TH1::PaintH3(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Control function to draw a 3-D histogram*-*-*-*-*-*-*-*-*
//*-*                ========================================

   if (GetDrawOption() && strstr(GetDrawOption(),"box")) {
      PaintH3Box(option);
      return;
   }

   Float_t rmin[3], rmax[3];
   Float_t xf,yf,zf;
   Int_t bin, binx, biny, binz;
   TView * view;

   if (!fEntries) return;
   Int_t nx  = fXaxis.GetNbins();
   Int_t ny  = fYaxis.GetNbins();
   Int_t nz  = fZaxis.GetNbins();
   TPolyMarker3D *pm3d    = new TPolyMarker3D(Int_t(fEntries));
   gPad->Modified(kTRUE);
   rmin[0] = fXaxis.GetBinLowEdge(1);
   rmin[1] = fYaxis.GetBinLowEdge(1);
   rmin[2] = fZaxis.GetBinLowEdge(1);
   rmax[0] = fXaxis.GetBinLowEdge(nx) + fXaxis.GetBinWidth(nx);
   rmax[1] = fYaxis.GetBinLowEdge(ny) + fYaxis.GetBinWidth(ny);
   rmax[2] = fZaxis.GetBinLowEdge(nz) + fZaxis.GetBinWidth(nz);
   xf = 1000/(rmax[0] - rmin[0]);
   yf = 1000/(rmax[1] - rmin[1]);
   zf = 1000/(rmax[2] - rmin[2]);
   rmin[0] *= xf; rmax[0] *= xf;
   rmin[1] *= yf; rmax[1] *= yf;
   rmin[2] *= zf; rmax[2] *= zf;
   view = gPad->GetView();
   if (view) {
      view->SetRange(rmin,rmax);
   } else {
      gPad->Range(-1,-1,1,1);
      view = new TView(rmin,rmax,1);
   }
   Int_t entry = 0;
   Float_t x,y,z,xw,yw,zw,xp,yp,zp;
   for (binz=1;binz<=nz;binz++) {
      z  = fZaxis.GetBinCenter(binz);
      zw = fZaxis.GetBinWidth(binz);
      for (biny=1;biny<=ny;biny++) {
         y  = fYaxis.GetBinCenter(biny);
         yw = fYaxis.GetBinWidth(biny);
         for (binx=1;binx<=nx;binx++) {
            x  = fXaxis.GetBinCenter(binx);
            xw = fXaxis.GetBinWidth(binx);
            bin = GetBin(binx-1,biny-1,binz-1);
            for (Int_t in=0;in<GetBinContent(bin);in++) {
               xp = x + xw*gRandom->Rndm(in);
               yp = y + yw*gRandom->Rndm(in);
               zp = z + zw*gRandom->Rndm(in);
               pm3d->SetPoint(entry,xp*xf,yp*yf,zp*zf);
               entry++;
            }
         }
      }
   }
   pm3d->Paint(option);
   delete pm3d;
}

//______________________________________________________________________________
void TH1::PaintH3Box(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*Draw a 3-D histogram with boxes*-*-*-*-*-*-*-*-*
//*-*                ===============================
//
// Each 3-d cell is represented by a box of size proportional to the cell content
// The cell color is the histogram marker color

   Int_t bin,ix,iy,iz;
   Float_t xmin,xmax,ymin,ymax,zmin,zmax,wmin,wmax,w;
   Int_t nbinsx = fXaxis.GetNbins();
   Int_t nbinsy = fYaxis.GetNbins();
   Int_t nbinsz = fZaxis.GetNbins();

   //compute min and max of all cells
   wmin = wmax = 0;
   for (ix=1;ix<=nbinsx;ix++) {
      for (iy=1;iy<=nbinsy;iy++) {
         for (iz=1;iz<=nbinsz;iz++) {
            bin = GetBin(ix,iy,iz);
            w = GetBinContent(bin);
            if (w > wmax) wmax = w;
            if (w < wmin) wmin = w;
         }
      }
   }

   //Create or modify 3-d view object
   TView *view = gPad->GetView();
   if (!view) {
      gPad->Range(-1,-1,1,1);
      view = new TView(1);
   }
   view->SetRange(fXaxis.GetXmin(),
                  fYaxis.GetXmin(),
                  fZaxis.GetXmin(),
                  fXaxis.GetXmax(),
                  fYaxis.GetXmax(),
                  fZaxis.GetXmax());


   //Draw TMarker3DBox with size proportional to cell content
   TMarker3DBox m3;
   m3.SetRefObject(this);
   m3.SetDirection(0,0);
   m3.SetLineColor(GetMarkerColor());
   Float_t scale;
   for (ix=1;ix<=nbinsx;ix++) {
      xmin = fXaxis.GetBinLowEdge(ix);
      xmax = xmin + fXaxis.GetBinWidth(ix);
      for (iy=1;iy<=nbinsy;iy++) {
         ymin = fYaxis.GetBinLowEdge(iy);
         ymax = ymin + fYaxis.GetBinWidth(iy);
         for (iz=1;iz<=nbinsz;iz++) {
            zmin = fZaxis.GetBinLowEdge(iz);
            zmax = zmin + fZaxis.GetBinWidth(iz);
            bin = GetBin(ix,iy,iz);
            w = GetBinContent(bin);
            if (w == 0) continue;
            scale = (w-wmin)/(wmax-wmin);
            m3.SetPosition(0.5*(xmin+xmax),0.5*(ymin+ymax),0.5*(zmin+zmax));
            m3.SetSize(scale*(xmax-xmin),scale*(ymax-ymin),scale*(zmax-zmin));
            m3.Paint(option);
         }
      }
   }
}


//______________________________________________________________________________
void TH1::PaintLego()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a lego plot*-*-*-*-*-*
//*-*            ===============================================
//*-*
//*-*     In a lego plot, cell contents are represented as 3-d boxes.
//*-*     The height of the box is proportional to the cell content.
//*-*
//*-*    A lego plot can be represented in several coordinate systems.
//*-*    Default system is Cartesian coordinates.
//*-*    Possible systems are CYL,POL,SPH,PSR.
//*-*
//*-*   See TH1::Draw for the list of Lego options.
//*-*   See TLego for more examples of lego options.
//
//      See TStyle::SetPalette to change the color palette.
//      It is suggested to use palette 1 via the call
//      gStyle->SetColorPalette(1)
//
//Begin_Html
/*
<img src="gif/PaintLego1.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   Int_t i;
   Int_t raster = 1;
   TH1 *hid;
   gNIDS = 0;
   hlist[0] = this;
   if (Hparam.zmin == 0 && Hparam.zmax == 0) {Hparam.zmin = -1; Hparam.zmax = 1;}
   Int_t   nx     = Hparam.xlast - Hparam.xfirst + 1;
   Int_t   ny     = Hparam.ylast - Hparam.yfirst + 1;
   Float_t zmin   = Hparam.zmin;
   Float_t zmax   = Hparam.zmax;
   Float_t xlab1  = Hparam.xmin;
   Float_t xlab2  = Hparam.xmax;
   Float_t ylab1  = Hparam.ymin;
   Float_t ylab2  = Hparam.ymax;
   Float_t dangle = 10*3.141592/180; //Delta angle for Rapidity option
   Float_t z1c = zmin;
   Float_t z2c = zmax*kHMAX;


//*-*- Compute the lego limits and instantiate a lego object
   xbuf[0] = -1;
   ybuf[0] =  1;
   xbuf[1] = -1;
   ybuf[1] =  1;
   if (Hoption.System == kPOLAR) {
      xbuf[2] = z1c;
      ybuf[2] = z2c;
   } else if (Hoption.System == kCYLINDRICAL) {
      if (Hoption.Logy) {
         if (ylab1 > 0) xbuf[2] = TMath::Log10(ylab1);
         else           xbuf[2] = 0;
         if (ylab2 > 0) ybuf[2] = TMath::Log10(ylab2);
         else           ybuf[2] = 0;
      } else {
         xbuf[2] = ylab1;
         ybuf[2] = ylab2;
      }
      z1c = 0; z2c = 1;
   } else if (Hoption.System == kSPHERICAL) {
      xbuf[2] = -1;
      ybuf[2] =  1;
      z1c = 0; z2c = 1;
   } else if (Hoption.System == kRAPIDITY) {
      xbuf[2] = -1/TMath::Tan(dangle);
      ybuf[2] =  1/TMath::Tan(dangle);
   } else {
      if (Hoption.Logx) {
         if (xlab1 > 0) xbuf[0] = TMath::Log10(xlab1);
         else           xbuf[0] = 0;
         if (xlab2 > 0) ybuf[0] = TMath::Log10(xlab2);
         else           ybuf[0] = 0;
      } else {
         xbuf[0] = xlab1;
         ybuf[0] = xlab2;
      }
      if (Hoption.Logy) {
         if (ylab1 > 0) xbuf[1] = TMath::Log10(ylab1);
         else           xbuf[1] = 0;
         if (ylab2 > 0) ybuf[1] = TMath::Log10(ylab2);
         else           ybuf[1] = 0;
      } else {
         xbuf[1] = ylab1;
         ybuf[1] = ylab2;
      }
      xbuf[2] = z1c;
      ybuf[2] = z2c;
      raster  = 0;
   }

   gLego = new TLego(xbuf, ybuf, Hoption.System);

//*-*-      Create axis object

   TGaxis *axis = new TGaxis();

//*-*-              Initialize the levels on the Z axis
   Int_t ndiv   = GetContour();
   if (ndiv == 0 ) {
      ndiv = 20;
      SetContour(ndiv);
   }
   Int_t ndivz  = TMath::Abs(ndiv);

//*-*- Initialize colors for the lighting model (option Lego1 only)
   if (Hoption.Lego == 11) {
      for (Int_t id=0;id<=gNIDS;id++) {
         hid = hlist[id];
         Color_t colormain = hid->GetFillColor();
         if (colormain == 1) colormain = 17; //avoid drawing with black
         Color_t colordark = colormain + 100;
         gLego->SetColorMain(colormain,id);
         gLego->SetColorDark(colordark,id);
         if (id == 0)     gLego->SetColorMain(colormain,-1);  // Set Bottom color
         if (id == gNIDS) gLego->SetColorMain(colormain,99);  // Set Top color
      }
   }

//*-*- Now ready to draw the lego plot
   Int_t irep = 0;

   TView *view = gPad->GetView();
   if (!view) {
      Error("PaintLego", "no TView in current pad");
      return;
   }

   Float_t thedeg =  90 - gPad->GetTheta();
   Float_t phideg = -90 - gPad->GetPhi();
   Float_t psideg = view->GetPsi();
   view->SetView(phideg, thedeg, psideg, irep);

   gLego->SetLineColor(GetLineColor());
   gLego->SetFillStyle(GetFillStyle());

//*-*- Set color/style for back box
   gLego->SetFillStyle(gStyle->GetFrameFillStyle());
   gLego->SetFillColor(gStyle->GetFrameFillColor());
   gLego->TAttFill::Modify();

   Int_t backcolor = gStyle->GetFrameFillColor();
   if (Hoption.System != kCARTESIAN) backcolor = 0;
   view->PadRange(backcolor);

   gLego->SetFillStyle(GetFillStyle());
   gLego->SetFillColor(GetFillColor());
   gLego->TAttFill::Modify();

   if (raster) gLego->InitRaster(-1.1,-1.1,1.1,1.1,1000,800);
   else        gLego->InitMoveScreen(-1.1,1.1);

   if (Hoption.Lego == 11 || Hoption.Lego == 12) {
      gLego->SetLineColor(1);
      if (Hoption.System == kCARTESIAN && Hoption.BackBox) {
         gLego->SetDrawFace(&TLego::DrawFaceMove1);
         gLego->BackBox(90);
      }
   }

//*-*-             Initialize the colour levels
   if (ndivz >= 100) {
      Warning("PaintLego", "too many color levels, %d, reset to 8", ndivz);
      ndivz = 8;
   }
   Float_t *funlevel = new Float_t[ndivz+1];
   Int_t *colorlevel = new Int_t[ndivz+1];
   Int_t lowcolor = GetFillColor();
   Int_t theColor;
   Int_t ncolors = gStyle->GetNumberOfColors();
   for (i = 0; i < ndivz; ++i) {
      funlevel[i]   = GetContourLevel(i);
      theColor = lowcolor + Int_t(i*Float_t(ncolors)/Float_t(ndivz));
      colorlevel[i] = gStyle->GetColorPalette(theColor);
   }
   colorlevel[ndivz] = gStyle->GetColorPalette(lowcolor+ncolors-1);
   gLego->ColorFunction(ndivz, funlevel, colorlevel, irep);
   delete [] colorlevel;
   delete [] funlevel;

   gLego->SetLegoFunction(&TLego::LegoFunction);
   if (Hoption.Lego ==  1) gLego->SetDrawFace(&TLego::DrawFaceRaster2);
   if (Hoption.Lego == 11) gLego->SetDrawFace(&TLego::DrawFaceMode3);
   if (Hoption.Lego == 12) gLego->SetDrawFace(&TLego::DrawFaceMode2);
   if (Hoption.System == kPOLAR) {
      if (Hoption.Lego ==  1) gLego->LegoPolar(1,nx,ny,"FB");
      if (Hoption.Lego == 11) gLego->LegoPolar(1,nx,ny,"BF");
      if (Hoption.Lego == 12) gLego->LegoPolar(1,nx,ny,"BF");
   } else if (Hoption.System == kCYLINDRICAL) {
      if (Hoption.Lego ==  1) gLego->LegoCylindrical(1,nx,ny,"FB");
      if (Hoption.Lego == 11) gLego->LegoCylindrical(1,nx,ny,"BF");
      if (Hoption.Lego == 12) gLego->LegoCylindrical(1,nx,ny,"BF");
   } else if (Hoption.System == kSPHERICAL) {
      if (Hoption.Lego ==  1) gLego->LegoSpherical(0,1,nx,ny,"FB");
      if (Hoption.Lego == 11) gLego->LegoSpherical(0,1,nx,ny,"BF");
      if (Hoption.Lego == 12) gLego->LegoSpherical(0,1,nx,ny,"BF");
   } else if (Hoption.System == kRAPIDITY) {
      if (Hoption.Lego ==  1) gLego->LegoSpherical(1,1,nx,ny,"FB");
      if (Hoption.Lego == 11) gLego->LegoSpherical(1,1,nx,ny,"BF");
      if (Hoption.Lego == 12) gLego->LegoSpherical(1,1,nx,ny,"BF");
   } else {
      if (Hoption.Lego ==  1) {
                              gLego->SetDrawFace(&TLego::DrawFaceMove2);
                              gLego->LegoCartesian(90,nx,ny,"FB");}
      if (Hoption.Lego == 11) gLego->LegoCartesian(90,nx,ny,"BF");
      if (Hoption.Lego == 12) gLego->LegoCartesian(90,nx,ny,"BF");
   }

   if (Hoption.Lego == 1 || Hoption.Lego == 11) {
      gLego->SetLineColor(1);
      if (Hoption.System == kCARTESIAN && Hoption.BackBox) {
         gLego->SetDrawFace(&TLego::DrawFaceMove1);
         gLego->BackBox(90);
      }
   }
   if (Hoption.System == kCARTESIAN) {
      gLego->InitMoveScreen(-1.1,1.1);
      gLego->SetDrawFace(&TLego::DrawFaceMove2);
      if (Hoption.FrontBox) gLego->FrontBox(90);
   }
   if (!Hoption.Axis) PaintLegoAxis(axis, 90);
   gNIDS = 0;
   delete axis;
   delete gLego; gLego = 0;
}

//______________________________________________________________________________
void TH1::PaintLegoAxis(TGaxis *axis, Float_t ang)
{
//*-*-*-*-*-*-*Draw the axis for legos and surface plots*-*-*-*-*-*-*-*-*-*
//*-*          =========================================
//*-*

    static Float_t epsil = 0.001;

    Double_t cosa, sina;
    Float_t bmin, bmax;
    Float_t r[24]	/* was [3][8] */;
    Int_t ndivx, ndivy, ndivz, i;
    Float_t x1[3], x2[3], y1[3], y2[3], z1[3], z2[3], av[24]  /*  was [3][8] */;
    static char chopax[8], chopay[8], chopaz[8];
    Int_t ix1, ix2, iy1, iy2, iz1, iz2;
    Double_t rad;

//*-*-----------------------------------------------------------------------

    if (Hoption.System != kCARTESIAN) return ;

    rad = TMath::ATan(1.) * (float)4. / (float)180.;
    cosa = TMath::Cos(ang*rad);
    sina = TMath::Sin(ang*rad);

    TView *view = gPad->GetView();
	if (!view) {
	   Error("PaintLegoAxis", "no TView in current pad");
		return;
	}
	
    view->AxisVertex(ang, av, ix1, ix2, iy1, iy2, iz1, iz2);
    for (i = 1; i <= 8; ++i) {
	r[i*3 - 3] = av[i*3 - 3] + av[i*3 - 2]*cosa;
	r[i*3 - 2] = av[i*3 - 2]*sina;
	r[i*3 - 1] = av[i*3 - 1];
    }


    view->WCtoNDC(&r[ix1*3 - 3], x1);
    view->WCtoNDC(&r[ix2*3 - 3], x2);
    view->WCtoNDC(&r[iy1*3 - 3], y1);
    view->WCtoNDC(&r[iy2*3 - 3], y2);
    view->WCtoNDC(&r[iz1*3 - 3], z1);
    view->WCtoNDC(&r[iz2*3 - 3], z2);

    view->SetAxisNDC(x1, x2, y1, y2, z1, z2);

    Float_t *rmin = view->GetRmin();
    Float_t *rmax = view->GetRmax();

//*-*-             Initialize the axis options

    if (x1[0] > x2[0]) strcpy(chopax, "SDHV=+");
    else               strcpy(chopax, "SDHV=-");
    if (y1[0] > y2[0]) strcpy(chopay, "SDHV=+");
    else               strcpy(chopay, "SDHV=-");
    strcpy(chopaz, "SDH+=");

//*-*-             Option LOG is required ?

    if (Hoption.Logx) strcat(chopax,"G");
    if (Hoption.Logy) strcat(chopay,"G");
    if (Hoption.Logz) strcat(chopaz,"G");

//*-*-          Initialize the number of divisions. If the
//*-*-          number of divisions is negative, option 'N' is required.

    ndivx = fXaxis.GetNdivisions();
    ndivy = fYaxis.GetNdivisions();
    ndivz = fZaxis.GetNdivisions();
    if (ndivx < 0) {
	ndivx = TMath::Abs(ndivx);
	chopax[6] = 'N';
    }
    if (ndivy < 0) {
	ndivy = TMath::Abs(ndivy);
	chopay[6] = 'N';
    }
    if (ndivz < 0) {
	ndivz = TMath::Abs(ndivz);
	chopaz[6] = 'N';
    }

//*-*-          Set Axis attributes.
//*-*-          The variable SCALE  rescales the VSIZ
//*-*-          in order to have the same label size for all angles.

    axis->SetLineWidth(1);

//*-*-          X axis drawing

    if (TMath::Abs(x1[0] - x2[0]) >= epsil || TMath::Abs(x1[1] - x2[1]) > epsil) {
        axis->SetLineColor(fXaxis.GetAxisColor());
        axis->SetTextFont(fXaxis.GetLabelFont());
	axis->SetTextColor(fXaxis.GetLabelColor());
	axis->SetTickSize(fXaxis.GetTickLength());
        axis->SetLabelFont(fXaxis.GetLabelFont());
	axis->SetLabelOffset(fXaxis.GetLabelOffset()+fXaxis.GetTickLength());
        axis->SetLabelSize(fXaxis.GetLabelSize());
        axis->SetTitle((char*)fXaxis.GetTitle());
        axis->SetTitleOffset(fXaxis.GetTitleOffset());
        axis->SetTitleSize(fXaxis.GetTitleSize());
        axis->SetBit(kCenterTitle, fXaxis.TestBit(kCenterTitle));
	if (Hoption.Logx) {
	    bmin = TMath::Power(10, rmin[0]);
	    bmax = TMath::Power(10, rmax[0]);
	} else {
	    bmin = rmin[0];
	    bmax = rmax[0];
	}
	axis->PaintAxis(x1[0], x1[1], x2[0], x2[1], bmin, bmax, ndivx, chopax);
    }

//*-*-          Y axis drawing

    if (TMath::Abs(y1[0] - y2[0]) >= epsil || TMath::Abs(y1[1] - y2[1]) > epsil) {
        axis->SetLineColor(fYaxis.GetAxisColor());
        axis->SetTextFont(fYaxis.GetLabelFont());
	axis->SetTextColor(fYaxis.GetLabelColor());
	axis->SetTickSize(fYaxis.GetTickLength());
        axis->SetLabelFont(fYaxis.GetLabelFont());
	axis->SetLabelOffset(fYaxis.GetLabelOffset()+fYaxis.GetTickLength());
        axis->SetLabelSize(fYaxis.GetLabelSize());
        axis->SetTitle((char*)fYaxis.GetTitle());
        axis->SetTitleOffset(fYaxis.GetTitleOffset());
        axis->SetTitleSize(fYaxis.GetTitleSize());
        axis->SetBit(kCenterTitle, fYaxis.TestBit(kCenterTitle));

	if (TMath::Abs(z1[0] - z2[0]) < epsil && TMath::Abs(z1[1] - z2[1]) < epsil) {
	    strcpy(chopay, "SDH+=N");
	}
	if (GetDimension() < 2) {
	    strcpy(chopay, "V=+UN");
	    ndivy = 0;
	}
	if (TMath::Abs(y1[0] - y2[0]) < epsil) {
	    y2[0] = y1[0];
	}
	if (Hoption.Logy) {
	    bmin = TMath::Power(10, rmin[1]);
	    bmax = TMath::Power(10, rmax[1]);
	} else {
	    bmin = rmin[1];
	    bmax = rmax[1];
	}
	axis->PaintAxis(y1[0], y1[1], y2[0], y2[1], bmin, bmax, ndivy, chopay);
    }

//*-*-          Z axis drawing

    if (TMath::Abs(z1[0] - z2[0]) >= epsil || TMath::Abs(z1[1] - z2[1]) > epsil) {
        axis->SetLineColor(fZaxis.GetAxisColor());
        axis->SetTextFont(fZaxis.GetLabelFont());
	axis->SetTextColor(fZaxis.GetLabelColor());
	axis->SetTickSize(fZaxis.GetTickLength());
        axis->SetLabelFont(fZaxis.GetLabelFont());
	axis->SetLabelOffset(fZaxis.GetLabelOffset());
        axis->SetLabelSize(fZaxis.GetLabelSize());
        axis->SetTitle((char*)fZaxis.GetTitle());
        axis->SetTitleOffset(fZaxis.GetTitleOffset());
        axis->SetTitleSize(fZaxis.GetTitleSize());
        axis->SetBit(kCenterTitle, fZaxis.TestBit(kCenterTitle));
	if (Hoption.Logz) {
	    bmin = TMath::Power(10, rmin[2]);
	    bmax = TMath::Power(10, rmax[2]);
	} else {
	    bmin = rmin[2];
	    bmax = rmax[2];
	}
	axis->PaintAxis(z1[0], z1[1], z2[0], z2[1], bmin, bmax, ndivz, chopaz);
    }

    SetLineStyle(1);
}

//______________________________________________________________________________
void TH1::PaintScatterPlot()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a scatter plot*-*-*-*-*
//*-*            ==================================================
//*-*
//*-*    For each cell (i,j) a number of points proportional to the cell
//*-*    content is drawn.
//*-*    A maximum of 500 points per cell is drawn. If the maximum is above 500
//*-*    contents are normalized to 500.
//Begin_Html
/*
<img src="gif/PaintScatterPlot.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   TAttMarker::Modify();

   Int_t k, marker;
   Float_t dz, z, xk,xstep, yk, ystep;
   Float_t scale = 1;
   Bool_t ltest  = kFALSE;
   Float_t zmax  = GetMaximum();
   Float_t zmin  = GetMinimum();
   if (zmin == 0 && zmax == 0) return;
   Int_t ncells = (Hparam.ylast-Hparam.yfirst)*(Hparam.xlast-Hparam.xfirst);
   if (Hoption.Logz) {
      if (zmin > 0) zmin = TMath::Log10(zmin);
      else          zmin = 0;
      if (zmax > 0) zmax = TMath::Log10(zmax);
      else          zmax = 0;
      if (zmin == 0 && zmax == 0) return;
      dz = zmax - zmin;
      scale = 100/dz;
      if (ncells > 10000) scale /= 5;
      ltest = kTRUE;
   } else {
      dz = zmax - zmin;
      if (dz >= kNMAX || zmax < 1) {
         scale = (kNMAX-1)/dz;
         if (ncells > 10000) scale /= 5;
         ltest = kTRUE;
      }
   }
   UInt_t seedsave = gRandom->GetSeed();
   gRandom->SetSeed();
   marker=0;
   for (Int_t j=Hparam.yfirst; j<=Hparam.ylast;j++) {
      yk    = fYaxis.GetBinLowEdge(j);
      ystep = fYaxis.GetBinWidth(j);
      for (Int_t i=Hparam.xfirst; i<=Hparam.xlast;i++) {
         Int_t bin  = j*(fXaxis.GetNbins()+2) + i;
         xk    = fXaxis.GetBinLowEdge(i);
         xstep = fXaxis.GetBinWidth(i);
         z     = GetBinContent(bin);
         if (Hoption.Logz) {
            if (z > 0) z = TMath::Log10(z) - zmin;
         } else {
            z    -=  zmin;
         }
         if (z <= 0) continue;
         k = Int_t(z*scale);
         if (ltest) k++;
         if (k > 0) {
            if (k+marker >= kNMAX) {
               gPad->PaintPolyMarker(marker, xbuf, ybuf);
               marker=0;
            }
            for (Int_t loop=0; loop<k; loop++) {
               xbuf[marker] = (gRandom->Rndm(loop)*xstep) + xk;
               ybuf[marker] = (gRandom->Rndm(loop)*ystep) + yk;
               if (Hoption.Logx){
                  if (xbuf[marker] > 0) xbuf[marker] = TMath::Log10(xbuf[marker]);
                  else                  break;
               }
               if (Hoption.Logy){
                  if (ybuf[marker] > 0) ybuf[marker] = TMath::Log10(ybuf[marker]);
                  else                  break;
               }
               if (xbuf[marker] < gPad->GetUxmin()) break;
               if (ybuf[marker] < gPad->GetUymin()) break;
               if (xbuf[marker] > gPad->GetUxmax()) break;
               if (ybuf[marker] > gPad->GetUymax()) break;
               marker++;
            }
         }
      }
   }
   if (marker > 0) gPad->PaintPolyMarker(marker, xbuf, ybuf);
   gRandom->SetSeed(seedsave);
}


//______________________________________________________________________________
void TH1::PaintStat(Int_t dostat, TF1 *fit)
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw the statistics box*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    =======================
// The type of information printed in the histogram statistics box
//  can be selected via gStyle->SetOptStat(mode).
//  The parameter mode can be = ourmeni  (default = 0001111)
//    n = 1;  name of histogram is printed
//    e = 1;  number of entries printed
//    m = 1;  mean value printed
//    r = 1;  rms printed
//    u = 1;  number of underflows printed
//    o = 1;  number of overflows printed
//    i = 1;  integral of bins printed
//  Example: gStyle->SetOptStat(11);
//           print only name of histogram and number of entries.
//
// The type of information about fit parameters printed in the histogram
// statistics box can be selected via the parameter mode.
//  The parameter mode can be = pcev  (default = 0111)
//    v = 1;  print name/values of parameters
//    e = 1;  print errors (if e=1, v must be 1)
//    c = 1;  print Chisquare/Number of degress of freedom
//    p = 1;  print Probability
//  Example: gStyle->SetOptFit(1011);
//           print fit probability, parameter names/values and errors.
//

   static char t[64];
   Int_t dofit;
   TPaveStats *stats  = (TPaveStats*)gPad->GetPrimitive("stats");
   if (stats) {
      dofit  = stats->GetOptFit();
      dostat = stats->GetOptStat();
   } else {
      dofit  = gStyle->GetOptFit();
   }
   if (!dofit) fit = 0;
   if (dofit  == 1) dofit  =  111;
   if (dostat == 1) dostat = 1111;
   Int_t print_name    = dostat%10;
   Int_t print_entries = (dostat/10)%10;
   Int_t print_mean    = (dostat/100)%10;
   Int_t print_rms     = (dostat/1000)%10;
   Int_t print_under   = (dostat/10000)%10;
   Int_t print_over    = (dostat/100000)%10;
   Int_t print_integral= (dostat/1000000)%10;
   Int_t nlines = print_name + print_entries + print_mean + print_rms + print_under + print_over + print_integral;
   Int_t print_fval    = dofit%10;
   Int_t print_ferrors = (dofit/10)%10;
   Int_t print_fchi2   = (dofit/100)%10;
   Int_t print_fprob   = (dofit/1000)%10;
   Int_t nlinesf = print_fval + print_fchi2 + print_fprob;
   if (fit) nlinesf += fit->GetNpar();

//*-*- Pavetext with statistics
   Bool_t done = kFALSE;
   if (!dostat && !fit) {
      if (stats) delete stats;
      return;
   }
   Float_t  statw  = gStyle->GetStatW();
   if (fit) statw  = 1.8*gStyle->GetStatW();
   Float_t  stath  = 0.25*(nlines+nlinesf)*gStyle->GetStatH();
   if (stats) {
      stats->Clear();
      done = kTRUE;
   } else {
      stats  = new TPaveStats(
               gStyle->GetStatX()-statw,
               gStyle->GetStatY()-stath,
               gStyle->GetStatX(),
               gStyle->GetStatY(),"brNDC");
      stats->SetOptFit(dofit);
      stats->SetOptStat(dostat);
      stats->SetFillColor(gStyle->GetStatColor());
      stats->SetFillStyle(gStyle->GetStatStyle());
      stats->SetBorderSize(gStyle->GetStatBorderSize());
      stats->SetTextFont(gStyle->GetStatFont());
      stats->SetName("stats");

      stats->SetTextColor(1);
      stats->SetTextAlign(12);
      stats->SetBit(kCanDelete);
   }
   if (print_name)  stats->AddText((char*)GetName());
   if (print_entries) {
      if (fEntries < 1e7) sprintf(t,"Nent = %-7d",Int_t(fEntries));
      else                sprintf(t,"Nent = %14.7g",Float_t(fEntries));
      stats->AddText(t);
   }
   if (print_mean) {
      sprintf(t,"Mean  = %6.4g",GetMean(1));
      stats->AddText(t);
   }
   if (print_rms) {
      sprintf(t,"RMS   = %6.4g",GetRMS(1));
      stats->AddText(t);
   }
   if (print_under) {
      sprintf(t,"Under = %6.4g",GetBinContent(0));
      stats->AddText(t);
   }
   if (print_over) {
      sprintf(t,"Over  = %6.4g",GetBinContent(fNcells-1));
      stats->AddText(t);
   }
   if (print_integral) {
      sprintf(t,"Integ = %6.4g",Integral());
      stats->AddText(t);
   }

//     Draw Fit parameters
   if (fit) {
      Int_t ndf = fit->GetNumberFitPoints() - fit->GetNpar();
      sprintf(t,"Chi2 / ndf = %6.4g / %d",(Float_t)fit->GetChisquare(),ndf);
      if (print_fchi2) stats->AddText(t);
      if (print_fprob) {
         sprintf(t,"Prob  = %6.4g",(Float_t)TMath::Prob(fit->GetChisquare(),ndf));
         stats->AddText(t);
      }
      if (print_fval || print_ferrors) {
         for (Int_t ipar=0;ipar<fit->GetNpar();ipar++) {
            if (print_ferrors) {
               sprintf(t,"%-8s = %5.4g +- %5.4g ",fit->GetParName(ipar)
                                       ,(Float_t)fit->GetParameter(ipar)
                                       ,(Float_t)fit->GetParError(ipar));
            } else {
               sprintf(t,"%-8s = %5.4g ",fit->GetParName(ipar)
                                       ,(Float_t)fit->GetParameter(ipar));
            }
            t[32] = 0;
            stats->AddText(t);
         }
      }
   }

   if (!done) stats->Draw();
   stats->Paint();
}

//______________________________________________________________________________
void TH1::PaintStat2(Int_t dostat, TF1 *fit)
{
   // Draw the statistics box for 2D histogram.
   // The type of information printed in the histogram statistics box
   // can be selected via gStyle->SetOptStat(mode).
   // The parameter mode can be = ourmen  (default = 001111)
   //    n = 1;  name of histogram is printed
   //    e = 1;  number of entries printed
   //    m = 1;  mean value printed
   //    r = 1;  rms printed
   //    u = 1;  number of underflows printed
   //    o = 1;  number of overflows printed
   //    i = 1;  integral of bins printed
   //  Example: gStyle->SetOptStat(11);
   //           print only name of histogram and number of entries.

   if (GetDimension() != 2) return;

   static char t[64];
   Int_t dofit;
   TPaveStats *stats  = (TPaveStats*)gPad->GetPrimitive("stats");
   if (stats) {
      dofit  = stats->GetOptFit();
      dostat = stats->GetOptStat();
   } else {
      dofit  = gStyle->GetOptFit();
   }
   if (dostat == 1) dostat = 1111;
   Int_t print_name    = dostat%10;
   Int_t print_entries = (dostat/10)%10;
   Int_t print_mean    = (dostat/100)%10;
   Int_t print_rms     = (dostat/1000)%10;
   Int_t print_under   = (dostat/10000)%10;
   Int_t print_over    = (dostat/100000)%10;
   Int_t print_integral= (dostat/1000000)%10;
   Int_t nlines = print_name + print_entries + 2*print_mean + 2*print_rms + print_integral;
   if (print_under || print_over) nlines += 3;

   // Pavetext with statistics
   if (!gStyle->GetOptFit()) fit = 0;
   Bool_t done = kFALSE;
   if (!dostat && !fit) {
      if (stats) delete stats;
      return;
   }
   Float_t  statw  = gStyle->GetStatW();
   if (fit) statw  = 1.8*gStyle->GetStatW();
   Float_t  stath  = 0.25*nlines*gStyle->GetStatH();
   if (fit) stath += gStyle->GetStatH();
   if (stats) {
      stats->Clear();
      done = kTRUE;
   } else {
      stats  = new TPaveStats(
               gStyle->GetStatX()-statw,
               gStyle->GetStatY()-stath,
               gStyle->GetStatX(),
               gStyle->GetStatY(),"brNDC");
      stats->SetOptFit(dofit);
      stats->SetOptStat(dostat);
      stats->SetFillColor(gStyle->GetStatColor());
      stats->SetFillStyle(gStyle->GetStatStyle());
      stats->SetBorderSize(gStyle->GetStatBorderSize());
      stats->SetName("stats");

      stats->SetTextColor(1);
      stats->SetTextAlign(12);
      stats->SetTextFont(gStyle->GetStatFont());
      stats->SetBit(kCanDelete);
   }
   if (print_name)  stats->AddText((char*)GetName());
   if (print_entries) {
      if (fEntries < 1e7) sprintf(t,"Nent = %-7d",Int_t(fEntries));
      else                sprintf(t,"Nent = %14.7g",Float_t(fEntries));
      stats->AddText(t);
   }
   if (print_mean) {
      sprintf(t,"Mean x = %6.4g",GetMean(1));
      stats->AddText(t);
      sprintf(t,"Mean y = %6.4g",GetMean(2));
      stats->AddText(t);
   }
   if (print_rms) {
      sprintf(t,"RMS x  = %6.4g",GetRMS(1));
      stats->AddText(t);
      sprintf(t,"RMS y  = %6.4g",GetRMS(2));
      stats->AddText(t);
   }
   if (print_under || print_over) {
      //get 3*3 under/overflows for 2d hist
      Stat_t unov[9];
      Int_t nx = GetNbinsX();
      Int_t ny = GetNbinsY();

      unov[0] = Integral(0,0,ny+1,ny+1);
      unov[1] = Integral(1,nx,ny+1,ny+1);
      unov[2] = Integral(nx+1,nx+1,ny+1,ny+1);
      unov[3] = Integral(0,0,1,ny);
      unov[4] = Integral(1,nx,1,ny);
      unov[5] = Integral(nx+1,nx+1,1,ny);
      unov[6] = Integral(0,0,0,0);
      unov[7] = Integral(1,nx,0,0);
      unov[8] = Integral(nx+1,nx+1,0,0);

      sprintf(t, " %7d %7d %7d\n", (Int_t)unov[0], (Int_t)unov[1], (Int_t)unov[2]);
      stats->AddText(t);
      if (fEntries < 1e7)
         sprintf(t, " %7d %7d %7d\n", (Int_t)unov[3], (Int_t)unov[4], (Int_t)unov[5]);
      else
         sprintf(t, " %7d %14.7g %7d\n", (Int_t)unov[3], (Float_t)unov[4], (Int_t)unov[5]);
      stats->AddText(t);
      sprintf(t, " %7d %7d %7d\n", (Int_t)unov[6], (Int_t)unov[7], (Int_t)unov[8]);
      stats->AddText(t);
   }
   if (print_integral) {
      sprintf(t,"Integ  = %6.4g",Integral());
      stats->AddText(t);
   }

   // Draw Fit parameters
   if (fit) {
      Int_t ndf = fit->GetNumberFitPoints() - fit->GetNpar();
      sprintf(t,"Chi2 / ndf = %6.4g / %d",(Float_t)fit->GetChisquare(),ndf);
      stats->AddText(t);
      for (Int_t ipar=0;ipar<fit->GetNpar();ipar++) {
         sprintf(t,"%-8s = %5.4g +- %5.4g ",fit->GetParName(ipar)
                                       ,(Float_t)fit->GetParameter(ipar)
                                       ,(Float_t)fit->GetParError(ipar));
         t[32] = 0;
         stats->AddText(t);
      }
   }

   if (!done) stats->Draw();
   stats->Paint();
}

//______________________________________________________________________________
void TH1::PaintSurface()
{
//*-*-*-*-*-*-*-*Control function to draw a table as a surface plot*-*-*-*-*-*
//*-*            ==================================================
//*-*
//*-*     In a surface plot, cell contents are represented as a mesh.
//*-*     The height of the mesh is proportional to the cell content.
//*-*
//*-*    A surface plot can be represented in several coordinate systems.
//*-*    Default system is Cartesian coordinates.
//*-*    Possible systems are CYL,POL,SPH,PSR.
//*-*
//*-*   See TH1::Draw for a list of Surface options
//*-*  The following picture is generated with option SURF1.
//
//      See TStyle::SetPalette to change the color palette.
//      It is suggested to use palette 1 via the call
//      gStyle->SetColorPalette(1)
//
//Begin_Html
/*
<img src="gif/PaintSurface1.gif">
*/
//End_Html
//*-*  The following picture is generated with option SURF3.
//Begin_Html
/*
<img src="gif/PaintSurface3.gif">
*/
//End_Html
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   const Float_t ydiff = 1;
   const Float_t yligh1 = 10;
   const Float_t qa = 0.15;
   const Float_t qd = 0.15;
   const Float_t qs = 0.8;
   Float_t fmin, fmax;
   Int_t i;
   Int_t raster = 0;
   Int_t irep   = 0;

   gNIDS        = 0;

   if (Hparam.zmin == 0 && Hparam.zmax == 0) {Hparam.zmin = -1; Hparam.zmax = 1;}
   Int_t   nx     = Hparam.xlast - Hparam.xfirst;
   Int_t   ny     = Hparam.ylast - Hparam.yfirst;
   Float_t zmin   = Hparam.zmin;
   Float_t zmax   = Hparam.zmax;
   Float_t xlab1  = Hparam.xmin;
   Float_t xlab2  = Hparam.xmax;
   Float_t ylab1  = Hparam.ymin;
   Float_t ylab2  = Hparam.ymax;
   Float_t dangle = 10*3.141592/180; //Delta angle for Rapidity option
   Float_t z1c = zmin;
   Float_t z2c = zmax*kHMAX;


//*-*- Compute the lego limits and instantiate a lego object
   xbuf[0] = -1;
   ybuf[0] =  1;
   xbuf[1] = -1;
   ybuf[1] =  1;
   if (Hoption.System >= kPOLAR && (Hoption.Surf == 1 || Hoption.Surf == 13)) raster = 1;
   if (Hoption.System == kPOLAR) {
      xbuf[2] = z1c;
      ybuf[2] = z2c;
   } else if (Hoption.System == kCYLINDRICAL) {
      if (Hoption.Logy) {
         if (ylab1 > 0) xbuf[2] = TMath::Log10(ylab1);
         else           xbuf[2] = 0;
         if (ylab2 > 0) ybuf[2] = TMath::Log10(ylab2);
         else           ybuf[2] = 0;
      } else {
         xbuf[2] = ylab1;
         ybuf[2] = ylab2;
      }
      z1c = 0; z2c = 1;
   } else if (Hoption.System == kSPHERICAL) {
      xbuf[2] = -1;
      ybuf[2] =  1;
      z1c = 0; z2c = 1;
   } else if (Hoption.System == kRAPIDITY) {
      xbuf[2] = -1/TMath::Tan(dangle);
      ybuf[2] =  1/TMath::Tan(dangle);
   } else {
      if (Hoption.Logx) {
         if (xlab1 > 0) xbuf[0] = TMath::Log10(xlab1);
         else           xbuf[0] = 0;
         if (xlab2 > 0) ybuf[0] = TMath::Log10(xlab2);
         else           ybuf[0] = 0;
      } else {
         xbuf[0] = xlab1;
         ybuf[0] = xlab2;
      }
      if (Hoption.Logy) {
         if (ylab1 > 0) xbuf[1] = TMath::Log10(ylab1);
         else           xbuf[1] = 0;
         if (ylab2 > 0) ybuf[1] = TMath::Log10(ylab2);
         else           ybuf[1] = 0;
      } else {
         xbuf[1] = ylab1;
         ybuf[1] = ylab2;
      }
      xbuf[2] = z1c;
      ybuf[2] = z2c;
   }

   gLego = new TLego(xbuf, ybuf, Hoption.System);

//*-*-      Create axis object

   TGaxis *axis = new TGaxis();

//*-*-              Initialize the levels on the Z axis
   Int_t ndiv   = GetContour();
   if (ndiv == 0 ) {
      ndiv = 20;
      SetContour(ndiv);
   }
   Int_t ndivz  = TMath::Abs(ndiv);

//*-*- Initialize colors for the lighting model
   Color_t colormain = GetFillColor();
   if (colormain == 1) colormain = 17; //avoid drawing with black
   Color_t colordark = colormain + 100;
   gLego->SetColorMain(colormain,0);
   gLego->SetColorDark(colordark,0);
   gLego->SetColorMain(colormain,-1);  // Set Bottom color
   gLego->SetColorMain(colormain,99);  // Set Top color
   if (Hoption.Surf == 13) gLego->SetMesh(3);
   if (Hoption.Surf == 12 || Hoption.Surf == 14) gLego->SetMesh(0);

//*-*- Close the surface in case of non cartesian coordinates.

   if (Hoption.System != kCARTESIAN) {nx++; ny++;}

//*-*-             Initialize the colour levels
   if (ndivz >= 100) {
      Warning("PaintSurface", "too many color levels, %d, reset to 8", ndivz);
      ndivz = 8;
   }
   Float_t *funlevel = new Float_t[ndivz+1];
   Int_t *colorlevel = new Int_t[ndivz+1];
   Int_t lowcolor = GetFillColor();
   Int_t theColor;
   Int_t ncolors = gStyle->GetNumberOfColors();
   for (i = 0; i < ndivz; ++i) {
      funlevel[i]   = GetContourLevel(i);
      theColor = lowcolor + Int_t(i*Float_t(ncolors)/Float_t(ndivz));
      colorlevel[i] = gStyle->GetColorPalette(theColor);
   }
   colorlevel[ndivz] = gStyle->GetColorPalette(lowcolor+ncolors-1);
   gLego->ColorFunction(ndivz, funlevel, colorlevel, irep);
   delete [] colorlevel;
   delete [] funlevel;

//*-*- Now ready to draw the surface plot

   TView *view = gPad->GetView();
   if (!view) {
      Error("PaintSurface", "no TView in current pad");
      return;
   }

   Float_t thedeg =  90 - gPad->GetTheta();
   Float_t phideg = -90 - gPad->GetPhi();
   Float_t psideg = view->GetPsi();
   view->SetView(phideg, thedeg, psideg, irep);

//*-*- Set color/style for back box
   gLego->SetFillStyle(gStyle->GetFrameFillStyle());
   gLego->SetFillColor(gStyle->GetFrameFillColor());
   gLego->TAttFill::Modify();

   Int_t backcolor = gStyle->GetFrameFillColor();
   if (Hoption.System != kCARTESIAN) backcolor = 0;
   view->PadRange(backcolor);

   gLego->SetFillStyle(GetFillStyle());
   gLego->SetFillColor(GetFillColor());
   gLego->TAttFill::Modify();

//*-*- Draw the filled contour on top
   Int_t icol1 = GetFillColor();

   if (Hoption.Surf == 13) {
      Hoption.Surf = 23;
      gLego->SetSurfaceFunction(&TLego::SurfaceFunction);
      gLego->SetDrawFace(&TLego::DrawFaceMode2);
      nx--; ny--;
      if (Hoption.System == kPOLAR)       gLego->SurfacePolar(1,nx,ny,"BF");
      if (Hoption.System == kCYLINDRICAL) gLego->SurfaceCylindrical(1,nx,ny,"BF");
      if (Hoption.System == kSPHERICAL)   gLego->SurfaceSpherical(0,1,nx,ny,"BF");
      if (Hoption.System == kRAPIDITY )   gLego->SurfaceSpherical(1,1,nx,ny,"BF");
      if (Hoption.System == kCARTESIAN)   gLego->SurfaceCartesian(90,nx,ny,"BF");
      Hoption.Surf = 13;
      gLego->SetMesh(1);
   }

   if (raster) gLego->InitRaster(-1.1,-1.1,1.1,1.1,1000,800);
   else        gLego->InitMoveScreen(-1.1,1.1);

   if (Hoption.Surf == 11 || Hoption.Surf == 12 || Hoption.Surf == 14) {
      gLego->SetLineColor(1);
      if (Hoption.System == kCARTESIAN && Hoption.BackBox) {
         gLego->SetDrawFace(&TLego::DrawFaceMove1);
         gLego->BackBox(90);
      }
   }

//*-*- Gouraud Shading surface
   if (Hoption.Surf == 14) {
//*-* Set light sources
      gLego->LightSource(0, ydiff, 0,0,0,irep);
      gLego->LightSource(1, yligh1 ,1,1,1,irep);
      gLego->SurfaceProperty(qa, qd, qs, 1, irep);
      fmin = ydiff*qa;
      fmax = fmin + (yligh1+0.1)*(qd+qs);
      Int_t nbcol = 28;
      icol1 = 201;
      Float_t dcol = 0.5/Float_t(nbcol);
      TColor *colref = gROOT->GetColor(GetFillColor());
      Float_t r,g,b,hue,light,satur;
      colref->GetRGB(r,g,b);
      colref->RGBtoHLS(r,g,b,hue,light,satur);
      TColor *acol;
      for (Int_t col=0;col<nbcol;col++) {
         acol = gROOT->GetColor(col+icol1);
         acol->HLStoRGB(hue,.4+col*dcol,satur,r,g,b);
         acol->SetRGB(r,g,b);
      }
      gLego->Spectrum(nbcol, fmin, fmax, icol1, 1, irep);
      gLego->SetSurfaceFunction(&TLego::GouraudFunction);
      gLego->SetDrawFace(&TLego::DrawFaceMode2);
      if (Hoption.System == kPOLAR)       gLego->SurfacePolar(1,nx,ny,"BF");
      if (Hoption.System == kCYLINDRICAL) gLego->SurfaceCylindrical(1,nx,ny,"BF");
      if (Hoption.System == kSPHERICAL)   gLego->SurfaceSpherical(0,1,nx,ny,"BF");
      if (Hoption.System == kRAPIDITY )   gLego->SurfaceSpherical(1,1,nx,ny,"BF");
      if (Hoption.System == kCARTESIAN)   gLego->SurfaceCartesian(90,nx,ny,"BF");
   }
   else {
//*-*- Draw the surface
      gLego->SetSurfaceFunction(&TLego::SurfaceFunction);
      if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SetDrawFace(&TLego::DrawFaceRaster1);
      if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SetDrawFace(&TLego::DrawFaceMode2);
      if (Hoption.System == kPOLAR) {
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SurfacePolar(1,nx,ny,"FB");
         if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SurfacePolar(1,nx,ny,"BF");
      } else if (Hoption.System == kCYLINDRICAL) {
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SurfaceCylindrical(1,nx,ny,"FB");
         if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SurfaceCylindrical(1,nx,ny,"BF");
      } else if (Hoption.System == kSPHERICAL) {
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SurfaceSpherical(0,1,nx,ny,"FB");
         if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SurfaceSpherical(0,1,nx,ny,"BF");
      } else if (Hoption.System == kRAPIDITY) {
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SurfaceSpherical(1,1,nx,ny,"FB");
         if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SurfaceSpherical(1,1,nx,ny,"BF");
      } else {
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SetDrawFace(&TLego::DrawFaceMove1);
         if (Hoption.Surf ==  1 || Hoption.Surf == 13) gLego->SurfaceCartesian(90,nx,ny,"FB");
         if (Hoption.Surf == 11 || Hoption.Surf == 12) gLego->SurfaceCartesian(90,nx,ny,"BF");
      }
   }

   if (Hoption.Surf == 1 || Hoption.Surf == 13) {
      gLego->SetLineColor(1);
      if (Hoption.System == kCARTESIAN && Hoption.BackBox) {
         gLego->SetDrawFace(&TLego::DrawFaceMove1);
         gLego->BackBox(90);
      }
   }
   if (Hoption.System == kCARTESIAN) {
      gLego->InitMoveScreen(-1.1,1.1);
      gLego->SetDrawFace(&TLego::DrawFaceMove2);
      if (Hoption.FrontBox) gLego->FrontBox(90);
   }
   if (!Hoption.Axis) PaintLegoAxis(axis, 90);
   gNIDS = 0;
   delete axis;
   delete gLego; gLego = 0;
}


//______________________________________________________________________________
void TH1::PaintTable()
{
//*-*-*-*-*-*-*-*-*-*Control function to draw 2-D/3-D tables*-*-*-*-*-*-*-*
//*-*                =======================================

   if (!TableInit()) return;  //fill Hparam structure with histo parameters

   PaintFrame();

   if (fEntries >= 0) {
      if (Hoption.Scat)    PaintScatterPlot();
      if (Hoption.Arrow)   PaintArrows();
      if (Hoption.Box)     PaintBoxes();
      if (Hoption.Color)   PaintColorLevels();
      if (Hoption.Contour) PaintContour();
   }
   if (Hoption.Lego)    PaintLego();
   if (Hoption.Surf && !Hoption.Contour)    PaintSurface();

   if (!Hoption.Lego && !Hoption.Surf) PaintAxis();     //*-* Draw the axes

   PaintTitle();    //*-* Draw histogram title
//   PaintFile();     //*-* Draw Current File name corresp to current directory
//   PaintDate();     //*-* Draw date/time
   if (!Hoption.Same && !Hoption.Lego && !Hoption.Surf) {
      TF2 *fit = (TF2*)fFunctions->First();
      if (!TestBit(kNoStats)) {  // bit set via TH1::SetStats
         PaintStat2(gStyle->GetOptStat(),fit);
      }
   }
}

//______________________________________________________________________________
TProfile *TH1::ProfileX(const char *name, Int_t firstybin, Int_t lastybin, Option_t *option)
{
//*-*-*-*-*Project a 2-D histogram into a profile histogram along X*-*-*-*-*-*
//*-*      ========================================================
//
//   The projection is made from the channels along the Y axis
//   ranging from firstybin to lastybin included.
//

// Check if this is a 2-d histogram
  if (GetDimension() != 2) {
     Error("ProfileX","Not a 2-D histogram");
     return 0;
  }
  TString opt = option;
  opt.ToLower();
  Int_t nx = fXaxis.GetNbins();
  Int_t ny = fYaxis.GetNbins();
  if (firstybin < 0) firstybin = 0;
  if (lastybin > ny) lastybin = ny;

// Create the profile histogram
  char *pname = (char*)name;
  if (strcmp(name,"_pfx") == 0) {
     Int_t nch = strlen(GetName()) + 5;
     pname = new char[nch];
     sprintf(pname,"%s%s",GetName(),name);
  }
  TProfile *h1 = new TProfile(pname,(char*)GetTitle(),nx,fXaxis.GetXmin(),fXaxis.GetXmax(),option);
  if (pname != name)  delete [] pname;

// Fill the profile histogram
  Double_t cont;
  Double_t entries = 0;
  for (Int_t binx =0;binx<=nx;binx++) {
     for (Int_t biny=firstybin;biny<=lastybin;biny++) {
        cont =  GetCellContent(binx,biny);
        if (cont) {
           h1->Fill(fXaxis.GetBinCenter(binx),fYaxis.GetBinCenter(biny), cont);
           entries += cont;
        }
     }
  }
  h1->SetEntries(entries);
  return h1;
}

//______________________________________________________________________________
TProfile *TH1::ProfileY(const char *name, Int_t firstxbin, Int_t lastxbin, Option_t *option)
{
//*-*-*-*-*Project a 2-D histogram into a profile histogram along Y*-*-*-*-*-*
//*-*      ========================================================
//
//   The projection is made from the channels along the X axis
//   ranging from firstxbin to lastxbin included.
//

// Check if this is a 2-d histogram
  if (GetDimension() != 2) {
     Error("ProfileY","Not a 2-D histogram");
     return 0;
  }
  TString opt = option;
  opt.ToLower();
  Int_t nx = fXaxis.GetNbins();
  Int_t ny = fYaxis.GetNbins();
  if (firstxbin < 0) firstxbin = 0;
  if (lastxbin > nx) lastxbin = nx;

// Create the projection histogram
  char *pname = (char*)name;
  if (strcmp(name,"_pfy") == 0) {
     Int_t nch = strlen(GetName()) + 5;
     pname = new char[nch];
     sprintf(pname,"%s%s",GetName(),name);
  }
  TProfile *h1 = new TProfile(pname,(char*)GetTitle(),nx,fYaxis.GetXmin(),fYaxis.GetXmax(),option);
  if (pname != name)  delete [] pname;

// Fill the profile histogram
  Double_t cont;
  Double_t entries = 0;
  for (Int_t biny =0;biny<=ny;biny++) {
     for (Int_t binx=firstxbin;binx<=lastxbin;binx++) {
        cont =  GetCellContent(binx,biny);
        if (cont) {
           h1->Fill(fYaxis.GetBinCenter(biny),fXaxis.GetBinCenter(binx), cont);
           entries += cont;
        }
     }
  }
  h1->SetEntries(entries);
  return h1;
}

//______________________________________________________________________________
TH1D *TH1::ProjectionX(const char *name, Int_t firstybin, Int_t lastybin, Option_t *option)
{
//*-*-*-*-*Project a 2-D histogram into a 1-D histogram along X*-*-*-*-*-*-*
//*-*      ====================================================
//
//   The projection is always of the type TH1D.
//   The projection is made from the channels along the Y axis
//   ranging from firstybin to lastybin included.
//
//   if option 'E" is specified, the errors are computed.
//

// Check if this is a 2-d histogram
  if (GetDimension() != 2) {
     Error("ProjectionX","Not a 2-D histogram");
     return 0;
  }
  TString opt = option;
  opt.ToLower();
  Int_t nx = fXaxis.GetNbins();
  Int_t ny = fYaxis.GetNbins();
  if (firstybin < 0) firstybin = 0;
  if (lastybin > ny) lastybin = ny;

// Create the projection histogram
  char *pname = (char*)name;
  if (strcmp(name,"_px") == 0) {
     Int_t nch = strlen(GetName()) + 4;
     pname = new char[nch];
     sprintf(pname,"%s%s",GetName(),name);
  }
  TH1D *h1 = new TH1D(pname,GetTitle(),nx,fXaxis.GetXmin(),fXaxis.GetXmax());
  Bool_t computeErrors = kFALSE;
  if (opt.Contains("e")) {h1->Sumw2(); computeErrors = kTRUE;}
  if (pname != name)  delete [] pname;

// Fill the projected histogram
  Double_t cont,err,err2;
  Double_t entries = 0;
  for (Int_t binx =0;binx<=nx+1;binx++) {
     err2 = 0;
     for (Int_t biny=firstybin;biny<=lastybin;biny++) {
        cont  = GetCellContent(binx,biny);
        err   = GetCellError(binx,biny);
        err2 += err*err;
        if (cont) {
           h1->Fill(fXaxis.GetBinCenter(binx), cont);
           entries += cont;
        }
     }
     if (computeErrors) h1->SetBinError(binx,TMath::Sqrt(err2));
  }
  h1->SetEntries(entries);
  return h1;
}

//______________________________________________________________________________
TH1D *TH1::ProjectionY(const char *name, Int_t firstxbin, Int_t lastxbin, Option_t *option)
{
//*-*-*-*-*Project a 2-D histogram into a 1-D histogram along Y*-*-*-*-*-*-*
//*-*      ====================================================
//
//   The projection is always of the type TH1D.
//   The projection is made from the channels along the X axis
//   ranging from firstxbin to lastxbin included.
//
//   if option 'E" is specified, the errors are computed.
//

// Check if this is a 2-d histogram
  if (GetDimension() != 2) {
     Error("ProjectionY","Not a 2-D histogram");
     return 0;
  }
  TString opt = option;
  opt.ToLower();
  Int_t nx = fXaxis.GetNbins();
  Int_t ny = fYaxis.GetNbins();
  if (firstxbin < 0) firstxbin = 0;
  if (lastxbin > nx) lastxbin = nx;

// Create the projection histogram
  char *pname = (char*)name;
  if (strcmp(name,"_py") == 0) {
     Int_t nch = strlen(GetName()) + 4;
     pname = new char[nch];
     sprintf(pname,"%s%s",GetName(),name);
  }
  TH1D *h1 = new TH1D(pname,GetTitle(),ny,fYaxis.GetXmin(),fYaxis.GetXmax());
  Bool_t computeErrors = kFALSE;
  if (opt.Contains("e")) {h1->Sumw2(); computeErrors = kTRUE;}
  if (pname != name)  delete [] pname;

// Fill the projected histogram
  Double_t cont,err,err2;
  Double_t entries = 0;
  for (Int_t biny =0;biny<=ny+1;biny++) {
     err2 = 0;
     for (Int_t binx=firstxbin;binx<=lastxbin;binx++) {
        cont  = GetCellContent(binx,biny);
        err   = GetCellError(binx,biny);
        err2 += err*err;
        if (cont) {
           h1->Fill(fYaxis.GetBinCenter(biny), cont);
           entries += cont;
        }
     }
     if (computeErrors) h1->SetBinError(biny,TMath::Sqrt(err2));
  }
  h1->SetEntries(entries);
  return h1;
}

//______________________________________________________________________________
TH1D *TH1::ProjectionZ(const char *name, Int_t ixmin, Int_t ixmax, Int_t iymin, Int_t iymax, Option_t *option)
{
//*-*-*-*-*Project a 3-D histogram into a 1-D histogram along Z*-*-*-*-*-*-*
//*-*      ====================================================
//
//   The projection is always of the type TH1D.
//   The projection is made from the cells along the X axis
//   ranging from ixmin to ixmax and iymin to iymax included.
//
//   if option 'E" is specified, the errors are computed.
//
//   code from Paola Collins & Hans Dijkstra

  if (GetDimension() != 3){
     printf("Error in ProjectionZ: histogram is not 3d \n");
     return 0;
  }

  TString opt = option;
  Int_t nx = GetNbinsX();
  Int_t ny = GetNbinsY();
  Int_t nz = GetNbinsZ();
  if (ixmin < 0)  ixmin = 0;
  if (ixmax > nx) ixmax = nx;
  if (iymin < 0)  iymin = 0;
  if (iymax > nx) iymax = ny;

// Create the projection histogram
  char *pname = (char*)name;
  if (strcmp(name,"_pz") == 0) {
     Int_t nch = strlen(GetName()) + 4;
     pname = new char[nch];
     sprintf(pname,"%s%s",GetName(),name);
  }
  TH1D *h1 = new TH1D(pname,GetTitle(),nz,fZaxis.GetXmin(),fZaxis.GetXmax());
  Bool_t computeErrors = kFALSE;
  if (opt.Contains("e")) {h1->Sumw2(); computeErrors = kTRUE;}
  if (pname != name)  delete [] pname;

// Fill the projected histogram
  Float_t cont,e,e1;
  Double_t entries  = 0;
  Double_t newerror = 0;
  for (Int_t ixbin=ixmin;ixbin<=ixmax;ixbin++){
     for (Int_t iybin=iymin;iybin<=iymax;iybin++){
        for (Int_t binz=0;binz<=(nz+1);binz++){
           Int_t bin = GetBin(ixbin,iybin,binz);
           cont = GetBinContent(bin);
           if (computeErrors) {
              e        = GetBinError(bin);
              e1       = h1->GetBinError(binz);
              newerror = TMath::Sqrt(e*e + e1*e1);
           }
           if (cont) {
              h1->Fill(fZaxis.GetBinCenter(binz), cont);
              entries += cont;
           }
           if (computeErrors) h1->SetBinError(binz,newerror);
        }
     }
  }
  h1->SetEntries(entries);
  return h1;
}

//______________________________________________________________________________
TH1 *TH1::Rebin(Int_t ngroup, const char*newname)
{
//*-*-*-*-*Rebin this histogram grouping ngroup bins together*-*-*-*-*-*-*-*-*
//*-*      ==================================================
//   if newname is not blank a new temporary histogram hnew is created.
//   else the current histogram is modified (default)
//   The parameter ngroup indicates how many bins of this have to me merged
//   into one bin of hnew
//   If the original histogram has errors stored (via Sumw2), the resulting
//   histograms has new errors correctly calculated.
//
//   examples: if h1 is an existing TH1F histogram with 100 bins
//     h1->Rebin();  //merges two bins in one in h1: previous contents of h1 are lost
//     h1->Rebin(5); //merges five bins in one in h1
//     TH1F *hnew = h1->Rebin(5,"hnew"); // creates a new histogram hnew
//                                       //merging 5 bins of h1 in one bin
//   NOTE: This function is currently implemented only for 1-D histograms

   Int_t nbins   = fXaxis.GetNbins();
   Float_t xmin  = fXaxis.GetXmin();
   Float_t xmax  = fXaxis.GetXmax();
   if ((ngroup <= 0) || (ngroup > nbins)) {
      printf("ERROR in Rebin. Illegal value of ngroup=%d\n",ngroup);
      return 0;
   }
   if (fDimension > 1 || InheritsFrom("TProfile")) {
      printf("ERROR in Rebin. Operation valid on 1-D histograms only\n");
      return 0;
   }
   Int_t newbins = nbins/ngroup;

   // Save old bin contents into a new array
   Double_t *oldBins = new Double_t[nbins];
   Int_t bin, i;
   for (bin=0;bin<nbins;bin++) oldBins[bin] = GetBinContent(bin+1);
   Double_t *oldErrors = 0;
   if (fSumw2.fN != 0) {
      oldErrors = new Double_t[nbins];
      for (bin=0;bin<nbins;bin++) oldErrors[bin] = GetBinError(bin+1);
   }

   // create a clone of the old histogram if newname is specified
   TH1 *hnew = this;
   if (strlen(newname) > 0) {
      hnew = (TH1*)Clone();
      hnew->SetName(newname);
   }

   // change axis specs and rebuild bin contents array
   hnew->SetBins(newbins,xmin,xmax); //this also changes errors array (if any)

   // copy merged bin contents (ignore under/overflows)
   Int_t oldbin = 0;
   Double_t binContent, binError;
   for (bin = 0;bin<newbins;bin++) {
      binContent = 0;
      binError   = 0;
      for (i=0;i<ngroup;i++) {
         if (oldbin+i >= nbins) break;
         binContent += oldBins[oldbin+i];
         if (oldErrors) binError += oldErrors[oldbin+i]*oldErrors[oldbin+i];
      }
      hnew->SetBinContent(bin+1,binContent);
      if (oldErrors) hnew->SetBinError(bin+1,TMath::Sqrt(binError));
      oldbin += ngroup;
   }

   delete [] oldBins;
   if (oldErrors) delete [] oldErrors;
   return hnew;
}

//______________________________________________________________________________
void TH1::Scale(Float_t c1)
{
//*-*-*-*-*Multiply this histogram by a constant c1*-*-*-*-*-*-*-*-*
//*-*      ========================================
//
//   this = c1*this
//
// Note that both contents and errors(if any) are scaled.
// This function uses the services of TH1::Add
//

   Double_t ent = fEntries;
   Add(this,this,c1,0);
   fEntries = ent;

   //if contours set, must also scale contours
   Int_t ncontours = GetContour();
   if (ncontours == 0) return;
   Float_t *levels = fContour.GetArray();
   for (Int_t i=0;i<ncontours;i++) {
      levels[i] *= c1;
   }
}


//_______________________________________________________________________
void TH1::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =====================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TNamed::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b >> fNcells;
      fXaxis.Streamer(b);
      fYaxis.Streamer(b);
      fZaxis.Streamer(b);
      b >> fBarOffset;
      b >> fBarWidth;
      b >> fEntries;
      b >> fTsumw;
      b >> fTsumw2;
      b >> fTsumwx;
      b >> fTsumwx2;
      b >> fMaximum;
      b >> fMinimum;
      b >> fNormFactor;
      fContour.Streamer(b);
      fSumw2.Streamer(b);
      fOption.Streamer(b);
      fFunctions->Streamer(b);
      if (!gROOT->ReadingBasket()) {
         fDirectory = gDirectory;
         gDirectory->Append(this);
      }
   } else {
      b.WriteVersion(TH1::IsA());
      TNamed::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b << fNcells;
      fXaxis.Streamer(b);
      fYaxis.Streamer(b);
      fZaxis.Streamer(b);
      b << fBarOffset;
      b << fBarWidth;
      b << fEntries;
      b << fTsumw;
      b << fTsumw2;
      b << fTsumwx;
      b << fTsumwx2;
      b << fMaximum;
      b << fMinimum;
      b << fNormFactor;
      fContour.Streamer(b);
      fSumw2.Streamer(b);
      fOption.Streamer(b);
      fFunctions->Streamer(b);
   }
}

//______________________________________________________________________________
Int_t TH1::TableInit()
{
//*-*-*-*-*-*-*-*-*Initialize various options to draw tables*-*-*-*-*-*-*-*
//*-*              =========================================

   static const char *where = "TableInit";

   Int_t first, last;
   Float_t YMARGIN= 0.05;
   Float_t zmin, zmax;
   Int_t maximum = 0;
   Int_t minimum = 0;
   if (fMaximum != -1111) maximum = 1;
   if (fMinimum != -1111) minimum = 1;

//*-*------------------  Compute X axis parameters
   first           = fXaxis.GetFirst();
   last            = fXaxis.GetLast();
   Hparam.xlast    = last;
   Hparam.xfirst   = first;
   Hparam.xlowedge = fXaxis.GetBinLowEdge(first);
   Hparam.xbinsize = fXaxis.GetBinWidth(first);
   Hparam.xmin     = Hparam.xlowedge;
   Hparam.xmax     = fXaxis.GetBinLowEdge(last)+fXaxis.GetBinWidth(last);

//*-*-   if log scale in X, replace xmin,max by the log
   if (Hoption.Logx) {
      if (Hparam.xlowedge <=0 ) {
         Hparam.xlowedge = 0.1*Hparam.xbinsize;
         Hparam.xmin  = Hparam.xlowedge;
      }
      if (Hparam.xmin <=0 || Hparam.xmax <=0) {
         Error(where, "cannot set X axis to log scale");
         return 0;
      }
      Hparam.xfirst= fXaxis.FindBin(Hparam.xmin);
      Hparam.xlast = fXaxis.FindBin(Hparam.xmax);
      Hparam.xmin  = TMath::Log10(Hparam.xmin);
      Hparam.xmax  = TMath::Log10(Hparam.xmax);
   }

//*-*------------------  Compute Y axis parameters
   first           = fYaxis.GetFirst();
   last            = fYaxis.GetLast();
   Hparam.ylast    = last;
   Hparam.yfirst   = first;
   Hparam.ylowedge = fYaxis.GetBinLowEdge(first);
   Hparam.ybinsize = fYaxis.GetBinWidth(first);
   if (!Hparam.ybinsize) Hparam.ybinsize = 1;
   Hparam.ymin     = Hparam.ylowedge;
   Hparam.ymax     = fYaxis.GetBinLowEdge(last)+fYaxis.GetBinWidth(last);

//*-*-   if log scale in Y, replace ymin,max by the log
   if (Hoption.Logy) {
      if (Hparam.ylowedge <=0 ) {
         Hparam.ylowedge = 0.1*Hparam.ybinsize;
         Hparam.ymin  = Hparam.ylowedge;
      }
      if (Hparam.ymin <=0 || Hparam.ymax <=0) {
         Error(where, "cannot set Y axis to log scale");
         return 0;
      }
      Hparam.yfirst= fYaxis.FindBin(Hparam.ymin);
      Hparam.ylast = fYaxis.FindBin(Hparam.ymax);
      Hparam.ymin  = TMath::Log10(Hparam.ymin);
      Hparam.ymax  = TMath::Log10(Hparam.ymax);
   }


//*-*------------------  Compute Z axis parameters
   Float_t BIGP = TMath::Power(10,32);
   zmax = -BIGP;
   zmin = BIGP;
   Float_t c1, e1;
   Stat_t allchan = 0;
   for (Int_t j=Hparam.yfirst; j<=Hparam.ylast;j++) {
      for (Int_t i=Hparam.xfirst; i<=Hparam.xlast;i++) {
         c1 = GetCellContent(i,j);
         zmax = TMath::Max(zmax,c1);
         if (Hoption.Error) {
            e1 = GetCellError(i,j);
            zmax = TMath::Max(zmax,c1+e1);
         }
         if (Hoption.Func) {
//            f1 = GetCellFunction(i,j);
//            zmax = TMath::Max(zmax,f1);
         }
         zmin = TMath::Min(zmin,c1);
         allchan += c1;
      }
   }

//*-*- Take into account maximum , minimum

   if (maximum) zmax = fMaximum;
   if (minimum) zmin = fMinimum;
   if (Hoption.Logz && zmax <= 0) {
      Error(where, "log scale is requested but maximum is less or equal 0 (%f)", zmax);
      return 0;
   }
   if (zmin >= zmax && !Hoption.Plus) {
      if (Hoption.Logz) {
         if (zmax > 0) zmin = 0.001*zmax;
         else {
            Error(where, "log scale is requested but maximum is less or equal 0 (%f)", zmax);
            return 0;
         }
      }
//      else {
//         zmax = zmin + 1;
//         zmin = zmin - 1;
//      }
   }

//*-*- take into account normalization factor
   Hparam.allchan = allchan;
   Stat_t factor = allchan;
   if (fNormFactor > 0) factor = fNormFactor;
   if (allchan) factor /= allchan;
   if (factor == 0) factor = 1;
   Hparam.factor = factor;
   zmax = factor*zmax;
   zmin = factor*zmin;
   c1 = zmax;
   if (TMath::Abs(zmin) > TMath::Abs(c1)) c1 = zmin;

//*-*-----
//*-*-     For log scales, histogram coordinates are log10(ymin) and
//*-*-     log10(ymax). Final adjustment (if not option "Same")
//*-*-     or "+" for ymax) of ymax and ymin for logarithmic scale, if
//*-*-     Maximum and Minimum are not defined.
//*-*-----
   if (Hoption.Logz) {
      if (zmin <= 0) {
         zmin = TMath::Min((Float_t)1, (Float_t)0.001*zmax);
         fMinimum = zmin;
      }
      zmin = TMath::Log10(zmin);
      if (!minimum) zmin += TMath::Log10(0.5);
      zmax = TMath::Log10(zmax);
      if (!maximum && !Hoption.Plus) zmax += TMath::Log10(2*(0.9/0.95));
      goto LZMIN;
   }
//*-*-----
//*-*-     final adjustment of YMAXI for linear scale (if not option "Same"):
//*-*-     decrease histogram height to MAX% of allowed height if HMAXIM
//*-*-     has not been called.
//*-*-     MAX% is the value in percent which has been set in HPLSET
//*-*-     (default is 90%).
//*-*-----
   if (!maximum && !Hoption.Plus) {
      zmax += YMARGIN*(zmax-zmin);
   }
//*-*-----
//*-*-     final adjustment of ymin for linear scale.
//*-*-     if minimum is not set , then ymin is set to zero if >0
//*-*-     or to ymin - YMARGIN if <0.
//*-*-----
   if (!minimum) {
      if (zmin >= 0) zmin = 0;
      else           zmin -= YMARGIN*(zmax-zmin);
   }

LZMIN:
   Hparam.zmin = zmin;
   Hparam.zmax = zmax;

//*-*- Set bar offset and width
   Hparam.baroffset = GetBarOffset();
   Hparam.barwidth  = GetBarWidth();

   return 1;
}

//______________________________________________________________________________
void TH1::PaintTitle()
{
//*-*-*-*-*-*-*-*-*-*-*-*Draw the histogram title*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================
   if (Hoption.Same) return;
   Int_t nt = strlen(GetTitle());
   TPaveText *title  = (TPaveText*)gPad->GetPrimitive("title");
   if (nt == 0 || gStyle->GetOptTitle() <= 0) {
      if (title) delete title;
      return;
   }
   if (title) {
      TText *t0 = (TText*)title->GetLine(0);
      if (t0) t0->SetTitle(GetTitle());
      return;
   }
   Float_t ht = gStyle->GetTitleH();
   Float_t wt = gStyle->GetTitleW();
   if (ht <= 0) ht = 0.05;
   if (wt <= 0) wt = TMath::Min(0.6, 0.05+0.015*nt);

   TPaveText *ptitle = new TPaveText(
             gStyle->GetTitleX(),
             gStyle->GetTitleY()-ht,
             gStyle->GetTitleX()+wt,
             gStyle->GetTitleY(),"blNDC");

//*-*- box with the histogram title
   ptitle->SetFillColor(gStyle->GetTitleColor());
   ptitle->SetName("title");
   ptitle->SetBorderSize(gStyle->GetTitleBorderSize());
//   ptitle->SetTextSize(0.85*ht);
   ptitle->SetTextColor(1);
   ptitle->SetTextFont(gStyle->GetTitleFont());
   ptitle->AddText((char*)GetTitle());
   ptitle->SetBit(kCanDelete);
   ptitle->Draw();
   ptitle->Paint();

}

//______________________________________________________________________________
void TH1::Print(Option_t *option)
{
//*-*-*-*-*-*-*Print some global quantities for this histogram*-*-*-*-*-*-*-*
//*-*          ===============================================
//
//  If option "all" is given, bin contents and errors are also printed.
//
   Int_t bin;
   printf( "TH1.Print Name= %s, Total sum= %g\n",GetName(),GetSumOfWeights());
   if (!strcasecmp(option,"all")) {
      for (bin=0; bin<fNcells; bin++) {
         if(fSumw2.fN) printf(" fSumw[%d]=%g, error[%d]=%g\n",bin,GetBinContent(bin),bin,GetBinError(bin));
         else          printf(" fSumw[%d]=%g\n",bin,GetBinContent(bin));
      }
   }
}

//______________________________________________________________________________
void TH1::RecalculateRange()
{
//*-*-*-*-*-*Recompute the histogram range following graphics operations*-*-*
//*-*        ===========================================================
   if (Hoption.Same) return;

//*-*- Compute x,y range
   Float_t xmin = Hparam.xmin;
   Float_t xmax = Hparam.xmax;
   Float_t ymin = Hparam.ymin;
   Float_t ymax = Hparam.ymax;
   Float_t dx   = xmax-xmin;
   Float_t dy   = ymax-ymin;
   Float_t dxr  = dx/(1 - gPad->GetLeftMargin() - gPad->GetRightMargin());
   Float_t dyr  = dy/(1 - gPad->GetBottomMargin() - gPad->GetTopMargin());

   // Range() could change the size of the pad pixmap and therefore should
   // be called before the other paint routines
   gPad->Range(xmin - dxr*gPad->GetLeftMargin(),
                      ymin - dyr*gPad->GetBottomMargin(),
                      xmax + dxr*gPad->GetRightMargin(),
                      ymax + dyr*gPad->GetTopMargin());
   gPad->RangeAxis(xmin, ymin, xmax, ymax);
}

//______________________________________________________________________________
void TH1::Reset(Option_t *)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   fTsumw       = 0;
   fTsumw2      = 0;
   fTsumwx      = 0;
   fTsumwx2     = 0;
   fEntries     = 0;

   fSumw2.Reset();
   fFunctions->Delete();
   fContour.Set(0);
   if (fIntegral) {delete [] fIntegral; fIntegral = 0;}
}

//______________________________________________________________________________
void TH1::SavePrimitive(ofstream &out, Option_t *option)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;

   SaveFillAttributes(out,GetName(),0,1001);
   SaveLineAttributes(out,GetName(),1,1,1);
   SaveMarkerAttributes(out,GetName(),1,1,1);
   fXaxis.SaveAttributes(out,GetName(),"->GetXaxis()");
   fYaxis.SaveAttributes(out,GetName(),"->GetYaxis()");
   fZaxis.SaveAttributes(out,GetName(),"->GetZaxis()");
   out<<"   "<<GetName()<<"->Draw("
      <<quote<<option<<quote<<");"<<endl;
}

//______________________________________________________________________________
void TH1::UseCurrentStyle()
{
//*-*-*-*-*-*Replace current attributes by current style*-*-*-*-*
//*-*        ===========================================

   fXaxis.Reset("X");
   fYaxis.Reset("Y");
   SetBarOffset(gStyle->GetBarOffset());
   SetBarWidth(gStyle->GetBarWidth());
   SetFillColor(gStyle->GetHistFillColor());
   SetFillStyle(gStyle->GetHistFillStyle());
   SetLineColor(gStyle->GetHistLineColor());
   SetLineStyle(gStyle->GetHistLineStyle());
   SetLineWidth(gStyle->GetHistLineWidth());
   SetMarkerColor(gStyle->GetMarkerColor());
   SetMarkerStyle(gStyle->GetMarkerStyle());
   SetMarkerSize(gStyle->GetMarkerSize());
}

//______________________________________________________________________________
Stat_t TH1::GetMean(Int_t axis)
{
//*-*-*-*-*-*-*-*Return mean value of this histogram along the X axis*-*-*-*-*
//*-*            ====================================================

  if (axis <1 || axis > 3) return 0;
  Stat_t stats[10];
  GetStats(stats);
  if (stats[0] == 0) return 0;
  Int_t ax = 2*axis;
  return stats[ax]/stats[0];
}

//______________________________________________________________________________
Stat_t TH1::GetRMS(Int_t axis)
{
//*-*-*-*-*-*-*-*Return the Root Mean Square value of this histogram*-*-*-*-*
//*-*            ===================================================

  if (axis <1 || axis > 3) return 0;
  Stat_t x, rms2, stats[10];
  GetStats(stats);
  if (stats[0] == 0) return 0;
  Int_t ax = 2*axis;
  x    = stats[ax]/stats[0];
  rms2 = TMath::Abs(stats[ax+1]/stats[0] -x*x);
  return TMath::Sqrt(rms2);
}

//______________________________________________________________________________
void TH1::GetStats(Stat_t *stats)
{
   // fill the array stats from the contents of this histogram
   // The array stats must be correctly dimensionned in the calling program.
   // stats[0] = sumw
   // stats[1] = sumw2
   // stats[2] = sumwx
   // stats[3] = sumwx2
   // stats[4] = sumwy   if 2-d or 3-d
   // stats[5] = sumwy2
   // stats[6] = sumwz   if 3-d
   // stats[7] = sumwz2
   //
   // If no axis-subrange is specified (via TAxis::SetRange), the array stats
   // is simply a copy of the statistics quantities computed at filling time.
   // If a sub-range is specified, the function recomputes these quantities
   // from the bin contents in the current axis range.

   // Loop on bins (possibly including underflows/overflows)
   Int_t bin, binx, biny, binz;
   Stat_t w;
   Float_t x,y,z;
   if (fDimension == 1) {
      if (fTsumw == 0 || fXaxis.TestBit(kAxisRange)) {
         for (bin=0;bin<4;bin++) stats[bin] = 0;
         for (binx=fXaxis.GetFirst();binx<=fXaxis.GetLast();binx++) {
            x = fXaxis.GetBinCenter(binx);
            w = TMath::Abs(GetBinContent(binx));
            stats[0] += w;
            stats[1] += w*w;
            stats[2] += w*x;
            stats[3] += w*x*x;
         }
      } else {
         stats[0] = fTsumw;
         stats[1] = fTsumw2;
         stats[2] = fTsumwx;
         stats[3] = fTsumwx2;
      }
   }
   if (fDimension == 2) {
      for (bin=0;bin<6;bin++) stats[bin] = 0;
      for (biny=fYaxis.GetFirst();biny<=fYaxis.GetLast();biny++) {
         y = fYaxis.GetBinCenter(biny);
         for (binx=fXaxis.GetFirst();binx<=fXaxis.GetLast();binx++) {
            bin = GetBin(binx,biny);
            x = fXaxis.GetBinCenter(binx);
            w = TMath::Abs(GetBinContent(bin));
            stats[0] += w;
            stats[1] += w*w;
            stats[2] += w*x;
            stats[3] += w*x*x;
            stats[4] += w*y;
            stats[5] += w*y*y;
         }
      }
   }
   if (fDimension == 3) {
      for (bin=0;bin<8;bin++) stats[bin] = 0;
      for (binz=fZaxis.GetFirst();binz<=fZaxis.GetLast();binz++) {
         z = fZaxis.GetBinCenter(binz);
         for (biny=fYaxis.GetFirst();biny<=fYaxis.GetLast();biny++) {
            y = fYaxis.GetBinCenter(biny);
            for (binx=fXaxis.GetFirst();binx<=fXaxis.GetLast();binx++) {
               bin = GetBin(binx,biny,binz);
               x = fXaxis.GetBinCenter(binx);
               w = TMath::Abs(GetBinContent(bin));
               stats[0] += w;
               stats[1] += w*w;
               stats[2] += w*x;
               stats[3] += w*x*x;
               stats[4] += w*y;
               stats[5] += w*y*y;
               stats[6] += w*z;
               stats[7] += w*z*z;
            }
         }
      }
   }
}

//______________________________________________________________________________
Stat_t TH1::GetSumOfWeights()
{
//*-*-*-*-*-*-*-*Return the sum of weights excluding under/overflows*-*-*-*-*
//*-*            ===================================================
  Int_t bin,binx,biny,binz;
  Stat_t sum =0;
  for(binz=1; binz<=fZaxis.GetNbins(); binz++) {
     for(biny=1; biny<=fYaxis.GetNbins(); biny++) {
        for(binx=1; binx<=fXaxis.GetNbins(); binx++) {
           bin = GetBin(binx,biny,binz);
           sum += GetBinContent(bin);
        }
     }
  }
  return sum;
}


//______________________________________________________________________________
Stat_t TH1::Integral()
{
//Return integral of bin contents (all bins)

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;

   Stat_t integral = 0;

//*-*- Loop on bins (including underflows/overflows)
   Int_t bin, binx, biny, binz;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=0;binx<=nbinsx+1;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            integral += GetBinContent(bin);
         }
      }
   }
   return integral;
}

//______________________________________________________________________________
Stat_t TH1::Integral(Int_t binx1, Int_t binx2)
{
//Return integral of bin contents between binx1 and binx2 for a 1-D histogram

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (binx1 < 0) binx1 = 0;
   if (binx2 > nbinsx+1) binx2 = nbinsx+1;
   if (binx2 < binx1)    binx2 = nbinsx;
   Stat_t integral = 0;

//*-*- Loop on bins in specified range
   Int_t bin, binx, biny, binz;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=0;biny<=nbinsy+1;biny++) {
         for (binx=binx1;binx<=binx2;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            integral += GetBinContent(bin);
         }
      }
   }
   return integral;
}

//______________________________________________________________________________
Stat_t TH1::Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2)
{
//Return integral of bin contents in range [binx1,binx2],[biny1,biny2]
// for a 2-D histogram

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (binx1 < 0) binx1 = 0;
   if (binx2 > nbinsx+1) binx2 = nbinsx+1;
   if (binx2 < binx1)    binx2 = nbinsx;
   if (biny1 < 0) biny1 = 0;
   if (biny2 > nbinsy+1) biny2 = nbinsy+1;
   if (biny2 < biny1)    biny2 = nbinsy;
   Stat_t integral = 0;

//*-*- Loop on bins in specified range
   Int_t bin, binx, biny, binz;
   for (binz=0;binz<=nbinsz+1;binz++) {
      for (biny=biny1;biny<=biny2;biny++) {
         for (binx=binx1;binx<=binx2;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            integral += GetBinContent(bin);
         }
      }
   }
   return integral;
}

//______________________________________________________________________________
Stat_t TH1::Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2)
{
//Return integral of bin contents in range [binx1,binx2],[biny1,biny2],[binz1,binz2]
// for a 3-D histogram

   Int_t nbinsx = GetNbinsX();
   Int_t nbinsy = GetNbinsY();
   Int_t nbinsz = GetNbinsZ();
   if (fDimension < 2) nbinsy = -1;
   if (fDimension < 3) nbinsz = -1;
   if (binx1 < 0) binx1 = 0;
   if (binx2 > nbinsx+1) binx2 = nbinsx+1;
   if (biny1 < 0) biny1 = 0;
   if (biny2 > nbinsy+1) biny2 = nbinsy+1;
   if (binz1 < 0) binz1 = 0;
   if (binz2 > nbinsz+1) binz2 = nbinsz+1;
   Stat_t integral = 0;

//*-*- Loop on bins in specified range
   Int_t bin, binx, biny, binz;
   for (binz=binz1;binz<=binz2;binz++) {
      for (biny=biny1;biny<=biny2;biny++) {
         for (binx=binx1;binx<=binx2;binx++) {
            bin = binx +(nbinsx+2)*(biny + (nbinsy+2)*binz);
            integral += GetBinContent(bin);
         }
      }
   }
   return integral;
}

//______________________________________________________________________________
void TH1::SetContent(Stat_t *content)
{
//*-*-*-*-*-*-*-*Replace bin contents by the contents of array content*-*-*-*
//*-*            =====================================================
   Int_t bin;
   Stat_t bincontent;
   for (bin=0; bin<fNcells; bin++) {
      bincontent = *(content + bin);
      SetBinContent(bin, bincontent);
   }
}

//______________________________________________________________________________
Int_t TH1::GetContour(Float_t *levels)
{
//*-*-*-*-*-*-*-*Return contour values into array levels*-*-*-*-*-*-*-*-*-*
//*-*            =======================================
//*-*
//*-*  The number of contour levels can be returned by getContourLevel
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
  Int_t nlevels = fContour.fN;
  if (levels) {
     for (Int_t level=0; level<nlevels; level++) levels[level] = fContour.fArray[level];
  }
  return nlevels;
}

//______________________________________________________________________________
Float_t TH1::GetContourLevel(Int_t level)
{
//*-*-*-*-*-*-*-*Return the number of contour levels*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ===================================
  if (level <0 || level >= fContour.fN) return 0;
  Float_t zlevel = fContour.fArray[level];
  return zlevel;
}


//______________________________________________________________________________
void TH1::SetContour(Int_t  nlevels, Float_t *levels)
{
//*-*-*-*-*-*-*-*Set the number and values of contour levels*-*-*-*-*-*-*-*-*
//*-*            ===========================================
//
//  By default the number of contour levels is set to 20.
//
//  if argument levels = 0 or issing, equidistant contours are computed
//

  Int_t level;
  if (nlevels <=0 ) {
     fContour.Set(0);
     return;
  }
  fContour.Set(nlevels);

//*-*-  Contour levels are specified
  if (levels) {
     for (level=0; level<nlevels; level++) fContour.fArray[level] = levels[level];
  } else {
//*-*- contour levels are computed automatically as equidistant contours
     Float_t zmin = GetMinimum();
     Float_t zmax = GetMaximum();
     Float_t dz   = (zmax-zmin)/Float_t(nlevels);
     if (Hoption.Logz) {
        if (zmax <= 0) return;
        if (zmin <= 0) zmin = 0.001*zmax;
        zmin = TMath::Log10(zmin);
        zmax = TMath::Log10(zmax);
        dz   = (zmax-zmin)/Float_t(nlevels);
     }
     for (level=0; level<nlevels; level++) {
        fContour.fArray[level] = zmin + dz*Float_t(level);
     }
  }
}

//______________________________________________________________________________
void TH1::SetContourLevel(Int_t level, Float_t value)
{
//*-*-*-*-*-*-*-*-*-*-*Set value for one contour level*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
  if (level <0 || level >= fContour.fN) return;
  fContour.fArray[level] = value;
}

//______________________________________________________________________________
Float_t TH1::GetMaximum()
{
//*-*-*-*-*-*-*-*-*-*-*Return maximum value of all bins*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================
  Int_t binx, biny;
  Float_t maximum, value;
  if (fMaximum != -1111) return fMaximum;
  if (GetDimension() < 2) {
     maximum = GetBinContent(1);
     for(binx=1; binx<=fXaxis.GetNbins(); binx++) {
        value = GetBinContent(binx);
        if (value > maximum) maximum = value;
     }
  } else {
     maximum = GetCellContent(1,1);
     for(biny=1; biny<=fYaxis.GetNbins(); biny++) {
        for(binx=1; binx<=fXaxis.GetNbins(); binx++) {
           value = GetCellContent(binx, biny);
           if (value > maximum) maximum = value;
        }
     }
  }
  return maximum;
}

//______________________________________________________________________________
Float_t TH1::GetMinimum()
{
//*-*-*-*-*-*-*-*-*-*-*Return minimum value of all bins*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================
  Int_t binx, biny;
  Float_t minimum, value;
  if (fMinimum != -1111) return fMinimum;
  if (GetDimension() < 2) {
     minimum = GetBinContent(1);
     for(binx=1; binx<=fXaxis.GetNbins(); binx++) {
        value = GetBinContent(binx);
        if (value < minimum) minimum = value;
     }
  } else {
     minimum = GetCellContent(1,1);
     for(biny=1; biny<=fYaxis.GetNbins(); biny++) {
        for(binx=1; binx<=fXaxis.GetNbins(); binx++) {
           value = GetCellContent(binx, biny);
           if (value < minimum) minimum = value;
        }
     }
  }
  return minimum;
}

//______________________________________________________________________________
void TH1::SetBins(Int_t nx, Float_t xmin, Float_t xmax)
{
//*-*-*-*-*-*-*-*-*Redefine  x axis parameters*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ===========================
// The X axis parameters are modified.
// The bins content array is resized
// if errors (Sumw2) the errors array is resized
// The previous bin contents are lost
// To change only the axis limits, see TAxis::SetRange

   if (GetDimension() != 1) {
      Error("SetBins","Operation only valid for 1-d histograms");
      return;
   }
   fXaxis.Set(nx,xmin,xmax);
   fNcells = nx+2;
   SetBinsLength(fNcells);
   if (fSumw2.fN) {
      fSumw2.Set(fNcells);
   }
}

//______________________________________________________________________________
void TH1::SetBins(Int_t nx, Float_t xmin, Float_t xmax, Int_t ny, Float_t ymin, Float_t ymax)
{
//*-*-*-*-*-*-*-*-*Redefine  x and y axis parameters*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =================================
// The X and Y axis parameters are modified.
// The bins content array is resized
// if errors (Sumw2) the errors array is resized
// The previous bin contents are lost
// To change only the axis limits, see TAxis::SetRange

   if (GetDimension() != 2) {
      Error("SetBins","Operation only valid for 2-d histograms");
      return;
   }
   fXaxis.Set(nx,xmin,xmax);
   fYaxis.Set(ny,ymin,ymax);
   fNcells = (nx+2)*(ny+2);
   SetBinsLength(fNcells);
   if (fSumw2.fN) {
      fSumw2.Set(fNcells);
   }
}

//______________________________________________________________________________
void TH1::SetBins(Int_t nx, Float_t xmin, Float_t xmax, Int_t ny, Float_t ymin, Float_t ymax, Int_t nz, Float_t zmin, Float_t zmax)
{
//*-*-*-*-*-*-*-*-*Redefine  x, y and z axis parameters*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================
// The X, Y and Z axis parameters are modified.
// The bins content array is resized
// if errors (Sumw2) the errors array is resized
// The previous bin contents are lost
// To change only the axis limits, see TAxis::SetRange

   if (GetDimension() != 3) {
      Error("SetBins","Operation only valid for 3-d histograms");
      return;
   }
   fXaxis.Set(nx,xmin,xmax);
   fYaxis.Set(ny,ymin,ymax);
   fZaxis.Set(nz,zmin,zmax);
   fNcells = (nx+2)*(ny+2)*(nz+2);
   SetBinsLength(fNcells);
   if (fSumw2.fN) {
      fSumw2.Set(fNcells);
   }
}

//______________________________________________________________________________
void TH1::SetMaximum(Float_t maximum)
{
//*-*-*-*-*-*-*-*-*Set the maximum value for the Y axis*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================
// By default the maximum value is automatically set to the maximum
// bin content plyus a margin of 10 per cent.
//
   fMaximum = maximum;
}


//______________________________________________________________________________
void TH1::SetMinimum(Float_t minimum)
{
//*-*-*-*-*-*-*-*-*Set the minimum value for the Y axis*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ====================================
// By default the minimum value is automatically set to zero if all bin contents
// are positive or the minimum - 10 per cent otherwise.
//
   fMinimum = minimum;
}

//______________________________________________________________________________
void TH1::SetDirectory(TDirectory *dir)
{
   // Remove reference to this histogram from current directory and add
   // reference to new directory dir. dir can be 0 in which case the
   // histogram does not belong to any directory.

   if (fDirectory == dir) return;
   if (fDirectory) fDirectory->GetList()->Remove(this);
   fDirectory = dir;
   if (fDirectory) fDirectory->GetList()->Add(this);
}


//______________________________________________________________________________
void TH1::SetError(Stat_t *error)
{
//*-*-*-*-*-*-*-*-*Replace bin errors by values in array error*-*-*-*-*-*-*-*-*
//*-*              ===========================================
  Int_t bin;
  Stat_t binerror;
  for (bin=0; bin<fNcells; bin++) {
     binerror = error[bin];
     SetBinError(bin, binerror);
  }
}

//______________________________________________________________________________
void TH1::SetName(const Text_t *name)
{
//*-*-*-*-*-*-*-*-*-*-*Change the name of this histogram*-*-*-*-*-*-*-*-*-*-*
//*-*                  =================================
   if (gPad) gPad->Modified();

//  Histograms are named objects in a THashList.
//  We must update the hashlist if we change the name
   if (fDirectory) fDirectory->GetList()->Remove(this);
   fName = name;
   if (fDirectory) fDirectory->GetList()->Add(this);
}

//______________________________________________________________________________
void TH1::SetStats(Bool_t stats)
{
//*-*-*-*-*-*-*-*-*Set statistics option on/off
//*-*              ============================
//  By default, the statistics box is drawn.
//  The paint options can be selected via gStyle->SetOptStats.
//  This function sets/resets the kNoStats bin in the histogram object.
//  It has priority over the Style option.

   ResetBit(kNoStats);
   if (!stats) SetBit(kNoStats);
}

//______________________________________________________________________________
void TH1::Sumw2()
{
//*-*-*-*-*Create structure to store sum of squares of weights*-*-*-*-*-*-*-*
//*-*      ===================================================
//*-*
//*-*  if histogram is already filled, the sum of squares of weights
//*-*  is filled with the existing bin contents
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

  if (fSumw2.fN) {
     Warning("Sumw2","Sum of squares of weights structure already created");
     return;
  }

  fSumw2.Set(fNcells);

  if (fEntries) {
     for (Int_t bin=0; bin<fNcells; bin++) {
        fSumw2.fArray[bin] = GetBinContent(bin);
     }
  }
}

//______________________________________________________________________________
TF1 *TH1::GetFunction(const Text_t *name)
{
//*-*-*-*-*Return pointer to function with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      ===================================

   return (TF1*)fFunctions->FindObject(name);
}

//______________________________________________________________________________
Stat_t TH1::GetBinError(Int_t bin)
{
//*-*-*-*-*-*-*Return value of error associated to bin number bin*-*-*-*-*
//*-*          ==================================================
//*-*
//*-* if the sum of squares of weights has been defined (via Sumw2),
//*-* this function returns the sqrt(sum of w2).
//*-* otherwise it returns the sqrt(contents) for this bin.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

  if (bin < 0) bin = 0;
  if (bin >= fNcells) bin = fNcells-1;
  if (fSumw2.fN) return TMath::Sqrt(fSumw2.fArray[bin]);
  Stat_t error2 = TMath::Abs(GetBinContent(bin));
  return TMath::Sqrt(error2);
}

//______________________________________________________________________________
Stat_t TH1::GetCellContent(Int_t binx, Int_t biny)
{
  Stat_t binval;
  if (GetDimension() > 1) {
     binval = GetBinContent(biny*(fXaxis.GetNbins()+2) + binx);
     return binval;
  }
  return GetBinContent(binx);
}

//______________________________________________________________________________
Stat_t TH1::GetCellError(Int_t binx, Int_t biny)
{
  if (GetDimension() > 1) return GetBinError(biny*(fXaxis.GetNbins()+2) + binx);
  return GetBinError(binx);
}

//______________________________________________________________________________
void TH1::SetBinError(Int_t bin, Stat_t error)
{
  if (!fSumw2.fN) Sumw2();
  if (bin <0 || bin>= fSumw2.fN) return;
  fSumw2.fArray[bin] = error*error;
}

//______________________________________________________________________________
void TH1::SetCellError(Int_t binx, Int_t biny, Stat_t error)
{
  if (binx <0 || binx>fXaxis.GetNbins()+1) return;
  if (biny <0 || biny>fYaxis.GetNbins()+1) return;
  if (!fSumw2.fN) Sumw2();
  Int_t bin = biny*(fXaxis.GetNbins()+2) + binx;
  fSumw2.fArray[bin] = error*error;
}

//______________________________________________________________________________
void TH1::SetBinContent(Int_t, Stat_t)
{
   AbstractMethod("SetBinContent");
}

ClassImp(TH1C)

//______________________________________________________________________________
//                     TH1C methods
//______________________________________________________________________________
TH1C::TH1C(): TH1(), TArrayC()
{
   fDimension = 1;
}

//______________________________________________________________________________
TH1C::TH1C(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayC()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1C::TH1C(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayC()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1C::TH1C(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayC()
{
//
//    Create a 1-Dim histogram with fix bins of type char (one byte per channel)
//    ==========================================================================
//                    (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH1C::TH1C(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayC()
{
//
//    Create a 1-Dim histogram with variable bins of type char (one byte per channel)
//    ==========================================================================
//                    (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH1C::~TH1C()
{

}

//______________________________________________________________________________
TH1C::TH1C(const TH1C &h1c)
{
   ((TH1C&)h1c).Copy(*this);
}

//______________________________________________________________________________
void TH1C::AddBinContent(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by 1*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================

   if (fArray[bin] < 127) fArray[bin]++;
}

//______________________________________________________________________________
void TH1C::AddBinContent(Int_t bin, Stat_t w)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by w*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================

   Int_t newval = fArray[bin] + Int_t(w);
   if (newval > -128 && newval < 128) {fArray[bin] = Char_t(newval); return;}
   if (newval < -127) fArray[bin] = -127;
   if (newval >  127) fArray[bin] =  127;
}

//______________________________________________________________________________
void TH1C::Copy(TObject &newth1)
{
   TH1::Copy(newth1);
   TArrayC::Copy((TH1C&)newth1);
}

//______________________________________________________________________________
TH1 *TH1C::DrawCopy(Option_t *option)
{

   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH1C *newth1 = (TH1C*)Clone();
   newth1->SetDirectory(0);
   newth1->SetBit(kCanDelete);
   newth1->AppendPad(option);
   return newth1;
}

//______________________________________________________________________________
Stat_t TH1C::GetBinContent(Int_t bin)
{
   if (bin < 0) bin = 0;
   if (bin >= fNcells) bin = fNcells-1;
   return Stat_t (fArray[bin]);
}

//______________________________________________________________________________
void TH1C::Reset(Option_t *option)
{
   TH1::Reset(option);
   TArrayC::Reset();
}

//______________________________________________________________________________
TH1C& TH1C::operator=(const TH1C &h1)
{
   if (this != &h1)  ((TH1C&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH1C operator*(Float_t c1, TH1C &h1)
{
   TH1C hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1C operator+(TH1C &h1, TH1C &h2)
{
   TH1C hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1C operator-(TH1C &h1, TH1C &h2)
{
   TH1C hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1C operator*(TH1C &h1, TH1C &h2)
{
   TH1C hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1C operator/(TH1C &h1, TH1C &h2)
{
   TH1C hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH1S)

//______________________________________________________________________________
//                     TH1S methods
//______________________________________________________________________________
TH1S::TH1S(): TH1(), TArrayS()
{
   fDimension = 1;
}

//______________________________________________________________________________
TH1S::TH1S(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayS()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1S::TH1S(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayS()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1S::TH1S(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayS()
{
//
//    Create a 1-Dim histogram with fix bins of type short
//    ====================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH1S::TH1S(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayS()
{
//
//    Create a 1-Dim histogram with variable bins of type short
//    =========================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH1S::~TH1S()
{

}

//______________________________________________________________________________
TH1S::TH1S(const TH1S &h1s)
{
   ((TH1S&)h1s).Copy(*this);
}

//______________________________________________________________________________
void TH1S::AddBinContent(Int_t bin)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by 1*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================

   if (fArray[bin] < 32767) fArray[bin]++;
}

//______________________________________________________________________________
void TH1S::AddBinContent(Int_t bin, Stat_t w)
{
//*-*-*-*-*-*-*-*-*-*Increment bin content by w*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ==========================

   Int_t newval = fArray[bin] + Int_t(w);
   if (newval > -32768 && newval < 32768) {fArray[bin] = Short_t(newval); return;}
   if (newval < -32767) fArray[bin] = -32767;
   if (newval >  32767) fArray[bin] =  32767;
}

//______________________________________________________________________________
void TH1S::Copy(TObject &newth1)
{
   TH1::Copy(newth1);
   TArrayS::Copy((TH1S&)newth1);
}

//______________________________________________________________________________
TH1 *TH1S::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH1S *newth1 = (TH1S*)Clone();
   newth1->SetDirectory(0);
   newth1->SetBit(kCanDelete);
   newth1->AppendPad(option);
   return newth1;
}

//______________________________________________________________________________
Stat_t TH1S::GetBinContent(Int_t bin)
{
   if (bin < 0) bin = 0;
   if (bin >= fNcells) bin = fNcells-1;
   return Stat_t (fArray[bin]);
}

//______________________________________________________________________________
void TH1S::Reset(Option_t *option)
{
   TH1::Reset(option);
   TArrayS::Reset();
}

//______________________________________________________________________________
TH1S& TH1S::operator=(const TH1S &h1)
{
   if (this != &h1)  ((TH1S&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH1S operator*(Float_t c1, TH1S &h1)
{
   TH1S hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1S operator+(TH1S &h1, TH1S &h2)
{
   TH1S hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1S operator-(TH1S &h1, TH1S &h2)
{
   TH1S hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1S operator*(TH1S &h1, TH1S &h2)
{
   TH1S hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1S operator/(TH1S &h1, TH1S &h2)
{
   TH1S hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH1F)

//______________________________________________________________________________
//                     TH1F methods
//______________________________________________________________________________
TH1F::TH1F(): TH1(), TArrayF()
{
   fDimension = 1;
}

//______________________________________________________________________________
TH1F::TH1F(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayF()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1F::TH1F(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayF()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1F::TH1F(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayF()
{
//
//    Create a 1-Dim histogram with fix bins of type float
//    ====================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH1F::TH1F(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayF()
{
//
//    Create a 1-Dim histogram with variable bins of type float
//    =========================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH1F::TH1F(const TH1F &h)
{
   ((TH1F&)h).Copy(*this);
}

//______________________________________________________________________________
TH1F::~TH1F()
{

}

//______________________________________________________________________________
void TH1F::Copy(TObject &newth1)
{
   TH1::Copy(newth1);
   TArrayF::Copy((TH1F&)newth1);
}

//______________________________________________________________________________
TH1 *TH1F::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH1F *newth1 = (TH1F*)Clone();
   newth1->SetDirectory(0);
   newth1->SetBit(kCanDelete);
   newth1->AppendPad(option);
   return newth1;
}

//______________________________________________________________________________
Stat_t TH1F::GetBinContent(Int_t bin)
{
   if (bin < 0) bin = 0;
   if (bin >= fNcells) bin = fNcells-1;
   return Stat_t (fArray[bin]);
}

//______________________________________________________________________________
void TH1F::Reset(Option_t *option)
{
   TH1::Reset(option);
   TArrayF::Reset();
}

//______________________________________________________________________________
TH1F& TH1F::operator=(const TH1F &h1)
{
   if (this != &h1)  ((TH1F&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH1F operator*(Float_t c1, TH1F &h1)
{
   TH1F hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1F operator+(TH1F &h1, TH1F &h2)
{
   TH1F hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1F operator-(TH1F &h1, TH1F &h2)
{
   TH1F hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1F operator*(TH1F &h1, TH1F &h2)
{
   TH1F hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1F operator/(TH1F &h1, TH1F &h2)
{
   TH1F hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}


ClassImp(TH1D)

//______________________________________________________________________________
//                     TH1D methods
//______________________________________________________________________________
TH1D::TH1D(): TH1(), TArrayD()
{
   fDimension = 1;
}

//______________________________________________________________________________
TH1D::TH1D(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayD()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1D::TH1D(Int_t dim,const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayD()
{
   fDimension = dim;
}

//______________________________________________________________________________
TH1D::TH1D(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t xlow,Axis_t xup)
     : TH1(name,title,nbins,xlow,xup), TArrayD()
{
//
//    Create a 1-Dim histogram with fix bins of type double
//    =====================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH1D::TH1D(const Text_t *name,const Text_t *title,Int_t nbins,Axis_t *xbins)
     : TH1(name,title,nbins,xbins), TArrayD()
{
//
//    Create a 1-Dim histogram with variable bins of type double
//    =====================================================
//           (see TH1::TH1 for explanation of parameters)
//
   fDimension = 1;
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH1D::~TH1D()
{

}

//______________________________________________________________________________
TH1D::TH1D(const TH1D &h1d)
{
   ((TH1D&)h1d).Copy(*this);
}

//______________________________________________________________________________
void TH1D::Copy(TObject &newth1)
{
   TH1::Copy(newth1);
   TArrayD::Copy((TH1D&)newth1);
}

//______________________________________________________________________________
TH1 *TH1D::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH1D *newth1 = (TH1D*)Clone();
   newth1->SetDirectory(0);
   newth1->SetBit(kCanDelete);
   newth1->AppendPad(option);
   return newth1;
}

//______________________________________________________________________________
Stat_t TH1D::GetBinContent(Int_t bin)
{
   if (bin < 0) bin = 0;
   if (bin >= fNcells) bin = fNcells-1;
   return Stat_t (fArray[bin]);
}

//______________________________________________________________________________
void TH1D::Reset(Option_t *option)
{
   TH1::Reset(option);
   TArrayD::Reset();
}

//______________________________________________________________________________
TH1D& TH1D::operator=(const TH1D &h1)
{
   if (this != &h1)  ((TH1D&)h1).Copy(*this);
   return *this;
}

//______________________________________________________________________________
TH1D operator*(Float_t c1, TH1D &h1)
{
   TH1D hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1D operator+(TH1D &h1, TH1D &h2)
{
   TH1D hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1D operator-(TH1D &h1, TH1D &h2)
{
   TH1D hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1D operator*(TH1D &h1, TH1D &h2)
{
   TH1D hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH1D operator/(TH1D &h1, TH1D &h2)
{
   TH1D hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}
