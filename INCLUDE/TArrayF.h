//*CMZ :  2.24/03 16/04/2000  11.58.25  by  Rene Brun
//*CMZ :  2.23/12 31/01/2000  10.23.31  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  14.58.30  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.37.37  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayF
#define ROOT_TArrayF

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
   Float_t    *fArray;       //[fN] Array of fN floats

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
   void       Reset()  {memset(fArray,0,fN*sizeof(Float_t));}
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
