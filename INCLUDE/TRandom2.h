//*CMZ :  2.21/07 04/03/99  15.30.08  by  Rene Brun
//*-- Author :    Rene Brun   04/03/99

#ifndef ROOT_TRandom2
#define ROOT_TRandom2

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRandom2                                                             //
//                                                                      //
// random number generator class (periodicity > 10**14)                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TRandom
#include "TRandom.h"
#endif

class TRandom2 : public TRandom {

protected:
   Double_t   fSeed1;  //Random number generator seed 1
   Double_t   fSeed2;  //Random number generator seed 2

public:
   TRandom2(UInt_t seed=65539);
   virtual ~TRandom2();
   virtual  void     GetSeed2(UInt_t &seed1, UInt_t &seed2);
   virtual  Float_t  Rndm(Int_t i=0);
   virtual  void     SetSeed(UInt_t seed=0);
   virtual  void     SetSeed2(UInt_t seed1, UInt_t seed2);

   ClassDef(TRandom2,1)  //Random number generators with periodicity > 10**14
};

R__EXTERN TRandom *gRandom;

#endif
