//*CMZ :  1.03/06 27/10/97  03.23.07  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

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
// TArrayI                                                              //
//                                                                      //
// Array of integers (32 bits per element).                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TArrayI.h"
#include "TBuffer.h"


ClassImp(TArrayI)

//______________________________________________________________________________
TArrayI::TArrayI()
{
   // Default TArrayI ctor.

   fArray = 0;
}

//______________________________________________________________________________
TArrayI::TArrayI(Int_t n)
{
   // Create TArrayI object and set array size to n integers.

   fArray = 0;
   if (n > 0) Set(n);
}

//______________________________________________________________________________
TArrayI::TArrayI(Int_t n, Int_t *array)
{
   // Create TArrayI object and initialize it with values of array.

   fArray = 0;
   Set(n, array);
}

//______________________________________________________________________________
TArrayI::TArrayI(const TArrayI &array)
{
   // Copy constructor.

   fArray = 0;
   Set(array.fN, array.fArray);
}

//______________________________________________________________________________
TArrayI &TArrayI::operator=(const TArrayI &rhs)
{
   // TArrayI assignment operator.

   if (this != &rhs)
      Set(rhs.fN, rhs.fArray);
   return *this;
}

//______________________________________________________________________________
TArrayI::~TArrayI()
{
   // Delete TArrayI object.

   delete [] fArray;
   fArray = 0;
}

//______________________________________________________________________________
void TArrayI::Adopt(Int_t n, Int_t *arr)
{
   // Adopt array arr into TArrayI, i.e. don't copy arr but use it directly
   // in TArrayI. User may not delete arr, TArrayI dtor will do it.

   if (fArray)
      delete [] fArray;

   fN     = n;
   fArray = arr;
}

//______________________________________________________________________________
void TArrayI::AddAt(Int_t c, Int_t i)
{
   // Add Int_t c at position i. Check for out of bounds.

   if (!BoundsOk("TArrayI::AddAt", i))
      i = 0;
   fArray[i] = c;
}

//______________________________________________________________________________
void TArrayI::Set(Int_t n)
{
   // Set array size of TArrayI object to n integers.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Int_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayI::Set(Int_t n, Int_t *array)
{
   // Set array size of TArrayI object to n integers and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Int_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
}

//_______________________________________________________________________
void TArrayI::Streamer(TBuffer &b)
{
   // Stream a TArrayI object.

   if (b.IsReading()) {
      fN = b.ReadArray(fArray);
   } else {
      b.WriteArray(fArray, fN);
   }
}

//_______________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArrayI *&obj)
{
   // Read TArrayI object from buffer. Declared in ClassDef.

   obj = (TArrayI *) TArray::ReadArray(buf, TArrayI::Class());
   return buf;
}
