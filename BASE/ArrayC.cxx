//*CMZ :  1.03/06 27/10/97  03.22.33  by  Fons Rademakers
//*-- Author :    Rene Brun   06/03/95

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
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
   // Set array size of TArrayC object to n chars. If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Char_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayC::Set(Int_t n, Char_t *array)
{
   // Set array size of TArrayC object to n chars and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Char_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
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
