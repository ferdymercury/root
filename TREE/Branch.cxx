//*CMZ :  2.20/03 05/12/98  16.36.38  by  Rene Brun
//*CMZ :  2.20/01 01/12/98  11.08.37  by  Rene Brun
//*CMZ :  2.20/00 04/11/98  08.56.35  by  Rene Brun
//*CMZ :  2.00/12 19/09/98  17.18.37  by  Rene Brun
//*CMZ :  2.00/11 11/09/98  00.31.46  by  Rene Brun
//*CMZ :  2.00/08 04/06/98  20.33.30  by  Rene Brun
//*CMZ :  2.00/06 15/05/98  10.51.03  by  Rene Brun
//*CMZ :  2.00/00 08/03/98  11.38.22  by  Rene Brun
//*CMZ :  1.03/09 15/12/97  09.41.55  by  Rene Brun
//*-- Author :    Rene Brun   12/01/96

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

#include <string.h>
#include <stdio.h>

#include "TROOT.h"
#include "TFile.h"
#include "TBranch.h"
#include "TTree.h"
#include "TBasket.h"
#include "TBrowser.h"
#include "TLeaf.h"
#include "TLeafObject.h"
#include "TLeafB.h"
#include "TLeafC.h"
#include "TLeafI.h"
#include "TLeafF.h"
#include "TLeafS.h"
#include "TLeafD.h"
#include "TVirtualPad.h"

TBranch *gBranch;

R__EXTERN TTree *gTree;

ClassImp(TBranch)

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// A TTree is a list of TBranches                                       //                                                                      //
//                                                                      //
// A TBranch supports:                                                  //
//   - The list of TLeaf describing this branch.                        //
//   - The list of TBasket (branch buffers).                            //
//                                                                      //
//       See TBranch structure in TTree.                                //
//                                                                      //
// See also specialized branches:                                       //
//     TBranchObject in case the branch is one object                   //
//     TBranchClones in case the branch is an array of clone objects    //
//////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
TBranch::TBranch(): TNamed()
{
//*-*-*-*-*-*Default constructor for Branch*-*-*-*-*-*-*-*-*-*
//*-*        ===================================
   fCompress       = 0;
   fBasketSize     = 32000;
   fEventOffsetLen = 1000;
   fMaxBaskets     = 1000;
   fReadBasket     = 0;
   fReadEvent      = -1;
   fWriteBasket    = 0;
   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   fBasketEvent    = 0;
   fBasketSeek     = 0;
   fEventNumber    = 0;
   fNleaves        = 0;
   fTree           = 0;
   fAddress        = 0;
   fOffset         = 0;
   fDirectory      = 0;
   fFileName       = "";
}

//______________________________________________________________________________
TBranch::TBranch(const Text_t *name, void *address, const Text_t *leaflist, Int_t basketsize, Int_t compress)
    :TNamed(name,leaflist)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a Branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                =====================
//
//       * address is the address of the first item of a structure
//         or the address of a pointer to an object (see example).
//       * leaflist is the concatenation of all the variable names and types
//         separated by a colon character :
//         The variable name and the variable type are separated by a slash (/).
//         The variable type may be 0,1 or 2 characters. If no type is given,
//         the type of the variable is assumed to be the same as the previous
//         variable. If the first variable does not have a type, it is assumed
//         of type F by default. The list of currently supported types is given below:
//            - C : a character string terminated by the 0 character
//            - B : an 8 bit signed integer (Char_t)
//            - b : an 8 bit unsigned integer (UChar_t)
//            - S : a 16 bit signed integer (Short_t)
//            - s : a 16 bit unsigned integer (UShort_t)
//            - I : a 32 bit signed integer (Int_t)
//            - i : a 32 bit unsigned integer (UInt_t)
//            - F : a 32 bit floating point (Float_t)
//            - D : a 64 bit floating point (Double_t)
//
//         By default, a variable will be copied to the buffer with the number of
//         bytes specified in the type descriptor character. However, if the type
//         consists of 2 characters, the second character is an integer that
//         specifies the number of bytes to be used when copying the variable
//         to the output buffer. Example:
//             X         ; variable X, type Float_t
//             Y/I       : variable Y, type Int_t
//             Y/I2      ; variable Y, type Int_t converted to a 16 bits integer
//
//   See an example of a Branch definition in the TTree constructor.
//
//   Note that in case the data type is an object, this branch can contain
//   only this object.
//
//    Note that this function is invoked by TTree::Branch
//
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   fCompress = compress;
   if (compress == -1) {
      TFile *bfile = gTree->GetDirectory()->GetFile();
      if (bfile) fCompress = bfile->GetCompressionLevel();
   }
   if (basketsize < 100) basketsize = 100;
   fBasketSize     = basketsize;
   fEventOffsetLen = 0;
   fMaxBaskets     = 1000;
   fReadBasket     = 0;
   fReadEvent      = -1;
   fWriteBasket    = 0;
   fEventNumber    = 0;
   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   fOffset         = 0;
   fNleaves        = 0;
   fAddress        = (char*)address;
   fBasketEvent    = new Int_t[fMaxBaskets];
   fBasketSeek     = new Seek_t[fMaxBaskets];
   fBasketEvent[0] = fEventNumber;

//*-*- Decode the leaflist (search for : as separator)
   char * varcur  = (char*)leaflist;
   char * var     = varcur;
   Int_t lenvar   = 0;
   Int_t offset   = 0;
   Int_t lentype  = 4;
   char *leafname = new char[64];
   char *leaftype = new char[32];
   strcpy(leaftype,"F");
   while (1) {
      lenvar++;
      if (*var == ':' || *var == 0) {
         strncpy(leafname,varcur,lenvar-1);
         leafname[lenvar-1] = 0;
         char *ctype = strstr(leafname,"/");
         if (ctype)  { *ctype=0; strcpy(leaftype,ctype+1);}
         TLeaf *leaf = 0;
         if (*leaftype == 'C') {
            lentype = 1;
            leaf = new TLeafC(leafname,leaftype);
         } else if (*leaftype == 'B') {
            lentype = 1;
            leaf = new TLeafB(leafname,leaftype);
         } else if (*leaftype == 'b') {
            lentype = 1;
            leaf = new TLeafB(leafname,leaftype);
            leaf->SetUnsigned();
         } else if (*leaftype == 'S') {
            lentype = 2;
            leaf = new TLeafS(leafname,leaftype);
         } else if (*leaftype == 's') {
            lentype = 2;
            leaf = new TLeafS(leafname,leaftype);
            leaf->SetUnsigned();
         } else if (*leaftype == 'I') {
            lentype = 4;
            leaf = new TLeafI(leafname,leaftype);
         } else if (*leaftype == 'i') {
            lentype = 4;
            leaf = new TLeafI(leafname,leaftype);
            leaf->SetUnsigned();
         } else if (*leaftype == 'F') {
            lentype = 4;
            leaf = new TLeafF(leafname,leaftype);
         } else if (*leaftype == 'D') {
            lentype = 8;
            leaf = new TLeafD(leafname,leaftype);
         }
         if (!leaf) {
           Error("TLeaf","Illegal data type");
           return;
         }
         leaf->SetBranch(this);
         leaf->SetAddress((char*)(fAddress+offset));
         leaf->SetOffset(offset);
         if (leaf->GetLeafCount()) fEventOffsetLen = 1000;
         if (leaf->InheritsFrom("TLeafC")) fEventOffsetLen = 1000;
         fNleaves++;
         fLeaves.Add(leaf);
         gTree->GetListOfLeaves()->Add(leaf);
         if (*var == 0) break;
         varcur  = var+1;
         offset += lentype*leaf->GetLen();
         lenvar  = 0;
      }
      var++;
   }
   delete [] leafname;
   delete [] leaftype;

//*-*-  Create the first basket
   fTree       = gTree;
   fDirectory  = fTree->GetDirectory();
   fFileName   = "";

   TBasket *basket = new TBasket(name,fTree->GetName(),this);
   fBaskets.AddAt(basket,0);
}

//______________________________________________________________________________
TBranch::~TBranch()
{
//*-*-*-*-*-*Default destructor for a Branch*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   fLeaves.Delete();
   fBaskets.Delete();
   if (fBasketEvent) delete [] fBasketEvent;
   if (fBasketSeek)  delete [] fBasketSeek;
   // Warning. Must use FindObject by name instead of fDirectory->GetFile()
   // because two branches<may point to the same file and the file
   // already deleted in the previous branch
   if (fDirectory && fDirectory != fTree->GetDirectory()) {
      TFile *file = (TFile*)gROOT->GetListOfFiles()->FindObject(GetFileName());
      if (file ) delete file;
   }
   fBasketEvent = 0;
   fBasketSeek  = 0;
   fTree        = 0;
   fDirectory   = 0;
}


//______________________________________________________________________________
void TBranch::Browse(TBrowser *b)
{
   // Browser interface.

   if (fNleaves > 1) {
      fLeaves.Browse(b);
   } else {
      GetTree()->Draw(GetName());
      if (gPad) gPad->Update();
   }
}

//______________________________________________________________________________
void TBranch::DropBaskets()
{
//   Loop on all branch baskets. Drop all except readbasket

   TBasket *basket;
   Int_t nbaskets = GetListOfBaskets()->GetEntriesFast();
   for (Int_t j=0;j<nbaskets-1;j++)  {
      if (j == fReadBasket || j == fWriteBasket) continue;
      basket = (TBasket*)fBaskets[j];
      if (!basket) continue;
      basket->DropBuffers();
      GetListOfBaskets()->Remove(basket);
      delete basket;
      if (!fTree->MemoryFull(0)) break;
   }
}

//______________________________________________________________________________
Int_t TBranch::Fill()
{
//*-*-*-*-*-*-*-*Loop on all leaves of this branch to fill Basket buffer*-*-*
//*-*            =======================================================

   if (TestBit(kDoNotProcess)) return 0;

   TBasket *basket = GetBasket(fWriteBasket);
   if (!basket) return 0;
   TBuffer *buf    = basket->GetBufferRef();

//*-*- Fill basket buffer
   Int_t nsize  = 0;
   if (buf->IsReading()) {
      basket->SetWriteMode();
   }
   buf->ResetMap();
   Int_t lold = buf->Length();
   basket->Update(lold);
   fEntries++;
   fEventNumber++;
   for (Int_t i=0;i<fNleaves;i++) {
      TLeaf *leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      leaf->FillBasket(*buf);
   }
   Int_t lnew   = buf->Length();
   Int_t nbytes = lnew - lold;
   if (fEventOffsetLen) {
      Int_t nevbuf = basket->GetNevBuf();
      nsize = nevbuf*sizeof(Int_t); //total size in bytes of EventOffset table
   } else {
      if (!basket->GetNevBufSize()) basket->SetNevBufSize(nbytes);
   }

//*-*- Should we create a new basket?
   if (lnew +2*nsize +nbytes >= fBasketSize) {
      Int_t nout  = basket->WriteBuffer();    //  Write buffer
      fBasketSeek[fWriteBasket]  = basket->GetSeekKey();
      Int_t addbytes = basket->GetObjlen() + basket->GetKeylen() ;
      if (fDirectory != gROOT) {
         delete basket;
         fBaskets[fWriteBasket] = 0;
      }
      fZipBytes += nout;
      fTotBytes += addbytes;
      fTree->AddTotBytes(addbytes);
      fTree->AddZipBytes(nout);
      basket = new TBasket(GetName(),fTree->GetName(),this);   //  create a new basket
      fWriteBasket++;
      fBaskets.AddAtAndExpand(basket,fWriteBasket);
      if (fWriteBasket >= fMaxBaskets) {
           //Increase BasketEvent buffer of a minimum of 10 locations
           // and a maximum of 50 per cent of current size
         Int_t newsize = TMath::Max(10,Int_t(1.5*fMaxBaskets));
         Int_t *newbuf = (Int_t*)TStorage::ReAlloc(fBasketEvent,
                         newsize*sizeof(Int_t),fMaxBaskets*sizeof(Int_t));
         fBasketEvent  = newbuf;
         Seek_t *nseek = (Seek_t*)TStorage::ReAlloc(fBasketSeek,
                         newsize*sizeof(Seek_t),fMaxBaskets*sizeof(Seek_t));
         fBasketSeek   = nseek;
         fMaxBaskets   = newsize;
      }
      fBasketEvent[fWriteBasket] = fEventNumber;
      fBasketSeek[fWriteBasket]  = 0;
   }
   return nbytes;

}

//______________________________________________________________________________
TBasket *TBranch::GetBasket(Int_t basketnumber)
{
//*-*-*-*-*Return pointer to basket basketnumber in this Branch*-*-*-*-*-*
//*-*      ====================================================

      // reference to an existing basket in memory ?
   if (basketnumber <0 || basketnumber > fWriteBasket) return 0;
   TBasket *basket = (TBasket*)fBaskets[basketnumber];
   if (basket) return basket;

      // must create a new basket
   gBranch = this;
   Int_t nb = 1000;
   TBuffer *buffer = new TBuffer(TBuffer::kRead, nb);
   basket = new TBasket();
   char *buf = buffer->Buffer();

     // get basket from the branch file
   TDirectory *cursav = gDirectory;
   TFile *file = GetFile(0);
   file->Seek(fBasketSeek[basketnumber]);
   file->ReadBuffer(buf,nb);
   basket->Streamer(*buffer);
   if (basket->GetKeylen() > nb) {
      Warning("GetBasket","Estimated keylen too small=%d",basket->GetKeylen());
   }
   cursav->cd();
   delete buffer;
   fBaskets[basketnumber] = basket;
   return basket;
}

//______________________________________________________________________________
Seek_t TBranch::GetBasketSeek(Int_t basketnumber)
{
//*-*-*-*-*Return address of basket in the file*-*-*-*-*-*
//*-*      ====================================

   if (basketnumber <0 || basketnumber > fWriteBasket) return 0;
   return fBasketSeek[basketnumber];
}


//______________________________________________________________________________
Int_t TBranch::GetEvent(Int_t event)
{
//*-*-*-*-*-*Read all leaves of event and return total number of bytes*-*-*
//*-*        =========================================================

   if (fReadEvent == event) return 1;
   if (event < 0 || event >= fEventNumber) return 0;
   Int_t nbytes;
   Int_t first  = fBasketEvent[fReadBasket];
   Int_t last;
   if (fReadBasket == fWriteBasket) last = fEventNumber - 1;
   else                             last = fBasketEvent[fReadBasket+1] - 1;
//
//      Are we still in the same ReadBasket?
   if (event < first || event > last) {
      fReadBasket = TMath::BinarySearch(fWriteBasket+1, fBasketEvent, event);
      first       = fBasketEvent[fReadBasket];
   }

//     We have found the basket containing this event.
//     make sure basket buffers are in memory.
   TBasket *basket = GetBasket(fReadBasket);
   if (!basket) return 0;
   TBuffer *buf    = basket->GetBufferRef();
   if (!buf) {
      basket->ReadBasketBuffers();
      buf    = basket->GetBufferRef();
   }
//     Set event offset in buffer and read data from all leaves
   buf->ResetMap();
   if (!buf->IsReading()) {
      basket->SetReadMode();
   }
   Int_t bufbegin = basket->GetEventPointer(event-first);
   for (Int_t i=0;i<fNleaves;i++) {
      TLeaf *leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      leaf->ReadBasket(*buf);
   }
   nbytes = buf->Length() - bufbegin;
   fReadEvent = event;
   return nbytes;
}

//______________________________________________________________________________
TFile *TBranch::GetFile(Int_t mode)
{
//  Return pointer to the file where branch buffers reside

   if (fDirectory) return fDirectory->GetFile();
   TFile *file;

   // check if a file with this name is in the list of Root files
   file = (TFile*)gROOT->GetListOfFiles()->FindObject(fFileName.Data());
   if (file) {
      fDirectory = (TDirectory*)file;
      return file;
   }

   // Open file (new file if mode = 1)
   if (mode) file = new TFile(fFileName.Data(),"recreate");
   else      file = new TFile(fFileName.Data());
   if (file->IsZombie()) {delete file; return 0;}
   fDirectory = (TDirectory*)file;
   return file;
}

//______________________________________________________________________________
TLeaf *TBranch::GetLeaf(Text_t *name)
{
//*-*-*-*-*-*Return pointer to the 1st Leaf named name in thisBranch-*-*-*-*-*
//*-*        =======================================================

   Int_t i;
   for (i=0;i<fNleaves;i++) {
      TLeaf *leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      if (!strcmp(leaf->GetName(),name)) return leaf;
   }
   return 0;
}


//______________________________________________________________________________
Int_t TBranch::GetRow(Int_t)
{
//*-*-*-*-*Return all elements of one row unpacked in internal array fValues*-*
//*-*      =================================================================

   return 1;
}


//______________________________________________________________________________
Bool_t TBranch::IsFolder()
{
//*-*-*-*-*Return TRUE if more than one leaf, FALSE otherwise*-*
//*-*      ==================================================

   if (fNleaves > 1) return kTRUE;
   else              return kFALSE;
}

//______________________________________________________________________________
void TBranch::Print(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*Print TBranch parameters*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

  const int kLINEND = 77;
  Float_t cx = 1;
  int aLength = strlen (GetTitle());
  aLength += (aLength / 54 + 1) * 80 + 100;
  if (aLength < 200) aLength = 200;
  char *bline = new char[aLength];
  if (fZipBytes) cx = fTotBytes/fZipBytes;
  sprintf(bline,"*Branch  :%-9s : %-54s *",GetName(),GetTitle());
  if (strlen(bline) > UInt_t(kLINEND)) {
     int len=strlen(GetTitle());
     char *tmp = new char[strlen(bline)+1];
     strcpy(tmp, GetTitle());
     sprintf(bline,"*Branch  :%-9s : ",GetName());
     int pos = strlen (bline);
     int npos = pos;
     int beg=0, end;
     while (beg < len) {
        for (end=beg+1; end < len-1; end ++)
          if (tmp[end] == ':')  break;
        if (npos + end-beg+1 >= 78) {
           while (npos < kLINEND) {
              bline[pos ++] = ' ';
              npos ++;
           }
           bline[pos ++] = '*';
           bline[pos ++] = '\n';
           bline[pos ++] = '*';
           npos = 1;
           for (; npos < 22; npos ++)
               bline[pos ++] = ' ';
           bline[pos-2] = '|';
        }
        for (int n = beg; n <= end; n ++)
           bline[pos+n-beg] = tmp[n];
        pos += end-beg+1;
        npos += end-beg+1;
        beg = end+1;
     }
     while (npos < kLINEND) {
        bline[pos ++] = ' ';
        npos ++;
     }
     bline[pos ++] = '*';
     bline[pos] = '\0';
     delete[] tmp;
  }
  Printf(bline);
//  Printf("*Branch  :%-9s : %-60s *",GetName(),GetTitle());
  Printf("*Entries : %8d : Total  Size = %9d bytes  File Size  = %10d *",Int_t(fEntries),Int_t(fTotBytes),Int_t(fZipBytes));
  Printf("*Baskets : %8d : Basket Size = %9d bytes  Compression= %6.2f     *",fWriteBasket,fBasketSize,cx);
  Printf("*............................................................................*");
  delete [] bline;
}


//______________________________________________________________________________
void TBranch::ReadBasket(TBuffer &)
{
//*-*-*-*-*-*-*-*Loop on all leaves of this branch to read Basket buffer*-*-*
//*-*            =======================================================

//   fLeaves->ReadBasket(basket);
}

//______________________________________________________________________________
void TBranch::Reset(Option_t *)
{
//*-*-*-*-*-*-*-*Reset a Branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//
//    Existing buffers are deleted
//    Entries, max and min are reset
//

   fBaskets.Delete();
   if (fBasketEvent) delete [] fBasketEvent;
   if (fBasketSeek)  delete [] fBasketSeek;
   fBasketEvent    = 0;
   fReadBasket     = 0;
   fReadEvent      = -1;
   fWriteBasket    = 0;
   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   fEventNumber    = 0;
   fBasketEvent    = new Int_t[fMaxBaskets];
   fBasketSeek     = new Seek_t[fMaxBaskets];
   fBasketEvent[0] = fEventNumber;
   TBasket *basket = new TBasket(GetName(),fTree->GetName(),this);
   fBaskets.AddAt(basket,0);
}

//______________________________________________________________________________
void TBranch::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*Set address of this branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//

   fAddress = (char*)add;
   Int_t i,offset;
   for (i=0;i<fNleaves;i++) {
      TLeaf *leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      offset = leaf->GetOffset();
      if (TestBit(kIsClone)) offset = 0;
      leaf->SetAddress(fAddress+offset);
   }
}

//______________________________________________________________________________
void TBranch::SetFile(TFile *file)
{
//  Set file where this branch writes/reads its buffers
//
   if (file == 0) file = fTree->GetCurrentFile();
   fDirectory = (TDirectory*)file;
   if (file == fTree->GetCurrentFile()) fFileName = "";
   else                                 fFileName = file->GetTitle();
}

//______________________________________________________________________________
void TBranch::SetFile(const char *fname)
{
//  Set file where this branch writes/reads its buffers
//  By default the branch buffers reside in the file where the Tree was created.
//  Branches of the same Tree may be on different files.
//
//  The Root file will be connected only when necessary.
//  If called by TBranch::Fill (via TBasket::WriteFile), the file
//  will be created with the option "recreate".
//  If called by TBranch::GetEvent (via TBranch::GetBasket), the file
//  will be open in read mode.
//
//  To open a file in "update" mode, use TBranch::SetFile(TFile *file).

   fFileName  = fname;
   fDirectory = 0;
}

//_______________________________________________________________________
void TBranch::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      gBranch = this;
      fTree = gTree;
      gROOT->SetReadingBasket(kTRUE);
      Version_t v = b.ReadVersion();
      TNamed::Streamer(b);
      b >> fCompress;
      b >> fBasketSize;
      b >> fEventOffsetLen;
      b >> fMaxBaskets;
      b >> fWriteBasket;
      b >> fEventNumber;
      b >> fEntries;
      b >> fTotBytes;
      b >> fZipBytes;
      b >> fOffset;
      fAddress = 0;
      fBranches.Streamer(b);
      gBranch = this;  // must be set again, was changed in previous statement
      fLeaves.Streamer(b);
      fBaskets.Streamer(b);
      fNleaves = fLeaves.GetEntriesFast();
      fBasketEvent = new Int_t[fMaxBaskets];
      Int_t n  = b.ReadArray(fBasketEvent);
      if (v < 2) {
         fBasketSeek = new Seek_t[fMaxBaskets];
         for (n=0;n<fWriteBasket;n++) {
            fBasketSeek[n] = GetBasket(n)->GetSeekKey();
         }
      } else {
         fBasketSeek = new Seek_t[fMaxBaskets];
         n  = b.ReadArray(fBasketSeek);
      }
      fDirectory = gDirectory;
      if (v > 2) {
         fFileName.Streamer(b);
         if (fFileName.Length() != 0) fDirectory = 0;
      }
      gROOT->SetReadingBasket(kFALSE);
   } else {
      b.WriteVersion(TBranch::IsA());
      TNamed::Streamer(b);
      b << fCompress;
      b << fBasketSize;
      b << fEventOffsetLen;
      b << fMaxBaskets;
      b << fWriteBasket;
      b << fEventNumber;
      b << fEntries;
      b << fTotBytes;
      b << fZipBytes;
      b << fOffset;
      fBranches.Streamer(b);
      fLeaves.Streamer(b);
      fBaskets.Streamer(b);
      b.WriteArray(fBasketEvent,fMaxBaskets);
      b.WriteArray(fBasketSeek, fMaxBaskets);
      fFileName.Streamer(b);

         // if branch is in a separate file save this branch
         // as an independent key
      if (fDirectory && fDirectory != fTree->GetDirectory()) {
         TDirectory *cursav = gDirectory;
         fDirectory->cd();
         fDirectory = 0;  // to avoid recusive calls
         Write();
         fDirectory = gDirectory;
         cursav->cd();
      }
   }
}
