//*CMZ :  2.21/06 15/02/99  09.42.59  by  Rene Brun
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
//  1994 P.Murat
//  define special V3 class for handling 3-vectors (to keep efficiency)
//  choose internal representation to be double
//  revision history:
//  -----------------
// *0001 Feb 12 1997 P.Murat: change `private' to `protected' for data members
//                             add deltaPhi(TVector3&) method
// *0002 Sep 01 1997 P.Murat: add ifdefs for CINT
// *0003 Sep 29 1997 P.Murat: fix misuse of the UNION
//------------------------------------------------------------------------------

#ifndef ROOT_TVector3
#define ROOT_TVector3

#ifndef ROOT_TVector2
#include "TVector2.h"
#endif

#ifndef ROOT_TMatrix
#include "TMatrix.h"
#endif

class TVector3 : public TObject {
//------------------------------------------------------------------------------
//  data members (components of the vector)
//------------------------------------------------------------------------------
protected:
					
  Double_t   fX;       // components of the vector
  Double_t   fY;
  Double_t   fZ;
//------------------------------------------------------------------------------
//  function members
//------------------------------------------------------------------------------
public:
                                        // ****** constructors and destructor
  TVector3();
  TVector3(Double_t x0, Double_t y0, Double_t z0);
  TVector3(float  x0, float  y0, float  z0);
  TVector3(Double_t *x0);
  TVector3(float  *x0);
  virtual ~TVector3();
                                        // data component access

  Double_t X  ()     const  { return fX;};
  Double_t Y  ()     const  { return fY;};
  Double_t Z  ()     const  { return fZ;};


  TVector3      Ort();

                                        // vector-like notation (1:3)

  Double_t operator () (Int_t i) const { return *(&fX+i-1); };

                                        // unary operators

  inline TVector3& operator +           (const TVector3& v);
  inline TVector3& operator -           (const TVector3& v);

                                        // overloaded binary operators
                                        // (should be defined as friends)

  friend TVector3       operator ^  (const TVector3&, const TVector3&);
  friend Int_t     operator == (const TVector3& u, const TVector3& v);
  friend TVector3       operator  + (const TVector3&, const TVector3&);
  friend TVector3       operator  - (const TVector3&, const TVector3&);
  friend Double_t  operator  * (const TVector3&, const TVector3&);
  friend TVector3       operator  * (const TVector3&, double);
  friend TVector3       operator  * (double, const TVector3&);
  friend TVector3       operator  * (const TMatrix&, const TVector3&);
  friend TVector3       operator  / (const TVector3&, double);

                                        // synonims (momentum and coordinate)
                                        // for TVector3 length

  Double_t Mod2 () const { return (fX*fX+fY*fY+fZ*fZ); };
  Double_t Mod  () const { return TMath::Sqrt(Mod2()); };

  Double_t Pmod () const { return Mod(); };
  Double_t Rmod () const { return Mod(); };
  Double_t P    () const { return Mod(); };
  Double_t R    () const { return Mod(); };

                                        // vector components and Pt

  Double_t Px   () const { return fX;};
  Double_t Py   () const { return fY;};
  Double_t Pz   () const { return fZ;};

  Double_t Pt2  () const {return fX*fX+fY*fY ;};
  Double_t Pt   () const {return TMath::Sqrt(Pt2()) ;};

                                        // phi and theta, phi is in [0,TWOPI]

  Double_t Phi  () const { return kPI+TMath::ATan2(-Py(),-Px()); };
  Double_t Theta() const { return TMath::ASin(Pz()/Pmod()); };

				        // delta(phi) between 2 vectors, defined
					// in [-PI,PI)

  Double_t DeltaPhi(TVector3& v) const { return phi_mpi_pi(Phi()-v.Phi()); }

                                        // pseudorapidity
  Double_t  Eta();
                                        // distance in eta-phi between two
                                        // 3-vectors take into account that phi
                                        // is discontigous: 0 == TWOPI
  Double_t DrEtaPhi(TVector3& v);
                                        // 2D vector in (eta-phi) space
  TVector2  EtaPhiVector();
                                        // different setters

  void Set (Double_t x0, Double_t y0, Double_t z0);
  void Set (float  x0, float  y0, float  z0);
  void Set (Double_t v0[]);
  void Set (float  v0[]);
                                        // different getters

  void Get (double& x0, double& y0, double& z0);
  void Get (float&  x0, float&  y0, float&  z0);
  void Get (Double_t *v0);
  void Get (float  *v0);
                                        // sinonyms for XY 2-vector's

  TVector2    Xy ()  { return TVector2(fX,fY); };
  TVector2    Pxy()  { return TVector2(fX,fY); };

                                        // part of *this, normal to `v'
  TVector3    Normal(TVector3& v);
			
  ClassDef(TVector3,1)
};

//------------------------------------------------------------------------------
//  ****** TVector3 class inline functions
//------------------------------------------------------------------------------

                                        // unary operators

inline TVector3&  TVector3::operator + (const TVector3& v) {
  fX += v.fX; fY += v.fY; fZ += v.fZ;
  return *this;
}

inline TVector3&  TVector3::operator - (const TVector3& v) {
  fX -= v.fX; fY -= v.fY; fZ -= v.fZ;
  return *this;
}
                                        // binary operators

inline TVector3  operator + (const TVector3& v1, const TVector3& v2) {
  return TVector3 (v1.fX+v2.fX, v1.fY+v2.fY, v1.fZ+v2.fZ);
}

inline TVector3  operator - (const TVector3& v1, const TVector3& v2) {
  return TVector3 (v1.fX-v2.fX, v1.fY-v2.fY, v1.fZ-v2.fZ);
}


inline TVector3  operator ^ (const TVector3& v1, const TVector3& v2) {
  return TVector3 ( v1.fY*v2.fZ-v1.fZ*v2.fY,
	       v1.fZ*v2.fX-v1.fX*v2.fZ,
	       v1.fX*v2.fY-v1.fY*v2.fX );
}

inline Int_t operator == (const TVector3& u, const TVector3& v) {
  if ((v.fX==u.fX)&&(v.fY==u.fY)&&(v.fZ==u.fZ)) return 1;
  else return 0;
}

inline TVector3  operator / (const TVector3& v, Double_t a) {
  return TVector3 (v.fX/a, v.fY/a, v.fZ/a);
}

inline TVector3  operator * (const TVector3& v, Double_t a) {
  return TVector3 (v.fX*a, v.fY*a, v.fZ*a);
}

inline TVector3  operator * (Double_t a, const TVector3& v) {
  return TVector3 (v.fX*a, v.fY*a, v.fZ*a);
}

inline Double_t  operator * (const TVector3& v1, const TVector3& v2) {
  return v1.fX*v2.fX+v1.fY*v2.fY+v1.fZ*v2.fZ;
}
				        // TMatrix here is supposed to be a 3x3
					// matrix (no checks though!)

inline TVector3  operator * (const TMatrix& m, const TVector3& v) {
  TVector3 u;

  u.fX = m(0,0)*v.fX+m(0,1)*v.fY+m(0,2)*v.fZ;
  u.fY = m(1,0)*v.fX+m(1,1)*v.fY+m(1,2)*v.fZ;
  u.fZ = m(2,0)*v.fX+m(2,1)*v.fY+m(2,2)*v.fZ;

  return u;
}

inline  TVector3   TVector3::Ort()       { return *this/Mod(); };


//------------------------------------------------------------------------------
//  different setters and getters
//------------------------------------------------------------------------------

inline void TVector3::Set (Double_t x0, Double_t y0, Double_t z0) {
  fX=x0; fY=y0; fZ=z0;
}

inline void TVector3::Set (float  x0, float  y0, float  z0) {
  fX=x0; fY=y0; fZ=z0;
}

inline void TVector3::Set (Double_t *v0) {
  fX=v0[0]; fY=v0[1]; fZ=v0[2];
}

inline void TVector3::Set (float  *v0) {
  fX=v0[0]; fY=v0[1]; fZ=v0[2];
}

inline void TVector3::Get (double& x0, double& y0, double& z0) {
  x0 = fX; y0 = fY; z0 = fZ;
}

inline void TVector3::Get (float&  x0, float&  y0, float&  z0) {
  x0 = fX; y0 = fY; z0 = fZ;
}

inline void TVector3::Get (Double_t *v0) {
  v0[0] = fX ; v0[1] = fY ; v0[2] = fZ ;
}

inline void TVector3::Get (float *v0) {
  v0[0] = fX ; v0[1] = fY ; v0[2] = fZ ;
}


inline TVector3 TVector3::Normal(TVector3& v) {
  TVector3 nv = v.Ort();
  return ::operator-(*this, (nv*(*this*nv)));
}

                                        // pseudorapidity
                                        // process pt() = 0 case separately
inline Double_t TVector3::Eta() {
  if (Pt() > 1.e-4) return 0.5*TMath::Log((P()+Pz())/(P()-Pz()));
  else              return 1.e30;
}
                                        // 2D vector in (eta-phi) space
inline TVector2  TVector3::EtaPhiVector() {
  return TVector2 (Eta(),Phi());
}
                                        // distance in eta-phi between two
                                        // 3-vectors: take into account that
                                        // phi is discontignous and 0 = TWOPI
inline Double_t TVector3::DrEtaPhi(TVector3& v) {

  Double_t deta = Eta()-v.Eta();
                                        // put dphi back into [-PI,PI] interval

  Double_t dphi = phi_mpi_pi(Phi()-v.Phi());

  return TMath::Sqrt (deta*deta+dphi*dphi);
}

#endif
