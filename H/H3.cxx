//*CMZ :  2.23/12 26/01/2000  09.53.04  by  Rene Brun
//*CMZ :  2.23/09 09/11/99  11.52.10  by  Rene Brun
//*CMZ :  2.23/07 21/10/99  23.43.24  by  Rene Brun
//*CMZ :  2.23/04 13/10/99  17.56.10  by  Rene Brun
//*CMZ :  2.21/07 01/03/99  10.09.26  by  Rene Brun
//*CMZ :  2.21/05 10/02/99  09.31.56  by  Rene Brun
//*CMZ :  2.21/01 14/01/99  12.47.35  by  Rene Brun
//*CMZ :  2.00/12 07/10/98  11.35.46  by  Rene Brun
//*-- Author :    Rene Brun   27/10/95

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

#include "TROOT.h"
#include "TFile.h"
#include "Strlen.h"
#include "TH3.h"
#include "TVirtualPad.h"

ClassImp(TH3)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*  The 3-D histogram classes derived from the 1-D histogram classes.
//*-*  all operations are supported (fill, fit).
//*-*  Drawing is currently restricted to one single option.
//*-*  A cloud of points is drawn. The number of points is proportional to
//*-*  cell content.
//*-*
//
//  TH3C a 3-D histogram with one byte per cell (char)
//  TH3S a 3-D histogram with two bytes per cell (short integer)
//  TH3F a 3-D histogram with four bytes per cell (float)
//  TH3D a 3-D histogram with eight bytes per cell (double)
//
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TH3::TH3()
{
}

//______________________________________________________________________________
TH3::~TH3()
{
}

//______________________________________________________________________________
void TH3::Copy30(TH3 &)
{
}

//______________________________________________________________________________
void TH3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      if (gFile && gFile->GetVersion() < 22300) return;
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAtt3D::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TH3::IsA());
   } else {
      R__c = R__b.WriteVersion(TH3::IsA(), kTRUE);
      TAtt3D::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}


ClassImp(TH3C)

//______________________________________________________________________________
//                     TH3C methods
//______________________________________________________________________________
TH3C::TH3C(): TH1C(),TH3()
{
   fDimension = 3;
}

//______________________________________________________________________________
TH3C::~TH3C()
{

}

//______________________________________________________________________________
TH3C::TH3C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                     ,Int_t nbinsz,Axis_t zlow,Axis_t zup)
     :TH1C(3,name,title,nbinsx,xlow,xup),
      TH3()
{
//*-*-*-*-*-*-*-*-*Normal constructor for fix bin size 3-D histograms*-*-*-*-*
//*-*              ==================================================

   if (nbinsy <= 0) nbinsy = 1;
   if (nbinsz <= 0) nbinsz = 1;
   fYaxis.Set(nbinsy,ylow,yup);
   fZaxis.Set(nbinsz,zlow,zup);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH3C::TH3C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins
                                     ,Int_t nbinsz,Axis_t *zbins)
     :TH1C(3,name,title,nbinsx,xbins),
      TH3()
{
//*-*-*-*-*-*-*-*Normal constructor for variable bin size 3-D histograms*-*-*-*
//*-*            =======================================================
   if (nbinsy <= 0) nbinsy = 1;
   if (nbinsz <= 0) nbinsz = 1;
   if (ybins) fYaxis.Set(nbinsy,ybins);
   else       fYaxis.Set(nbinsy,0,1);
   if (zbins) fZaxis.Set(nbinsz,zbins);
   else       fZaxis.Set(nbinsz,0,1);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH3C::TH3C(const TH3C &h3c)
{
   ((TH3C&)h3c).Copy(*this);
}

//______________________________________________________________________________
void TH3C::Copy(TObject &newth3)
{
//*-*-*-*-*-*-*Copy this 3-D histogram structure to newth3*-*-*-*-*-*-*-*-*-*
//*-*          ===========================================

   TH1C::Copy(newth3);
   TH3::Copy30((TH3C&)newth3);
}

//______________________________________________________________________________
TH1 *TH3C::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH3C *newth3 = (TH3C*)Clone();
   newth3->SetDirectory(0);
   newth3->SetBit(kCanDelete);
   newth3->AppendPad(option);
   return newth3;
}

//______________________________________________________________________________
Int_t TH3C::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
void TH3C::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1C::Reset(option);
   // should also reset statistics once statistics are implemented for TH3
}

//______________________________________________________________________________
TH3C& TH3C::operator=(const TH3C &h1)
{
   if (this != &h1)  ((TH3C&)h1).Copy(*this);
   return *this;
}

//______________________________________________________________________________
TH3C operator*(Float_t c1, TH3C &h1)
{
   TH3C hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3C operator+(TH3C &h1, TH3C &h2)
{
   TH3C hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3C operator-(TH3C &h1, TH3C &h2)
{
   TH3C hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3C operator*(TH3C &h1, TH3C &h2)
{
   TH3C hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3C operator/(TH3C &h1, TH3C &h2)
{
   TH3C hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH3S)

//______________________________________________________________________________
//                     TH3S methods
//______________________________________________________________________________
TH3S::TH3S(): TH1S(),TH3()
{
   fDimension = 3;
}

//______________________________________________________________________________
TH3S::~TH3S()
{

}

//______________________________________________________________________________
TH3S::TH3S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                     ,Int_t nbinsz,Axis_t zlow,Axis_t zup)
     :TH1S(3,name,title,nbinsx,xlow,xup),
      TH3()
{
//*-*-*-*-*-*-*-*-*Normal constructor for fix bin size 3-D histograms*-*-*-*-*
//*-*              ==================================================
   fYaxis.Set(nbinsy,ylow,yup);
   fZaxis.Set(nbinsz,zlow,zup);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH3S::TH3S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins
                                     ,Int_t nbinsz,Axis_t *zbins)
     :TH1S(3,name,title,nbinsx,xbins),
      TH3()
{
//*-*-*-*-*-*-*-*Normal constructor for variable bin size 3-D histograms*-*-*-*
//*-*            =======================================================
   fYaxis.Set(nbinsy,ybins);
   fZaxis.Set(nbinsz,zbins);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH3S::TH3S(const TH3S &h3s)
{
   ((TH3S&)h3s).Copy(*this);
}

//______________________________________________________________________________
void TH3S::Copy(TObject &newth3)
{
//*-*-*-*-*-*-*Copy this 3-D histogram structure to newth3*-*-*-*-*-*-*-*-*-*
//*-*          ===========================================

   TH1S::Copy(newth3);
   TH3::Copy30((TH3S&)newth3);
}

//______________________________________________________________________________
TH1 *TH3S::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH3S *newth3 = (TH3S*)Clone();
   newth3->SetDirectory(0);
   newth3->SetBit(kCanDelete);
   newth3->AppendPad(option);
   return newth3;
}


//______________________________________________________________________________
Int_t TH3S::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
void TH3S::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1S::Reset(option);
   // should also reset statistics once statistics are implemented for TH3
}

//______________________________________________________________________________
TH3S& TH3S::operator=(const TH3S &h1)
{
   if (this != &h1)  ((TH3S&)h1).Copy(*this);
   return *this;
}

//______________________________________________________________________________
TH3S operator*(Float_t c1, TH3S &h1)
{
   TH3S hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3S operator+(TH3S &h1, TH3S &h2)
{
   TH3S hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3S operator-(TH3S &h1, TH3S &h2)
{
   TH3S hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3S operator*(TH3S &h1, TH3S &h2)
{
   TH3S hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3S operator/(TH3S &h1, TH3S &h2)
{
   TH3S hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH3F)

//______________________________________________________________________________
//                     TH3F methods
//______________________________________________________________________________
TH3F::TH3F(): TH1F(),TH3()
{
   fDimension = 3;
}

//______________________________________________________________________________
TH3F::~TH3F()
{

}

//______________________________________________________________________________
TH3F::TH3F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                     ,Int_t nbinsz,Axis_t zlow,Axis_t zup)
     :TH1F(3,name,title,nbinsx,xlow,xup),
      TH3()
{
//*-*-*-*-*-*-*-*-*Normal constructor for fix bin size 3-D histograms*-*-*-*-*
//*-*              ==================================================
   fYaxis.Set(nbinsy,ylow,yup);
   fZaxis.Set(nbinsz,zlow,zup);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH3F::TH3F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins
                                     ,Int_t nbinsz,Axis_t *zbins)
     :TH1F(3,name,title,nbinsx,xbins),
      TH3()
{
//*-*-*-*-*-*-*-*Normal constructor for variable bin size 3-D histograms*-*-*-*
//*-*            =======================================================
   fYaxis.Set(nbinsy,ybins);
   fZaxis.Set(nbinsz,zbins);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH3F::TH3F(const TH3F &h3f)
{
   ((TH3F&)h3f).Copy(*this);
}

//______________________________________________________________________________
void TH3F::Copy(TObject &newth3)
{
//*-*-*-*-*-*-*Copy this 3-D histogram structure to newth3*-*-*-*-*-*-*-*-*-*
//*-*          ===========================================

   TH1F::Copy(newth3);
   TH3::Copy30((TH3F&)newth3);
}

//______________________________________________________________________________
TH1 *TH3F::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH3F *newth3 = (TH3F*)Clone();
   newth3->SetDirectory(0);
   newth3->SetBit(kCanDelete);
   newth3->AppendPad(option);
   return newth3;
}

//______________________________________________________________________________
Int_t TH3F::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
void TH3F::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1F::Reset(option);
   // should also reset statistics once statistics are implemented for TH3
}

//______________________________________________________________________________
void TH3F::Sizeof3D() const
{
//*-*-*-*-*-*-*Return total size of this 3-D shape with its attributes*-*-*
//*-*          ==========================================================

   char *cmd;
   if (GetDrawOption() && strstr(GetDrawOption(),"box")) {
      cmd = Form("TMarker3DBox::SizeofH3((TH1 *)0x%lx);",(Long_t)this);
   } else {
      cmd = Form("TPolyMarker3D::SizeofH3((TH1 *)0x%lx);",(Long_t)this);
   }
   gROOT->ProcessLine(cmd);
}

//______________________________________________________________________________
TH3F& TH3F::operator=(const TH3F &h1)
{
   if (this != &h1)  ((TH3F&)h1).Copy(*this);
   return *this;
}

//______________________________________________________________________________
TH3F operator*(Float_t c1, TH3F &h1)
{
   TH3F hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3F operator+(TH3F &h1, TH3F &h2)
{
   TH3F hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3F operator-(TH3F &h1, TH3F &h2)
{
   TH3F hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3F operator*(TH3F &h1, TH3F &h2)
{
   TH3F hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3F operator/(TH3F &h1, TH3F &h2)
{
   TH3F hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH3D)

//______________________________________________________________________________
//                     TH3D methods
//______________________________________________________________________________
TH3D::TH3D(): TH1D(),TH3()
{
   fDimension = 3;
}

//______________________________________________________________________________
TH3D::~TH3D()
{

}

//______________________________________________________________________________
TH3D::TH3D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup
                                     ,Int_t nbinsz,Axis_t zlow,Axis_t zup)
     :TH1D(3,name,title,nbinsx,xlow,xup),
      TH3()
{
//*-*-*-*-*-*-*-*-*Normal constructor for fix bin size 3-D histograms*-*-*-*-*
//*-*              ==================================================
   fYaxis.Set(nbinsy,ylow,yup);
   fZaxis.Set(nbinsz,zlow,zup);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH3D::TH3D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins
                                     ,Int_t nbinsz,Axis_t *zbins)
     :TH1D(3,name,title,nbinsx,xbins),
      TH3()
{
//*-*-*-*-*-*-*-*Normal constructor for variable bin size 3-D histograms*-*-*-*
//*-*            =======================================================
   fYaxis.Set(nbinsy,ybins);
   fZaxis.Set(nbinsz,zbins);
   fNcells      = (nbinsx+2)*(nbinsy+2)*(nbinsz+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH3D::TH3D(const TH3D &h3d)
{
   ((TH3D&)h3d).Copy(*this);
}

//______________________________________________________________________________
void TH3D::Copy(TObject &newth3)
{
//*-*-*-*-*-*-*Copy this 3-D histogram structure to newth3*-*-*-*-*-*-*-*-*-*
//*-*          ===========================================

   TH1D::Copy(newth3);
   TH3::Copy30((TH3D&)newth3);
}

//______________________________________________________________________________
TH1 *TH3D::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH3D *newth3 = (TH3D*)Clone();
   newth3->SetDirectory(0);
   newth3->SetBit(kCanDelete);
   newth3->AppendPad(option);
   return newth3;
}

//______________________________________________________________________________
Int_t TH3D::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
void TH3D::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1D::Reset(option);
   // should also reset statistics once statistics are implemented for TH3
}

//______________________________________________________________________________
TH3D& TH3D::operator=(const TH3D &h1)
{
   if (this != &h1)  ((TH3D&)h1).Copy(*this);
   return *this;
}

//______________________________________________________________________________
TH3D operator*(Float_t c1, TH3D &h1)
{
   TH3D hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3D operator+(TH3D &h1, TH3D &h2)
{
   TH3D hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3D operator-(TH3D &h1, TH3D &h2)
{
   TH3D hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3D operator*(TH3D &h1, TH3D &h2)
{
   TH3D hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH3D operator/(TH3D &h1, TH3D &h2)
{
   TH3D hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}
