//*CMZ :  2.23/12 31/01/2000  10.23.43  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  16.23.05  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayC
#define ROOT_TArrayC

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
// TArrayC                                                              //
//                                                                      //
// Array of chars or bytes (8 bits per element).                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TArray
#include "TArray.h"
#endif


class TArrayC : public TArray {

public:
   Char_t    *fArray;       //[fN] Array of fN chars

   TArrayC();
   TArrayC(Int_t n);
   TArrayC(Int_t n, Char_t *array);
   TArrayC(const TArrayC &array);
   TArrayC    &operator=(const TArrayC &rhs);
   virtual    ~TArrayC();

   void       Adopt(Int_t n, Char_t *array);
   void       AddAt(Char_t c, Int_t i);
   Char_t     At(Int_t i);
   void       Copy(TArrayC &array) {array.Set(fN); for (Int_t i=0;i<fN;i++) array.fArray[i] = fArray[i];}
   Char_t    *GetArray() const { return fArray; }
   Stat_t     GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void       Reset() {for (Int_t i=0;i<fN;i++) fArray[i] = 0;}
   void       Set(Int_t n);
   void       Set(Int_t n, Char_t *array);
   Char_t    &operator[](Int_t i);

   ClassDef(TArrayC,1)  //Array of chars
};

inline Char_t TArrayC::At(Int_t i)
{
   if (!BoundsOk("TArrayC::At", i))
      i = 0;
   return fArray[i];
}

inline Char_t &TArrayC::operator[](Int_t i)
{
   if (!BoundsOk("TArrayC::operator[]", i))
      i = 0;
   return fArray[i];
}

#endif
