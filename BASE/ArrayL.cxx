//*CMZ :  2.24/03 16/04/2000  11.57.02  by  Rene Brun
//*CMZ :  2.23/11 22/12/99  11.15.21  by  Rene Brun
//*CMZ :  1.03/06 27/10/97  03.23.30  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

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

#include "TArrayL.h"
#include "TBuffer.h"


ClassImp(TArrayL)

//______________________________________________________________________________
TArrayL::TArrayL()
{
   // Default TArrayL ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayL::TArrayL(Int_t n)
{
   // Create TArrayL object and set array size to n longs.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayL::TArrayL(Int_t n, Long_t *array)
{
   // Create TArrayL object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayL::TArrayL(const TArrayL &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayL &TArrayL::operator=(const TArrayL &rhs)
{
   // TArrayL assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayL::~TArrayL()
{
   // Delete TArrayL object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayL::Adopt(Int_t n, Long_t *arr)
{
   // Adopt array arr into TArrayL, i.e. don't copy arr but use it directly
   // in TArrayL. User may not delete arr, TArrayL dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayL::AddAt(Long_t c, Int_t i)
{
   // Add long c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayL::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayL::Set(Int_t n)
{
   // Set size of this array to n longs.
   // A new array is created, the old contents copied to the new array,
   // then the old array is deleted.

   if (n < 0) return;
   if (n != fN) {
      Long_t *temp = fArray;
      if (n != 0) {
         fArray = new Long_t[n];
         if (n < fN) memcpy(fArray,temp, n*sizeof(Long_t));
         else {
            memcpy(fArray,temp,fN*sizeof(Long_t));
            memset(&fArray[fN],0,(n-fN)*sizeof(Long_t));
         }
      } else {
        fArray = 0;
      }
      if (fN) delete [] temp;
      fN = n;
   }
}

//______________________________________________________________________________
void TArrayL::Set(Int_t n, Long_t *array)
{
   // Set size of this array to n longs and set the contents.

   if (n < 0 || array == 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Long_t[fN];
   memcpy(fArray,array, n*sizeof(Long_t));
}

//_______________________________________________________________________
void TArrayL::Streamer(TBuffer &b)
{
   // Stream a TArrayL object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayL *&obj)
{
   // Read TArrayL object from buffer. Declared in ClassDef.

   obj = (TArrayL *) TArray::ReadArray(buf, TArrayL::Class());
   return buf;
}
