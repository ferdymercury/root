//*CMZ :  2.20/03 05/12/98  17.06.54  by  Rene Brun
//*CMZ :  2.20/00 22/11/98  16.55.46  by  Rene Brun
//*CMZ :  2.00/07 15/05/98  16.47.13  by  Rene Brun
//*CMZ :  2.00/06 12/05/98  17.48.55  by  Fons Rademakers
//*CMZ :  2.00/01 14/03/98  05.56.51  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  17.49.59  by  Fons Rademakers
//*-- Author :    Fons Rademakers   29/07/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMath                                                                //
//                                                                      //
// Encapsulate math routines (i.e. provide a kind of namespace).        //
// For the time being avoid templates.                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TMath.h"
#include <math.h>

//const Double_t
//   TMath::Pi = 3.14159265358979323846,
//   TMath::E  = 2.7182818284590452354;


ClassImp(TMath)

//______________________________________________________________________________
#if (defined(sun) && !defined(R__I386) && !defined(__SunOS_5_6)) || \
    (defined(__OPTIMIZE__) && \
     (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 7)))
   extern "C" void sincos(Double_t, Double_t*, Double_t*);
#else
   inline void sincos(Double_t a, Double_t *sinp, Double_t *cosp)
      { *cosp = cos(a); *sinp = sin(a); }
#endif

//______________________________________________________________________________
#if defined(R__MAC) || defined(R__KCC)
Double_t hypot(Double_t x, Double_t y) {
   return sqrt(x*x+y*y);
}
#endif

//______________________________________________________________________________
Long_t TMath::Sqrt(Long_t x)
{
   return (Long_t) (sqrt((Double_t)x) + 0.5);
}

//______________________________________________________________________________
Long_t TMath::Hypot(Long_t x, Long_t y)     // return sqrt(px*px + py*py);
{
   return (Long_t) (hypot(x, y) + 0.5);
}

//______________________________________________________________________________
Double_t TMath::Hypot(Double_t x, Double_t y)
{
   return hypot(x, y);
}

//______________________________________________________________________________
Double_t TMath::ASinH(Double_t x)
{
#if defined(WIN32) || defined(R__KCC)
   return log(x+sqrt(x*x+1));
#else
   return asinh(x);
#endif
}

//______________________________________________________________________________
Double_t TMath::ACosH(Double_t x)
{
#if defined(WIN32) || defined(R__KCC)
   return log(x+sqrt(x*x-1));
#else
   return acosh(x);
#endif
}

//______________________________________________________________________________
Double_t TMath::ATanH(Double_t x)
{
#if defined(WIN32) || defined(R__KCC)
   return log((1+x)/(1-x))/2;
#else
   return atanh(x);
#endif
}

//______________________________________________________________________________
Double_t TMath::Ceil(Double_t x)
{
   return ceil(x);
}

//______________________________________________________________________________
Double_t TMath::Floor(Double_t x)
{
   return floor(x);
}

//______________________________________________________________________________
Double_t TMath::Log2(Double_t x)
{
   return log(x)/log(2.0);
}

//______________________________________________________________________________
Double_t TMath::Atan2(Long_t y, Long_t x)
{
   Double_t dd = (0.75 - (atan2(-(Double_t)y,(Double_t)x) / TMath::Pi() + 1.0)/2.0 ) * 360.0;
   while (dd < 0.0)
      dd += 360.0;
   return dd;
}

//______________________________________________________________________________
void TMath::Sincos(Double_t a, Double_t *sinp, Double_t *cosp)
{
   sincos(2 * TMath::Pi() * (90.0 - a) / 360.0, sinp, cosp);
   *sinp = -*sinp;
}

//______________________________________________________________________________
Long_t TMath::NextPrime(Long_t x)
{
   // Return next prime number after x.

   if (x <= 3)
      return 3;

   if (x % 2 == 0)
      x++;

   Long_t sqr = (Long_t) sqrt((Double_t)x) + 1;

   for (;;) {
      Long_t n;
      for (n = 3; (n <= sqr) && ((x % n) != 0); n += 2)
         ;
      if (n > sqr)
         return x;
      x += 2;
   }
}

//______________________________________________________________________________
Float_t *TMath::Cross(Float_t v1[3],Float_t v2[3],Float_t out[3])
{
   // Calculate the Cross Product of two vectors
   //         out = [v1 x v2]

    out[0] = v1[1] * v2[2] - v1[2] * v2[1];
    out[1] = v1[2] * v2[0] - v1[0] * v2[2];
    out[2] = v1[0] * v2[1] - v1[1] * v2[0];

    return out;
}

//______________________________________________________________________________
Double_t *TMath::Cross(Double_t v1[3],Double_t v2[3],Double_t out[3])
{
   // Calculate the Cross Product of two vectors
   //         out = [v1 x v2]

    out[0] = v1[1] * v2[2] - v1[2] * v2[1];
    out[1] = v1[2] * v2[0] - v1[0] * v2[2];
    out[2] = v1[0] * v2[1] - v1[1] * v2[0];
    return out;
}

//______________________________________________________________________________
Double_t TMath::Erf(Double_t x)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the error function erf(x).
//
//--- NvE 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  return (1-Erfc(x));
}

//______________________________________________________________________________
Double_t TMath::Erfc(Double_t x)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the complementary error function erfc(x).
//
// The algorithm is based on a Chebyshev fit as denoted in
// Numerical Recipes 2nd ed. on p. 214 (W.H.Press et al.).
//
// The fractional error is always less than 1.2e-7.
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////

  // The parameters of the Chebyshev fit
  const Double_t a1 = -1.26551223,   a2 = 1.00002368,
                 a3 =  0.37409196,   a4 = 0.09678418,
                 a5 = -0.18628806,   a6 = 0.27886807,
                 a7 = -1.13520398,   a8 = 1.48851587,
                 a9 = -0.82215223,  a10 = 0.17087277;

  Double_t v = 1; // The return value
  Double_t z = Abs(x);

  if (z <= 0) return v; // erfc(0)=1

  Double_t t = 1/(1+0.5*z);

  v = t*Exp((-z*z) +a1+t*(a2+t*(a3+t*(a4+t*(a5+t*(a6+t*(a7+t*(a8+t*(a9+t*a10)))))))));

  if (x < 0) v = 2-v; // erfc(-x)=2-erfc(x)

  return v;
}


//______________________________________________________________________________
Double_t TMath::Gamma(Double_t z)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of gamma(z) for all z>0.
//
// The algorithm is based on the article by C.Lanczos [1] as denoted in
// Numerical Recipes 2nd ed. on p. 207 (W.H.Press et al.).
//
// [1] C.Lanczos, SIAM Journal of Numerical Analysis B1 (1964), 86.
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  if (z<=0) return 0;

  Double_t v = LnGamma(z);
  return Exp(v);
}

//______________________________________________________________________________
Double_t TMath::Gamma(Double_t a,Double_t x)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the incomplete gamma function P(a,x)
//
// The algorithm is based on the formulas and code as denoted in
// Numerical Recipes 2nd ed. on p. 210-212 (W.H.Press et al.).
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  if (a <= 0 || x <= 0) return 0;

  if (x < (a+1)) return GamSer(a,x);
  else           return GamCf(a,x);
}

//______________________________________________________________________________
Double_t TMath::GamCf(Double_t a,Double_t x)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the incomplete gamma function P(a,x)
// via its continued fraction representation.
//
// The algorithm is based on the formulas and code as denoted in
// Numerical Recipes 2nd ed. on p. 210-212 (W.H.Press et al.).
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  Int_t itmax    = 100;      // Maximum number of iterations
  Double_t eps   = 3.e-7;    // Relative accuracy
  Double_t fpmin = 1.e-30;   // Smallest Double_t value allowed here

  if (a <= 0 || x <= 0) return 0;

  Double_t gln = LnGamma(a);
  Double_t b   = x+1-a;
  Double_t c   = 1/fpmin;
  Double_t d   = 1/b;
  Double_t h   = d;
  Double_t an,del;
  for (Int_t i=1; i<=itmax; i++) {
     an = Double_t(-i)*(Double_t(i)-a);
     b += 2;
     d  = an*d+b;
     if (Abs(d) < fpmin) d = fpmin;
     c = b+an/c;
     if (Abs(c) < fpmin) c = fpmin;
     d   = 1/d;
     del = d*c;
     h   = h*del;
     if (Abs(del-1) < eps) break;
//     if (i==itmax) cout << "*GamCf(a,x)* a too large or itmax too small" << endl;
  }
  Double_t v = Exp(-x+a*Log(x)-gln)*h;
  return (1-v);
}

//______________________________________________________________________________
Double_t TMath::GamSer(Double_t a,Double_t x)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the incomplete gamma function P(a,x)
// via its series representation.
//
// The algorithm is based on the formulas and code as denoted in
// Numerical Recipes 2nd ed. on p. 210-212 (W.H.Press et al.).
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  Int_t itmax  = 100;   // Maximum number of iterations
  Double_t eps = 3.e-7; // Relative accuracy

  if (a <= 0 || x <= 0) return 0;

  Double_t gln = LnGamma(a);
  Double_t ap  = a;
  Double_t sum = 1/a;
  Double_t del = sum;
  for (Int_t n=1; n<=itmax; n++) {
     ap  += 1;
     del  = del*x/ap;
     sum += del;
     if (TMath::Abs(del) < Abs(sum*eps)) break;
//     if (n==itmax) cout << "*GamSer(a,x)* a too large or itmax too small" << endl;
  }
  Double_t v = sum*Exp(-x+a*Log(x)-gln);
  return v;
}


//______________________________________________________________________________
Double_t TMath::Gaus(Double_t x, Double_t mean, Double_t sigma)
{
   // Calculate a gaussian function with mean and sigma

    if (sigma == 0) return 1.e30;
    Double_t arg = (x-mean)/sigma;
    return TMath::Exp(-0.5*arg*arg);
}

//______________________________________________________________________________
Double_t TMath::Landau(Double_t x, Double_t mean, Double_t sigma)
{
//  The LANDAU function with mean and sigma
//  This function has been adapted from the CERNLIB routine G110 denlan

   Double_t p1[5] = {0.4259894875,-0.1249762550, 0.03984243700, -0.006298287635,   0.001511162253};
   Double_t q1[5] = {1.0         ,-0.3388260629, 0.09594393323, -0.01608042283,    0.003778942063};

   Double_t p2[5] = {0.1788541609, 0.1173957403, 0.01488850518, -0.001394989411,   0.0001283617211};
   Double_t q2[5] = {1.0         , 0.7428795082, 0.3153932961,   0.06694219548,    0.008790609714};

   Double_t p3[5] = {0.1788544503, 0.09359161662,0.006325387654, 0.00006611667319,-0.000002031049101};
   Double_t q3[5] = {1.0         , 0.6097809921, 0.2560616665,   0.04746722384,    0.006957301675};

   Double_t p4[5] = {0.9874054407, 118.6723273,  849.2794360,   -743.7792444,      427.0262186};
   Double_t q4[5] = {1.0         , 106.8615961,  337.6496214,    2016.712389,      1597.063511};

   Double_t p5[5] = {1.003675074,  167.5702434,  4789.711289,    21217.86767,     -22324.94910};
   Double_t q5[5] = {1.0         , 156.9424537,  3745.310488,    9834.698876,      66924.28357};

   Double_t p6[5] = {1.000827619,  664.9143136,  62972.92665,    475554.6998,     -5743609.109};
   Double_t q6[5] = {1.0         , 651.4101098,  56974.73333,    165917.4725,     -2815759.939};

   Double_t a1[3] = {0.04166666667,-0.01996527778, 0.02709538966};

   Double_t a2[2] = {-1.845568670,-4.284640743};

   if (sigma <= 0) return 0;
   Double_t v = (x-mean)/sigma;
   Double_t u, ue, us, den;
   if (v < -5.5) {
      u   = TMath::Exp(v+1.0);
      ue  = TMath::Exp(-1/u);
      us  = TMath::Sqrt(u);
      den = 0.3989422803*(ue/us)*(1+(a1[0]+(a1[1]+a1[2]*u)*u)*u);
   } else if(v < -1) {
       u   = TMath::Exp(-v-1);
       den = TMath::Exp(-u)*TMath::Sqrt(u)*
             (p1[0]+(p1[1]+(p1[2]+(p1[3]+p1[4]*v)*v)*v)*v)/
             (q1[0]+(q1[1]+(q1[2]+(q1[3]+q1[4]*v)*v)*v)*v);
   } else if(v < 1) {
       den = (p2[0]+(p2[1]+(p2[2]+(p2[3]+p2[4]*v)*v)*v)*v)/
             (q2[0]+(q2[1]+(q2[2]+(q2[3]+q2[4]*v)*v)*v)*v);
   } else if(v < 5) {
       den = (p3[0]+(p3[1]+(p3[2]+(p3[3]+p3[4]*v)*v)*v)*v)/
             (q3[0]+(q3[1]+(q3[2]+(q3[3]+q3[4]*v)*v)*v)*v);
   } else if(v < 12) {
       u   = 1/v;
       den = u*u*(p4[0]+(p4[1]+(p4[2]+(p4[3]+p4[4]*u)*u)*u)*u)/
                 (q4[0]+(q4[1]+(q4[2]+(q4[3]+q4[4]*u)*u)*u)*u);
   } else if(v < 50) {
       u   = 1/v;
       den = u*u*(p5[0]+(p5[1]+(p5[2]+(p5[3]+p5[4]*u)*u)*u)*u)/
                 (q5[0]+(q5[1]+(q5[2]+(q5[3]+q5[4]*u)*u)*u)*u);
   } else if(v < 300) {
       u   = 1/v;
       den = u*u*(p6[0]+(p6[1]+(p6[2]+(p6[3]+p6[4]*u)*u)*u)*u)/
                 (q6[0]+(q6[1]+(q6[2]+(q6[3]+q6[4]*u)*u)*u)*u);
   } else {
       u   = 1/(v-v*TMath::Log(v)/(v+1));
       den = u*u*(1+(a2[0]+a2[1]*u)*u);
   }
   return den;
}

//______________________________________________________________________________
Double_t TMath::LnGamma(Double_t z)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of ln[gamma(z)] for all z>0.
//
// The algorithm is based on the article by C.Lanczos [1] as denoted in
// Numerical Recipes 2nd ed. on p. 207 (W.H.Press et al.).
//
// [1] C.Lanczos, SIAM Journal of Numerical Analysis B1 (1964), 86.
//
// The accuracy of the result is better than 2e-10.
//
//--- Nve 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  if (z<=0) return 0;

  // Coefficients for the series expansion
  Double_t c[7] = { 2.5066282746310005, 76.18009172947146, -86.50532032941677
                  ,24.01409824083091,  -1.231739572450155, 0.1208650973866179e-2
                  ,-0.5395239384953e-5};

  Double_t x   = z;
  Double_t y   = x;
  Double_t tmp = x+5.5;
  tmp = (x+0.5)*Log(tmp)-tmp;
  Double_t ser = 1.000000000190015;
  for (Int_t i=1; i<7; i++) {
     y   += 1;
     ser += c[i]/y;
  }
  Double_t v = tmp+Log(c[0]*ser/x);
  return v;
}


//______________________________________________________________________________
Float_t TMath::Normalize(Float_t v[3])
{
   // Normalize a vector v in place
   // Return:
   //    The norm of the original vector

    Float_t d = Sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    if (d != 0)
    {
      v[0] /= d;
      v[1] /= d;
      v[2] /= d;
    }
    return d;
}

//______________________________________________________________________________
Double_t TMath::Normalize(Double_t v[3])
{
   // Normalize a vector v in place
   //  Return:
   //    The norm of the original vector

    Double_t d = Sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    if (d != 0)
    {
      v[0] /= d;
      v[1] /= d;
      v[2] /= d;
    }
    return d;
}

//______________________________________________________________________________
Float_t *TMath::Normal2Plane(Float_t p1[3],Float_t p2[3],Float_t p3[3], Float_t normal[3])
{
   // Calculate a normal vector of a plane
   //
   //  Input:
   //     Float_t *p1,*p2,*p3  -  3 3D points belonged the plane to define it.
   //
   //  Return:
   //     Pointer to 3D normal vector (normalized)
   //

     Float_t v1[3], v2[3];

     v1[0] = p2[0] - p1[0];
     v1[1] = p2[1] - p1[1];
     v1[2] = p2[2] - p1[2];

     v2[0] = p3[0] - p1[0];
     v2[1] = p3[1] - p1[1];
     v2[2] = p3[2] - p1[2];

     NormCross(v1,v2,normal);
     return normal;
}

//______________________________________________________________________________
Double_t *TMath::Normal2Plane(Double_t p1[3],Double_t p2[3],Double_t p3[3], Double_t normal[3])
{
   // Calculate a normal vector of a plane
   //
   //  Input:
   //     Float_t *p1,*p2,*p3  -  3 3D points belonged the plane to define it.
   //
   //  Return:
   //     Pointer to 3D normal vector (normalized)
   //

     Double_t v1[3], v2[3];

     v1[0] = p2[0] - p1[0];
     v1[1] = p2[1] - p1[1];
     v1[2] = p2[2] - p1[2];

     v2[0] = p3[0] - p1[0];
     v2[1] = p3[1] - p1[1];
     v2[2] = p3[2] - p1[2];

     NormCross(v1,v2,normal);
     return normal;
}

//______________________________________________________________________________
Double_t TMath::Prob(Double_t chi2,Int_t ndf)
{
///////////////////////////////////////////////////////////////////////////////
// Computation of the probability for a certain Chi-squared (chi2)
// and number of degrees of freedom (ndf).
//
// Calculations are based on the incomplete gamma function P(a,x),
// where a=ndf/2 and x=chi2/2.
//
// P(a,x) represents the probability that the observed Chi-squared
// for a correct model should be less than the value chi2.
//
// The returned probability corresponds to 1-P(a,x),
// which denotes the probability that an observed Chi-squared exceeds
// the value chi2 by chance, even for a correct model.
//
//--- NvE 14-nov-1998 UU-SAP Utrecht
///////////////////////////////////////////////////////////////////////////////
  if (ndf <= 0) return 0; // Set CL to zero in case ndf<=0

  if (chi2 <= 0) {
     if (chi2 < 0) return 0;
     else          return 1;
  }

  if (ndf==1) {
     Double_t v = 1.-Erf(Sqrt(chi2)/Sqrt(2.));
     return v;
  }

  // Gaussian approximation for large ndf
  Double_t q = Sqrt(2*chi2)-Sqrt(Double_t(2*ndf-1));
  if (ndf > 30 && q > 0) {
     Double_t v = 0.5*(1-Erf(q/Sqrt(2.)));
     return v;
  }

 // Evaluate the incomplete gamma function
  return (1-Gamma(0.5*ndf,0.5*chi2));
}

//______________________________________________________________________________
Int_t TMath::BinarySearch(Int_t n, Short_t *array, Short_t value)
{
//*-*-*-*-*-*-*Binary search in an array of n values to locate value*-*-*-*-*-*-*
//*-*          ==================================================
//*-*  array is supposed  to be sorted prior to this call.
//*-*  If match is found, function returns position of element.
//*-*  If no match found, function gives nearest element smaller than value.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t nabove, nbelow, middle;
   nabove = n+1;
   nbelow = 0;
   while(nabove-nbelow > 1) {
      middle = (nabove+nbelow)/2;
      if (value == array[middle-1]) return middle-1;
      if (value  < array[middle-1]) nabove = middle;
      else                          nbelow = middle;
   }
   return nbelow-1;
}

//______________________________________________________________________________
Int_t TMath::BinarySearch(Int_t n, Int_t *array, Int_t value)
{
//*-*-*-*-*-*-*Binary search in an array of n values to locate value*-*-*-*-*-*-*
//*-*          ==================================================
//*-*  array is supposed  to be sorted prior to this call.
//*-*  If match is found, function returns position of element.
//*-*  If no match found, function gives nearest element smaller than value.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t nabove, nbelow, middle;
   nabove = n+1;
   nbelow = 0;
   while(nabove-nbelow > 1) {
      middle = (nabove+nbelow)/2;
      if (value == array[middle-1]) return middle-1;
      if (value  < array[middle-1]) nabove = middle;
      else                          nbelow = middle;
   }
   return nbelow-1;
}

//______________________________________________________________________________
Int_t TMath::BinarySearch(Int_t n, Float_t *array, Float_t value)
{
//*-*-*-*-*-*-*Binary search in an array of n values to locate value*-*-*-*-*-*-*
//*-*          ==================================================
//*-*  array is supposed  to be sorted prior to this call.
//*-*  If match is found, function returns position of element.
//*-*  If no match found, function gives nearest element smaller than value.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t nabove, nbelow, middle;
   nabove = n+1;
   nbelow = 0;
   while(nabove-nbelow > 1) {
      middle = (nabove+nbelow)/2;
      if (value == array[middle-1]) return middle-1;
      if (value  < array[middle-1]) nabove = middle;
      else                          nbelow = middle;
   }
   return nbelow-1;
}

//______________________________________________________________________________
Int_t TMath::BinarySearch(Int_t n, Double_t *array, Double_t value)
{
//*-*-*-*-*-*-*Binary search in an array of n values to locate value*-*-*-*-*-*-*
//*-*          ==================================================
//*-*  array is supposed  to be sorted prior to this call.
//*-*  If match is found, function returns position of element.
//*-*  If no match found, function gives nearest element smaller than value.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Int_t nabove, nbelow, middle;
   nabove = n+1;
   nbelow = 0;
   while(nabove-nbelow > 1) {
      middle = (nabove+nbelow)/2;
      if (value == array[middle-1]) return middle-1;
      if (value  < array[middle-1]) nabove = middle;
      else                          nbelow = middle;
   }
   return nbelow-1;
}
