//*CMZ :  2.24/03 16/04/2000  11.58.05  by  Rene Brun
//*CMZ :  2.23/12 31/01/2000  10.24.18  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  14.59.23  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.37.28  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayL
#define ROOT_TArrayL

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
   Long_t    *fArray;       //[fN] Array of fN longs

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
   void       Reset() {memset(fArray,0,fN*sizeof(Long_t));}
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
