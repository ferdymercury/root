//*CMZ :  2.23/01 30/08/99  00.14.30  by  Fons Rademakers
//*CMZ :  2.22/02 25/05/99  19.19.04  by  Fons Rademakers
//*CMZ :  1.03/06 24/10/97  13.18.02  by  Fons Rademakers
//*-- Author :    Fons Rademakers   21/10/97

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
   // Read TArray object from buffer. Simplified version of
   // TBuffer::ReadObject (does not keep track of multiple
   // references to same array).

   Assert(b.IsReading());

   // Make sure ReadArray is initialized
   b.InitMap();

   // Before reading object save start position
   UInt_t startpos = UInt_t(b.Length());

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

      b.CheckByteCount(startpos, tag, clRef);
   }

   return a;
}

//______________________________________________________________________________
void TArray::WriteArray(TBuffer &b, const TArray *a)
{
   // Write TArray object to buffer. Simplified version of
   // TBuffer::WriteObject (does not keep track of multiple
   // references to the same array).

   Assert(b.IsWriting());

   // Make sure WriteMap is initialized
   b.InitMap();

   if (!a) {

      b << (UInt_t) 0;

   } else {

      // Reserve space for leading byte count
      UInt_t cntpos = UInt_t(b.Length());
      b.SetBufferOffset(Int_t(cntpos+sizeof(UInt_t)));

      TClass *cl = a->IsA();
      b.WriteClass(cl);

      ((TArray *)a)->Streamer(b);

      // Write byte count
      b.SetByteCount(cntpos);
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
