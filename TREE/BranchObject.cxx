//*CMZ :  2.20/01 01/12/98  11.09.56  by  Rene Brun
//*CMZ :  2.00/11 19/08/98  21.30.57  by  Rene Brun
//*CMZ :  2.00/08 04/06/98  20.33.49  by  Rene Brun
//*CMZ :  2.00/01 09/03/98  15.32.13  by  Rene Brun
//*CMZ :  2.00/00 23/02/98  11.00.07  by  Rene Brun
//*CMZ :  1.03/09 11/12/97  15.44.18  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

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
// TBranchObject                                                        //
//                                                                      //
// A Branch for the case of an object                                   //                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TFile.h"
#include "TBranchObject.h"
#include "TBranchClones.h"
#include "TTree.h"
#include "TBasket.h"
#include "TLeafObject.h"
#include "TVirtualPad.h"
#include "TClass.h"
#include "TRealData.h"
#include "TDataType.h"
#include "TDataMember.h"
#include "TBrowser.h"

R__EXTERN  TTree *gTree;

ClassImp(TBranchObject)

//______________________________________________________________________________
TBranchObject::TBranchObject(): TBranch()
{
//*-*-*-*-*-*Default constructor for BranchObject*-*-*-*-*-*-*-*-*-*
//*-*        ====================================

   fNleaves   = 1;
   fOldObject = 0;
}


//______________________________________________________________________________
TBranchObject::TBranchObject(const Text_t *name, const Text_t *classname, void *addobj, Int_t basketsize, Int_t splitlevel, Int_t compress)
    :TBranch()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a BranchObject*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =====================
//
   TClass *cl      = gROOT->GetClass(classname);
   if (!cl) return;
   if (!cl->GetListOfRealData())  cl->BuildRealData();
   SetName(name);
   SetTitle(name);
   fCompress = compress;
   if (compress == -1) {
      TFile *bfile = gTree->GetDirectory()->GetFile();
      if (bfile) fCompress = bfile->GetCompressionLevel();
   }
   if (basketsize < 100) basketsize = 100;
   fBasketSize     = basketsize;
   fAddress        = (char*)addobj;
   fClassName      = classname;
   fBasketEvent    = new Int_t[fMaxBaskets];
   fBasketSeek     = new Seek_t[fMaxBaskets];
   fOldObject      = 0;

   fBasketEvent[0] = fEventNumber;

   TLeaf *leaf     = new TLeafObject(name,classname);
   leaf->SetBranch(this);
   leaf->SetAddress(addobj);
   fNleaves = 1;
   fLeaves.Add(leaf);
   gTree->GetListOfLeaves()->Add(leaf);

//*-*-  Create the first basket
   fTree       = gTree;
   fDirectory  = fTree->GetDirectory();
   fFileName   = "";

   if (splitlevel) return;
   TBasket *basket = new TBasket(name,fTree->GetName(),this);
   fBaskets.Add(basket);
}


//______________________________________________________________________________
TBranchObject::~TBranchObject()
{
//*-*-*-*-*-*Default destructor for a BranchObject*-*-*-*-*-*-*-*-*-*-*-*
//*-*        =====================================

   fBranches.Delete();
}


//______________________________________________________________________________
void TBranchObject::Browse(TBrowser *b)
{

   Int_t nbranches = fBranches.GetEntriesFast();
   if (nbranches > 1) {
      fBranches.Browse( b );
   }
}

//______________________________________________________________________________
Int_t TBranchObject::Fill()
{
//*-*-*-*-*-*-*-*Loop on all leaves of this branch to fill Basket buffer*-*-*
//*-*            =======================================================

   Int_t nbytes = 0;
   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   if (nbranches) {
      fEntries++;
      for (i=0;i<nbranches;i++)  {
         TBranch *branch = (TBranch*)fBranches[i];
         if (!branch->TestBit(kDoNotProcess)) nbytes += branch->Fill();
      }
   } else {
      if (!TestBit(kDoNotProcess)) nbytes += TBranch::Fill();
   }
   return nbytes;
}

//______________________________________________________________________________
Int_t TBranchObject::GetEvent(Int_t event)
{
//*-*-*-*-*Read all branches of a BranchObject and return total number of bytes
//*-*      ====================================================================
//   If event = 0 take current event number + 1
//   If event < 0 reset event number to 0

   const Int_t kWarn = BIT(12);
   Int_t nbytes;
   Int_t nbranches = fBranches.GetEntriesFast();
   if (nbranches) {
      if (fAddress == 0) { // try to create object
         if (!TestBit(kWarn)) {
            TClass *cl = gROOT->GetClass(fClassName);
            if (cl) {
               TObject *obj = (TObject*)cl->New();
               SetAddress(obj);
            } else {
               Warning("GetEvent","Cannot get class: %s",fClassName.Data());
               SetBit(kWarn);
            }
         }
      }
      nbytes = 0;
      for (Int_t i=0;i<nbranches;i++)  {
         TBranch *branch = (TBranch*)fBranches[i];
            nbytes += branch->GetEvent(event);
      }
   } else {
      nbytes = TBranch::GetEvent(event);
   }
   return nbytes;
}


//______________________________________________________________________________
Bool_t TBranchObject::IsFolder()
{
//*-*-*-*-*Return TRUE if more than one leaf, FALSE otherwise*-*
//*-*      ==================================================

   Int_t nbranches = fBranches.GetEntriesFast();
   if (nbranches >= 1) return kTRUE;
   else                return kFALSE;
}

//______________________________________________________________________________
void TBranchObject::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*Print TBranch parameters*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   if (nbranches) {
      Printf("*Branch  :%-9s : %-54s *",GetName(),GetTitle());
      Printf("*Entries : %8d : BranchObject (see below)                               *",Int_t(fEntries));
      Printf("*............................................................................*");
      for (i=0;i<nbranches;i++)  {
         TBranch *branch = (TBranch*)fBranches[i];
         branch->Print(option);
      }
   } else {
      TBranch::Print(option);
   }
}

//______________________________________________________________________________
void TBranchObject::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset a Branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//
//    Existing buffers are deleted
//    Entries, max and min are reset
//

   TBranch::Reset(option);

   Int_t i;
   Int_t nbranches = fBranches.GetEntriesFast();
   for (i=0;i<nbranches;i++)  {
      TBranch *branch = (TBranch*)fBranches[i];
      branch->Reset(option);
   }
}

//______________________________________________________________________________
void TBranchObject::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*Set address of this branch*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            ====================
//

   Int_t nbranches = fBranches.GetEntriesFast();
   TLeaf *leaf = (TLeaf*)fLeaves.UncheckedAt(0);
   if (leaf) leaf->SetAddress(add);
   TBranch *branch;
   fAddress = (char*)add;
   char *pointer   = fAddress;
   void **ppointer = (void**)add;
   TObject *obj = (TObject*)(*ppointer);
   TClass *cl = gROOT->GetClass(fClassName.Data());
   if (!obj && cl) {
      obj = (TObject*)cl->New();
   }
   Int_t i, offset;
   if (!cl) {
      for (i=0;i<nbranches;i++)  {
         branch  = (TBranch*)fBranches[i];
         pointer = (char*)obj;
         branch->SetAddress(pointer);
      }
      return;
   }
   if (!cl->GetListOfRealData())  cl->BuildRealData();
   const char *rdname;
   TRealData *rd;
   TIter      next(cl->GetListOfRealData());
   while ((rd = (TRealData *) next())) {
      TDataMember *dm = rd->GetDataMember();
      if (!dm->IsPersistent()) continue;
      rdname = rd->GetName();
      TDataType *dtype = dm->GetDataType();
      Int_t code = 0;
      if (dtype) code = dm->GetDataType()->GetType();
      offset  = rd->GetThisOffset();
      pointer = (char*)obj + offset;
      branch  = 0;
      if (dm->IsaPointer()) {
         TClass *clobj = 0;
         if (!dm->IsBasic()) clobj = gROOT->GetClass(dm->GetTypeName());
         if (clobj && !strcmp("TClonesArray",clobj->GetName())) {
            branch = (TBranch*)fBranches.FindObject(&rdname[1]);
         } else {
            if (!clobj) {
               if (code != 1) continue;
               branch = (TBranch*)fBranches.FindObject(&rdname[0]);
            } else {
               if (!clobj->InheritsFrom(TObject::Class())) continue;
               branch = (TBranch*)fBranches.FindObject(&rdname[1]);
            }
         }
      } else {
         if (dm->IsBasic()) {
            branch = (TBranch*)fBranches.FindObject(&rdname[0]);
         }
      }
      if(branch) branch->SetAddress(pointer);
   }
}

//______________________________________________________________________________
void TBranchObject::SetBasketSize(Int_t buffsize)
{
//*-*-*-*-*-*-*-*Reset basket size for all subbranches of this branchobject
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

//______________________________________________________________________________
void TBranchObject::UpdateAddress()
{
//*-*-*-*-*-*-*-*Update branch addresses if a new object was created*-*-*
//*-*            ===================================================
//

   void **ppointer = (void**)fAddress;
   if (ppointer == 0) return;
   TObject *obj = (TObject*)(*ppointer);
   if (obj != fOldObject) {
      fOldObject = obj;
      SetAddress(fAddress);
   }
}
