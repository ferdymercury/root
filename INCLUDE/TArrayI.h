//*CMZ :  2.23/12 31/01/2000  10.24.07  by  Rene Brun
//*CMZ :  2.00/09 24/06/98  09.27.28  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.19.37  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayI
#define ROOT_TArrayI

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
   Int_t    *fArray;       //[fN] Array of fN 32 bit integers

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
