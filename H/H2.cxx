//*CMZ :  2.23/12 26/01/2000  09.53.04  by  Rene Brun
//*CMZ :  2.23/09 25/11/99  23.44.30  by  Rene Brun
//*CMZ :  2.22/06 16/06/99  12.09.13  by  Rene Brun
//*CMZ :  2.22/05 10/06/99  10.03.37  by  Rene Brun
//*CMZ :  2.22/03 31/05/99  12.32.53  by  Rene Brun
//*CMZ :  2.22/00 05/04/99  18.13.30  by  Rene Brun
//*-- Author :    Rene Brun   26/12/94

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

#include "Strlen.h"
#include "TH2.h"
#include "TVirtualPad.h"

ClassImp(TH2)

//______________________________________________________________________________
//
// Service class for 2-Dim histogram classes
//
//  TH2C a 2-D histogram with one byte per cell (char)
//  TH2S a 2-D histogram with two bytes per cell (short integer)
//  TH2F a 2-D histogram with four bytes per cell (float)
//  TH2D a 2-D histogram with eight bytes per cell (double)
//

//______________________________________________________________________________
TH2::TH2()
{
   fScalefactor = 1;
   fTsumwy      = fTsumwy2 = fTsumwxy = 0;
}

//______________________________________________________________________________
TH2::~TH2()
{
}

//______________________________________________________________________________
void TH2::Copy20(TH2 &h2)
{
   h2.fScalefactor = fScalefactor;
   h2.fTsumwy      = fTsumwy;
   h2.fTsumwy2     = fTsumwy2;
   h2.fTsumwxy     = fTsumwxy;
}

//______________________________________________________________________________
void TH2::Fill20(Axis_t x, Axis_t y)
{
  fTsumwy  += y;
  fTsumwy2 += y*y;
  fTsumwxy += x*y;
}

//______________________________________________________________________________
void TH2::Fill20(Axis_t x, Axis_t y, Stat_t w)
{
  Stat_t z = (w > 0 ? w : -w);
  fTsumwy  += z*y;
  fTsumwy2 += z*y*y;
  fTsumwxy += z*x*y;
}

ClassImp(TH2C)

//______________________________________________________________________________
//                     TH2C methods
//______________________________________________________________________________
TH2C::TH2C(): TH1C(),TH2()
{
   fDimension = 2;
}

//______________________________________________________________________________
TH2C::~TH2C()
{
}

//______________________________________________________________________________
TH2C::TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1C(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   if (nbinsy <= 0) nbinsy = 1;
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH2C::TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1C(2,name,title,nbinsx,xbins),
      TH2()
{
   if (nbinsy <= 0) nbinsy = 1;
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH2C::TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1C(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   if (nbinsy <= 0) nbinsy = 1;
   if (ybins) fYaxis.Set(nbinsy,ybins);
   else       fYaxis.Set(nbinsy,0,1);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH2C::TH2C(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1C(2,name,title,nbinsx,xbins),
      TH2()
{
   if (nbinsy <= 0) nbinsy = 1;
   if (ybins) fYaxis.Set(nbinsy,ybins);
   else       fYaxis.Set(nbinsy,0,1);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayC::Set(fNcells);
}

//______________________________________________________________________________
TH2C::TH2C(const TH2C &h2c)
{
   ((TH2C&)h2c).Copy(*this);
}

//______________________________________________________________________________
void TH2C::Copy(TObject &newth2)
{
   TH1C::Copy(newth2);
   TH2::Copy20((TH2C&)newth2);
}

//______________________________________________________________________________
TH1 *TH2C::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2C *newth2 = (TH2C*)Clone();
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
   return newth2;
}

//______________________________________________________________________________
Int_t TH2C::Fill(Axis_t x, Stat_t y)
{
   Int_t ok = TH1::Fill12(x,y);
   if (ok >= 0) TH2::Fill20(x,y);
   return ok;
}

//______________________________________________________________________________
Int_t TH2C::Fill(Axis_t x, Axis_t y, Stat_t w)
{
   Int_t ok = TH1::Fill(x,y,w);
   if (ok >= 0) TH2::Fill20(x,y,w);
   return ok;
}

//______________________________________________________________________________
Stat_t TH2C::GetCorrelationFactor(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return correlation factor between axis1 and axis2*-*-*-*-*
//*-*            ====================================================
  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCorrelationFactor","Wrong parameters");
     return 0;
  }
  if (axis1 == axis2) return 1;
  Stat_t rms1 = GetRMS(axis1);
  if (rms1 == 0) return 0;
  Stat_t rms2 = GetRMS(axis2);
  if (rms2 == 0) return 0;
  return GetCovariance(axis1,axis2)/rms1/rms2;
}

//______________________________________________________________________________
Stat_t TH2C::GetCovariance(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return covariance between axis1 and axis2*-*-*-*-*
//*-*            ====================================================

  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCovariance","Wrong parameters");
     return 0;
  }
  Stat_t stats[7];
  GetStats(stats);
  Stat_t sumw   = stats[0];
  Stat_t sumw2  = stats[1];
  Stat_t sumwx  = stats[2];
  Stat_t sumwx2 = stats[3];
  Stat_t sumwy  = stats[4];
  Stat_t sumwy2 = stats[5];
  Stat_t sumwxy = stats[6];

  if (sumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(sumwx2/sumw - sumwx*sumwx/sumw2);
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(sumwy2/sumw - sumwy*sumwy/sumw2);
  }
  return sumwxy/sumw - sumwx/sumw*sumwy/sumw;
}

//______________________________________________________________________________
void TH2C::GetStats(Stat_t *stats)
{
   // fill the array stats from the contents of this histogram
   // The array stats must be correctly dimensionned in the calling program.
   // stats[0] = sumw
   // stats[1] = sumw2
   // stats[2] = sumwx
   // stats[3] = sumwx2
   // stats[4] = sumwy
   // stats[5] = sumwy2
   // stats[6] = sumwxy

   if (fTsumw == 0 || fXaxis.TestBit(TAxis::kAxisRange) ||
      fYaxis.TestBit(TAxis::kAxisRange)) {
      TH1::GetStats(stats);
   } else {
      stats[0] = fTsumw;
      stats[1] = fTsumw2;
      stats[2] = fTsumwx;
      stats[3] = fTsumwx2;
      stats[4] = fTsumwy;
      stats[5] = fTsumwy2;
      stats[6] = fTsumwxy;
   }
}

//______________________________________________________________________________
void TH2C::PutStats(Stat_t *stats)
{
   // Replace current statistics with the values in array stats

   TH1::PutStats(stats);
   fTsumwy  = stats[4];
   fTsumwy2 = stats[5];
   fTsumwxy = stats[6];
}

//______________________________________________________________________________
void TH2C::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1C::Reset(option);
   fTsumwy  = 0;
   fTsumwy2 = 0;
   fTsumwxy = 0;
}

//______________________________________________________________________________
TH2C& TH2C::operator=(const TH2C &h1)
{
   if (this != &h1)  ((TH2C&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH2C operator*(Float_t c1, TH2C &h1)
{
   TH2C hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2C operator+(TH2C &h1, TH2C &h2)
{
   TH2C hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2C operator-(TH2C &h1, TH2C &h2)
{
   TH2C hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2C operator*(TH2C &h1, TH2C &h2)
{
   TH2C hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2C operator/(TH2C &h1, TH2C &h2)
{
   TH2C hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH2S)

//______________________________________________________________________________
//                     TH2S methods
//______________________________________________________________________________
TH2S::TH2S(): TH1S(),TH2()
{
   fDimension = 2;
}

//______________________________________________________________________________
TH2S::~TH2S()
{

}

//______________________________________________________________________________
TH2S::TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1S(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1S(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1S(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1S(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const TH2S &h2s)
{
   ((TH2S&)h2s).Copy(*this);
}

//______________________________________________________________________________
void TH2S::Copy(TObject &newth2)
{
   TH1S::Copy(newth2);
   TH2::Copy20((TH2S&)newth2);
}

//______________________________________________________________________________
TH1 *TH2S::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2S *newth2 = (TH2S*)Clone();
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
   return newth2;
}

//______________________________________________________________________________
Int_t TH2S::Fill(Axis_t x, Stat_t y)
{
   Int_t ok = TH1::Fill12(x,y);
   if (ok >= 0) TH2::Fill20(x,y);
   return ok;
}

//______________________________________________________________________________
Int_t TH2S::Fill(Axis_t x, Axis_t y, Stat_t w)
{
   Int_t ok = TH1::Fill(x,y,w);
   if (ok >= 0) TH2::Fill20(x,y,w);
   return ok;
}

//______________________________________________________________________________
Stat_t TH2S::GetCorrelationFactor(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return correlation factor between axis1 and axis2*-*-*-*-*
//*-*            ====================================================
  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCorrelationFactor","Wrong parameters");
     return 0;
  }
  if (axis1 == axis2) return 1;
  Stat_t rms1 = GetRMS(axis1);
  if (rms1 == 0) return 0;
  Stat_t rms2 = GetRMS(axis2);
  if (rms2 == 0) return 0;
  return GetCovariance(axis1,axis2)/rms1/rms2;
}

//______________________________________________________________________________
Stat_t TH2S::GetCovariance(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return covariance between axis1 and axis2*-*-*-*-*
//*-*            ====================================================

  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCovariance","Wrong parameters");
     return 0;
  }
  Stat_t stats[7];
  GetStats(stats);
  Stat_t sumw   = stats[0];
  Stat_t sumw2  = stats[1];
  Stat_t sumwx  = stats[2];
  Stat_t sumwx2 = stats[3];
  Stat_t sumwy  = stats[4];
  Stat_t sumwy2 = stats[5];
  Stat_t sumwxy = stats[6];

  if (sumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(sumwx2/sumw - sumwx*sumwx/sumw2);
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(sumwy2/sumw - sumwy*sumwy/sumw2);
  }
  return sumwxy/sumw - sumwx/sumw*sumwy/sumw;
}

//______________________________________________________________________________
void TH2S::GetStats(Stat_t *stats)
{
   // fill the array stats from the contents of this histogram
   // The array stats must be correctly dimensionned in the calling program.
   // stats[0] = sumw
   // stats[1] = sumw2
   // stats[2] = sumwx
   // stats[3] = sumwx2
   // stats[4] = sumwy
   // stats[5] = sumwy2
   // stats[6] = sumwxy

   if (fTsumw == 0 || fXaxis.TestBit(TAxis::kAxisRange) ||
       fYaxis.TestBit(TAxis::kAxisRange)) {
      TH1::GetStats(stats);
   } else {
      stats[0] = fTsumw;
      stats[1] = fTsumw2;
      stats[2] = fTsumwx;
      stats[3] = fTsumwx2;
      stats[4] = fTsumwy;
      stats[5] = fTsumwy2;
      stats[6] = fTsumwxy;
   }
}

//______________________________________________________________________________
void TH2S::PutStats(Stat_t *stats)
{
   // Replace current statistics with the values in array stats

   TH1::PutStats(stats);
   fTsumwy  = stats[4];
   fTsumwy2 = stats[5];
   fTsumwxy = stats[6];
}

//______________________________________________________________________________
void TH2S::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1S::Reset(option);
   fTsumwy  = 0;
   fTsumwy2 = 0;
   fTsumwxy = 0;
}

//______________________________________________________________________________
TH2S& TH2S::operator=(const TH2S &h1)
{
   if (this != &h1)  ((TH2S&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH2S operator*(Float_t c1, TH2S &h1)
{
   TH2S hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2S operator+(TH2S &h1, TH2S &h2)
{
   TH2S hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2S operator-(TH2S &h1, TH2S &h2)
{
   TH2S hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2S operator*(TH2S &h1, TH2S &h2)
{
   TH2S hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2S operator/(TH2S &h1, TH2S &h2)
{
   TH2S hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH2F)

//______________________________________________________________________________
//                     TH2F methods
//______________________________________________________________________________
TH2F::TH2F(): TH1F(),TH2()
{
   fDimension = 2;
}

//______________________________________________________________________________
TH2F::~TH2F()
{

}

//______________________________________________________________________________
TH2F::TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1F(2,name,title,nbinsx,xlow,xup),
      TH2()
{

   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1F(2,name,title,nbinsx,xbins),
      TH2()
{

   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1F(2,name,title,nbinsx,xlow,xup),
      TH2()
{

   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1F(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const TH2F &h2f)
{
   ((TH2F&)h2f).Copy(*this);
}

//______________________________________________________________________________
void TH2F::Copy(TObject &newth2)
{
   TH1F::Copy(newth2);
   TH2::Copy20((TH2F&)newth2);
}

//______________________________________________________________________________
TH1 *TH2F::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2F *newth2 = (TH2F*)Clone();
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
   return newth2;
}

//______________________________________________________________________________
Int_t TH2F::Fill(Axis_t x, Stat_t y)
{
   Int_t ok = TH1::Fill12(x,y);
   if (ok >= 0) TH2::Fill20(x,y);
   return ok;
}

//______________________________________________________________________________
Int_t TH2F::Fill(Axis_t x, Axis_t y, Stat_t w)
{
   Int_t ok = TH1::Fill(x,y,w);
   if (ok >= 0) TH2::Fill20(x,y,w);
   return ok;
}

//______________________________________________________________________________
Stat_t TH2F::GetCorrelationFactor(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return correlation factor between axis1 and axis2*-*-*-*-*
//*-*            ====================================================
  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCorrelationFactor","Wrong parameters");
     return 0;
  }
  if (axis1 == axis2) return 1;
  Stat_t rms1 = GetRMS(axis1);
  if (rms1 == 0) return 0;
  Stat_t rms2 = GetRMS(axis2);
  if (rms2 == 0) return 0;
  return GetCovariance(axis1,axis2)/rms1/rms2;
}

//______________________________________________________________________________
Stat_t TH2F::GetCovariance(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return covariance between axis1 and axis2*-*-*-*-*
//*-*            ====================================================

     if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCovariance","Wrong parameters");
     return 0;
  }
  Stat_t stats[7];
  GetStats(stats);
  Stat_t sumw   = stats[0];
  Stat_t sumw2  = stats[1];
  Stat_t sumwx  = stats[2];
  Stat_t sumwx2 = stats[3];
  Stat_t sumwy  = stats[4];
  Stat_t sumwy2 = stats[5];
  Stat_t sumwxy = stats[6];

  if (sumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(sumwx2/sumw - sumwx*sumwx/sumw2);
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(sumwy2/sumw - sumwy*sumwy/sumw2);
  }
  return sumwxy/sumw - sumwx/sumw*sumwy/sumw;
}

//______________________________________________________________________________
void TH2F::GetStats(Stat_t *stats)
{
   // fill the array stats from the contents of this histogram
   // The array stats must be correctly dimensionned in the calling program.
   // stats[0] = sumw
   // stats[1] = sumw2
   // stats[2] = sumwx
   // stats[3] = sumwx2
   // stats[4] = sumwy
   // stats[5] = sumwy2
   // stats[6] = sumwxy

   if (fTsumw == 0 || fXaxis.TestBit(TAxis::kAxisRange) ||
       fYaxis.TestBit(TAxis::kAxisRange)) {
      TH1::GetStats(stats);
   } else {
      stats[0] = fTsumw;
      stats[1] = fTsumw2;
      stats[2] = fTsumwx;
      stats[3] = fTsumwx2;
      stats[4] = fTsumwy;
      stats[5] = fTsumwy2;
      stats[6] = fTsumwxy;
   }
}

//______________________________________________________________________________
void TH2F::PutStats(Stat_t *stats)
{
   // Replace current statistics with the values in array stats

   TH1::PutStats(stats);
   fTsumwy  = stats[4];
   fTsumwy2 = stats[5];
   fTsumwxy = stats[6];
}

//______________________________________________________________________________
void TH2F::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1F::Reset(option);
   fTsumwy  = 0;
   fTsumwy2 = 0;
   fTsumwxy = 0;
}

//______________________________________________________________________________
TH2F& TH2F::operator=(const TH2F &h1)
{
   if (this != &h1)  ((TH2F&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH2F operator*(Float_t c1, TH2F &h1)
{
printf("operator TH2F*1 called\n");
   TH2F hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}


//______________________________________________________________________________
TH2F operator*(TH2F &h1, Float_t c1)
{
printf("operator TH2F*2 called\n");
   TH2F hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2F operator+(TH2F &h1, TH2F &h2)
{
   TH2F hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2F operator-(TH2F &h1, TH2F &h2)
{
   TH2F hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2F operator*(TH2F &h1, TH2F &h2)
{
   TH2F hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2F operator/(TH2F &h1, TH2F &h2)
{
   TH2F hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

ClassImp(TH2D)

//______________________________________________________________________________
//                     TH2D methods
//______________________________________________________________________________
TH2D::TH2D(): TH1D(),TH2()
{
   fDimension = 2;
}

//______________________________________________________________________________
TH2D::~TH2D()
{

}

//______________________________________________________________________________
TH2D::TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1D(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (fXaxis.GetNbins()+2)*(fYaxis.GetNbins()+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1D(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (fXaxis.GetNbins()+2)*(fYaxis.GetNbins()+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1D(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const char *name,const char *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1D(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const TH2D &h2d)
{
   ((TH2D&)h2d).Copy(*this);
}

//______________________________________________________________________________
void TH2D::Copy(TObject &newth2)
{
   TH1D::Copy(newth2);
   TH2::Copy20((TH2D&)newth2);
}

//______________________________________________________________________________
TH1 *TH2D::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2D *newth2 = (TH2D*)Clone();
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad();
   return newth2;
}

//______________________________________________________________________________
Int_t TH2D::Fill(Axis_t x, Stat_t y)
{
   Int_t ok = TH1::Fill12(x,y);
   if (ok >= 0) TH2::Fill20(x,y);
   return ok;
}

//______________________________________________________________________________
Int_t TH2D::Fill(Axis_t x, Axis_t y, Stat_t w)
{
   Int_t ok = TH1::Fill(x,y,w);
   if (ok >= 0) TH2::Fill20(x,y,w);
   return ok;
}

//______________________________________________________________________________
Stat_t TH2D::GetCorrelationFactor(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return correlation factor between axis1 and axis2*-*-*-*-*
//*-*            ====================================================
  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCorrelationFactor","Wrong parameters");
     return 0;
  }
  if (axis1 == axis2) return 1;
  Stat_t rms1 = GetRMS(axis1);
  if (rms1 == 0) return 0;
  Stat_t rms2 = GetRMS(axis2);
  if (rms2 == 0) return 0;
  return GetCovariance(axis1,axis2)/rms1/rms2;
}

//______________________________________________________________________________
Stat_t TH2D::GetCovariance(Int_t axis1, Int_t axis2)
{
//*-*-*-*-*-*-*-*Return covariance between axis1 and axis2*-*-*-*-*
//*-*            ====================================================

  if (axis1 < 1 || axis2 < 1 || axis1 > 2 || axis2 > 2) {
     Error("GetCovariance","Wrong parameters");
     return 0;
  }
  Stat_t stats[7];
  GetStats(stats);
  Stat_t sumw   = stats[0];
  Stat_t sumw2  = stats[1];
  Stat_t sumwx  = stats[2];
  Stat_t sumwx2 = stats[3];
  Stat_t sumwy  = stats[4];
  Stat_t sumwy2 = stats[5];
  Stat_t sumwxy = stats[6];

  if (sumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(sumwx2/sumw - sumwx*sumwx/sumw2);
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(sumwy2/sumw - sumwy*sumwy/sumw2);
  }
  return sumwxy/sumw - sumwx/sumw*sumwy/sumw;
}

//______________________________________________________________________________
void TH2D::GetStats(Stat_t *stats)
{
   // fill the array stats from the contents of this histogram
   // The array stats must be correctly dimensionned in the calling program.
   // stats[0] = sumw
   // stats[1] = sumw2
   // stats[2] = sumwx
   // stats[3] = sumwx2
   // stats[4] = sumwy
   // stats[5] = sumwy2
   // stats[6] = sumwxy

   if (fTsumw == 0 || fXaxis.TestBit(TAxis::kAxisRange) ||
       fYaxis.TestBit(TAxis::kAxisRange)) {
      TH1::GetStats(stats);
   } else {
      stats[0] = fTsumw;
      stats[1] = fTsumw2;
      stats[2] = fTsumwx;
      stats[3] = fTsumwx2;
      stats[4] = fTsumwy;
      stats[5] = fTsumwy2;
      stats[6] = fTsumwxy;
   }
}

//______________________________________________________________________________
void TH2D::PutStats(Stat_t *stats)
{
   // Replace current statistics with the values in array stats

   TH1::PutStats(stats);
   fTsumwy  = stats[4];
   fTsumwy2 = stats[5];
   fTsumwxy = stats[6];
}

//______________________________________________________________________________
void TH2D::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset this histogram: contents, errors, etc*-*-*-*-*-*-*-*
//*-*            ===========================================

   TH1D::Reset(option);
   fTsumwy  = 0;
   fTsumwy2 = 0;
   fTsumwxy = 0;
}

//______________________________________________________________________________
TH2D& TH2D::operator=(const TH2D &h1)
{
   if (this != &h1)  ((TH2D&)h1).Copy(*this);
   return *this;
}


//______________________________________________________________________________
TH2D operator*(Float_t c1, TH2D &h1)
{
   TH2D hnew = h1;
   hnew.Scale(c1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2D operator+(TH2D &h1, TH2D &h2)
{
   TH2D hnew = h1;
   hnew.Add(&h2,1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2D operator-(TH2D &h1, TH2D &h2)
{
   TH2D hnew = h1;
   hnew.Add(&h2,-1);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2D operator*(TH2D &h1, TH2D &h2)
{
   TH2D hnew = h1;
   hnew.Multiply(&h2);
   hnew.SetDirectory(0);
   return hnew;
}

//______________________________________________________________________________
TH2D operator/(TH2D &h1, TH2D &h2)
{
   TH2D hnew = h1;
   hnew.Divide(&h2);
   hnew.SetDirectory(0);
   return hnew;
}
