//*CMZ :  2.00/12 03/09/98  22.36.45  by  Fons Rademakers
//*CMZ :  2.00/10 28/07/98  10.37.43  by  Fons Rademakers
//*CMZ :  1.03/06 24/10/97  13.25.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   03/05/96

#ifndef ROOT_TBuffer
#define ROOT_TBuffer

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

#include <string.h>   // for memcpy

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_Bytes
#include "Bytes.h"
#endif

class TClass;
class TObjArray;
class TMap;


class TBuffer : public TObject {

protected:
   Bool_t  fMode;       //Read or write mode
   Int_t   fBufSize;    //Size of buffer
   char   *fBuffer;     //Buffer used to store objects
   char   *fBufCur;     //Current position in buffer
   char   *fBufMax;     //End of buffer
   Int_t   fMapCount;   //Number of objects or classes in map
   Int_t   fArraySize;  //Default size of fReadArray array
   Int_t   fMapSize;    //Default size of fWriteMap hash table
   union {
      TObjArray  *fReadArray;  //Array containing object references during reading
      TMap       *fWriteMap;   //Map containing object,id pairs during writing
   };

   static Int_t  fgArraySize;  //Default array size for all TBuffer objects
   static Int_t  fgMapSize;    //Default map size for all TBuffer objects

   void Expand(Int_t newsize);  //Expand buffer to newsize

   TBuffer() : fMode(0), fBuffer(0) { fReadArray = 0; }  // For Dictionary()

   // TBuffer objects cannot be copied or assigned
   TBuffer(const TBuffer &) { };
   void operator=(const TBuffer &) { };

   void CheckCount();

   void Read(const Text_t *name) { TObject::Read(name); }
   void Write(const Text_t *name, Int_t opt, Int_t bufs)
                                 { TObject::Write(name, opt, bufs); }

public:
   enum EMode { kRead = 0, kWrite = 1 };
   enum { kInitialSize = 1024, kMinimalSize = 128 };
   enum { kArraySize = 64, kMapSize = 67 };

   TBuffer(EMode mode, Int_t bufsiz = kInitialSize, void *buf = 0);
   virtual ~TBuffer();

   void     MapObject(const TObject *obj);
   virtual void Reset() { SetBufferOffset(); ResetMap(); }
   void     ResetMap();
   void     SetReadMode();
   void     SetReadParam(Int_t arraysize);
   void     SetWriteMode();
   void     SetWriteParam(Int_t mapsize);
   void     SetBufferOffset(Int_t offset = 0) { fBufCur = fBuffer+offset; }

   char    *Buffer() const { return fBuffer; }
   Int_t    BufferSize() const { return fBufSize; }
   void     DetachBuffer() { fBuffer = 0; }
   Int_t    Length() const { return (Int_t)(fBufCur - fBuffer); }

   Bool_t   IsReading() const { return (fMode & kWrite) == 0; }
   Bool_t   IsWriting() const { return (fMode & kWrite) != 0; }

   Int_t    ReadBuf(void *buf, Int_t max);
   void     WriteBuf(const void *buf, Int_t max);

   Text_t  *ReadString(Text_t *s, Int_t max);
   void     WriteString(const Text_t *s);

   Version_t ReadVersion();
   void      WriteVersion(const TClass *cl);

   TClass  *ReadClass(const TClass *cl = 0, UInt_t *objTag = 0);
   void     WriteClass(const TClass *cl);

   TObject *ReadObject(const TClass *cl);
   void     WriteObject(const TObject *obj);

   Int_t    ReadArray(Char_t   *&c);
   Int_t    ReadArray(UChar_t  *&c);
   Int_t    ReadArray(Short_t  *&h);
   Int_t    ReadArray(UShort_t *&h);
   Int_t    ReadArray(Int_t    *&i);
   Int_t    ReadArray(UInt_t   *&i);
   Int_t    ReadArray(Long_t   *&l);
   Int_t    ReadArray(ULong_t  *&l);
   Int_t    ReadArray(Float_t  *&f);
   Int_t    ReadArray(Double_t *&d);

   Int_t    ReadStaticArray(Char_t   *c);
   Int_t    ReadStaticArray(UChar_t  *c);
   Int_t    ReadStaticArray(Short_t  *h);
   Int_t    ReadStaticArray(UShort_t *h);
   Int_t    ReadStaticArray(Int_t    *i);
   Int_t    ReadStaticArray(UInt_t   *i);
   Int_t    ReadStaticArray(Long_t   *l);
   Int_t    ReadStaticArray(ULong_t  *l);
   Int_t    ReadStaticArray(Float_t  *f);
   Int_t    ReadStaticArray(Double_t *d);

   void     WriteArray(const Char_t   *c, Int_t n);
   void     WriteArray(const UChar_t  *c, Int_t n);
   void     WriteArray(const Short_t  *h, Int_t n);
   void     WriteArray(const UShort_t *h, Int_t n);
   void     WriteArray(const Int_t    *i, Int_t n);
   void     WriteArray(const UInt_t   *i, Int_t n);
   void     WriteArray(const Long_t   *l, Int_t n);
   void     WriteArray(const ULong_t  *l, Int_t n);
   void     WriteArray(const Float_t  *f, Int_t n);
   void     WriteArray(const Double_t *d, Int_t n);

   void     ReadFastArray(Char_t   *c, Int_t n);
   void     ReadFastArray(UChar_t  *c, Int_t n);
   void     ReadFastArray(Short_t  *h, Int_t n);
   void     ReadFastArray(UShort_t *h, Int_t n);
   void     ReadFastArray(Int_t    *i, Int_t n);
   void     ReadFastArray(UInt_t   *i, Int_t n);
   void     ReadFastArray(Long_t   *l, Int_t n);
   void     ReadFastArray(ULong_t  *l, Int_t n);
   void     ReadFastArray(Float_t  *f, Int_t n);
   void     ReadFastArray(Double_t *d, Int_t n);

   void     WriteFastArray(const Char_t   *c, Int_t n);
   void     WriteFastArray(const UChar_t  *c, Int_t n);
   void     WriteFastArray(const Short_t  *h, Int_t n);
   void     WriteFastArray(const UShort_t *h, Int_t n);
   void     WriteFastArray(const Int_t    *i, Int_t n);
   void     WriteFastArray(const UInt_t   *i, Int_t n);
   void     WriteFastArray(const Long_t   *l, Int_t n);
   void     WriteFastArray(const ULong_t  *l, Int_t n);
   void     WriteFastArray(const Float_t  *f, Int_t n);
   void     WriteFastArray(const Double_t *d, Int_t n);

   TBuffer  &operator>>(Char_t   &c);
   TBuffer  &operator>>(UChar_t  &c);
   TBuffer  &operator>>(Short_t  &h);
   TBuffer  &operator>>(UShort_t &h);
   TBuffer  &operator>>(Int_t    &i);
   TBuffer  &operator>>(UInt_t   &i);
   TBuffer  &operator>>(Long_t   &l);
   TBuffer  &operator>>(ULong_t  &l);
   TBuffer  &operator>>(Float_t  &f);
   TBuffer  &operator>>(Double_t &d);
   TBuffer  &operator>>(Char_t   *c);

   TBuffer  &operator<<(Char_t   c);
   TBuffer  &operator<<(UChar_t  c);
   TBuffer  &operator<<(Short_t  h);
   TBuffer  &operator<<(UShort_t h);
   TBuffer  &operator<<(Int_t    i);
   TBuffer  &operator<<(UInt_t   i);
   TBuffer  &operator<<(Long_t   l);
   TBuffer  &operator<<(ULong_t  l);
   TBuffer  &operator<<(Float_t  f);
   TBuffer  &operator<<(Double_t d);
   TBuffer  &operator<<(const Char_t  *c);

   //friend TBuffer  &operator>>(TBuffer &b, TObject *&obj);
   friend TBuffer  &operator>>(TBuffer &b, const TObject *&obj);
   friend TBuffer  &operator<<(TBuffer &b, const TObject *obj);

   static void  SetGlobalReadParam(Int_t arraysize);
   static void  SetGlobalWriteParam(Int_t mapsize);
   static Int_t GetGlobalReadParam();
   static Int_t GetGlobalWriteParam();

   ClassDef(TBuffer,0)  //Buffer base class used for serializing objects
};

//---------------------- TBuffer inlines ---------------------------------------

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Char_t c)
{
   if (fBufCur + sizeof(Char_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, c);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Short_t h)
{
   if (fBufCur + sizeof(Short_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, h);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Int_t i)
{
   if (fBufCur + sizeof(Int_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, i);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Long_t l)
{
   if (fBufCur + sizeof(Long_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, l);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Float_t f)
{
   if (fBufCur + sizeof(Float_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, f);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(Double_t d)
{
   if (fBufCur + sizeof(Double_t) > fBufMax) Expand(2*fBufSize);

   tobuf(fBufCur, d);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(const Char_t *c)
{
   WriteString(c);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Char_t &c)
{
   frombuf(fBufCur, &c);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Short_t &h)
{
   frombuf(fBufCur, &h);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Int_t &i)
{
   frombuf(fBufCur, &i);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Long_t &l)
{
   frombuf(fBufCur, &l);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Float_t &f)
{
   frombuf(fBufCur, &f);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Double_t &d)
{
   frombuf(fBufCur, &d);
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(Char_t *c)
{
   ReadString(c, sizeof(c));
   return *this;
}

//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(UChar_t c)
   { return TBuffer::operator<<((Char_t)c); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(UShort_t h)
   { return TBuffer::operator<<((Short_t)h); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(UInt_t i)
   { return TBuffer::operator<<((Int_t)i); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator<<(ULong_t l)
   { return TBuffer::operator<<((Long_t)l); }

//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(UChar_t &c)
   { return TBuffer::operator>>((Char_t&)c); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(UShort_t &h)
   { return TBuffer::operator>>((Short_t&)h); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(UInt_t &i)
   { return TBuffer::operator>>((Int_t&)i); }
//______________________________________________________________________________
inline TBuffer &TBuffer::operator>>(ULong_t &l)
   { return TBuffer::operator>>((Long_t&)l); }

//______________________________________________________________________________
inline TBuffer &operator<<(TBuffer &buf, const TObject *obj)
   { buf.WriteObject(obj); return buf; }
//______________________________________________________________________________
//inline TBuffer &operator>>(TBuffer &buf, TObject *&obj)
//   { obj = buf.ReadObject(0); return buf; }
//______________________________________________________________________________
inline TBuffer &operator>>(TBuffer &buf, const TObject *&obj)
   { obj = buf.ReadObject(0); return buf; }

//______________________________________________________________________________
inline Int_t TBuffer::ReadArray(UChar_t *&c)
   { return TBuffer::ReadArray((Char_t *&)c); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadArray(UShort_t *&h)
   { return TBuffer::ReadArray((Short_t *&)h); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadArray(UInt_t *&i)
   { return TBuffer::ReadArray((Int_t *&)i); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadArray(ULong_t *&l)
   { return TBuffer::ReadArray((Long_t *&)l); }

//______________________________________________________________________________
inline Int_t TBuffer::ReadStaticArray(UChar_t *c)
   { return TBuffer::ReadStaticArray((Char_t *)c); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadStaticArray(UShort_t *h)
   { return TBuffer::ReadStaticArray((Short_t *)h); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadStaticArray(UInt_t *i)
   { return TBuffer::ReadStaticArray((Int_t *)i); }
//______________________________________________________________________________
inline Int_t TBuffer::ReadStaticArray(ULong_t *l)
   { return TBuffer::ReadStaticArray((Long_t *)l); }

//______________________________________________________________________________
inline void TBuffer::ReadFastArray(UChar_t *c, Int_t n)
   { TBuffer::ReadFastArray((Char_t *)c, n); }
//______________________________________________________________________________
inline void TBuffer::ReadFastArray(UShort_t *h, Int_t n)
   { TBuffer::ReadFastArray((Short_t *)h, n); }
//______________________________________________________________________________
inline void TBuffer::ReadFastArray(UInt_t *i, Int_t n)
   { TBuffer::ReadFastArray((Int_t *)i, n); }
//______________________________________________________________________________
inline void TBuffer::ReadFastArray(ULong_t *l, Int_t n)
   { TBuffer::ReadFastArray((Long_t *)l, n); }

//______________________________________________________________________________
inline void TBuffer::WriteArray(const UChar_t *c, Int_t n)
   { TBuffer::WriteArray((const Char_t *)c, n); }
//______________________________________________________________________________
inline void TBuffer::WriteArray(const UShort_t *h, Int_t n)
   { TBuffer::WriteArray((const Short_t *)h, n); }
//______________________________________________________________________________
inline void TBuffer::WriteArray(const UInt_t *i, Int_t n)
   { TBuffer::WriteArray((const Int_t *)i, n); }
//______________________________________________________________________________
inline void TBuffer::WriteArray(const ULong_t *l, Int_t n)
   { TBuffer::WriteArray((const Long_t *)l, n); }

//______________________________________________________________________________
inline void TBuffer::WriteFastArray(const UChar_t *c, Int_t n)
   { TBuffer::WriteFastArray((const Char_t *)c, n); }
//______________________________________________________________________________
inline void TBuffer::WriteFastArray(const UShort_t *h, Int_t n)
   { TBuffer::WriteFastArray((const Short_t *)h, n); }
//______________________________________________________________________________
inline void TBuffer::WriteFastArray(const UInt_t *i, Int_t n)
   { TBuffer::WriteFastArray((const Int_t *)i, n); }
//______________________________________________________________________________
inline void TBuffer::WriteFastArray(const ULong_t *l, Int_t n)
   { TBuffer::WriteFastArray((const Long_t *)l, n); }

#endif
