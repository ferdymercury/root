//*CMZ :  2.23/12 14/01/2000  10.24.45  by  Rene Brun
//*CMZ :  2.23/11 22/12/99  11.11.10  by  Rene Brun
//*CMZ :  1.03/06 27/10/97  03.22.50  by  Fons Rademakers
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
// TArrayS                                                              //
//                                                                      //
// Array of shorts (16 bits per element).                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TArrayS.h"
#include "TBuffer.h"


ClassImp(TArrayS)

//______________________________________________________________________________
TArrayS::TArrayS()
{
   // Default TArrayS ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayS::TArrayS(Int_t n)
{
   // Create TArrayS object and set array size to n shorts.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayS::TArrayS(Int_t n, Short_t *array)
{
   // Create TArrayS object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayS::TArrayS(const TArrayS &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayS &TArrayS::operator=(const TArrayS &rhs)
{
   // TArrayS assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayS::~TArrayS()
{
   // Delete TArrayS object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayS::Adopt(Int_t n, Short_t *arr)
{
   // Adopt array arr into TArrayS, i.e. don't copy arr but use it directly
   // in TArrayS. User may not delete arr, TArrayS dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayS::AddAt(Short_t c, Int_t i)
{
   // Add short c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayS::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayS::Set(Int_t n)
{
   // Set size of this array to n shorts.
   // A new array is created, the old contents copied to the new array,
   // then the old array is deleted.

   if (n < 0) return;
   if (n != fN) {
      Short_t *temp = fArray;
      if (n != 0) {
         fArray = new Short_t[n];
         if (n < fN) memcpy(fArray,temp, n*sizeof(Short_t));
         else {
            memcpy(fArray,temp,fN*sizeof(Short_t));
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
void TArrayS::Set(Int_t n, Short_t *array)
{
   // Set size of this array to n shorts and set the contents.

   if (n < 0 || array == 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Short_t[fN];
   memcpy(fArray,array, n*sizeof(Short_t));
}

//_______________________________________________________________________
void TArrayS::Streamer(TBuffer &b)
{
   // Stream a TArrayS object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayS *&obj)
{
   // Read TArrayS object from buffer. Declared in ClassDef.

   obj = (TArrayS *) TArray::ReadArray(buf, TArrayS::Class());
   return buf;
}
