//*CMZ :  2.20/00 21/11/98  17.34.16  by  Rene Brun
//*CMZ :  2.00/12 15/09/98  16.35.30  by  Fons Rademakers
//*CMZ :  2.00/11 20/08/98  08.49.23  by  Rene Brun
//*CMZ :  2.00/08 04/06/98  19.12.17  by  Rene Brun
//*CMZ :  2.00/00 05/04/98  17.02.28  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  16.18.34  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/97

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
// TChain                                                               //
//                                                                      //
// A chain is a collection of files containg TTree objects.             //
// When the chain is created, the first parameter is the default name   //
// for the Tree to be processed later on.                               //
//                                                                      //
// Enter a new element in the chain via the TChain::Add function.       //
// Once a chain is defined, one can use the normal TTree functions      //
// to Draw,Scan,etc.                                                    //
//                                                                      //
// Use TChain::SetBranchStatus to activate one or more branches for all //
// the trees in the chain.                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TChain.h"
#include "TTree.h"
#include "TFile.h"
#include "TSelector.h"
#include "TBranch.h"
#include "TLeaf.h"
#include "TBrowser.h"
#include "TChainElement.h"
#include "TTreeFormula.h"

ClassImp(TChain)

//______________________________________________________________________________
TChain::TChain(): TTree()
{
//*-*-*-*-*-*Default constructor for Chain*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ==============================

   fTreeOffsetLen  = 100;
   fNtrees         = 0;
   fTreeNumber     = -1;
   fTreeOffset     = 0;
   fTree           = 0;
   fFile           = 0;
   fNbranches      = 0;
   fFiles          = new TObjArray(fTreeOffsetLen );
   fStatus         = new TList();
}

//______________________________________________________________________________
TChain::TChain(const Text_t *name, const Text_t *title)
       :TTree(name,title)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a Chain*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//
//   A TChain is a collection of TFile objects.
//    the first parameter "name" is the name of the TTree object
//    in the files added with Add.
//   Use TChain::Add to add a new element to this chain.
//
//    Example:
//  Suppose we have 3 files f1.root, f2.root and f3.root. Each file
//  contains a TTree object named "T".
//     TChain ch("T");  creates a chain to process a Tree called "T"
//     ch.Add("f1.root");
//     ch.Add("f2.root");
//     ch.Add("f3.root");
//     ch.Draw("x");
//       The Draw function above will process the variable "x" in Tree "T"
//       reading sequentially the 3 files in the chain ch.
//
//*-*

   fTreeOffsetLen  = 100;
   fNtrees         = 0;
   fTreeNumber     = -1;
   fTreeOffset     = new Int_t[fTreeOffsetLen];
   fTree           = 0;
   fNbranches      = 0;
   fFile           = 0;
   fFiles          = new TObjArray(fTreeOffsetLen );
   fStatus         = new TList();
   fTreeOffset[0]  = 0;
   fDirectory      = 0;
   TChainElement *element = new TChainElement("*","");
   fStatus->Add(element);
   if (gDirectory) gDirectory->GetList()->Remove(this);
   gROOT->cd();
}

//______________________________________________________________________________
TChain::~TChain()
{
//*-*-*-*-*-*Default destructor for a Chain*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ==============================

   if (fFile) {delete fFile; fFile = 0;}
   fDirectory = 0;
   delete [] fTreeOffset;
   fFiles->Delete();
   delete fFiles;
   fStatus->Delete();
   delete fStatus;
}


//______________________________________________________________________________
void TChain::Add(const Text_t *name)
{
//       Add a new element to this chain.
//       An element can be the name of another chain or the name of a file
//       containing a tree.
//    name may have the following format:
//       //machine/file_name.root/subdir/tree_name
//      machine, subdir and tree_name are optional. If tree_name is missing,
//      the chain name will be assumed.
//

   TDirectory *cursav = gDirectory;
   char *treename = (char*)GetName();
   char *dot = strstr(name,".root");
   if (!dot) {
      Error("Add","a chain element name must contain the string .root");
      return;
   }

   //Check enough space in fTreeOffset
   if (fNtrees+1 >= fTreeOffsetLen) {
      fTreeOffsetLen *= 2;
      Int_t *trees = new Int_t[fTreeOffsetLen];
      for (Int_t i=0;i<=fNtrees;i++) trees[i] = fTreeOffset[i];
      delete [] fTreeOffset;
      fTreeOffset = trees;
   }

   //Search for a a slash between the .root and the end
   Int_t nch = strlen(name);
   char *filename = new char[nch+1];
   strcpy(filename,name);
   char *pos = strstr(filename,".root") + 5;
   while (*pos) {
      if (*pos == '/') {
         treename = pos+1;
         *pos = 0;
         break;
      }
      pos++;
   }

   //Connect the file to get the number of entries
   TFile *file = new TFile(filename);
   if (file->IsZombie()) {
      delete file;
      delete [] filename;
      return;
   }

   //Check that tree with the right name exists in the file
   TTree *tree = (TTree*)file->Get(treename);
   if (!tree) {
      Error("Add","cannot find tree with name %s", treename);
      delete file;
      delete [] filename;
      return;
   }
   Int_t nentries = (Int_t)tree->GetEntries();

   fTreeOffset[fNtrees+1] = fTreeOffset[fNtrees] + nentries;
   fNtrees++;
   fEntries += nentries;

   TChainElement *element = new TChainElement(treename,filename);
   element->SetPacketSize(tree->GetPacketSize());
   element->SetNumberEntries(nentries);
   fFiles->Add(element);

   delete tree;
   delete file;
   delete [] filename;
   if (cursav) cursav->cd();
}

//______________________________________________________________________________
void TChain::Browse(TBrowser *)
{

}

//_______________________________________________________________________
void TChain::CreatePackets()
{
//*-*-*-*-*-*-*-*-*Initialize the packet descriptor string*-*-*-*-*-*-*-*-*-*
//*-*              =======================================

   TIter next(fFiles);
   TChainElement *element;
   while ((element = (TChainElement*)next())) {
      element->CreatePackets();
   }
}

//______________________________________________________________________________
void TChain::Draw(TCut varexp, TCut selection, Option_t *option, Int_t nevents, Int_t firstevent)
{
   // Draw expression varexp for selected events.
   //
   // This function accepts TCut objects as arguments.
   // Useful to use the string operator +, example:
   //    ntuple.Draw("x",cut1+cut2+cut3);
   //

   TChain::Draw(varexp.GetTitle(), selection.GetTitle(), option, nevents, firstevent);
}

//______________________________________________________________________________
void TChain::Draw(const Text_t *varexp, const Text_t *selection, Option_t *option,Int_t nevents, Int_t firstevent)
{
   // Process all events in this chain and draw histogram
   // corresponding to expression varexp.

   if (LoadTree(firstevent)) return;
   TTree::Draw(varexp,selection,option,nevents,firstevent);
}

//______________________________________________________________________________
Int_t TChain::GetEvent(Int_t event, Int_t getall)
{
//*-*-*-*-*-*-*-*-*Return event in memory*-*-*-*-*-*-*-*-*-*
//*-*              ======================
//     getall = 0 : get only active branches
//     getall = 1 : get all branches

   if (LoadTree(event)) return 0;
   fReadEvent = event - fTreeOffset[fTreeNumber];
   return fTree->GetEvent(fReadEvent,getall);
}


//______________________________________________________________________________
TObjArray *TChain::GetListOfBranches()
{
//*-*-*-*-*-*-*-*-*Return pointer to list of branches of current tree*-*-*-*-*
//*-*              ================================================

   if (fTree) return fTree->GetListOfBranches();
   LoadTree(0);
   if (fTree) return fTree->GetListOfBranches();
   return 0;
}


//______________________________________________________________________________
TObjArray *TChain::GetListOfLeaves()
{
//*-*-*-*-*-*-*-*-*Return pointer to list of leaves of current tree*-*-*-*-*
//*-*              ================================================

   if (fTree) return fTree->GetListOfLeaves();
   LoadTree(0);
   if (fTree) return fTree->GetListOfLeaves();
   return 0;
}

//______________________________________________________________________________
Int_t TChain::LoadTree(Int_t event)
{
//    Load tree corresponding to event

   if (!fNtrees) return 1;
   if (event < 0 || event > fEntries) return 2;

   //Find in which tree this event belongs to
   Int_t t;
   for (t=0;t<fNtrees;t++) {
      if (event < fTreeOffset[t+1]) break;
   }

   fReadEvent = event - fTreeOffset[t];
   // If event belongs to the current tree return event
   if (t == fTreeNumber) {
      return 0;
   }

   //Delete current tree and connect new tree
   TDirectory *cursav = gDirectory;
   delete fFile;
   TChainElement *element = (TChainElement*)fFiles->At(t);
   if (!element) return 0;
   fFile = new TFile(element->GetTitle());
   if (fFile->IsZombie()) {
      delete fFile;
      return 3;
   }
   fTree = (TTree*)fFile->Get(element->GetName());
   fTreeNumber = t;
   fDirectory = fFile;

   //Set the branches status and address for the newly connected file
   fTree->SetMaxVirtualSize(fMaxVirtualSize);
   TIter next(fStatus);
   Int_t status;
   while ((element = (TChainElement*)next())) {
      status = element->GetStatus();
      if (status >=0) fTree->SetBranchStatus(element->GetName(),status);
      void *add = element->GetBaddress();
      if (add) fTree->SetBranchAddress(element->GetName(),add);
   }

   if (cursav) cursav->cd();
   return 0;

}

//______________________________________________________________________________
void TChain::Loop(Option_t *option, Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*Loop on nevents of this chain starting at firstevent
//*-*              ===================================================


   if (LoadTree(firstevent)) return;

   if (firstevent < 0) firstevent = 0;
   Int_t lastevent = firstevent + nevents -1;
   if (lastevent > fEntries-1) {
      lastevent = (Int_t)fEntries -1;
   }

   GetSelector();
   fSelector->Start(option);

   Int_t event = firstevent;
   Int_t tree,e0,en;
   for (tree=0;tree<fNtrees;tree++) {
      e0 = fTreeOffset[tree];
      en = fTreeOffset[tree+1] - 1;
      if (en > lastevent) en = lastevent;
      if (event > en) continue;

      LoadTree(event);
      fSelector->BeginFile();

      while (event <= en) {
         fSelector->Execute(fTree, event - e0);
         event++;
      }
      fSelector->EndFile();
   }

   fSelector->Finish(option);
}


//______________________________________________________________________________
void TChain::ls(Option_t *option)
{
   fFiles->ls(option);
}

//______________________________________________________________________________
void TChain::Merge(const Text_t *name)
{
//     Merge all files in this chain into a new file
// see important note in the following function Merge

   TFile *file = new TFile(name,"recreate","chain files",1);
   Merge(file,0,"");
   file->Close();
   delete file;
}


//______________________________________________________________________________
void TChain::Merge(TFile *file, Int_t basketsize, Option_t *option)
{
//     Merge all files in this chain into a new file
//     if option ="C" is given, the compression level for all branches
//        in the new Tree is set to the file compression level.
//     By default, the compression level of all branches is the
//     original compression level in the old Trees.
//
//     if (basketsize > 1000, the basket size for all branches of the
//     new Tree will be set to basketsize.
//
// IMPORTANT: Before invoking this function, the branch addresses
//            of the TTree must have been set.
//  example using the file generated in $ROOTSYS/test/Event
//  merge two copies of Event.root
//
//        gSystem.Load("libEvent");
//        Event *event = new Event();
//        TChain ch("T");
//        ch.SetBranchAddress("event",&event);
//        ch.Add("Event1.root");
//        ch.Add("Event2.root");
//        ch.Merge("all.root");
//
//  The SetBranchAddress statement is not necessary if the Tree
//  contains only basic types (case of files converted from hbook)

   if (!file) return;
   TObjArray *lbranches = GetListOfBranches();
   if (!lbranches) return;
   if (!fTree) return;

// Clone Chain tree
   file->cd();
   TTree *hnew = (TTree*)fTree->CloneTree(0);
   hnew->SetAutoSave(2000000000);

// May be reset branches compression level?
   TBranch *branch;
   TIter nextb(hnew->GetListOfBranches());
   if (strstr(option,"c") || strstr(option,"C")) {
      while ((branch = (TBranch*)nextb())) {
         branch->SetCompressionLevel(file->GetCompressionLevel());
      }
      nextb.Reset();
   }

// May be reset branches basket size?
   if (basketsize > 1000) {
      while ((branch = (TBranch*)nextb())) {
         branch->SetBasketSize(basketsize);
      }
      nextb.Reset();
   }

   Int_t treeNumber = -1;
   Int_t nentries = Int_t(GetEntries());
   for (Int_t i=0;i<nentries;i++) {
      GetEvent(i);
      if (treeNumber != fTreeNumber) {
         treeNumber = fTreeNumber;
         TIter next(fTree->GetListOfBranches());
         while ((branch = (TBranch*)next())) {
            void *add = branch->GetAddress();
            // in case branch addresses have not been set, give a last chance
            // for simple Trees (h2root converted for example)
            if (!add) {
               TLeaf *leaf = GetLeaf(branch->GetName());
               if (!leaf) continue;
               add = leaf->GetValuePointer();
            }
            if (add) hnew->SetBranchAddress(branch->GetName(),add);
            else Warning("Merge","Tree branch addresses not defined");
         }
      }
      hnew->Fill();
   }

// Write new tree header
   hnew->Write();
}


//______________________________________________________________________________
void TChain::Print(Option_t *option)
{
   fFiles->ls(option);
}

//_______________________________________________________________________
void TChain::SetBranchAddress(const Text_t *bname, void *add)
{
//*-*-*-*-*-*-*-*-*Set branch address*-*-*-*-*-*-*-*
//*-*              ==================
//
//      bname is the name of a branch.
//      add is the address of the branch.

   //Check if bname is already in the Status list
   //Otherwise create a TChainElement object and set its address
   TChainElement *element = (TChainElement*)fStatus->FindObject(bname);
   if (!element) {
      element = new TChainElement(bname,"");
      fStatus->Add(element);
   }

   element->SetBaddress(add);
}

//_______________________________________________________________________
void TChain::SetBranchStatus(const Text_t *bname, Bool_t status)
{
//*-*-*-*-*-*-*-*-*Set branch status Process or DoNotProcess*-*-*-*-*-*-*-*
//*-*              =========================================
//
//      bname is the name of a branch. if bname="*", apply to all branches.
//      status = 1  branch will be processed
//             = 0  branch will not be processed

   //Check if bname is already in the Status list
   //Otherwise create a TChainElement object and set its status
   TChainElement *element = (TChainElement*)fStatus->FindObject(bname);
   if (!element) {
      element = new TChainElement(bname,"");
      fStatus->Add(element);
   }

   element->SetStatus(status);
}

//_______________________________________________________________________
void TChain::SetPacketSize(Int_t size)
{
//*-*-*-*-*-*-*-*-*Set number of events per packet for parallel root*-*-*-*-*
//*-*              =================================================

   fPacketSize = size;
   TIter next(fFiles);
   TChainElement *element;
   while ((element = (TChainElement*)next())) {
      element->SetPacketSize(size);
   }
}

//_______________________________________________________________________
void TChain::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TTree::Streamer(b);
      b >> fTreeOffsetLen;
      b >> fNtrees;
      fFiles->Streamer(b);
      if (fTreeOffsetLen <= 0) return;
   } else {
      b.WriteVersion(TChain::IsA());
      TTree::Streamer(b);
      b << fTreeOffsetLen;
      b << fNtrees;
      fFiles->Streamer(b);
   }
}
