//*CMZ :  2.21/06 15/02/99  09.32.09  by  Rene Brun
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

#include "TVector2.h"

ClassImp(TVector2)

//______________________________________________________________________________
TVector2::TVector2()
{
  fX = 0.;
  fY = 0.;
}

//______________________________________________________________________________
TVector2::TVector2(Double_t *v)
{
  fX = v[0];
  fY = v[1];
}

//______________________________________________________________________________
TVector2::TVector2(Double_t x0, Double_t y0)
{
  fX = x0;
  fY = y0;
}

//______________________________________________________________________________
TVector2::~TVector2()
{
}

//______________________________________________________________________________
TVector2 TVector2::Rotate (Double_t phi)
{
  return TVector2( fX*TMath::Cos(phi)-fY*TMath::Sin(phi), fX*TMath::Sin(phi)+fY*TMath::Cos(phi) );
}
