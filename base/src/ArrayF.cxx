//*CMZ :  2.24/03 16/04/2000  11.50.07  by  Rene Brun
//*CMZ :  2.23/12 14/01/2000  10.25.24  by  Rene Brun
//*CMZ :  2.23/11 22/12/99  10.51.04  by  Rene Brun
//*CMZ :  1.03/06 27/10/97  03.23.44  by  Fons Rademakers
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
// TArrayF                                                              //
//                                                                      //
// Array of floats (32 bits per element).                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TArrayF.h"
#include "TBuffer.h"


ClassImp(TArrayF)

//______________________________________________________________________________
TArrayF::TArrayF()
{
   // Default TArrayF ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayF::TArrayF(Int_t n)
{
   // Create TArrayF object and set array size to n floats.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayF::TArrayF(Int_t n, Float_t *array)
{
   // Create TArrayF object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayF::TArrayF(const TArrayF &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayF &TArrayF::operator=(const TArrayF &rhs)
{
   // TArrayF assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayF::~TArrayF()
{
   // Delete TArrayF object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayF::Adopt(Int_t n, Float_t *arr)
{
   // Adopt array arr into TArrayF, i.e. don't copy arr but use it directly
   // in TArrayF. User may not delete arr, TArrayF dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayF::AddAt(Float_t c, Int_t i)
{
   // Add float c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayF::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayF::Set(Int_t n)
{
   // Set size of this array to n floats.
   // A new array is created, the old contents copied to the new array,
   // then the old array is deleted.

   if (n < 0) return;
   if (n != fN) {
      Float_t *temp = fArray;
      if (n != 0) {
         fArray = new Float_t[n];
         if (n < fN) memcpy(fArray,temp, n*sizeof(Float_t));
         else {
            memcpy(fArray,temp,fN*sizeof(Float_t));
            memset(&fArray[fN],0,(n-fN)*sizeof(Float_t));
         }
      } else {
        fArray = 0;
      }
      if (fN) delete [] temp;
      fN = n;
   }
}

//______________________________________________________________________________
void TArrayF::Set(Int_t n, Float_t *array)
{
   // Set size of this array to n floats and set the contents.

   if (n < 0 || array == 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Float_t[fN];
   memcpy(fArray,array, n*sizeof(Float_t));
}

//_______________________________________________________________________
void TArrayF::Streamer(TBuffer &b)
{
   // Stream a TArrayF object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayF *&obj)
{
   // Read TArrayF object from buffer. Declared in ClassDef.

   obj = (TArrayF *) TArray::ReadArray(buf, TArrayF::Class());
   return buf;
}
