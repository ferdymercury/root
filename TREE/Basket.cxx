//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  2.23/11 07/01/2000  17.37.56  by  Rene Brun
//*CMZ :  2.23/09 24/11/99  11.25.31  by  Rene Brun
//*CMZ :  2.23/04 02/10/99  12.25.35  by  Rene Brun
//*CMZ :  2.22/07 30/06/99  11.37.44  by  Rene Brun
//*CMZ :  2.22/06 17/06/99  09.42.13  by  Rene Brun
//*CMZ :  2.22/02 20/05/99  18.10.52  by  Rene Brun
//*CMZ :  2.22/01 18/05/99  12.37.47  by  Rene Brun
//*-- Author :    Rene Brun   19/01/96
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

#include "TBasket.h"
#include "TTree.h"
#include "TBranch.h"
#include "TFile.h"
#include "TMath.h"

R__EXTERN  TBranch *gBranch;

extern "C" void R__zip (Int_t cxlevel, Int_t *nin, char *bufin, Int_t *lout, char *bufout, Int_t *nout);
extern "C" void R__unzip(Int_t *nin, char *bufin, Int_t *lout, char *bufout, Int_t *nout);


ClassImp(TBasket)

//_______________________________________________________________________
//
//  Manages buffers for branches of a Tree.
//  See picture in TTree.
//

//_______________________________________________________________________
TBasket::TBasket()
{
//               Default contructor
   fEntryOffset   = 0;
   fZipBuffer     = 0;
   fBufferRef     = 0;
   fBuffer        = 0;
   fHeaderOnly    = kFALSE;
}

//_______________________________________________________________________
TBasket::TBasket(const char *name, const char *title, TBranch *branch)
{
//            Basket normal constructor
//
//
   SetName(name);
   SetTitle(title);
   fClassName   = "TBasket";
   fBufferSize  = branch->GetBasketSize();
   fNevBufSize  = branch->GetEntryOffsetLen();
   fNevBuf      = 0;
   fEntryOffset = 0;  //Must be set to 0 before calling Sizeof
   fBuffer      = 0;  //Must be set to 0 before calling Sizeof
   fBufferRef   = new TBuffer(TBuffer::kWrite, fBufferSize);
   fHeaderOnly  = kTRUE;
   fLast        = 0; // RDK: Must initialize before calling Streamer()
   Streamer(*fBufferRef);
   fKeylen      = fBufferRef->Length();
   fObjlen      = fBufferSize - fKeylen;
   fLast        = fKeylen;
   fBuffer      = 0;
   fBranch      = branch;
   fZipBuffer   = 0;
   fHeaderOnly  = kFALSE;
   if (fNevBufSize) fEntryOffset = new Int_t[fNevBufSize];
   branch->GetTree()->IncrementTotalBuffers(fBufferSize);
}

//_______________________________________________________________________
TBasket::~TBasket()
{
//          Basket destructor
//

   if (fEntryOffset) delete [] fEntryOffset;
   if (fZipBuffer)   delete [] fZipBuffer;
//   if (fBufferRef)   delete fBufferRef; //this is done in the TKey destructor
//   fBufferRef   = 0;
   fEntryOffset = 0;
   fZipBuffer   = 0;
}

//_______________________________________________________________________
void TBasket::AdjustSize(Int_t newsize)
{
//      Increase the size of the current fBuffer up to newsize

   char *newbuf = (char*)TStorage::ReAlloc(fBuffer,newsize,fBufferSize);
   fBufferSize  = newsize;
   fBuffer      = newbuf;
}


//_______________________________________________________________________
Int_t TBasket::DropBuffers()
{
//      Drop buffers of this basket if it is not the current basket

   if (!fBuffer && !fBufferRef) return 0;
//   delete [] fBuffer;
   if (fEntryOffset) delete [] fEntryOffset;
   if (fBufferRef)   delete fBufferRef;
   fBufferRef   = 0;
   fBuffer      = 0;
   fEntryOffset = 0;
   fBranch->GetTree()->IncrementTotalBuffers(-fBufferSize);
   return fBufferSize;
}

//_______________________________________________________________________
Int_t TBasket::GetEntryPointer(Int_t entry)
{
//*-*-*-*-*-*-*Get pointer to buffer for internal entry*-*-*-*-*-*
//*-*          ========================================

   Int_t offset;
   if (fEntryOffset) offset = fEntryOffset[entry];
   else              offset = fKeylen + entry*fNevBufSize;
   fBufferRef->SetBufferOffset(offset);
   return offset;
}

//_______________________________________________________________________
void TBasket::ReadBasketBuffers(Seek_t pos, Int_t len, TFile *file)
{
//*-*-*-*-*-*-*-*-*Read basket buffers in memory and cleanup*-*-*-*-*-*-*
//*-*              =========================================
//
//       Read a basket buffer. Check if buffers of previous ReadBasket
//       should not be dropped. Remember, we keep buffers
//       in memory up to fMaxVirtualSize.

   TDirectory *cursav = gDirectory;
   gBranch->GetDirectory()->cd();

   if (gBranch->GetTree()->MemoryFull(fBufferSize)) gBranch->DropBaskets();

   fBufferRef = new TBuffer(TBuffer::kRead, len);
   char *buffer = fBufferRef->Buffer();
   file->Seek(pos);
   file->ReadBuffer(buffer,len);
   Streamer(*fBufferRef);
   if (fObjlen > fNbytes-fKeylen) {
      fBuffer = new char[fObjlen+fKeylen];
      memcpy(fBuffer,buffer,fKeylen);
      char *objbuf = fBuffer + fKeylen;
      Int_t nin = fNbytes-fKeylen;
      Int_t nout;
      R__unzip(&nin, &buffer[fKeylen], &fObjlen, objbuf, &nout);
      if (nout != fObjlen) Error("Read", "fObjlen = %d, nout = %d", fObjlen, nout);
      delete [] buffer;
      fBufferRef->SetBuffer(fBuffer);
   } else {
      fBuffer = fBufferRef->Buffer();
   }
   cursav->cd();

   fBranch->GetTree()->IncrementTotalBuffers(fBufferSize);

//        read offsets table
   if (!fBranch->GetEntryOffsetLen()) return;
   delete [] fEntryOffset;
   fEntryOffset = 0;
   fBufferRef->SetBufferOffset(fLast);
   fBufferRef->ReadArray(fEntryOffset);
}

//_______________________________________________________________________
Int_t TBasket::ReadBasketBytes(Seek_t pos, TFile *file)
{
//*-*-*-*-*-*-*-*-*Read basket buffers in memory and cleanup*-*-*-*-*-*-*
//*-*              =========================================
//
//       Read first bytes of a logical record starting at position pos
//       return record length (first 4 bytes of record)

   const Int_t len = 128;
   char buffer[len];
   Int_t keylen;
   file->GetRecordHeader(buffer, pos,len, fNbytes, fObjlen, keylen);
   fKeylen = keylen;
   return fNbytes;
}

//_______________________________________________________________________
void TBasket::SetReadMode()
{
   // Set read mode of basket.

   fLast = fBufferRef->Length();
   fBufferRef->SetReadMode();
}

//_______________________________________________________________________
void TBasket::SetWriteMode()
{
   // Set write mode of basket.

   fBufferRef->SetWriteMode();
   fBufferRef->SetBufferOffset(fLast);
}

//_______________________________________________________________________
void TBasket::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================

   char flag;
   if (b.IsReading()) {
      fBranch = gBranch;
      TKey::Streamer(b); //this must be first
      Version_t v = b.ReadVersion();
      b >> fBufferSize;
      b >> fNevBufSize;
      b >> fNevBuf;
      b >> fLast;
      b >> flag;
      if (fLast > fBufferSize) fBufferSize = fLast;
      if (!flag) return;
      if (flag%10 != 2) {
         delete [] fEntryOffset;
         fEntryOffset = new Int_t[fNevBufSize];
         if (fNevBuf) b.ReadArray(fEntryOffset);
      }
      if (flag == 1 || flag > 10) {
         fBufferRef = new TBuffer(TBuffer::kRead,fBufferSize);
         char *buf  = fBufferRef->Buffer();
         if (v > 1) b.ReadFastArray(buf,fLast);
         else       b.ReadArray(buf);
         fBufferRef->SetBufferOffset(fLast);
         fBranch->GetTree()->IncrementTotalBuffers(fBufferSize);
      }
   } else {
      TKey::Streamer(b);   //this must be first
      b.WriteVersion(TBasket::IsA());
      if (fBufferRef && !fHeaderOnly) fLast = fBufferRef->Length();
      if (fLast > fBufferSize) fBufferSize = fLast;
      b << fBufferSize;
      b << fNevBufSize;
      b << fNevBuf;
      b << fLast;
      flag = 1;
      if (!fEntryOffset)  flag  = 2;
      if (fBufferRef)     flag += 10;
      if (fHeaderOnly)    flag  = 0;
      b << flag;
      if (fHeaderOnly) return;
      if (fEntryOffset && fNevBuf) {
         b.WriteArray(fEntryOffset, fNevBuf);
      }
      if (fBufferRef) {
         char *buf  = fBufferRef->Buffer();
         b.WriteFastArray(buf, fLast);
      }
   }
}

//_______________________________________________________________________
void TBasket::Update(Int_t offset)
{
//    Update basket header and EntryOffset table

   if (fEntryOffset) {
      if (fNevBuf+1 >= fNevBufSize) {
         Int_t newsize = TMath::Max(10,2*fNevBufSize);
         Int_t *newoff = (Int_t*)TStorage::ReAlloc(fEntryOffset,
                               newsize*sizeof(Int_t),fNevBufSize*sizeof(Int_t));
         fEntryOffset  = newoff;
         fNevBufSize   = newsize;
         //Update branch only for the first 10 baskets
         if (fBranch->GetWriteBasket() < 10) fBranch->SetEntryOffsetLen(newsize);
      }
      fEntryOffset[fNevBuf] = offset;
   }

   fNevBuf++;
}

//_______________________________________________________________________
Int_t TBasket::WriteBuffer()
{
//    Write buffer of this basket on the current file

   const Int_t kWrite = 1;
   TDirectory *cursav = gDirectory;
   TFile *file = fBranch->GetFile(kWrite);
   if (!file) return 0;

   fBranch->GetDirectory()->cd();
   if (gFile ? !gFile->IsWritable() : 1) { cursav->cd(); return 0;}
//*-*- Transfer fEntryOffset table at the end of fBuffer. Offsets to fBuffer
//     are transformed in entry length to optimize compression algorithm.
   fLast      = fBufferRef->Length();
   if (fEntryOffset) {
      fBufferRef->WriteArray(fEntryOffset,fNevBuf+1);
      delete [] fEntryOffset; fEntryOffset = 0;
   }

   Int_t lbuf, nout;
   lbuf       = fBufferRef->Length();
   fObjlen    = lbuf - fKeylen;

   fHeaderOnly = kTRUE;
   fCycle = fBranch->GetWriteBasket();
   Int_t cxlevel = fBranch->GetCompressionLevel();
   if (cxlevel) {
      if (cxlevel == 2) cxlevel--;
      Int_t buflen = fKeylen + fObjlen + 28; //add 28 bytes in case object is placed in a deleted gap
      fBuffer = new char[buflen];
      char *objbuf = fBufferRef->Buffer() + fKeylen;
      Int_t bufmax = buflen-fKeylen;
      R__zip(cxlevel, &fObjlen, objbuf, &bufmax, &fBuffer[fKeylen], &nout);
//printf("R__zip:%s, bufmax=%d, fObjlen=%d, fKeylen=%d, nout=%d\n",GetName(),bufmax,fObjlen,fKeylen,nout);
      if (nout >= fObjlen) {
         delete [] fBuffer;
         fBuffer = fBufferRef->Buffer();
         Create(fObjlen);
         fBufferRef->SetBufferOffset(0);
         Streamer(*fBufferRef);         //write key itself again
         nout = fObjlen;
      } else {
         Create(nout);
         fBufferRef->SetBufferOffset(0);
         Streamer(*fBufferRef);         //write key itself again
         memcpy(fBuffer,fBufferRef->Buffer(),fKeylen);
         delete fBufferRef; fBufferRef = 0;
      }
   } else {
      fBuffer = fBufferRef->Buffer();
      Create(fObjlen);
      fBufferRef->SetBufferOffset(0);
      Streamer(*fBufferRef);         //write key itself again
      nout = fObjlen;
   }

//  TKey::WriteFile calls FillBuffer. TBasket inherits from TKey, hence
//  TBasket::FillBuffer is called.
   TKey::WriteFile(0);
   fHeaderOnly = kFALSE;

   cursav->cd();
   return fKeylen+nout;
}
