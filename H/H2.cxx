//*CMZ :  2.20/00 05/11/98  18.52.40  by  Rene Brun
//*CMZ :  2.00/10 29/07/98  22.28.16  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  18.02.40  by  Fons Rademakers
//*CMZ :  1.03/09 09/12/97  20.01.55  by  Fons Rademakers
//*-- Author :    Rene Brun   26/12/94

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
TH2C::TH2C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH2C::TH2C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
TH2C::TH2C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH2C::TH2C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH2C::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2C *newth2 = new TH2C();
   Copy(*newth2);
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
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
  if (fTsumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  }
  return fTsumwxy/fTsumw - fTsumwx/fTsumw*fTsumwy/fTsumw;
}

//______________________________________________________________________________
Stat_t TH2C::GetMean(Int_t axis)
{
//*-*-*-*-*-*-*-*Return mean value of this histogram along the X axis*-*-*-*-*
//*-*            ====================================================
  if (fTsumw == 0) return 0;
  if (axis == 1) return fTsumwx / fTsumw;
  if (axis == 2) return fTsumwy / fTsumw;
  return 0;
}

//______________________________________________________________________________
Stat_t TH2C::GetRMS(Int_t axis)
{
//*-*-*-*-*-*-*-*Return the Root Mean Square value of this histogram*-*-*-*-*
//*-*            ===================================================
  if (fTsumw == 0) return 0;
  Stat_t rms2 = 0;
  if (axis == 1) rms2 = TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  if (axis == 2) rms2 = TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  return TMath::Sqrt(rms2);
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
TH2S::TH2S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1S(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1S(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1S(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayS::Set(fNcells);
}

//______________________________________________________________________________
TH2S::TH2S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH2S::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2S *newth2 = new TH2S();
   Copy(*newth2);
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
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
  if (fTsumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  }
  return fTsumwxy/fTsumw - fTsumwx/fTsumw*fTsumwy/fTsumw;
}


//______________________________________________________________________________
Stat_t TH2S::GetMean(Int_t axis)
{
//*-*-*-*-*-*-*-*Return mean value of this histogram along the X axis*-*-*-*-*
//*-*            ====================================================
  if (fTsumw == 0) return 0;
  if (axis == 1) return fTsumwx / fTsumw;
  if (axis == 2) return fTsumwy / fTsumw;
  return 0;
}

//______________________________________________________________________________
Stat_t TH2S::GetRMS(Int_t axis)
{
//*-*-*-*-*-*-*-*Return the Root Mean Square value of this histogram*-*-*-*-*
//*-*            ===================================================
  if (fTsumw == 0) return 0;
  Stat_t rms2 = 0;
  if (axis == 1) rms2 = TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  if (axis == 2) rms2 = TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  return TMath::Sqrt(rms2);
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
TH2F::TH2F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1F(2,name,title,nbinsx,xlow,xup),
      TH2()
{

   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1F(2,name,title,nbinsx,xbins),
      TH2()
{

   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1F(2,name,title,nbinsx,xlow,xup),
      TH2()
{

   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayF::Set(fNcells);
}

//______________________________________________________________________________
TH2F::TH2F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH2F::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2F *newth2 = new TH2F();
   Copy(*newth2);
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad(option);
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
  if (fTsumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  }
  return fTsumwxy/fTsumw - fTsumwx/fTsumw*fTsumwy/fTsumw;
}


//______________________________________________________________________________
Stat_t TH2F::GetMean(Int_t axis)
{
//*-*-*-*-*-*-*-*Return mean value of this histogram along the X axis*-*-*-*-*
//*-*            ====================================================
  if (fTsumw == 0) return 0;
  if (axis == 1) return fTsumwx / fTsumw;
  if (axis == 2) return fTsumwy / fTsumw;
  return 0;
}

//______________________________________________________________________________
Stat_t TH2F::GetRMS(Int_t axis)
{
//*-*-*-*-*-*-*-*Return the Root Mean Square value of this histogram*-*-*-*-*
//*-*            ===================================================
  if (fTsumw == 0) return 0;
  Stat_t rms2 = 0;
  if (axis == 1) rms2 = TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  if (axis == 2) rms2 = TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  return TMath::Sqrt(rms2);
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
TH2D::TH2D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1D(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (fXaxis.GetNbins()+2)*(fYaxis.GetNbins()+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
                                     ,Int_t nbinsy,Axis_t ylow,Axis_t yup)
     :TH1D(2,name,title,nbinsx,xbins),
      TH2()
{
   fYaxis.Set(nbinsy,ylow,yup);
   fNcells      = (fXaxis.GetNbins()+2)*(fYaxis.GetNbins()+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
                                     ,Int_t nbinsy,Axis_t *ybins)
     :TH1D(2,name,title,nbinsx,xlow,xup),
      TH2()
{
   fYaxis.Set(nbinsy,ybins);
   fNcells      = (nbinsx+2)*(nbinsy+2);
   TArrayD::Set(fNcells);
}

//______________________________________________________________________________
TH2D::TH2D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH2D::DrawCopy(Option_t *option)
{
   TString opt = option;
   opt.ToLower();
   if (gPad && !opt.Contains("same")) gPad->Clear();
   TH2D *newth2 = new TH2D();
   Copy(*newth2);
   newth2->SetDirectory(0);
   newth2->SetBit(kCanDelete);
   newth2->AppendPad();
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
  if (fTsumw == 0) return 0;
  if (axis1 == 1 && axis2 == 1) {
     return TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  }
  if (axis1 == 2 && axis2 == 2) {
     return TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  }
  return fTsumwxy/fTsumw - fTsumwx/fTsumw*fTsumwy/fTsumw;
}


//______________________________________________________________________________
Stat_t TH2D::GetMean(Int_t axis)
{
//*-*-*-*-*-*-*-*Return mean value of this histogram along the X axis*-*-*-*-*
//*-*            ====================================================
  if (fTsumw == 0) return 0;
  if (axis == 1) return fTsumwx / fTsumw;
  if (axis == 2) return fTsumwy / fTsumw;
  return 0;
}

//______________________________________________________________________________
Stat_t TH2D::GetRMS(Int_t axis)
{
//*-*-*-*-*-*-*-*Return the Root Mean Square value of this histogram*-*-*-*-*
//*-*            ===================================================
  if (fTsumw == 0) return 0;
  Stat_t rms2 = 0;
  if (axis == 1) rms2 = TMath::Abs(fTsumwx2/fTsumw - fTsumwx*fTsumwx/(fTsumw*fTsumw));
  if (axis == 2) rms2 = TMath::Abs(fTsumwy2/fTsumw - fTsumwy*fTsumwy/(fTsumw*fTsumw));
  return TMath::Sqrt(rms2);
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
