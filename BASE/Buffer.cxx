//*CMZ :  2.00/13 29/10/98  08.30.47  by  Fons Rademakers
//*CMZ :  2.00/06 04/06/98  19.11.26  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  16.52.08  by  Rene Brun
//*-- Author :    Fons Rademakers   04/05/96

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
// TBuffer                                                              //
//                                                                      //
// Buffer base class used for serializing objects.                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <string.h>

#include "TBuffer.h"
#include "TObjArray.h"
#include "TMap.h"
#include "TObjPtr.h"
#include "TClass.h"
#include "TStorage.h"
#include "TMath.h"
#include "TError.h"

const UInt_t kNullTag     = 0;
const UInt_t kNewClassTag = 0xFFFFFFFF;
const UInt_t kClassMask   = 0x80000000;  // or the class index with this
const UInt_t kMaxMapCount = 0x3FFFFFFE;  // last valid fMapCount
const Int_t  kExtraSpace  = 8;   // extra space at end of buffer (used for free block count)

Int_t TBuffer::fgArraySize = kArraySize;
Int_t TBuffer::fgMapSize   = kMapSize;

ClassImp(TBuffer)

//______________________________________________________________________________
TBuffer::TBuffer(EMode mode, Int_t bufsiz, void *buf)
{
   // Create an I/O buffer object. Mode should be either TBuffer::kRead or
   // TBuffer::kWrite. By default the I/O buffer has a size of
   // TBuffer::kInitialSize (1024) bytes.

   // Before using the buffer make sure some assumptions are true
   Assert(sizeof(Short_t) == 2);
   Assert(sizeof(Int_t) == 4);
#ifdef R__B64
   Assert(sizeof(Long_t) == 8);
#else
   Assert(sizeof(Long_t) == 4);
#endif
   Assert(sizeof(Float_t) == 4);
   Assert(sizeof(Double_t) == 8);

   if (bufsiz < kMinimalSize) bufsiz = kMinimalSize;
   fBufSize   = bufsiz;
   fMode      = mode;
   fMapCount  = 0;
   fArraySize = fgArraySize;
   fMapSize   = fgMapSize;
   fReadArray = 0;

   if (buf)
      fBuffer = (char *)buf;
   else
      fBuffer = new char[fBufSize+kExtraSpace];
   fBufCur = fBuffer;
   fBufMax = fBuffer + fBufSize;
}

//______________________________________________________________________________
TBuffer::~TBuffer()
{
   // Delete an I/O buffer object.

   delete [] fBuffer;
   fBuffer = 0;

   if (IsReading())
      delete fReadArray;
   else {
      //if (fWriteMap) fWriteMap->Delete();
      delete fWriteMap;
   }
   fReadArray = 0;
}

//______________________________________________________________________________
void TBuffer::CheckCount()
{
   // Check if Array or Map can contain more elements.

   if (IsWriting()) {
      if (fMapCount > fMapSize && fWriteMap->AverageCollisions() > 3) {
         fWriteMap->Rehash(2*fMapCount, kFALSE);
         fMapSize = fWriteMap->Capacity();
      }
   }

   if ((UInt_t)fMapCount >= kMaxMapCount) {
      Error("CheckCount", "too many objects (more than %d)", kMaxMapCount);
      // exception
   }
}

//______________________________________________________________________________
void TBuffer::Expand(Int_t newsize)
{
   // Expand the I/O buffer to newsize bytes.

   Int_t l = Length();

   fBuffer = (char *) TStorage::ReAlloc(fBuffer,
                                        (newsize+kExtraSpace) * sizeof(char),
                                        (fBufSize+kExtraSpace) * sizeof(char));
   fBufSize = newsize;
   fBufCur  = fBuffer + l;
   fBufMax  = fBuffer + fBufSize;
}

//______________________________________________________________________________
void TBuffer::MapObject(const TObject *obj)
{
   // Create the fWriteMap or fReadArray containers and initialize
   // them correctly. This method may only be called outside this
   // class by methods implementing Read and Write for non TObject
   // derived classes (see TArray::ReadArray() and TArray::WriteArray()).

   if (IsWriting()) {
      if (!fWriteMap) {
         static TObjPtr nullPtr(0);
         fWriteMap = new TMap(fMapSize);
         fWriteMap->Add(&nullPtr, (TObject *)kNullTag);
         fMapCount = 1;
      }
      if (obj) {
         CheckCount();
         fWriteMap->Add((TObject *)obj, (TObject *)fMapCount++);
      }
   } else {
      if (!fReadArray) {
         fReadArray = new TObjArray(fArraySize);
         fReadArray->Add((TObject *)kNullTag);      // put kNullTag in slot 0
         fMapCount = 1;
      }
      if (obj) {
         CheckCount();
         fReadArray->AddAtAndExpand((TObject*)obj, fMapCount++);
      }
   }
}

//______________________________________________________________________________
void TBuffer::SetReadParam(Int_t arraysize)
{
   // Set the initial size of the array used to store object and class
   // references during reading. The default size is kArraySize=64.
   // Increasing the default has the benefit that when reading many
   // small objects the array does not need to be resized too often
   // (the system is always dynamic, even with the default everything
   // will work, only the resizing will cost some performance).
   // This method can only be called directly after the creation of
   // the TBuffer, before any reading is done. Globally this option
   // can be changed using SetGlobalReadParam().

   Assert(IsReading());
   Assert(fReadArray == 0);

   fArraySize = arraysize;
}

//______________________________________________________________________________
void TBuffer::SetWriteParam(Int_t mapsize)
{
   // Set the initial size of the hashtable used to store object and class
   // references during writing. The default size is kMapSize=67.
   // Increasing the default has the benefit that when writing many
   // small objects the hashtable does not get too many collisions
   // (the system is always dynamic, even with the default everything
   // will work, only a large number of collisions will cost performance).
   // For optimal performance hashsize should always be a prime.
   // This method can only be called directly after the creation of
   // the TBuffer, before any writing is done. Globally this option
   // can be changed using SetGlobalWriteParam().

   Assert(IsWriting());
   Assert(fWriteMap == 0);

   fMapSize = mapsize;
}

//______________________________________________________________________________
void TBuffer::ResetMap()
{
   // Delete existing fWriteMap or fReadArray and reset map counter.

   if (IsWriting()) {
      delete fWriteMap;
      fWriteMap = 0;
   } else {
      delete fReadArray;
      fReadArray = 0;
   }
   fMapCount = 0;
}

//______________________________________________________________________________
Int_t TBuffer::ReadBuf(void *buf, Int_t max)
{
   // Read max bytes from the I/O buffer into buf. The function returns
   // the actual number of bytes read. The buffer buf is advanced by
   // the number of bytes read.

   Assert(IsReading());

   if (max == 0) return 0;

   Int_t n = TMath::Min(max, (Int_t)(fBufMax - fBufCur));

   memcpy(buf, fBufCur, n);
   fBufCur += n;
   buf = (char *)buf + n;

   return n;
}

//______________________________________________________________________________
void TBuffer::WriteBuf(const void *buf, Int_t max)
{
   // Write max bytes from buf into the I/O buffer. The buffer buf is advanced
   // by the number of bytes (max) written.

   Assert(IsWriting());

   if (max == 0) return;

   if (fBufCur + max > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+max));

   memcpy(fBufCur, buf, max);
   fBufCur += max;
   buf = (char *)buf + max;
}

//______________________________________________________________________________
Text_t *TBuffer::ReadString(Text_t *s, Int_t max)
{
   // Read string from I/O buffer. String is read till 0 character is
   // found or till max-1 characters are read (i.e. string s has max
   // bytes allocated).

   Assert(IsReading());

   char  ch;
   Int_t nr = 0;

   while (nr < max-1) {

      *this >> ch;

      // stop when 0 read
      if (ch == 0) break;

      s[nr++] = ch;
   }

   s[nr] = 0;
   return s;
}

//______________________________________________________________________________
void TBuffer::WriteString(const Text_t *s)
{
   // Write string to I/O buffer. Writes string upto and including the
   // terminating 0.

   WriteBuf(s, (strlen(s)+1)*sizeof(Text_t));
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Char_t *&c)
{
   // Read array of characters from the I/O buffer. Returns the number of
   // characters read. If argument is a 0 pointer then space will be
   // allocated for the array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!c) c = new Char_t[n];

   Int_t l = sizeof(Char_t)*n;
   memcpy(c, fBufCur, l);
   fBufCur += l;
   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Short_t *&h)
{
   // Read array of shorts from the I/O buffer. Returns the number of shorts
   // read. If argument is a 0 pointer then space will be allocated for the
   // array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!h) h = new Short_t[n];

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &h[i]);
#else
   Int_t l = sizeof(Short_t)*n;
   memcpy(h, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Int_t *&ii)
{
   // Read array of ints from the I/O buffer. Returns the number of ints
   // read. If argument is a 0 pointer then space will be allocated for the
   // array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!ii) ii = new Int_t[n];

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ii[i]);
#else
   Int_t l = sizeof(Int_t)*n;
   memcpy(ii, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Long_t *&ll)
{
   // Read array of longs from the I/O buffer. Returns the number of longs
   // read. If argument is a 0 pointer then space will be allocated for the
   // array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!ll) ll = new Long_t[n];

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ll[i]);
#else
   Int_t l = sizeof(Long_t)*n;
   memcpy(ll, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Float_t *&f)
{
   // Read array of floats from the I/O buffer. Returns the number of floats
   // read. If argument is a 0 pointer then space will be allocated for the
   // array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!f) f = new Float_t[n];

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &f[i]);
#else
   Int_t l = sizeof(Float_t)*n;
   memcpy(f, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadArray(Double_t *&d)
{
   // Read array of doubles from the I/O buffer. Returns the number of doubles
   // read. If argument is a 0 pointer then space will be allocated for the
   // array.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!d) d = new Double_t[n];

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &d[i]);
#else
   Int_t l = sizeof(Double_t)*n;
   memcpy(d, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}


//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Char_t *c)
{
   // Read array of characters from the I/O buffer. Returns the number of
   // characters read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!c) return 0;

   Int_t l = sizeof(Char_t)*n;
   memcpy(c, fBufCur, l);
   fBufCur += l;
   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Short_t *h)
{
   // Read array of shorts from the I/O buffer. Returns the number of shorts
   // read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!h) return 0;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &h[i]);
#else
   Int_t l = sizeof(Short_t)*n;
   memcpy(h, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Int_t *ii)
{
   // Read array of ints from the I/O buffer. Returns the number of ints
   // read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!ii) return 0;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ii[i]);
#else
   Int_t l = sizeof(Int_t)*n;
   memcpy(ii, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Long_t *ll)
{
   // Read array of longs from the I/O buffer. Returns the number of longs
   // read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!ll) return 0;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ll[i]);
#else
   Int_t l = sizeof(Long_t)*n;
   memcpy(ll, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Float_t *f)
{
   // Read array of floats from the I/O buffer. Returns the number of floats
   // read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!f) return 0;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &f[i]);
#else
   Int_t l = sizeof(Float_t)*n;
   memcpy(f, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
Int_t TBuffer::ReadStaticArray(Double_t *d)
{
   // Read array of doubles from the I/O buffer. Returns the number of doubles
   // read.

   Assert(IsReading());

   Int_t n;
   *this >> n;

   if (!n) return n;

   if (!d) return 0;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &d[i]);
#else
   Int_t l = sizeof(Double_t)*n;
   memcpy(d, fBufCur, l);
   fBufCur += l;
#endif

   return n;
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Char_t *c, Int_t n)
{
   // Read array of n characters from the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Char_t)*n;
   memcpy(c, fBufCur, l);
   fBufCur += l;
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Short_t *h, Int_t n)
{
   // Read array of n shorts from the I/O buffer.

   if (!n) return;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &h[i]);
#else
   Int_t l = sizeof(Short_t)*n;
   memcpy(h, fBufCur, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Int_t *ii, Int_t n)
{
   // Read array of n ints from the I/O buffer.

   if (!n) return;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ii[i]);
#else
   Int_t l = sizeof(Int_t)*n;
   memcpy(ii, fBufCur, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Long_t *ll, Int_t n)
{
   // Read array of n longs from the I/O buffer.

   if (!n) return;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &ll[i]);
#else
   Int_t l = sizeof(Long_t)*n;
   memcpy(ll, fBufCur, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Float_t *f, Int_t n)
{
   // Read array of n floats from the I/O buffer.

   if (!n) return;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &f[i]);
#else
   Int_t l = sizeof(Float_t)*n;
   memcpy(f, fBufCur, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::ReadFastArray(Double_t *d, Int_t n)
{
   // Read array of n doubles from the I/O buffer.

   if (!n) return;

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      frombuf(fBufCur, &d[i]);
#else
   Int_t l = sizeof(Double_t)*n;
   memcpy(d, fBufCur, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Char_t *c, Int_t n)
{
   // Write array of n characters into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(c);

   Int_t l = sizeof(Char_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

   memcpy(fBufCur, c, l);
   fBufCur += l;
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Short_t *h, Int_t n)
{
   // Write array of n shorts into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(h);

   Int_t l = sizeof(Short_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, h[i]);
#else
   memcpy(fBufCur, h, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Int_t *ii, Int_t n)
{
   // Write array of n ints into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(ii);

   Int_t l = sizeof(Int_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, ii[i]);
#else
   memcpy(fBufCur, ii, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Long_t *ll, Int_t n)
{
   // Write array of n longs into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(ll);

   Int_t l = sizeof(Long_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, ll[i]);
#else
   memcpy(fBufCur, ll, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Float_t *f, Int_t n)
{
   // Write array of n floats into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(f);

   Int_t l = sizeof(Float_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, f[i]);
#else
   memcpy(fBufCur, f, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteArray(const Double_t *d, Int_t n)
{
   // Write array of n doubles into the I/O buffer.

   Assert(IsWriting());

   *this << n;

   if (!n) return;

   Assert(d);

   Int_t l = sizeof(Double_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, d[i]);
#else
   memcpy(fBufCur, d, l);
   fBufCur += l;
#endif
}


//______________________________________________________________________________
void TBuffer::WriteFastArray(const Char_t *c, Int_t n)
{
   // Write array of n characters into the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Char_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

   memcpy(fBufCur, c, l);
   fBufCur += l;
}

//______________________________________________________________________________
void TBuffer::WriteFastArray(const Short_t *h, Int_t n)
{
   // Write array of n shorts into the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Short_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, h[i]);
#else
   memcpy(fBufCur, h, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteFastArray(const Int_t *ii, Int_t n)
{
   // Write array of n ints into the I/O buffer.
   if (!n) return;

   Int_t l = sizeof(Int_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, ii[i]);
#else
   memcpy(fBufCur, ii, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteFastArray(const Long_t *ll, Int_t n)
{
   // Write array of n longs into the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Long_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, ll[i]);
#else
   memcpy(fBufCur, ll, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteFastArray(const Float_t *f, Int_t n)
{
   // Write array of n floats into the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Float_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, f[i]);
#else
   memcpy(fBufCur, f, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
void TBuffer::WriteFastArray(const Double_t *d, Int_t n)
{
   // Write array of n doubles into the I/O buffer.

   if (!n) return;

   Int_t l = sizeof(Double_t)*n;
   if (fBufCur + l > fBufMax) Expand(TMath::Max(2*fBufSize, fBufSize+l));

#ifdef R__BYTESWAP
   for (int i = 0; i < n; i++)
      tobuf(fBufCur, d[i]);
#else
   memcpy(fBufCur, d, l);
   fBufCur += l;
#endif
}

//______________________________________________________________________________
TObject *TBuffer::ReadObject(const TClass *clReq)
{
   // Read object from I/O buffer. clReq can be used to cross check
   // if the actually read object is of the requested class.

   Assert(IsReading());

   // make sure fReadArray is initialized
   MapObject(0);

   // attempt to load next object as TClass clReq
   UInt_t tag;
   TClass *clRef = ReadClass(clReq, &tag);

   TObject *obj;
   if (!clRef) {

      // got a reference to an already loaded object
      if (tag > (UInt_t)fReadArray->GetLast()) {
         Error("ReadObject", "object tag too large, I/O buffer corrupted");
         // exception
      }

      obj = fReadArray->At(tag);
      if (obj && clReq && !obj->IsA()->InheritsFrom(clReq)) {
         Error("ReadObject", "got object of wrong class");
         // exception
      }

   } else {

      // allocate a new object based on the class found
      obj = (TObject *)clRef->New();
      if (!obj) {
         Error("ReadObject", "could not create object of class %s", clRef->GetName());
         // exception
         return 0;
      }

      // add to fReadArray before reading rest of object
      CheckCount();
      fReadArray->AddAtAndExpand(obj, fMapCount++);

      obj->Streamer(*this);
   }

   return obj;
}

//______________________________________________________________________________
void TBuffer::WriteObject(const TObject *obj)
{
   // Write object to I/O buffer.

   Assert(IsWriting());

   // make sure fWriteMap is initialized
   MapObject(0);

   ULong_t idx;

   if (!obj) {

      // save kNullTag to represent NULL pointer
      *this << kNullTag;

   } else if ((idx = (ULong_t)fWriteMap->GetValue((TObject*)obj)) != 0) {

      // truncation is OK the value we did put in the map is an index
      // and not a pointer
      UInt_t objIdx = (UInt_t) idx;

      // save index of already stored object
      *this << objIdx;

   } else {

      // write class of object first
      TClass *cl = obj->IsA();
      WriteClass(cl);

      // enter in stored object table
      CheckCount();
      fWriteMap->Add((TObject *)obj, (TObject *)fMapCount++);

      // let the object write itself (cast const away)
      ((TObject *)obj)->Streamer(*this);

   }
}

//______________________________________________________________________________
TClass *TBuffer::ReadClass(const TClass *clReq, UInt_t *objTag)
{
   // Read class definition from I/O buffer. clReq can be used to cross check
   // if the actually read object is of the requested class. objTag is
   // set in case the object is a reference to an already read object.

   Assert(IsReading());

   // read tag
   UInt_t  tag;
   *this >> tag;

   // in case tag is object tag return tag
   if (!(tag & kClassMask)) {
      if (objTag) *objTag = tag;
      return 0;
   }

   TClass *cl;
   if (tag == kNewClassTag) {

      // got a new class description followed by a new object
      if ((cl = TClass::Load(*this)) == 0) {
         Error("ReadClass", "illegal class name in I/O buffer");
         // exception
      }

      // add class to fReadArray for later reference
      CheckCount();
      fReadArray->AddAtAndExpand(cl, fMapCount++);

   } else {

      // got a tag to an already seen class
      UInt_t clTag = (tag & ~kClassMask);
      if (clTag == 0 || clTag > (UInt_t)fReadArray->GetLast()) {
         Error("ReadClass", "class tag=%d too large > %d, I/O buffer corrupted",clTag,fReadArray->GetLast());
         // exception
      }
      cl = (TClass *)fReadArray->At(clTag);

      Assert(cl != 0);
   }

   if (clReq && !cl->InheritsFrom(clReq)) {
      Error("ReadClass", "got wrong class");
      // exception
   }

   if (objTag) *objTag = 0;

   return cl;
}

//______________________________________________________________________________
void TBuffer::WriteClass(const TClass *cl)
{
   // Write class description to I/O buffer.

   Assert(IsWriting());

   ULong_t idx;

   if ((idx = (ULong_t)fWriteMap->GetValue((TObject *)cl)) != 0) {

      // truncation is OK the value we did put in the map is an index
      // and not a pointer
      UInt_t clIdx = (UInt_t) idx;

      // save index of already stored class
      *this << (clIdx | kClassMask);

   } else {

      // save new class tag
      *this << kNewClassTag;
      cl->Store(*this);

      // store new class reference in fWriteMap
      CheckCount();
      fWriteMap->Add((TObject *)cl, (TObject *)fMapCount++);
   }
}

//______________________________________________________________________________
Version_t TBuffer::ReadVersion()
{
   // Read class version from I/O buffer.

   Version_t version;
   *this >> version ;
   return version;
}

//______________________________________________________________________________
void TBuffer::WriteVersion(const TClass *cl)
{
   // Write class version to I/O buffer.

   *this << cl->GetClassVersion();
}

//---- Static functions --------------------------------------------------------

//______________________________________________________________________________
void TBuffer::SetGlobalReadParam(Int_t arraysize)
{
   // Set the initial size of the array used to store object and class
   // references during reading. The default size is kArraySize=64.
   // Increasing the default has the benefit that when reading many
   // small objects the array does not need to be resized too often
   // (the system is always dynamic, even with the default everything
   // will work, only the resizing will cost some performance).
   // Per TBuffer object this option can be changed using SetReadParam().

   fgArraySize = arraysize;
}

//______________________________________________________________________________
void TBuffer::SetGlobalWriteParam(Int_t mapsize)
{
   // Set the initial size of the hashtable used to store object and class
   // references during writing. The default size is kMapSize=67.
   // Increasing the default has the benefit that when writing many
   // small objects the hashtable does not get too many collisions
   // (the system is always dynamic, even with the default everything
   // will work, only a large number of collisions will cost performance).
   // For optimal performance hashsize should always be a prime.
   // Per TBuffer object this option can be changed using SetWriteParam().

   fgMapSize = mapsize;
}

//______________________________________________________________________________
Int_t TBuffer::GetGlobalReadParam()
{

   return fgArraySize;
}

//______________________________________________________________________________
Int_t TBuffer::GetGlobalWriteParam()
{

   return fgMapSize;
}

//______________________________________________________________________________
void TBuffer::SetReadMode()
{

   fMode = kRead;
}

//______________________________________________________________________________
void TBuffer::SetWriteMode()
{

   fMode = kWrite;
}
