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

#include "TVector3.h"

ClassImp(TVector3)

//______________________________________________________________________________
TVector3::TVector3()
{
  fX = 0.;
  fY = 0.;
  fZ = 0.;
}

//______________________________________________________________________________
TVector3::TVector3(Double_t x0, Double_t y0, Double_t z0)
{
  fX = x0;
  fY = y0;
  fZ = z0;
}

//______________________________________________________________________________
TVector3::TVector3(Float_t x0, Float_t y0, Float_t z0)
{
  fX = x0;
  fY = y0;
  fZ = z0;
}

//______________________________________________________________________________
TVector3::TVector3(Double_t *x0)
{
  fX = x0[0];
  fY = x0[1];
  fZ = x0[2];
}

//______________________________________________________________________________
TVector3::TVector3(Float_t *x0)
{
  fX = x0[0];
  fY = x0[1];
  fZ = x0[2];
}

//______________________________________________________________________________
TVector3::~TVector3()
{
