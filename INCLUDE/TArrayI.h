//*CMZ :  2.00/09 24/06/98  09.27.28  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.19.37  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayI
#define ROOT_TArrayI

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
// TArrayI                                                              //
//                                                                      //
// Array of integers (32 bits per element).                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TArray
#include "TArray.h"
#endif


class TArrayI : public TArray {

public:
   Int_t    *fArray;       //Array of fN 32 bit integers

   TArrayI();
   TArrayI(Int_t n);
   TArrayI(Int_t n, Int_t *array);
   TArrayI(const TArrayI &array);
   TArrayI    &operator=(const TArrayI &rhs);
   virtual    ~TArrayI();

   void       Adopt(Int_t n, Int_t *array);
   void       AddAt(Int_t i, Int_t idx);
   Int_t      At(Int_t i);
   void       Copy(TArrayI &array) {array.Set(fN); for (Int_t i=0;i<fN;i++) array.fArray[i] = fArray[i];}
   Int_t     *GetArray() const { return fArray; }
   Stat_t     GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void       Reset() {for (Int_t i=0;i<fN;i++) fArray[i] = 0;}
   void       Set(Int_t n);
   void       Set(Int_t n, Int_t *array);
   Int_t     &operator[](Int_t i);

   ClassDef(TArrayI,1)  //Array of ints
};

inline Int_t TArrayI::At(Int_t i)
{
   if (!BoundsOk("TArrayI::At", i))
      i = 0;
   return fArray[i];
}

inline Int_t &TArrayI::operator[](Int_t i)
{
   if (!BoundsOk("TArrayI::operator[]", i))
      i = 0;
   return fArray[i];
}

#endif
