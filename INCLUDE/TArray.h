//*CMZ :  2.24/03 16/04/2000  11.59.55  by  Rene Brun
//*CMZ :  1.03/08 17/11/97  15.27.10  by  Fons Rademakers
//*-- Author :    Fons Rademakers   21/10/97

#ifndef ROOT_TArray
#define ROOT_TArray

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
// TArray                                                               //
//                                                                      //
// Abstract array base class. Used by TArrayC, TArrayS, TArrayI,        //
// TArrayL, TArrayF and TArrayD.                                        //
// Data member is public for historical reasons.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Htypes
#include "Htypes.h"
#endif
#include <string.h>

class TBuffer;


class TArray {

protected:
   Bool_t        BoundsOk(const char *where, Int_t at) const;
   Bool_t        OutOfBoundsError(const char *where, Int_t i) const;

public:
   Int_t     fN;            //Number of array elements

   TArray() { fN = 0; }
   TArray(Int_t n) { fN = n; }
   TArray(const TArray &a) { fN = a.fN; }
   TArray         &operator=(const TArray &rhs) { fN = rhs.fN; return *this; }
   virtual        ~TArray() { fN = 0; }

   Int_t          GetSize() const { return fN; }
   virtual void   Set(Int_t n) = 0;

   static TArray *ReadArray(TBuffer &b, const TClass *clReq);
   static void    WriteArray(TBuffer &b, const TArray *a);

   friend TBuffer &operator<<(TBuffer &b, const TArray *obj);

   ClassDef(TArray,1)  //Abstract array base class
};


inline Bool_t TArray::BoundsOk(const char *where, Int_t at) const
{
   return (at < 0 || at >= fN)
                  ? OutOfBoundsError(where, at)
                  : kTRUE;
}

#endif
