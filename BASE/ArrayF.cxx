//*CMZ :  1.03/06 27/10/97  03.23.44  by  Fons Rademakers
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
   // Set array size of TArrayF object to n floats.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Float_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayF::Set(Int_t n, Float_t *array)
{
   // Set array size of TArrayF object to n floats and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Float_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
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
