//*CMZ :  2.23/12 30/01/2000  18.22.12  by  Rene Brun
//*CMZ :  2.23/09 11/01/2000  15.17.31by  Rene Brun
//*CMZ :  2.23/07 26/10/99  16.49.52  by  Rene Brun
//*CMZ :  2.22/01 04/08/99  16.35.11  by  Rene Brun
//*CMZ :  2.22/00 08/04/99  14.20.22  by  Rene Brun
//*CMZ :  2.21/07 14/03/99  07.55.47  by  Rene Brun
//*CMZ :  2.20/01 03/03/99  14.18.31  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

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
// A Branch for the case of an array of clone objects                   //                                                                      //
// See TTree.                                                           //                                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TBranchClones.h"
#include "TFile.h"
#include "TTree.h"
#include "TBasket.h"
#include "TClass.h"
#include "TRealData.h"
#include "TDataType.h"
#include "TDataMember.h"
#include "TLeafI.h"

R__EXTERN TTree *gTree;

ClassImp(TBranchClones)

//______________________________________________________________________________
TBranchClones::TBranchClones(): TBranch()
{
//*-*-*-*-*-*Default constructor for BranchClones*-*-*-*-*-*-*-*-*-*
//*-*        ====================================

   fList        = 0;
   fRead        = 0;
   fN           = 0;
   fNdataMax    = 0;
   fBranchCount = 0;
}


//______________________________________________________________________________
TBranchClones::TBranchClones(const char *name, void *pointer, Int_t basketsize, Int_t compress)
    :TBranch()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a BranchClones*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =====================
//
   char leaflist[80];
   char branchname[80];
   char branchcount[64];
   SetName(name);
   if (compress == -1) {
      TFile *bfile = gTree->GetDirectory()->GetFile();
      if (bfile) compress = bfile->GetCompressionLevel();
   }
   char *cpointer  = (char*)pointer;
   char **ppointer = (char**)(cpointer);
   fList     = (TClonesArray*)(*ppointer);
   fAddress  = cpointer;
   fRead     = 0;
   fN        = 0;
   fNdataMax = 0;
   TClass *cl = fList->GetClass();
   if (!cl) return;
   if (!cl->GetListOfRealData())  cl->BuildRealData();

   fClassName = cl->GetName();

//*-*- Create a branch to store the array count
   if (basketsize < 100) basketsize = 100;
   sprintf(leaflist,"%s_/I",name);
   sprintf(branchcount,"%s_",name);
   fBranchCount = new TBranch(branchcount,&fN,leaflist,basketsize);
   fBranchCount->SetBit(kIsClone);
   TLeaf *leafcount = (TLeaf*)fBranchCount->GetListOfLeaves()->UncheckedAt(0);

//*-*-  Add StreamerInfo to Tree list
   fTree       = gTree;
   fDirectory  = fTree->GetDirectory();
   fFileName   = "";
   cl->FillStreamerInfoList(fTree->GetStreamerInfoList());

//*-*-  Create the first basket
   TBasket *basket = new TBasket(branchcount,fTree->GetName(),this);
   fBaskets.Add(basket);

//*-*- Loop on all public data members of the class and its base classes
   const char *itype = 0;
   TRealData *rd;
   TIter      next(cl->GetListOfRealData());
   while ((rd = (TRealData *) next())) {
      TDataMember *member = rd->GetDataMember();
      if (!member->IsBasic()) {
         Warning("BranchClones","Cannot process member:%s",member->GetName());
         continue;
      }
      if (!member->IsPersistent()) continue; //do not process members with a ! as the first
                                             // character in the comment field
      TDataType *membertype = member->GetDataType();
      Int_t type = membertype->GetType();
      if (type == 0) {
         Warning("BranchClones","Cannot process member:%s",member->GetName());
         continue;
      }
      if (type == 1)  itype = "B";
      if (type == 11) itype = "b";
      if (type == 3)  itype = "I";
      if (type == 5)  itype = "F";
      if (type == 8)  itype = "D";
      if (type == 13) itype = "i";
      if (type == 2)  itype = "S";
      if (type == 12) itype = "s";
      sprintf(leaflist,"%s[%s]/%s",member->GetName(),branchcount,itype);
      Int_t comp = compress;
      if (type == 5) comp--;
      sprintf(branchname,"%s.%s",name,rd->GetName());
      TBranch *branch  = new TBranch(branchname,this,leaflist,basketsize,comp);
      branch->SetBit(kIsClone);
      TObjArray *leaves = branch->GetListOfLeaves();
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(0);
      leaf->SetOffset(rd->GetThisOffset());
      leaf->SetLeafCount(leafcount);
      Int_t arraydim = member->GetArrayDim();
      if (arraydim) {
         Int_t maxindex = member->GetMaxIndex(arraydim-1);
         leaf->SetLen(maxindex);
      }
      fBranches.Add(branch);
   }
}


//______________________________________________________________________________
TBranchClones::~TBranchClones()
{
//*-*-*-*-*-*Default destructor for a BranchClones*-*-*-*-*-*-*-*-*-*-*-*
//*-*        =====================================

   delete fBranchCount;
   fBranchCount = 0;
   fBranches.Delete();
   fList = 0;
}


//______________________________________________________________________________
void TBranchClones::Browse(TBrowser *b)
{
   fBranches.Browse( b );
}

//______________________________________________________________________________
Int_t TBranchClones::Fill()
{
//*-*-*-*-*Loop on all Branches of this BranchClones to fill Basket buffer*-*
//*-*      ===============================================================

   Int_t i;
   Int_t nbytes = 0;
   Int_t nbranches = fBranches.GetEntriesFast();
   char **ppointer = (char**)(fAddress);
   if (ppointer == 0) return 0;
   fList = (TClonesArray*)(*ppointer);
   fN    = fList->GetEntriesFast();
   fEntries++;

   if (fN > fNdataMax) {
      fNdataMax = fList->GetSize();
      char branchcount[64];
      sprintf(branchcount,"%s_",GetName());
      TLeafI *leafi = (TLeafI*)fBranchCount->GetLeaf(branchcount);
      leafi->SetMaximum(fNdataMax);
      for (i=0;i<nbranches;i++)  {
         TBranch *branch = (TBranch*)fBranches.UncheckedAt(i);
         TObjArray *leaves = branch->GetListOfLeaves();
         TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(0);
         leaf->SetAddress();
      }
   }
   nbytes += fBranchCount->Fill();
   for (i=0;i<nbranches;i++)  {
      TBranch *branch = (TBranch*)fBranches.UncheckedAt(i);
      TObjArray *leaves = branch->GetListOfLeaves();
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(0);
      leaf->Import(fList, fN);
      nbytes += branch->Fill();
   }
   return nbytes;
}

//______________________________________________________________________________
Int_t TBranchClones::GetEntry(Int_t entry, Int_t getall)
{
//*-*-*-*-*Read all branches of a BranchClones and return total number of bytes
//*-*      ====================================================================

   if (TestBit(kDoNotProcess) && !getall) return 0;
   Int_t nbytes = fBranchCount->GetEntry(entry);
   TLeaf *leafcount = (TLeaf*)fBranchCount->GetListOfLeaves()->UncheckedAt(0);
   fN = Int_t(leafcount->GetValue());
   if (fN <= 0) return 0;

   TBranch *branch;
   Int_t nbranches = fBranches.GetEntriesFast();

     // if fList exists, create clonesarray objects
   if (fList) {
     fList->ExpandCreateFast(fN);
     for (Int_t i=0;i<nbranches;i++)  {
         branch = (TBranch*)fBranches.UncheckedAt(i);
         nbytes += branch->GetEntryExport(entry, getall, fList, fN);
      }
   } else {
      for (Int_t i=0;i<nbranches;i++)  {
         branch = (TBranch*)fBranches.UncheckedAt(i);
         nbytes += branch->GetEntry(entry, getall);
      }
   }
  return nbytes;
}

//______________________________________________________________________________
void TBranchClones::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*Print TBranch parameters*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

   fBranchCount->Print(option);
   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   for (i=0;i<nbranches;i++)  {
      TBranch *branch = (TBranch*)fBranches[i];
      branch->Print(option);
   }
}

//______________________________________________________________________________
void TBranchClones::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset a Branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//
//    Existing buffers are deleted
//    Entries, max and min are reset
//

   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   for (i=0;i<nbranches;i++)  {
      TBranch *branch = (TBranch*)fBranches[i];
      branch->Reset(option);
   }
   fBranchCount->Reset();
}

//______________________________________________________________________________
void TBranchClones::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*Set address of this branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//*-*

   fReadEntry = -1;
   fAddress = (char*)add;
   char **ppointer = (char**)(fAddress);
   fList = (TClonesArray*)(*ppointer);
   fBranchCount->SetAddress(&fN);
}

//______________________________________________________________________________
void TBranchClones::SetBasketSize(Int_t buffsize)
{
//*-*-*-*-*-*-*-*Reset basket size for all subbranches of this branchclones
//*-*            ==========================================================
//

   fBasketSize = buffsize;
   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   for (i=0;i<nbranches;i++)  {
      TBranch *branch = (TBranch*)fBranches[i];
      branch->SetBasketSize(buffsize);
   }
}

//_______________________________________________________________________
void TBranchClones::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   UInt_t R__s, R__c;
   if (b.IsReading()) {
      b.ReadVersion(&R__s, &R__c);
      TNamed::Streamer(b);
      b >> fCompress;
      b >> fBasketSize;
      b >> fEntryOffsetLen;
      b >> fMaxBaskets;
      b >> fWriteBasket;
      b >> fEntryNumber;
      b >> fEntries;
      b >> fTotBytes;
      b >> fZipBytes;
      b >> fOffset;
      b >> fBranchCount;
      fClassName.Streamer(b);
      fBranches.Streamer(b);
      fTree = gTree;
      TBranch *branch;
      TLeaf *leaf;
      Int_t nbranches = fBranches.GetEntriesFast();
      for (Int_t i=0;i<nbranches;i++)  {
         branch = (TBranch*)fBranches[i];
         branch->SetBit(kIsClone);
         leaf = (TLeaf*)branch->GetListOfLeaves()->UncheckedAt(0);
         leaf->SetOffset(0);
      }
      fRead = 1;
      TClass *cl = gROOT->GetClass((const char*)fClassName);
      if (!cl) {
         Warning("Streamer","Unknow class: %s. Cannot read BranchClones: %s",
            fClassName.Data(),GetName());
         return;
      }
      if (!cl->GetListOfRealData())  cl->BuildRealData();
      char branchname[80];
      TRealData *rd;
      TIter      next(cl->GetListOfRealData());
      while ((rd = (TRealData *) next())) {
         TDataMember *member = rd->GetDataMember();
         if (!member->IsBasic())      continue;
         if (!member->IsPersistent()) continue;
         TDataType *membertype = member->GetDataType();
         if (membertype->GetType() == 0) continue;
         sprintf(branchname,"%s.%s",GetName(),rd->GetName());
         branch  = (TBranch*)fBranches.FindObject(branchname);
         if (!branch) continue;
         TObjArray *leaves = branch->GetListOfLeaves();
         leaf = (TLeaf*)leaves->UncheckedAt(0);
         leaf->SetOffset(rd->GetThisOffset());
      }
      b.CheckByteCount(R__s, R__c, TBranchClones::IsA());
   } else {
      R__c = b.WriteVersion(TBranchClones::IsA(), kTRUE);
      TNamed::Streamer(b);
      b << fCompress;
      b << fBasketSize;
      b << fEntryOffsetLen;
      b << fMaxBaskets;
      b << fWriteBasket;
      b << fEntryNumber;
      b << fEntries;
      b << fTotBytes;
      b << fZipBytes;
      b << fOffset;
      b << fBranchCount;
      fClassName.Streamer(b);
      fBranches.Streamer(b);
      b.SetByteCount(R__c, kTRUE);
   }
}
