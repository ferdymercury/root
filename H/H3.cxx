//*CMZ :  2.00/12 07/10/98  11.35.46  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  20.10.38  by  Fons Rademakers
//*-- Author :    Rene Brun   27/10/95

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
#include "TH3.h"
#include "X3DBuffer.h"

R__EXTERN Size3D gSize3D;

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
TH3C::TH3C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH3C::TH3C(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH3C::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
TH3S::TH3S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH3S::TH3S(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH3S::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
TH3F::TH3F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH3F::TH3F(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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

   TH3F::Copy(newth3);
   TH3::Copy30((TH3F&)newth3);
}

//______________________________________________________________________________
void TH3F::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
}

//______________________________________________________________________________
void TH3F::Sizeof3D() const
{
//*-*-*-*-*-*-*Return total size of this 3-D shape with its attributes*-*-*
//*-*          ==========================================================

    if (GetDrawOption() && strstr(GetDrawOption(),"box")) {
       Int_t ix,iy,iz;
       Int_t nbinsx = fXaxis.GetNbins();
       Int_t nbinsy = fYaxis.GetNbins();
       Int_t nbinsz = fZaxis.GetNbins();
       Int_t ncells = 0;
       for (ix=1;ix<=nbinsx;ix++) {
          for (iy=1;iy<=nbinsy;iy++) {
             for (iz=1;iz<=nbinsz;iz++) {
                if (((TH3F*)this)->GetBinContent(((TH3F*)this)->GetBin(ix,iy,iz)) != 0)
                    ncells++;
             }
          }
       }
       gSize3D.numPoints += 8*ncells;
       gSize3D.numSegs   += 12*ncells;
       gSize3D.numPolys  += 6*ncells;
       return;
    }

    Int_t mode;
    if (fEntries > 10000) mode = 1;         // One line marker    '-'
    else if (fEntries > 3000) mode = 2;     // Two lines marker   '+'
    else mode = 3;                          // Three lines marker '*'

    gSize3D.numSegs   += Int_t(fEntries)*mode;
    gSize3D.numPoints += Int_t(fEntries)*mode*2;
    gSize3D.numPolys  += 0;
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
TH3D::TH3D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t xlow,Axis_t xup
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
TH3D::TH3D(const Text_t *name,const Text_t *title,Int_t nbinsx,Axis_t *xbins
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
void TH3D::Fill3(Axis_t x, Axis_t y, Axis_t z, Stat_t w)
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
