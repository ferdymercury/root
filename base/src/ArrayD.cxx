//*CMZ :  2.24/03 16/04/2000  11.50.39  by  Rene Brun
//*CMZ :  2.23/12 14/01/2000  10.23.42  by  Rene Brun
//*CMZ :  2.23/11 22/12/99  11.07.34  by  Rene Brun
//*CMZ :  1.03/06 27/10/97  03.23.58  by  Fons Rademakers
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
// TArrayD                                                              //
//                                                                      //
// Array of doubles (64 bits per element).                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TArrayD.h"
#include "TBuffer.h"


ClassImp(TArrayD)

//______________________________________________________________________________
TArrayD::TArrayD()
{
   // Default TArrayD ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayD::TArrayD(Int_t n)
{
   // Create TArrayD object and set array size to n doubles.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayD::TArrayD(Int_t n, Double_t *array)
{
   // Create TArrayD object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayD::TArrayD(const TArrayD &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayD &TArrayD::operator=(const TArrayD &rhs)
{
   // TArrayD assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayD::~TArrayD()
{
   // Delete TArrayD object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayD::Adopt(Int_t n, Double_t *arr)
{
   // Adopt array arr into TArrayD, i.e. don't copy arr but use it directly
   // in TArrayD. User may not delete arr, TArrayD dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayD::AddAt(Double_t c, Int_t i)
{
   // Add double c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayD::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayD::Set(Int_t n)
{
   // Set size of this array to n doubles.
   // A new array is created, the old contents copied to the new array,
   // then the old array is deleted.

   if (n < 0) return;
   if (n != fN) {
      Double_t *temp = fArray;
      if (n != 0) {
         fArray = new Double_t[n];
         if (n < fN) memcpy(fArray,temp, n*sizeof(Double_t));
         else {
            memcpy(fArray,temp,fN*sizeof(Double_t));
            memset(&fArray[fN],0,(n-fN)*sizeof(Double_t));
         }
      } else {
        fArray = 0;
      }
      if (fN) delete [] temp;
      fN = n;
   }
}

//______________________________________________________________________________
void TArrayD::Set(Int_t n, Double_t *array)
{
   // Set size of this array to n doubles and set the contents

   if (n < 0 || array == 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Double_t[fN];
   memcpy(fArray,array, n*sizeof(Double_t));
}

//_______________________________________________________________________
void TArrayD::Streamer(TBuffer &b)
{
   // Stream a TArrayD object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayD *&obj)
{
   // Read TArrayD object from buffer. Declared in ClassDef.

   obj = (TArrayD *) TArray::ReadArray(buf, TArrayD::Class());
   return buf;
}
