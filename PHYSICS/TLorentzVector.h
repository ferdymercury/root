//*CMZ :  2.22/09 12/07/99  18.43.37  by  Rene Brun
//*CMZ :  2.22/07 02/07/99  08.22.55  by  Rene Brun
//*CMZ :  2.22/06 23/06/99  08.27.58  by  Rene Brun
//*CMZ :  2.22/02 26/05/99  09.30.46  by  Rene Brun
//*CMZ :  2.22/00 29/03/99  05.57.14  by  Rene Brun
//*CMZ :  2.21/06 15/02/99  09.36.40  by  Rene Brun
//*-- Author :    Pasha Murat, Peter Malzacher  12/02/99

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
// *0001 Mar 29 1999 P.Murat: add forgotten scalar product (dot operator)
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
#ifndef ROOT_TRotation
#include "TRotation.h"
#endif


class TLorentzRotation;


class TLorentzVector : public TObject {

public:

  enum { kX=0, kY=1, kZ=2, kT=3, kNUM_COORDINATES=4, kSIZE=kNUM_COORDINATES };
  // Safe indexing of the coordinates when using with matrices, arrays, etc.



  TLorentzVector(Double_t x = 0.0, Double_t y = 0.0,
                          Double_t z = 0.0, Double_t t = 0.0);
  // Constructor giving the components x, y, z, t.

  TLorentzVector(Double_t * carray);
  TLorentzVector(Float_t * carray);
  // Constructor from an array, not checked!

  TLorentzVector(const TVector3 & vector3, Double_t t);
  // Constructor giving a 3-Vector and a time component.

  TLorentzVector(const TLorentzVector & lorentzvector);
  // Copy constructor.

  // inline operator TVector3 () const;
  // inline operator TVector3 & ();
  // Conversion (cast) to TVector3.

  inline Double_t X() const;
  inline Double_t Y() const;
  inline Double_t Z() const;
  inline Double_t T() const;
  // Get position and time.

  inline void SetX(Double_t a);
  inline void SetY(Double_t a);
  inline void SetZ(Double_t a);
  inline void SetT(Double_t a);
  // Set position and time.

  inline Double_t Px() const;
  inline Double_t Py() const;
  inline Double_t Pz() const;
  inline Double_t E() const;
  inline Double_t Energy() const;
  // Get momentum and energy.

  inline void SetPx(Double_t a);
  inline void SetPy(Double_t a);
  inline void SetPz(Double_t a);
  inline void SetE(Double_t a);
  // Set momentum and energy.

  inline TVector3 Vect() const ;
  // Get spatial component.

  inline void SetVect(const TVector3 & vect3);
  // Set spatial component.

  inline Double_t Theta() const;
  inline Double_t CosTheta() const;
  inline Double_t Phi() const;
  inline Double_t Rho() const;
  // Get spatial vector components in spherical coordinate system.

  inline void SetTheta(Double_t theta);
  inline void SetPhi(Double_t phi);
  inline void SetRho(Double_t rho);
  // Set spatial vector components in spherical coordinate system.

  inline void SetPxPyPzE(Double_t px, Double_t py, Double_t pz, Double_t e);
  inline void SetXYZT(Double_t  x, Double_t  y, Double_t  z, Double_t t);
  inline void SetXYZM(Double_t  x, Double_t  y, Double_t  z, Double_t m);
  inline void SetPtEtaPhiM(Double_t pt, Double_t eta, Double_t phi, Double_t m);
  inline void SetPtEtaPhiE(Double_t pt, Double_t eta, Double_t phi, Double_t e);
  // Setters to provide the functionality (but a more meanigful name) of
  // the previous version eg SetV4... PsetV4...

  Double_t operator () (int i) const;
  inline Double_t operator [] (int i) const;
  // Get components by index.

  Double_t & operator () (int i);
  inline Double_t & operator [] (int i);
  // Set components by index.

  inline TLorentzVector & operator = (const TLorentzVector &);
  // Assignment.

  inline TLorentzVector   operator +  (const TLorentzVector &) const;
  inline TLorentzVector & operator += (const TLorentzVector &);
  // Additions.

  inline TLorentzVector   operator -  (const TLorentzVector &) const;
  inline TLorentzVector & operator -= (const TLorentzVector &);
  // Subtractions.

  inline TLorentzVector operator - () const;
  // Unary minus.

  inline TLorentzVector operator * (Double_t a);
  inline TLorentzVector & operator *= (Double_t a);
  // Scaling with real numbers.

  inline Bool_t operator == (const TLorentzVector &) const;
  inline Bool_t operator != (const TLorentzVector &) const;
  // Comparisons.

  inline Double_t Perp2() const;
  // Transverse component of the spatial vector squared.

  inline Double_t Pt() const;
  inline Double_t Perp() const;
  // Transverse component of the spatial vector (R in cylindrical system).

  inline void SetPerp(Double_t);
  // Set the transverse component of the spatial vector.

  inline Double_t Perp2(const TVector3 & v) const;
  // Transverse component of the spatial vector w.r.t. given axis squared.

  inline Double_t Pt(const TVector3 & v) const;
  inline Double_t Perp(const TVector3 & v) const;
  // Transverse component of the spatial vector w.r.t. given axis.

  inline Double_t DeltaPhi(const TLorentzVector &) const;
  inline Double_t DeltaR(const TLorentzVector &) const;
  inline Double_t DrEtaPhi(const TLorentzVector &) const;
  inline TVector2 EtaPhiVector();

  inline Double_t Angle(const TVector3 & v) const;
  // Angle wrt. another vector.

  inline Double_t Mag2() const;
  inline Double_t M2() const;
  // Invariant mass squared.

  inline Double_t Mag() const;
  inline Double_t M() const;
  // Invariant mass. If mag2() is negative then -sqrt(-mag2()) is returned.

  inline Double_t Mt2() const;
  // Transverse mass squared.

  inline Double_t Mt() const;
  // Transverse mass.

  inline Double_t Beta() const;
  inline Double_t Gamma() const;

  inline Double_t Dot(const TLorentzVector &) const;
  inline Double_t operator * (const TLorentzVector &) const;
  // Scalar product.

  inline void SetVectMag(const TVector3 & spatial, Double_t magnitude);
  inline void SetVectM(const TVector3 & spatial, Double_t mass);
  // Copy spatial coordinates, and set energy = sqrt(mass^2 + spatial^2)

  inline Double_t Plus() const;
  inline Double_t Minus() const;
  // Returns the positive/negative light-cone component t +/- z.

  inline TVector3 BoostVector() const ;
  // Returns the spatial components divided by the time component.

  void Boost(Double_t, Double_t, Double_t);
  inline void Boost(const TVector3 &);
  // Lorentz boost.

  Double_t Rapidity() const;
  // Returns the rapidity, i.e. 0.5*ln((E+pz)/(E-pz))

  inline Double_t Eta() const;
  inline Double_t PseudoRapidity() const;
  // Returns the pseudo-rapidity, i.e. -ln(tan(theta/2))

  void RotateX(Double_t angle);
  // Rotate the spatial component around the x-axis.

  void RotateY(Double_t angle);
  // Rotate the spatial component around the y-axis.

  void RotateZ(Double_t angle);
  // Rotate the spatial component around the z-axis.

  void RotateUz(TVector3 & newUzVector);
  // Rotates the reference frame from Uz to newUz (unit vector).

  inline void Rotate(Double_t, const TVector3 &);
  // Rotate the spatial component around specified axis.

  inline TLorentzVector & operator *= (const TRotation &);
  inline TLorentzVector & Transform(const TRotation &);
  // Transformation with HepRotation.

  TLorentzVector & operator *= (const TLorentzRotation &);
  TLorentzVector & Transform(const TLorentzRotation &);
  // Transformation with HepLorenzRotation.

private:

  Double_t fX;  // x or px
  Double_t fY;  // y or py
  Double_t fZ;  // z or pz
  Double_t fE;  // time or energy of (x,y,z,t) or (px,py,pz,e)

  ClassDef(TLorentzVector,1) // A four vector with (-,-,-,+) metric

};


//inline TLorentzVector operator * (const TLorentzVector &, Double_t a);
// moved to TLorentzVector::operator * (Double_t a)
inline TLorentzVector operator * (Double_t a, const TLorentzVector &);
// Scaling LorentzVector with a real number


inline Double_t TLorentzVector::X() const { return fX; }
inline Double_t TLorentzVector::Y() const { return fY; }
inline Double_t TLorentzVector::Z() const { return fZ; }
inline Double_t TLorentzVector::T() const { return fE; }

// inline TLorentzVector::operator TVector3 () { return TVector3(fX,fY,fZ); }

inline void TLorentzVector::SetX(Double_t a) { fX = a; }
inline void TLorentzVector::SetY(Double_t a) { fY = a; }
inline void TLorentzVector::SetZ(Double_t a) { fZ = a; }
inline void TLorentzVector::SetT(Double_t a) { fE = a; }

inline Double_t TLorentzVector::Px() const { return fX; }
inline Double_t TLorentzVector::Py() const { return fY; }
inline Double_t TLorentzVector::Pz() const { return fZ; }
inline Double_t TLorentzVector::E()  const { return fE; }
inline Double_t TLorentzVector::Energy()  const { return fE; }

inline void TLorentzVector::SetPx(Double_t a) { SetX(a); }
inline void TLorentzVector::SetPy(Double_t a) { SetY(a); }
inline void TLorentzVector::SetPz(Double_t a) { SetZ(a); }
inline void TLorentzVector::SetE(Double_t a)  { SetT(a); }

inline TVector3 TLorentzVector::Vect() const { return TVector3(X(), Y(),Z()); }

inline void TLorentzVector::SetVect(const TVector3 &p) {
  SetX(p.X());
  SetY(p.Y());
  SetZ(p.Z());
}

inline Double_t TLorentzVector::Phi() const {
  return fX == 0.0 && fY == 0.0 ? 0.0 : TMath::ATan2(fY,fX);
}

inline Double_t TLorentzVector::Theta() const {
  return fX == 0.0 && fY == 0.0 && fZ == 0.0 ? 0.0 : TMath::ATan2(Perp(),fZ);
}

inline Double_t TLorentzVector::CosTheta() const {
  Double_t ptot = Mag();
  return ptot == 0.0 ? 1.0 : fZ/ptot;
}


inline Double_t TLorentzVector::Rho() const {
  return TMath::Sqrt(fX*fX+fY*fY+fZ*fZ);
}

inline void TLorentzVector::SetTheta(Double_t th) {
  Double_t ma   = Rho();
  Double_t ph   = Phi();
  SetX(ma*TMath::Sin(th)*TMath::Cos(ph));
  SetY(ma*TMath::Sin(th)*TMath::Sin(ph));
  SetZ(ma*TMath::Cos(th));
}

inline void TLorentzVector::SetPhi(Double_t phi) {
  Double_t xy   = Perp();
  SetX(xy*TMath::Cos(phi));
  SetY(xy*TMath::Sin(phi));
}

inline void TLorentzVector::SetRho(Double_t rho) {
  Double_t factor = Rho();
  if (factor == 0) {
    Warning("SetRho","zero vector can't be stretched");
  }else{
    factor = rho/factor;
    SetX(fX*factor);
    SetY(fY*factor);
    SetZ(fZ*factor);
  }
}

inline void TLorentzVector::SetXYZT(Double_t  x, Double_t  y, Double_t  z, Double_t t) {
   SetX(x);
   SetY(y);
   SetZ(z);
   SetT(t);
}

inline void TLorentzVector::SetPxPyPzE(Double_t px, Double_t py, Double_t pz, Double_t e) {
   SetXYZT(px, py, pz, e);
}

inline void TLorentzVector::SetXYZM(Double_t  x, Double_t  y, Double_t  z, Double_t m) {
   SetXYZT( x, y, z, TMath::Sqrt(x*x+y*y+z*z+m*m) );
}

inline void TLorentzVector::SetPtEtaPhiM(Double_t pt, Double_t eta, Double_t phi, Double_t m) {
  pt = TMath::Abs(pt);
  SetPxPyPzE(pt*TMath::Cos(phi), pt*TMath::Sin(phi), pt/TMath::Tan(2.0*TMath::ATan(TMath::Exp(-eta))), m);
}
inline void TLorentzVector::SetPtEtaPhiE(Double_t pt, Double_t eta, Double_t phi, Double_t e) {
  SetPtEtaPhiM(pt, eta, phi, e);
}

Double_t & TLorentzVector::operator [] (int i)       { return (*this)(i); }
Double_t   TLorentzVector::operator [] (int i) const { return (*this)(i); }

inline TLorentzVector &
TLorentzVector::operator = (const TLorentzVector & q) {
  SetX(q.X());
  SetY(q.Y());
  SetZ(q.Z());
  SetT(q.T());
  return *this;
}

inline TLorentzVector
TLorentzVector::operator + (const TLorentzVector & q) const {
  return TLorentzVector(X()+q.X(), Y()+q.Y(), Z()+q.Z(), T()+q.T());
}

inline TLorentzVector &
TLorentzVector::operator += (const TLorentzVector & q) {
  fX += q.X();
  fY += q.Y();
  fZ += q.Z();
  fE += q.E();
  return *this;
}

inline TLorentzVector
TLorentzVector::operator - (const TLorentzVector & q) const {
  return TLorentzVector(fX-q.X(), fY-q.Y(), fZ-q.Z(), fE-q.E());
}

inline TLorentzVector &
TLorentzVector::operator -= (const TLorentzVector & q) {
  fX -= q.X();
  fY -= q.Y();
  fZ -= q.Z();
  fE -= q.E();
  return *this;
}

inline TLorentzVector TLorentzVector::operator - () const {
  return TLorentzVector(-X(), -Y(), -Z(), -T());
}

inline TLorentzVector& TLorentzVector::operator *= (Double_t a) {
  fX *= a;
  fY *= a;
  fZ *= a;
  fE *= a;
  return *this;
}

inline TLorentzVector TLorentzVector::operator * (Double_t a) {
  return TLorentzVector(a*X(), a*Y(), a*Z(), a*T());
}

inline Bool_t
TLorentzVector::operator == (const TLorentzVector & q) const {
  return (X() == q.X() &&
          Y() == q.Y() &&
          Z() == q.Z() &&
          T() == q.T());
}

inline Bool_t
TLorentzVector::operator != (const TLorentzVector & q) const {
  return (X() != q.X() ||
          Y() != q.Y() ||
          Z() != q.Z() ||
          T() != q.T());
}

inline Double_t TLorentzVector::Perp2() const  { return fX*fX + fY*fY; }

inline Double_t TLorentzVector::Perp()  const  { return TMath::Sqrt(Perp2()); }

inline Double_t TLorentzVector::Pt() const { return Perp(); }

inline void TLorentzVector::SetPerp(Double_t r) {
  Double_t p = Perp();
  if (p != 0.0) {
    fX *= r/p;
    fY *= r/p;
  }
}

inline Double_t TLorentzVector::Perp2(const TVector3 &v) const {
  return Vect().Perp2(v);
}

inline Double_t TLorentzVector::Perp(const TVector3 &v) const {
  return TMath::Sqrt(Perp2(v));
}

inline Double_t TLorentzVector::Pt(const TVector3 &v) const {
  return Perp(v);
}

inline Double_t TLorentzVector::DeltaPhi(const TLorentzVector & v) const {
  return phi_mpi_pi(Phi()-v.Phi());
}

inline Double_t TLorentzVector::Eta() const {
  return PseudoRapidity();
}
inline Double_t TLorentzVector::DeltaR(const TLorentzVector & v) const {
  Double_t deta = Eta()-v.Eta();
  Double_t dphi = phi_mpi_pi(Phi()-v.Phi());
  return TMath::Sqrt( deta*deta+dphi*dphi );
}

inline Double_t TLorentzVector::DrEtaPhi(const TLorentzVector & v) const{
  return DeltaR(v);
}

inline TVector2 TLorentzVector::EtaPhiVector() {
  return TVector2 (Eta(),Phi());
}


inline Double_t TLorentzVector::Angle(const TVector3 &v) const {
  return Vect().Angle(v);
}

inline Double_t TLorentzVector::Mag2() const {
  return T()*T() - Vect().Mag2();
}

inline Double_t TLorentzVector::Mag() const {
  Double_t mm = Mag2();
  return mm < 0.0 ? -TMath::Sqrt(-mm) : TMath::Sqrt(mm);
}

inline Double_t TLorentzVector::M2() const { return Mag2(); }
inline Double_t TLorentzVector::M() const { return Mag(); }

inline Double_t TLorentzVector::Mt2() const {
  return E()*E() - Z()*Z();
}

inline Double_t TLorentzVector::Mt() const {
  Double_t mm = Mt2();
  return mm < 0.0 ? -TMath::Sqrt(-mm) : TMath::Sqrt(mm);
}

inline Double_t TLorentzVector::Beta() const {
  return TMath::Sqrt( fX*fX + fY*fY + fZ*fZ )/ fE;
}

inline Double_t TLorentzVector::Gamma() const {
  Double_t b = Beta();
  return 1.0/TMath::Sqrt(1- b*b);
}

inline void
TLorentzVector::SetVectMag(const TVector3 & spatial, Double_t magnitude) {
  SetVect(spatial);
  SetT(TMath::Sqrt(magnitude * magnitude + spatial * spatial));
}

inline void
TLorentzVector::SetVectM(const TVector3 & spatial, Double_t mass) {
  SetVectMag(spatial, mass);
}

inline Double_t TLorentzVector::Dot(const TLorentzVector & q) const {
  return T()*q.T() - Z()*q.Z() - Y()*q.Y() - X()*q.X();
}

inline Double_t
TLorentzVector::operator * (const TLorentzVector & q) const {
  return Dot(q);
}

inline Double_t TLorentzVector::Plus() const {
  return T() + Z();
}

inline Double_t TLorentzVector::Minus() const {
  return T() - Z();
}

inline TVector3 TLorentzVector::BoostVector() const {
  return TVector3(X()/T(), Y()/T(), Z()/T());
}

inline void TLorentzVector::Boost(const TVector3 & b) {
  Boost(b.X(), b.Y(), b.Z());
}

inline Double_t TLorentzVector::PseudoRapidity() const {
  return Vect().PseudoRapidity();
}


inline void TLorentzVector::Rotate(Double_t a, const TVector3 &v) {
  TVector3 p( Vect() );
  p.Rotate(a,v);
  SetVect( p );
}

inline TLorentzVector &
TLorentzVector::operator *= (const TRotation & m) {
  SetVect( Vect() *= m );
  return *this;
}

inline TLorentzVector &
TLorentzVector::Transform(const TRotation & m) {
  SetVect( Vect().Transform(m) );
  return *this;
}

inline TLorentzVector operator * (Double_t a, const TLorentzVector & p) {
  return TLorentzVector(a*p.X(), a*p.Y(), a*p.Z(), a*p.T());
}


#endif
