//*CMZ :  1.03/06 24/10/97  13.18.02  by  Fons Rademakers
//*-- Author :    Fons Rademakers   21/10/97

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
// TArray                                                               //
//                                                                      //
// Abstract array base class. Used by TArrayC, TArrayS, TArrayI,        //
// TArrayL, TArrayF and TArrayD.                                        //
// Data member is public for historical reasons.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TArray.h"
#include "TError.h"
#include "TClass.h"
#include "TBuffer.h"


ClassImp(TArray)

//______________________________________________________________________________
Bool_t TArray::OutOfBoundsError(const char *where, Int_t i) const
{
   // Generate an out-of-bounds error. Always returns false.

   ::Error(where, "index %d out of bounds (size: %d, this: 0x%08x)", i, fN, this);
   return kFALSE;
}

//______________________________________________________________________________
TArray *TArray::ReadArray(TBuffer &b, const TClass *clReq)
{
   // Read TArray object from buffer.

   Assert(b.IsReading());

   // Make sure ReadArray is initialized
   b.MapObject(0);

   UInt_t tag;
   TClass *clRef = b.ReadClass(clReq, &tag);

   TArray *a;
   if (!clRef) {

      a = 0;

   } else {

      a = (TArray *) clRef->New();
      if (!a) {
         ::Error("TArray::ReadArray", "could not create object of class %s",
                 clRef->GetName());
         // Exception
      }

      a->Streamer(b);

   }

   return a;
}

//______________________________________________________________________________
void TArray::WriteArray(TBuffer &b, const TArray *a)
{
   // Write TArray object to buffer.

   Assert(b.IsWriting());

   // Make sure WriteMap is initialized
   b.MapObject(0);

   if (!a) {

      b << (UInt_t) 0;

   } else {

      TClass *cl = a->IsA();
      b.WriteClass(cl);

      ((TArray *)a)->Streamer(b);

   }
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TArray *&obj)
{
   // Read TArray object from buffer. Function declared in ClassDef.

   obj = (TArray *) TArray::ReadArray(buf, TArray::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator<<(TBuffer &buf, const TArray *obj)
{
   // Write TArray or derived object to buffer.

   TArray::WriteArray(buf, obj);
   return buf;
}
