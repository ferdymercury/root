//*CMZ :  2.00/09 23/06/98  14.59.23  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.37.28  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayL
#define ROOT_TArrayL

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TArrayL                                                              //
//                                                                      //
// Array of longs (32 or 64 bits per element).                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TArray
#include "TArray.h"
#endif


class TArrayL : public TArray {

public:
   Long_t    *fArray;       //Array of fN longs

   TArrayL();
   TArrayL(Int_t n);
   TArrayL(Int_t n, Long_t *array);
   TArrayL(const TArrayL &array);
   TArrayL    &operator=(const TArrayL &rhs);
   virtual    ~TArrayL();

   void       Adopt(Int_t n, Long_t *array);
   void       AddAt(Long_t c, Int_t i);
   Long_t     At(Int_t i);
   void       Copy(TArrayL &array) {array.Set(fN); for (Int_t i=0;i<fN;i++) array.fArray[i] = fArray[i];}
   Long_t    *GetArray() const { return fArray; }
   Stat_t     GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void       Reset() {for (Int_t i=0;i<fN;i++) fArray[i] = 0;}
   void       Set(Int_t n);
   void       Set(Int_t n, Long_t *array);
   Long_t    &operator[](Int_t i);

   ClassDef(TArrayL,1)  //Array of longs
};

inline Long_t TArrayL::At(Int_t i)
{
   if (!BoundsOk("TArrayL::At", i))
      i = 0;
   return fArray[i];
}

inline Long_t &TArrayL::operator[](Int_t i)
{
   if (!BoundsOk("TArrayL::operator[]", i))
      i = 0;
   return fArray[i];
}

#endif
