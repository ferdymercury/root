//*CMZ :  2.21/06 15/02/99  09.36.40  by  Rene Brun
//*-- Author :    Pasha Murat 12/02/99

#ifndef ROOT_TLorentzVector
#define ROOT_TLorentzVector

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


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLorentzVector                                                       //
//                                                                      //
// Place holder for real lorentz vector class.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TVector3
#include "TVector3.h"
#endif

class TLorentzVector: public TVector3 {

protected:
					
  Double_t  fT;          // time component of 4-vector

public:
                                        // ****** constructors and destructor
  TLorentzVector();
  TLorentzVector(TVector3& v, Double_t m);
  TLorentzVector(Double_t x[]);
  TLorentzVector(Double_t x, Double_t y, Double_t z, Double_t t);
  TLorentzVector(Float_t  x, Float_t  y, Float_t  z, Float_t  t);
  virtual ~TLorentzVector();

                                       // ****** data access functions

  inline Double_t T   () const { return fT; }
  inline Double_t Time() const { return fT; }

                                       // ****** unary operators

  inline TLorentzVector& operator  = (const TLorentzVector& v);
  inline TLorentzVector& operator += (const TLorentzVector& v);
  inline TLorentzVector& operator -= (const TLorentzVector& v);

                                        // ****** binary operators

  inline friend TLorentzVector  operator + (const TLorentzVector& v1,
					    const TLorentzVector& v2);
  inline friend TLorentzVector  operator - (const TLorentzVector& v1,
					    const TLorentzVector& v2);

                                        // ****** helpful sinonyms

  inline Double_t  Mod2  ()     { return fT*fT-fX*fX-fY*fY-fZ*fZ; }
  inline Double_t  Mod   ()     { return TMath::Sqrt(Mod2());     }
  inline Double_t  Energy()     { return T();                     }

  inline Double_t  Et    ()     {
    if ( Pt2() ) return Energy()*Pt()/P();
    else         return 0.;
  }

  inline Double_t  Mass  ();
                                        // rapidity
  inline Double_t  Rapidity ();
                                        // *** setters

  inline void SetT(Double_t t0) { fT = t0; }

                                        // here the last component is energy
					// setV4T is a synonim for setV4E

  inline void SetV4E(Double_t px, Double_t py, Double_t pz, Double_t e);
  inline void SetV4E(Float_t  x, Float_t  y, Float_t  z, Float_t  e);
  inline void SetV4T(Double_t x, Double_t y, Double_t z, Double_t t);
  inline void SetV4T(Float_t  x, Float_t  y, Float_t  z, Float_t  t);

  inline void PsetV4E(Double_t pt, Double_t eta, Double_t phi, Double_t e);
  inline void PsetV4E(Float_t  pt, Float_t  eta, Float_t  phi, Float_t  e);

                                        // very often it is more convenient to
                                        // define vector in terms in terms of
                                        // (p,m), rather than (p,e)

  inline void SetV4M(Double_t x, Double_t y, Double_t z, Double_t m);
  inline void SetV4M(Float_t  x, Float_t  y, Float_t  z, Float_t  m);

  inline void PsetV4M(Double_t pt, Double_t eta, Double_t phi, Double_t m);
  inline void PsetV4M(Float_t  pt, Float_t  eta, Float_t  phi, Float_t  m);

  inline void Set(Double_t v[]);
  inline void Set(Float_t  v[]);
  inline void Set(Double_t, Double_t, Double_t, Double_t);
  inline void Set(Float_t , Float_t , Float_t , Float_t );

                                        // *** getters

  inline void Get(Double_t& x, Double_t& y, Double_t& z, Double_t& t);
  inline void Get(Float_t&  x, Float_t&  y, Float_t&  z, Float_t&  t);
  inline void Get(Double_t v[]);
  inline void Get(Float_t  v[]);

  ClassDef(TLorentzVector,1)
};

//------------------------------------------------------------------------------
//  TLorentzVector inline functions
//------------------------------------------------------------------------------

                                        // 4-vector mass
inline Double_t  TLorentzVector::Mass() {
  Double_t m2 = Mod2();
  if   (m2 >= 0) return  TMath::Sqrt( m2);
  else           return -TMath::Sqrt(-m2);
}
                                        // 4-vector rapidity
inline Double_t  TLorentzVector::Rapidity ()  {
  return 0.5*TMath::Log((Energy()+Pz())/(Energy()-Pz()));
}
                                        // *** setters

inline void TLorentzVector::SetV4E(Double_t px0, Double_t py0, Double_t pz0, Double_t e0) {
  fX = px0;
  fY = py0;
  fZ = pz0;
  fT = e0;
}

inline void TLorentzVector::PsetV4E(Double_t pt0,Double_t eta0,Double_t phi0,Double_t e0) {
  pt0 = TMath::Abs(pt0);
  SetV4E(pt0*TMath::Cos(phi0),pt0*TMath::Sin(phi0),pt0/TMath::Tan(2.0*TMath::ATan(TMath::Exp(-eta0))),e0);
}

inline void TLorentzVector::SetV4E(Float_t px0, Float_t py0, Float_t pz0, Float_t e0) {
  fX = px0;
  fY = py0;
  fZ = pz0;
  fT = e0;
}
					// the same as the previous function

inline void TLorentzVector::SetV4T(Float_t x0, Float_t y0, Float_t z0, Float_t t0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = t0;
}

inline void TLorentzVector::SetV4T(Double_t x0, Double_t y0, Double_t z0, Double_t t0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = t0;
}

inline void TLorentzVector::PsetV4E(Float_t pt0, Float_t eta0, Float_t phi0, Float_t t0) {
  pt0 = TMath::Abs(pt0);
  SetV4E(pt0*TMath::Cos(phi0), pt0*TMath::Sin(phi0), pt0/TMath::Tan(2.0*TMath::ATan(TMath::Exp(-eta0))), Double_t(t0));
  return;
}

inline void TLorentzVector::SetV4M(Double_t x0, Double_t y0, Double_t z0, Double_t m0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = TMath::Sqrt(x0*x0+y0*y0+z0*z0+m0*m0);
}

inline void TLorentzVector::PsetV4M(Double_t pt0,Double_t eta0,Double_t phi0,Double_t m0) {
  pt0 = TMath::Abs(pt0);
  SetV4M(pt0*TMath::Cos(phi0), pt0*TMath::Sin(phi0), pt0 / TMath::Tan(2.0*TMath::ATan(TMath::Exp(-eta0))), m0);
}

inline void TLorentzVector::SetV4M(Float_t x0, Float_t y0, Float_t z0, Float_t m0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = TMath::Sqrt(x0*x0+y0*y0+z0*z0+m0*m0);
}

inline void TLorentzVector::PsetV4M(Float_t pt0, Float_t eta0, Float_t phi0, Float_t m0) {
  pt0 = TMath::Abs(pt0);
  SetV4M(pt0*TMath::Cos(phi0), pt0*TMath::Sin(phi0), pt0/TMath::Tan(2.0*TMath::ATan(TMath::Exp(-eta0))), Double_t(m0));
}

inline void TLorentzVector::Set(Double_t v[]) {
  fX = v[0];
  fY = v[1];
  fZ = v[2];
  fT = v[3];
}

inline void TLorentzVector::Set (Float_t v[]) {
  fX = v[0];
  fY = v[1];
  fZ = v[2];
  fT = v[3];
}

inline void TLorentzVector::Set(Double_t x0, Double_t y0, Double_t z0, Double_t t0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = t0;
}

inline void TLorentzVector::Set(Float_t  x0, Float_t  y0, Float_t  z0, Float_t  t0) {
  fX = x0;
  fY = y0;
  fZ = z0;
  fT = t0;
}
                                        // *** getters

inline void TLorentzVector::Get(double& x0, double& y0, double& z0, double& t0) {
  x0 = fX;
  y0 = fY;
  z0 = fZ;
  t0 = fT;
}

inline void TLorentzVector::Get(float& x0, float& y0, float& z0, float& t0) {
  x0 = fX;
  y0 = fY;
  z0 = fZ;
  t0 = fT;
}

inline void TLorentzVector::Get(Double_t v[]) {
  v[0] = fX;
  v[1] = fY;
  v[2] = fZ;
  v[3] = fT;
}

inline void TLorentzVector::Get (Float_t v[]) {
  v[0] = fX;
  v[1] = fY;
  v[2] = fZ;
  v[3] = fT;
}
                                        // *** unary operators

inline TLorentzVector& TLorentzVector::operator = (const TLorentzVector& v) {
  fX = v.fX;
  fY = v.fY;
  fZ = v.fZ;
  fT = v.fT;
  return *this;
}

inline TLorentzVector& TLorentzVector::operator += (const TLorentzVector& v) {
  fX += v.fX;
  fY += v.fY;
  fZ += v.fZ;
  fT += v.fT;
  return *this;
}

inline TLorentzVector& TLorentzVector::operator -= (const TLorentzVector& v) {
  fX -= v.fX;
  fY -= v.fY;
  fZ -= v.fZ;
  fT -= v.fT;
  return *this;
}



inline  TLorentzVector operator + (const TLorentzVector& v1,
				   const TLorentzVector& v2)
{
  return TLorentzVector (v1.fX+v2.fX,
			 v1.fY+v2.fY,
			 v1.fZ+v2.fZ,
			 v1.fT+v2.fT);
}

inline TLorentzVector operator - (const TLorentzVector& v1,
				  const TLorentzVector& v2)
{
  return TLorentzVector (v1.fX-v2.fX,
			 v1.fY-v2.fY,
			 v1.fZ-v2.fZ,
			 v1.fT-v2.fT);
}

#endif

