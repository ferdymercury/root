//*CMZ :  2.23/12 31/01/2000  10.24.39  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  14.59.08  by  Rene Brun
//*CMZ :  1.03/06 24/10/97  15.34.00  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

#ifndef ROOT_TArrayD
#define ROOT_TArrayD

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
// TArrayD                                                              //
//                                                                      //
// Array of doubles (64 bits per element).                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TArray
#include "TArray.h"
#endif


class TArrayD : public TArray {

public:
   Double_t    *fArray;       //[fN] Array of fN doubles

   TArrayD();
   TArrayD(Int_t n);
   TArrayD(Int_t n, Double_t *array);
   TArrayD(const TArrayD &array);
   TArrayD    &operator=(const TArrayD &rhs);
   virtual    ~TArrayD();

   void       Adopt(Int_t n, Double_t *array);
   void       AddAt(Double_t c, Int_t i);
   Double_t   At(Int_t i);
   void       Copy(TArrayD &array) {array.Set(fN); for (Int_t i=0;i<fN;i++) array.fArray[i] = fArray[i];}
   Double_t  *GetArray() const { return fArray; }
   Stat_t     GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void       Reset() {for (Int_t i=0;i<fN;i++) fArray[i] = 0;}
   void       Set(Int_t n);
   void       Set(Int_t n, Double_t *array);
   Double_t  &operator[](Int_t i);

   ClassDef(TArrayD,1)  //Array of doubles
};

inline Double_t TArrayD::At(Int_t i)
{
   if (!BoundsOk("TArrayD::At", i))
      i = 0;
   return fArray[i];
}

inline Double_t &TArrayD::operator[](Int_t i)
{
   if (!BoundsOk("TArrayD::operator[]", i))
      i = 0;
   return fArray[i];
}

#endif
