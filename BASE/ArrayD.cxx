//*CMZ :  1.03/06 27/10/97  03.23.58  by  Fons Rademakers
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
   // Set array size of TArrayD object to n doubles.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Double_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = 0;
}

//______________________________________________________________________________
void TArrayD::Set(Int_t n, Double_t *array)
{
   // Set array size of TArrayD object to n doubles and copy array.
   // If n<0 leave array unchanged.

   if (n < 0) return;
   if (fArray && fN != n) {
      delete [] fArray;
      fArray = 0;
   }
   fN = n;
   if (fN == 0) return;
   if (!fArray) fArray = new Double_t[fN];
   for (Int_t i = 0; i < fN; i++)
      fArray[i] = array[i];
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
