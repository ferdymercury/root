//*CMZ :  2.21/06 15/02/99  09.36.40  by  Rene Brun
//*-- Author :    Pasha Murat   12/02/99
//------------------------------------------------------------------------------
// Copyright(c) 1995-1997, P.Murat (CDF collaboration, FNAL)
//
// Permission to use, copy, modify and distribute this software and its
// documentation for non-commercial purposes is hereby granted without fee,
// provided that the above copyright notice appears in all copies and
// that both the copyright notice and this permission notice appear in
// the supporting documentation. The authors make no claims about the
// suitability of this software for any purpose.
// It is provided "as is" without express or implied warranty.
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  TLorentzVector class functions
//------------------------------------------------------------------------------

#include "TLorentzVector.h.h"

ClassImp(TLorentzVector)

//______________________________________________________________________________
TLorentzVector::TLorentzVector(): TVector3()
{
  fT = 0.;
}

//______________________________________________________________________________
TLorentzVector::TLorentzVector(TVector3& v, Double_t m) : TVector3(v)
{
  fT = TMath::Sqrt(v.Mod2()+m*m);
}



//______________________________________________________________________________
TLorentzVector::TLorentzVector(Double_t v[]) : TVector3(v)
{
// x[3] is energy here
  fT = v[3];
}



//______________________________________________________________________________
TLorentzVector::TLorentzVector(Double_t x0, Double_t y0, Double_t z0, Double_t t0)
               : TVector3(x0,y0,z0)
{
// usually I need (px,py,pz,m)
  fT = t0;
}

//______________________________________________________________________________
TLorentzVector::TLorentzVector(Float_t  x0, Float_t  y0, Float_t  z0, Float_t  t0)
               : TVector3(x0,y0,z0)
{
  fT = t0;
}

//______________________________________________________________________________
TLorentzVector::~TLorentzVector()
{
}
