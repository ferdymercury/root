//*CMZ :  2.23/10 13/12/99  09.25.33  by  Rene Brun
//*CMZ :  2.20/03 04/12/98  19.33.59  by  Rene Brun
//*CMZ :  2.20/02 04/12/98  12.15.01  by  Rene Brun
//*CMZ :  2.20/00 11/11/98  12.28.58  by  Rene Brun
//*CMZ :  2.00/00 21/01/98  08.47.30  by  Rene Brun
//*-- Author :    Fons Rademakers   15/12/95

#ifndef ROOT_TRandom
#define ROOT_TRandom

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
   virtual  Double_t Exp(Double_t tau);
   virtual  Double_t Gaus(Float_t mean=0, Float_t sigma=1);
   virtual  UInt_t   GetSeed() {return fSeed;}
   virtual  UInt_t   Integer(UInt_t imax);
   virtual  Double_t Landau(Float_t mean=0, Float_t sigma=1);
   virtual  Int_t    Poisson(Float_t mean);
   virtual  void     Rannor(Float_t &a, Float_t &b);
   virtual  void     SetSeed(UInt_t seed=65539);
   virtual  Float_t  Rndm(Int_t i=0);
   virtual  Double_t Uniform(Double_t x1=1);

   ClassDef(TRandom,1)  // Random number generators
};

R__EXTERN TRandom *gRandom;

#endif
