//*CMZ :  2.20/03 04/12/98  19.33.59  by  Rene Brun
//*CMZ :  2.20/02 04/12/98  12.15.01  by  Rene Brun
//*CMZ :  2.20/00 11/11/98  12.28.58  by  Rene Brun
//*CMZ :  2.00/00 21/01/98  08.47.30  by  Rene Brun
//*CMZ :  0.90/06 21/11/96  18.40.58  by  Rene Brun
//*-- Author :    Fons Rademakers   15/12/95

#ifndef ROOT_TRandom
#define ROOT_TRandom

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
// TRandom                                                              //
//                                                                      //
// Simple prototype random number generator class.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TRandom : public TNamed {

protected:
   UInt_t   fSeed;  //Random number generator seed

public:
   TRandom(UInt_t seed=65539);
   virtual ~TRandom();
   virtual  Int_t    Binomial(Int_t ntot, Float_t prob);
   virtual  Float_t  Gaus(Float_t mean=0, Float_t sigma=1);
   virtual  UInt_t   GetSeed() {return fSeed;}
   virtual  Float_t  Landau(Float_t mean=0, Float_t sigma=1);
   virtual  Int_t    Poisson(Float_t mean);
   virtual  void     Rannor(Float_t &a, Float_t &b);
   virtual  void     SetSeed(UInt_t seed=65539);
   virtual  Float_t  Rndm(Int_t i=0);

   ClassDef(TRandom,1)  // Random number generators
};

R__EXTERN TRandom *gRandom;

#endif
