//*CMZ :  2.00/13 20/10/98  17.41.55  by  Rene Brun
//*CMZ :  2.00/12 05/10/98  23.58.00  by  Rene Brun
//*CMZ :  2.00/08 04/06/98  12.05.44  by  Rene Brun
//*CMZ :  2.00/06 15/05/98  10.51.24  by  Rene Brun
//*CMZ :  2.00/00 19/02/98  15.07.07  by  Rene Brun
//*CMZ :  1.03/09 21/01/98  09.01.01  by  Fons Rademakers
//*-- Author :    Rene Brun   19/01/96
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

#include "TBasket.h"
#include "TTree.h"
#include "TBranch.h"
#include "TFile.h"
#include "TMath.h"

R__EXTERN  TBranch *gBranch;

extern "C" void mmzip (Int_t cxlevel, Int_t *nin, char *bufin, Int_t *lout, char *bufout, Int_t *nout);
extern "C" void mmuzip(Int_t *nin, char *bufin, Int_t *lout, char *bufout, Int_t *nout);

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
   fEventOffset = 0;
   fZipBuffer   = 0;
   fBufferRef   = 0;
   fBuffer      = 0;
}

//_______________________________________________________________________
TBasket::TBasket(const Text_t *name, const Text_t *title, TBranch *branch)
{
//            Basket normal constructor
//
//
   SetName(name);
   SetTitle(title);
   fClassName   = "TBasket";
   fBufferSize  = branch->GetBasketSize();
   fNevBufSize  = branch->GetEventOffsetLen();
   fNevBuf      = 0;
   fEventOffset = 0;  //Must be set to 0 before calling Sizeof
   fBuffer      = 0;  //Must be set to 0 before calling Sizeof
   fBufferRef   = new TBuffer(TBuffer::kWrite, fBufferSize);
   fWritingBuffer = kTRUE;
   Streamer(*fBufferRef);
   fKeylen      = fBufferRef->Length();
   fObjlen      = fBufferSize - fKeylen;
   fLast        = fKeylen;
   fBuffer      = 0;
   fBranch      = branch;
   fZipBuffer   = 0;
   fWritingBuffer = kFALSE;
   if (fNevBufSize) fEventOffset = new Int_t[fNevBufSize];
   branch->GetTree()->IncrementTotalBuffers(fBufferSize);
}

//_______________________________________________________________________
TBasket::~TBasket()
{
//          Basket destructor
//

   if (fEventOffset) delete [] fEventOffset;
   if (fZipBuffer)   delete [] fZipBuffer;
//   if (fBufferRef)   delete fBufferRef; //this is done in the TKey destructor
//   fBufferRef   = 0;
   fEventOffset = 0;
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
   if (fEventOffset) delete [] fEventOffset;
   if (fBufferRef)   delete fBufferRef;
   fBufferRef   = 0;
   fBuffer      = 0;
   fEventOffset = 0;
   fBranch->GetTree()->IncrementTotalBuffers(-fBufferSize);
   return fBufferSize;
}

//_______________________________________________________________________
Int_t TBasket::GetEventPointer(Int_t event)
{
//*-*-*-*-*-*-*Get pointer to buffer for internal event*-*-*-*-*-*
//*-*          ========================================

   Int_t offset;
   if (fEventOffset) offset = fEventOffset[event];
   else              offset = fKeylen + event*fNevBufSize;
   fBufferRef->SetBufferOffset(offset);
   return offset;
}

//_______________________________________________________________________
void TBasket::Print(Option_t *option)
{
//            Print Basket parameters
//
   TNamed::Print(option);
}

//_______________________________________________________________________
void TBasket::ReadBasketBuffers()
{
//*-*-*-*-*-*-*-*-*Read basket buffers in memory and cleanup*-*-*-*-*-*-*
//*-*              =========================================
//
//       Read a basket buffer. Check if buffers of previous ReadBasket
//       should not be dropped. Remember, we keep buffers
//       in memory up to fMaxVirtualSize.

   TDirectory *cursav = gDirectory;
   fBranch->GetDirectory()->cd();

   if (fBranch->GetTree()->MemoryFull(fBufferSize)) fBranch->DropBaskets();

   fBufferRef = new TBuffer(TBuffer::kRead, fObjlen+fKeylen);
   if (fObjlen > fNbytes-fKeylen) {
      fBuffer = new char[fNbytes];
      TKey::ReadFile();                    //Read object structure from file
      memcpy(fBufferRef->Buffer(),fBuffer,fKeylen);
      char *objbuf = fBufferRef->Buffer() + fKeylen;
      Int_t nin = fNbytes-fKeylen;
      Int_t nout;
      mmuzip(&nin, &fBuffer[fKeylen], &fObjlen, objbuf, &nout);
      if (nout != fObjlen) Error("Read", "fObjlen = %d, nout = %d", fObjlen, nout);
      delete [] fBuffer;
      fBuffer = 0;
   } else {
      fBuffer = fBufferRef->Buffer();
      TKey::ReadFile();                    // Remember, TBasket inherits from TKey
   }
   cursav->cd();

   fBranch->GetTree()->IncrementTotalBuffers(fBufferSize);

//        read offsets table
   if (!fBranch->GetEventOffsetLen()) return;
   delete [] fEventOffset;
   fEventOffset = 0;
   fBufferRef->SetBufferOffset(fLast);
   fBufferRef->ReadArray(fEventOffset);
}

//_______________________________________________________________________
void TBasket::Reset(Option_t *)
{

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
      b.ReadVersion();   //Version_t v = b.ReadVersion();
      b >> fBufferSize;
      b >> fNevBufSize;
      b >> fNevBuf;
      b >> fLast;
      b >> flag;
     if (!flag) return;
      if (flag%10 != 2 && fNevBuf) {
         delete [] fEventOffset;
         fEventOffset = new Int_t[fNevBufSize];
         b.ReadArray(fEventOffset);
      }
      if (flag == 1 || flag > 10) {
         fBufferRef = new TBuffer(TBuffer::kRead,fBufferSize);
         char *buf  = fBufferRef->Buffer();
         b.ReadArray(buf);
         fBufferRef->SetBufferOffset(fLast);
         fBranch->GetTree()->IncrementTotalBuffers(fBufferSize);
      }
   } else {
      TKey::Streamer(b);   //this must be first
      b.WriteVersion(TBasket::IsA());
      b << fBufferSize;
      b << fNevBufSize;
      b << fNevBuf;
      if (fBufferRef && !fWritingBuffer) fLast = fBufferRef->Length();
      b << fLast;
      flag = 1;
      if (!fEventOffset)  flag  = 2;
      if (fBufferRef)     flag += 10;
      if (fWritingBuffer) flag  = 0;
      b << flag;
      if (fWritingBuffer) return;
      if (fEventOffset && fNevBuf) {
         b.WriteArray(fEventOffset, fNevBuf);
      }
      if (fBufferRef) {
         char *buf  = fBufferRef->Buffer();
         b.WriteArray(buf, fBufferSize);
      }
   }
}

//_______________________________________________________________________
void TBasket::Update(Int_t offset)
{
//    Update basket header and EventOffset table

   if (fEventOffset) {
      if (fNevBuf+1 >= fNevBufSize) {
         Int_t newsize = TMath::Max(10,2*fNevBufSize);
         Int_t *newoff = (Int_t*)TStorage::ReAlloc(fEventOffset,
                               newsize*sizeof(Int_t),fNevBufSize*sizeof(Int_t));
         fEventOffset  = newoff;
         fNevBufSize   = newsize;
         //Update branch only for the first 10 baskets
         if (fBranch->GetWriteBasket() < 10) fBranch->SetEventOffsetLen(newsize);
      }
      fEventOffset[fNevBuf] = offset;
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
//*-*- Transfer fEventOffset table at the end of fBuffer. Offsets to fBuffer
//     are transformed in event length to optimize compression algorithm.
   fLast      = fBufferRef->Length();
   if (fEventOffset) {
      fBufferRef->WriteArray(fEventOffset,fNevBuf+1);
      delete [] fEventOffset; fEventOffset = 0;
   }

   Int_t lbuf, nout;
   lbuf       = fBufferRef->Length();
   fObjlen    = lbuf - fKeylen;

   fWritingBuffer = kTRUE;
   fCycle = fBranch->GetWriteBasket();
   Int_t cxlevel = fBranch->GetCompressionLevel();
   if (cxlevel) {
      if (cxlevel == 2) cxlevel--;
      Int_t buflen = fKeylen + fObjlen + 8; //add 8 bytes in case object is placed in a deleted gap
      fBuffer = new char[buflen];
      char *objbuf = fBufferRef->Buffer() + fKeylen;
      Int_t bufmax = buflen-fKeylen;
      mmzip(cxlevel, &fObjlen, objbuf, &bufmax, &fBuffer[fKeylen], &nout);
      Create(nout);
      fBufferRef->SetBufferOffset(0);
      Streamer(*fBufferRef);         //write key itself again
      memcpy(fBuffer,fBufferRef->Buffer(),fKeylen);
      delete fBufferRef; fBufferRef = 0;
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
   fWritingBuffer = kFALSE;

   cursav->cd();
   return fKeylen+nout;
}
