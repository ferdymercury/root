//*CMZ :  2.00/09 23/06/98  14.58.30  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.37.37  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayF
#define ROOT_TArrayF

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
// TArrayF                                                              //
//                                                                      //
// Array of floats (32 bits per element).                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TArray
#include "TArray.h"
#endif


class TArrayF : public TArray {

public:
   Float_t    *fArray;       //Array of fN floats

   TArrayF();
   TArrayF(Int_t n);
   TArrayF(Int_t n, Float_t *array);
   TArrayF(const TArrayF &array);
   TArrayF    &operator=(const TArrayF &rhs);
   virtual    ~TArrayF();

   void       Adopt(Int_t n, Float_t *array);
   void       AddAt(Float_t c, Int_t i);
   Float_t    At(Int_t i);
   void       Copy(TArrayF &array) {array.Set(fN); for (Int_t i=0;i<fN;i++) array.fArray[i] = fArray[i];}
   Float_t   *GetArray() const { return fArray; }
   Stat_t     GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void       Reset() {for (Int_t i=0;i<fN;i++) fArray[i] = 0;}
   void       Set(Int_t n);
   void       Set(Int_t n, Float_t *array);
   Float_t   &operator[](Int_t i);

   ClassDef(TArrayF,1)  //Array of floats
};

inline Float_t TArrayF::At(Int_t i)
{
   if (!BoundsOk("TArrayF::At", i))
      i = 0;
   return fArray[i];
}

inline Float_t &TArrayF::operator[](Int_t i)
{
   if (!BoundsOk("TArrayF::operator[]", i))
      i = 0;
   return fArray[i];
}

#endif
