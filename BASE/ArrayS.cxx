//*CMZ :  1.03/06 27/10/97  03.22.50  by  Fons Rademakers
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
   // Set array size of TArrayS object to n shorts.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Short_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayS::Set(Int_t n, Short_t *array)
{
   // Set array size of TArrayS object to n shorts and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Short_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
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
