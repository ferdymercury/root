//*CMZ :  1.03/06 27/10/97  03.23.30  by  Fons Rademakers
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
   // Set array size of TArrayL object to n longs. If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Long_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayL::Set(Int_t n, Long_t *array)
{
   // Set array size of TArrayL object to n longs and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Long_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
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
