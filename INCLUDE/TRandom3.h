//*CMZ :  2.23/01 31/08/99  09.12.19  by  Rene Brun
//*-- Author :    Peter Malzacher   31/08/99

#ifndef ROOT_TRandom3
#define ROOT_TRandom3

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
// TRandom3                                                             //
//                                                                      //
// random number generator class: Mersenne Twistor                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TRandom
#include "TRandom.h"
#endif

class TRandom3 : public TRandom {

private:
   UInt_t   fMt[624];
   Int_t    fCount624;

public:
   TRandom3(UInt_t seed=65539);
   virtual ~TRandom3();
   virtual  Float_t  Rndm(Int_t i=0);
   virtual  void     SetSeed(UInt_t seed=0);

   ClassDef(TRandom3,1)  //Random number generator: Mersenne Twistor
};

R__EXTERN TRandom *gRandom;

#endif
