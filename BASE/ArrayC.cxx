//*CMZ :  2.23/12 14/01/2000  10.24.19  by  Rene Brun
//*CMZ :  2.23/11 22/12/99  11.13.08  by  Rene Brun
//*CMZ :  1.03/06 27/10/97  03.22.33  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

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

#include "TArrayC.h"
#include "TBuffer.h"


ClassImp(TArrayC)

//______________________________________________________________________________
TArrayC::TArrayC()
{
   // Default TArrayC ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayC::TArrayC(Int_t n)
{
   // Create TArrayC object and set array size to n chars.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayC::TArrayC(Int_t n, Char_t *array)
{
   // Create TArrayC object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayC::TArrayC(const TArrayC &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayC &TArrayC::operator=(const TArrayC &rhs)
{
   // TArrayC assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayC::~TArrayC()
{
   // Delete TArrayC object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayC::Adopt(Int_t n, Char_t *arr)
{
   // Adopt array arr into TArrayC, i.e. don't copy arr but use it directly
   // in TArrayC. User may not delete arr, TArrayC dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayC::AddAt(Char_t c, Int_t i)
{
   // Add char c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayC::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayC::Set(Int_t n)
{
   // Set size of this array to n chars.
   // A new array is created, the old contents copied to the new array,
   // then the old array is deleted.

   if (n < 0) return;
   if (n != fN) {
      Char_t *temp = fArray;
      if (n != 0) {
         fArray = new Char_t[n];
         if (n < fN) memcpy(fArray,temp, n*sizeof(Char_t));
         else {
            memcpy(fArray,temp,fN*sizeof(Char_t));
            for (Int_t i=fN;i<n;i++) fArray[i] = 0;
         }
      } else {
        fArray = 0;
      }
      if (fN) delete [] temp;
      fN = n;
   }
}

//______________________________________________________________________________
void TArrayC::Set(Int_t n, Char_t *array)
{
   // Set size of this array to n chars and set the contents.

   if (n < 0 || array == 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Char_t[fN];
   memcpy(fArray,array, n*sizeof(Char_t));
}

//_______________________________________________________________________
void TArrayC::Streamer(TBuffer &b)
{
   // Stream a TArrayC object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayC *&obj)
{
   // Read TArrayC object from buffer. Declared in ClassDef.

   obj = (TArrayC *) TArray::ReadArray(buf, TArrayC::Class());
   return buf;
}
