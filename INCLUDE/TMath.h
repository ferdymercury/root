//*CMZ :  2.20/03 05/12/98  16.28.27  by  Rene Brun
//*CMZ :  2.20/01 02/12/98  16.22.47  by  Rene Brun
//*CMZ :  2.20/00 22/11/98  16.55.45  by  Rene Brun
//*CMZ :  2.00/01 14/03/98  05.58.08  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  17.52.06  by  Fons Rademakers
//*-- Author :    Fons Rademakers   29/07/95

#ifndef ROOT_TMath
#define ROOT_TMath

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
// Encapsulate math routines. For the time being avoid templates.       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TMath {

private:
   static Double_t GamCf(Double_t a,Double_t x);
   static Double_t GamSer(Double_t a,Double_t x);
   static Double_t LnGamma(Double_t z);

public:

   static Double_t Pi() { return 3.14159265358979323846; }
   static Double_t E()  { return 2.7182818284590452354; }

   // Trigo
   static Double_t Sin(Double_t);
   static Double_t Cos(Double_t);
   static Double_t Tan(Double_t);
   static Double_t SinH(Double_t);
   static Double_t CosH(Double_t);
   static Double_t TanH(Double_t);
   static Double_t ASin(Double_t);
   static Double_t ACos(Double_t);
   static Double_t ATan(Double_t);
   static Double_t ATan2(Double_t, Double_t);
   static Double_t ASinH(Double_t);
   static Double_t ACosH(Double_t);
   static Double_t ATanH(Double_t);
   static Double_t Hypot(Double_t x, Double_t y);
   static void     Sincos(Double_t a, Double_t *sin, Double_t *cos);

   // Misc
   static Double_t Sqrt(Double_t x);
   static Double_t Ceil(Double_t x);
   static Double_t Floor(Double_t x);
   static Double_t Exp(Double_t);
   static Double_t Power(Double_t x, Double_t y);
   static Double_t Log(Double_t x);
   static Double_t Log2(Double_t x);
   static Double_t Log10(Double_t x);
   static Int_t    Nint(Float_t x);
   static Int_t    Nint(Double_t x);

   // Some integer math
   static Long_t   NextPrime(Long_t x);   // least prime number greater than x
   static Long_t   Sqrt(Long_t x);
   static Double_t Atan2(Long_t x, Long_t y);
   static Long_t   Hypot(Long_t x, Long_t y);     // sqrt(px*px + py*py)

   // Abs
   static Short_t  Abs(Short_t d);
   static Int_t    Abs(Int_t d);
   static Long_t   Abs(Long_t d);
   static Float_t  Abs(Float_t d);
   static Double_t Abs(Double_t d);

   // Even/Odd
   static Bool_t Even(Long_t a);
   static Bool_t Odd(Long_t a);

   // Sign
   static Short_t  Sign(Short_t a, Short_t b);
   static Int_t    Sign(Int_t a, Int_t b);
   static Long_t   Sign(Long_t a, Long_t b);
   static Float_t  Sign(Float_t a, Float_t b);
   static Double_t Sign(Double_t a, Double_t b);

   // Min
   static Short_t Min(Short_t a, Short_t b);
   static UShort_t Min(UShort_t a, UShort_t b);
   static Int_t Min(Int_t a, Int_t b);
   static UInt_t Min(UInt_t a, UInt_t b);
   static Long_t Min(Long_t a, Long_t b);
   static ULong_t Min(ULong_t a, ULong_t b);
   static Float_t Min(Float_t a, Float_t b);
   static Double_t Min(Double_t a, Double_t b);

   // Max
   static Short_t Max(Short_t a, Short_t b);
   static UShort_t Max(UShort_t a, UShort_t b);
   static Int_t Max(Int_t a, Int_t b);
   static UInt_t Max(UInt_t a, UInt_t b);
   static Long_t Max(Long_t a, Long_t b);
   static ULong_t Max(ULong_t a, ULong_t b);
   static Float_t Max(Float_t a, Float_t b);
   static Double_t Max(Double_t a, Double_t b);

   // Range
   static Short_t Range(Short_t lb, Short_t ub, Short_t x);
   static Int_t Range(Int_t lb, Int_t ub, Int_t x);
   static Long_t Range(Long_t lb, Long_t ub, Long_t x);
   static ULong_t Range(ULong_t lb, ULong_t ub, ULong_t x);
   static Double_t Range(Double_t lb, Double_t ub, Double_t x);

   // Binary search
   static Int_t BinarySearch(Int_t n, Short_t *array, Short_t value);
   static Int_t BinarySearch(Int_t n, Int_t *array, Int_t value);
   static Int_t BinarySearch(Int_t n, Float_t *array, Float_t value);
   static Int_t BinarySearch(Int_t n, Double_t *array, Double_t value);

   // Advanced
   static Float_t *Cross(Float_t v1[3],Float_t v2[3],Float_t out[3]);     // Calculate the Cross Product of two vectors
   static Float_t  Normalize(Float_t v[3]);                               // normalize a vector
   static Float_t  NormCross(Float_t v1[3],Float_t v2[3],Float_t out[3]); // Calculate the Normalized Cross Product of two vectors
   static Float_t *Normal2Plane(Float_t v1[3],Float_t v2[3],Float_t v3[3], Float_t normal[3]); // Calcualte a normal vector of a plane

   static Double_t *Cross(Double_t v1[3],Double_t v2[3],Double_t out[3]);// Calculate the Cross Product of two vectors
   static Double_t Erf(Double_t x);
   static Double_t Erfc(Double_t x);
   static Double_t Gamma(Double_t z);
   static Double_t Gamma(Double_t a,Double_t x);
   static Double_t Gaus(Double_t x, Double_t mean=0, Double_t sigma=1);
   static Double_t Landau(Double_t x, Double_t mean=0, Double_t sigma=1);
   static Double_t Normalize(Double_t v[3]);                             // normalize a vector
   static Double_t NormCross(Double_t v1[3],Double_t v2[3],Double_t out[3]); // Calculate the Normalized Cross Product of two vectors
   static Double_t *Normal2Plane(Double_t v1[3],Double_t v2[3],Double_t v3[3], Double_t normal[3]); // Calcualte a normal vector of a plane
   static Double_t Prob(Double_t chi2,Int_t ndf);

   ClassDef(TMath,0)  //Interface to math routines
};

//---- Misc --------------------------------------------------------------------

inline Int_t TMath::Nint(Float_t x)
{
   int i = int(x + 0.5);
   if (x + 0.5 == Float_t(i) && i & 1) i--;
   return i;
}

inline Int_t TMath::Nint(Double_t x)
{
   int i = int(x + 0.5);
   if (x + 0.5 == Double_t(i) && i & 1) i--;
   return i;
}

//---- Even/odd ----------------------------------------------------------------

inline Bool_t TMath::Even(Long_t a)
   { return ! (a & 1); }

inline Bool_t TMath::Odd(Long_t a)
   { return (a & 1); }

//---- Abs ---------------------------------------------------------------------

inline Short_t TMath::Abs(Short_t d)
   { return (d > 0) ? d : -d; }

inline Int_t TMath::Abs(Int_t d)
   { return (d > 0) ? d : -d; }

inline Long_t TMath::Abs(Long_t d)
   { return (d > 0) ? d : -d; }

inline Float_t TMath::Abs(Float_t d)
   { return (d > 0) ? d : -d; }

inline Double_t TMath::Abs(Double_t d)
   { return (d > 0) ? d : -d; }

//---- Sign --------------------------------------------------------------------

inline Short_t TMath::Sign(Short_t a, Short_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Int_t TMath::Sign(Int_t a, Int_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Long_t TMath::Sign(Long_t a, Long_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Float_t TMath::Sign(Float_t a, Float_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Double_t TMath::Sign(Double_t a, Double_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

//---- Min ---------------------------------------------------------------------

inline Short_t TMath::Min(Short_t a, Short_t b)
   { return a <= b ? a : b; }

inline UShort_t TMath::Min(UShort_t a, UShort_t b)
   { return a <= b ? a : b; }

inline Int_t TMath::Min(Int_t a, Int_t b)
   { return a <= b ? a : b; }

inline UInt_t TMath::Min(UInt_t a, UInt_t b)
   { return a <= b ? a : b; }

inline Long_t TMath::Min(Long_t a, Long_t b)
   { return a <= b ? a : b; }

inline ULong_t TMath::Min(ULong_t a, ULong_t b)
   { return a <= b ? a : b; }

inline Float_t TMath::Min(Float_t a, Float_t b)
   { return a <= b ? a : b; }

inline Double_t TMath::Min(Double_t a, Double_t b)
   { return a <= b ? a : b; }

//---- Max ---------------------------------------------------------------------

inline Short_t TMath::Max(Short_t a, Short_t b)
   { return a >= b ? a : b; }

inline UShort_t TMath::Max(UShort_t a, UShort_t b)
   { return a >= b ? a : b; }

inline Int_t TMath::Max(Int_t a, Int_t b)
   { return a >= b ? a : b; }

inline UInt_t TMath::Max(UInt_t a, UInt_t b)
   { return a >= b ? a : b; }

inline Long_t TMath::Max(Long_t a, Long_t b)
   { return a >= b ? a : b; }

inline ULong_t TMath::Max(ULong_t a, ULong_t b)
   { return a >= b ? a : b; }

inline Float_t TMath::Max(Float_t a, Float_t b)
   { return a >= b ? a : b; }

inline Double_t TMath::Max(Double_t a, Double_t b)
   { return a >= b ? a : b; }

//---- Range -------------------------------------------------------------------

inline Short_t TMath::Range(Short_t lb, Short_t ub, Short_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Int_t TMath::Range(Int_t lb, Int_t ub, Int_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Long_t TMath::Range(Long_t lb, Long_t ub, Long_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline ULong_t TMath::Range(ULong_t lb, ULong_t ub, ULong_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Double_t TMath::Range(Double_t lb, Double_t ub, Double_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

//---- Trig and other functions ------------------------------------------------

#if defined(R__AIX) || defined(R__MAC)
// in AIX and MAC math functions are defined inline so we have to include them here
#   include <math.h>
#else
// don't want to include complete <math.h>
extern "C" {
   extern double sin(double);
   extern double cos(double);
   extern double tan(double);
   extern double sinh(double);
   extern double cosh(double);
   extern double tanh(double);
   extern double asin(double);
   extern double acos(double);
   extern double atan(double);
   extern double atan2(double, double);
   extern double sqrt(double);
   extern double exp(double);
   extern double pow(double, double);
   extern double log(double);
   extern double log10(double);
}
#endif

inline Double_t TMath::Sin(Double_t x)
   { return sin(x); }

inline Double_t TMath::Cos(Double_t x)
   { return cos(x); }

inline Double_t TMath::Tan(Double_t x)
   { return tan(x); }

inline Double_t TMath::SinH(Double_t x)
   { return sinh(x); }

inline Double_t TMath::CosH(Double_t x)
   { return cosh(x); }

inline Double_t TMath::TanH(Double_t x)
   { return tanh(x); }

inline Double_t TMath::ASin(Double_t x)
   { return asin(x); }

inline Double_t TMath::ACos(Double_t x)
   { return acos(x); }

inline Double_t TMath::ATan(Double_t x)
   { return atan(x); }

inline Double_t TMath::ATan2(Double_t y, Double_t x)
   { return x ? atan2(y, x) : Pi()/2; }

inline Double_t TMath::Sqrt(Double_t x)
   { return sqrt(x); }

inline Double_t TMath::Exp(Double_t x)
   { return exp(x); }

inline Double_t TMath::Power(Double_t x, Double_t y)
   { return pow(x, y); }

inline Double_t TMath::Log(Double_t x)
   { return log(x); }

inline Double_t TMath::Log10(Double_t x)
   { return log10(x); }

//-------- Advanced -------------

inline Float_t TMath::NormCross(Float_t v1[3],Float_t v2[3],Float_t out[3])
{
   // Calculate the Normalized Cross Product of two vectors
   return Normalize(Cross(v1,v2,out));
}

inline Double_t TMath::NormCross(Double_t v1[3],Double_t v2[3],Double_t out[3])
{
   // Calculate the Normalized Cross Product of two vectors
   return Normalize(Cross(v1,v2,out));
}

#endif
