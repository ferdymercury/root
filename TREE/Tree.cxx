//*CMZ :  2.20/06 17/12/98  09.30.47  by  Rene Brun
//*CMZ :  2.20/05 13/12/98  17.44.24  by  Rene Brun
//*CMZ :  2.20/04 11/12/98  14.57.36  by  Rene Brun
//*CMZ :  2.20/01 01/12/98  11.10.42  by  Rene Brun
//*CMZ :  2.20/00 25/11/98  17.58.57  by  Rene Brun
//*CMZ :  2.00/13 05/11/98  13.24.57  by  Rene Brun
//*CMZ :  2.00/12 23/10/98  12.22.59  by  Rene Brun
//*CMZ :  2.00/11 26/08/98  14.00.04  by  Fons Rademakers
//*CMZ :  2.00/10 30/07/98  13.17.35  by  Rene Brun
//*CMZ :  2.00/09 26/06/98  10.35.04  by  Rene Brun
//*CMZ :  2.00/08 11/06/98  18.33.31  by  Rene Brun
//*CMZ :  2.00/06 22/05/98  14.20.57  by  Rene Brun
//*CMZ :  2.00/05 08/04/98  11.19.53  by  Rene Brun
//*CMZ :  2.00/03 25/03/98  13.17.36  by  Rene Brun
//*CMZ :  2.00/00 08/03/98  11.54.07  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  12.31.15  by  Fons Rademakers
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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TTree                                                                //
//                                                                      //
//  a TTree object has a header with a name and a title.
//  It consists of a list of independent branches (TBranch). Each branch
//  has its own definition and list of buffers. Branch buffers may be
//  automatically written to disk or kept in memory until the Tree attribute
//  fMaxVirtualSize is reached.
//  Variables of one branch are written to the same buffer.
//  A branch buffer is automatically compressed if the file compression
//  attribute is set (default).
//
//  Branches may be written to different files (see TBranch::SetFile).
//
//  The ROOT user can decide to make one single branch and serialize one
//  object into one single I/O buffer or to make several branches.
//  Making one single branch and one single buffer can be the right choice
//  when one wants to process only a subset of all entries in the tree.
//  (you know for example the list of event numbers you want to process).
//  Making several branches is particularly interesting in the data analysis
//  phase, when one wants to histogram some attributes of an object (event)
//  without reading all the attributes.
//Begin_Html
/*
<img src="gif/ttree_classtree.gif">
*/
//End_Html
//
//  ==> TTree *tree = new TTree(name, title, maxvirtualsize)
//     Creates a Tree with name and title. Maxvirtualsize is by default 64Mbytes,
//     maxvirtualsize = 64000000(default) means: Keeps as many buffers in memory until
//     the sum of all buffers is greater than 64 Megabyte. When this happens,
//     memory buffers are written to disk and deleted until the size of all
//     buffers is again below the threshold.
//     maxvirtualsize = 0 means: keep only one buffer in memory.
//
//     Various kinds of branches can be added to a tree:
//       A - simple structures or list of variables. (may be for C or Fortran structures)
//       B - any object (inheriting from TObject). (we expect this option be the most frequent)
//       C - a ClonesArray. (a specialized object for collections of same class objects)
//
//  ==> Case A
//      ======
//     TBranch *branch = tree->Branch(branchname,address, leaflist, bufsize)
//       * address is the address of the first item of a structure
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
//  ==> Case B
//      ======
//     TBranch *branch = tree->Branch(branchname,object, bufsize, splitlevel)
//          object is the address of a pointer to an existing object (derived from TObject).
//        if splitlevel=1 (default), this branch will automatically be split
//          into subbranches, with one subbranch for each data member or object
//          of the object itself. In case the object member is a TClonesArray,
//          the mechanism described in case C is applied to this array.
//        if splitlevel=0, the object is serialized in the branch buffer.
//
//  ==> Case C
//      ======
//     TBranch *branch = tree->Branch(branchname,clonesarray, bufsize, splitlevel)
//         clonesarray is the address of a pointer to a TClonesArray.
//         The TClonesArray is a direct access list of objects of the same class.
//         For example, if the TClonesArray is an array of TTrack objects,
//         this function will create one subbranch for each data member of
//         the object TTrack.
//
//
//  ==> branch->SetAddress(Void *address)
//      In case of dynamic structures changing with each event for example, one must
//      redefine the branch address before filling the branch again.
//      This is done via the TBranch::SetAddress member function.
//
//  ==> tree->Fill()
//      loops on all defined branches and for each branch invokes the Fill function.
//
//         See also the class TNtuple (a simple Tree with only one branch)
//Begin_Html
/*
<img src="gif/tree_layout.gif">
*/
//End_Html
//  =============================================================================
//______________________________________________________________________________
//*-*-*-*-*-*-*A simple example with histograms and a tree*-*-*-*-*-*-*-*-*-*
//*-*          ===========================================
//
//  This program creates :
//    - a one dimensional histogram
//    - a two dimensional histogram
//    - a profile histogram
//    - a tree
//
//  These objects are filled with some random numbers and saved on a file.
//
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//
// #include "TROOT.h"
// #include "TFile.h"
// #include "TH1.h"
// #include "TH2.h"
// #include "TProfile.h"
// #include "TRandom.h"
// #include "TTree.h"
//
//
// TROOT simple("simple","Histograms and trees");
//
// //______________________________________________________________________________
// main(int argc, char **argv)
// {
// // Create a new ROOT binary machine independent file.
// // Note that this file may contain any kind of ROOT objects, histograms,trees
// // pictures, graphics objects, detector geometries, tracks, events, etc..
// // This file is now becoming the current directory.
//   TFile hfile("htree.root","RECREATE","Demo ROOT file with histograms & trees");
//
// // Create some histograms and a profile histogram
//   TH1F *hpx   = new TH1F("hpx","This is the px distribution",100,-4,4);
//   TH2F *hpxpy = new TH2F("hpxpy","py ps px",40,-4,4,40,-4,4);
//   TProfile *hprof = new TProfile("hprof","Profile of pz versus px",100,-4,4,0,20);
//
// // Define some simple structures
//   typedef struct {Float_t x,y,z;} POINT;
//   typedef struct {
//      Int_t ntrack,nseg,nvertex;
//      UInt_t flag;
//      Float_t temperature;
//   } EVENTN;
//   static POINT point;
//   static EVENTN eventn;
//
// // Create a ROOT Tree
//   TTree *tree = new TTree("T","An example of ROOT tree with a few branches");
//   tree->Branch("point",&point,"x:y:z");
//   tree->Branch("eventn",&eventn,"ntrack/I:nseg:nvertex:flag/i:temperature/F");
//   tree->Branch("hpx","TH1F",&hpx,128000,0);
//
//   Float_t px,py,pz;
//   static Float_t p[3];
//
// //--------------------Here we start a loop on 1000 events
//   for ( Int_t i=0; i<1000; i++) {
//      gRandom->Rannor(px,py);
//      pz = px*px + py*py;
//      Float_t random = gRandom->::Rndm(1);
//
// //         Fill histograms
//      hpx->Fill(px);
//      hpxpy->Fill(px,py,1);
//      hprof->Fill(px,pz,1);
//
// //         Fill structures
//      p[0] = px;
//      p[1] = py;
//      p[2] = pz;
//      point.x = 10*(random-1);;
//      point.y = 5*random;
//      point.z = 20*random;
//      eventn.ntrack  = Int_t(100*random);
//      eventn.nseg    = Int_t(2*eventn.ntrack);
//      eventn.nvertex = 1;
//      eventn.flag    = Int_t(random+0.5);
//      eventn.temperature = 20+random;
//
// //        Fill the tree. For each event, save the 2 structures and 3 objects
// //      In this simple example, the objects hpx, hprof and hpxpy are slightly
// //      different from event to event. We expect a big compression factor!
//      tree->Fill();
//   }
//  //--------------End of the loop
//
//   tree->Print();
//
// // Save all objects in this file
//   hfile.Write();
//
// // Close the file. Note that this is automatically done when you leave
// // the application.
//   hfile.Close();
//
//   return 0;
// }
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdio.h>

#include "TROOT.h"
#include "TSystem.h"
#include "TFile.h"
#include "TSelector.h"
#include "TTree.h"
#include "TEventList.h"
#include "TBranchObject.h"
#include "TLeafObject.h"
#include "TLeaf.h"
#include "TLeafB.h"
#include "TLeafC.h"
#include "TLeafI.h"
#include "TLeafF.h"
#include "TLeafS.h"
#include "TLeafD.h"
#include "TBasket.h"
#include "TMath.h"
#include "TH2.h"
#include "TF2.h"
#include "TView.h"
#include "TPolymarker.h"
#include "TPolymarker3d.h"
#include "TDirectory.h"
#include "TBranchClones.h"
#include "TClonesArray.h"
#include "TClass.h"
#include "TRealData.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TVirtualPad.h"
#include "TProfile.h"
#include "TMinuit.h"
#include "TTreeFormula.h"
#include "TGaxis.h"
#include "TBrowser.h"
#include "TStyle.h"
#include "TChain.h"
#include "TProof.h"
#include "TProofServ.h"
#include "TSocket.h"
#include "TSlave.h"
#include "TMessage.h"
#include "TPacketGenerator.h"
#include "TInterpreter.h"
#include "Foption.h"


TTree *gTree;

R__EXTERN TF1 *gF1;
R__EXTERN TH1 *gCurrentHist;
R__EXTERN Foption_t Foption;

const Int_t kForceRead    = BIT(11);

ClassImp(TTree)

//______________________________________________________________________________
TTree::TTree(): TNamed()
{
//*-*-*-*-*-*-*-*-*-*-*Default Tree constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================
   fDirectory      = 0;
   fV1             = 0;
   fV2             = 0;
   fV3             = 0;
   fW              = 0;
   fVar1           = 0;
   fVar2           = 0;
   fVar3           = 0;
   fVar4           = 0;
   fSelect         = 0;
   fTotalBuffers   = 0;
   fOldEventNumber = -1;
   fReadEvent      = -1;
   fUpdate         = 0;
   fDraw           = 0;
   fActiveBranches = 0;
   fSelector       = 0;
   fEventList      = 0;
   fPacketGen      = 0;
   fPacketSize     = 100;
   fTimerInterval  = 0;
}

//______________________________________________________________________________
TTree::TTree(const Text_t *name,const Text_t *title, Int_t maxvirtualsize)
    :TNamed(name,title)
{
//*-*-*-*-*-*-*-*-*-*Normal Tree constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                ======================
//
//   The Tree is created in the current directory
//   Use the various functions Branch below to add branches to this Tree.

   fScanField      = 25;
   fMaxEventLoop   = 1000000000;
   fMaxVirtualSize = maxvirtualsize;
   fDirectory      = gDirectory;
   fV1             = 0;
   fV2             = 0;
   fV3             = 0;
   fW              = 0;
   fVar1           = 0;
   fVar2           = 0;
   fVar3           = 0;
   fVar4           = 0;
   fSelect         = 0;
   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   fAutoSave       = 100000000;
   fSavedBytes     = 0;
   fTotalBuffers   = 0;
   fOldEventNumber = -1;
   fReadEvent      = -1;
   fEstimate       = 10000;
   fUpdate         = 0;
   fDraw           = 0;
   fActiveBranches = 0;
   fEventList      = 0;
   fSelector       = 0;
   fPacketGen      = 0;
   fPacketSize     = 100;
   fTimerInterval  = 0;

   SetFillColor(gStyle->GetHistFillColor());
   SetFillStyle(gStyle->GetHistFillStyle());
   SetLineColor(gStyle->GetHistLineColor());
   SetLineStyle(gStyle->GetHistLineStyle());
   SetLineWidth(gStyle->GetHistLineWidth());
   SetMarkerColor(gStyle->GetMarkerColor());
   SetMarkerStyle(gStyle->GetMarkerStyle());
   SetMarkerSize(gStyle->GetMarkerSize());

   gDirectory->Append(this);
}

//______________________________________________________________________________
TTree::~TTree()
{
//*-*-*-*-*-*-*-*-*-*-*Tree destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =================

   if (fDirectory) fDirectory->GetList()->Remove(this);
   ClearFormula();
   fBranches.Delete();
   fDirectory  = 0;
   delete [] fV1;
   delete [] fV2;
   delete [] fV3;
   delete [] fW;
   delete fPacketGen;
   if (fActiveBranches) {fActiveBranches->Clear();   delete fActiveBranches;}
}

//______________________________________________________________________________
void TTree::AutoSave()
{
//*-*-*-*-*-*-*-*-*-*-*AutoSave tree header every fAutoSave bytes*-*-*-*-*-*
//*-*                  ==========================================
//
//   When large Trees are produced, it is safe to activate the AutoSave
//   procedure. Some branches may have buffers holding many events.
//   AutoSave is automatically called by TTree::Fill when the number of bytes
//   generated since the previous AutoSave is greater than fAutoSave bytes.
//   This function may also be invoked by the user, for example every
//   N events.
//   Each AutoSave generates a new key on the file.
//
//   In case your program crashes before closing the file holding this tree,
//   the file will be automatically recovered when you will connect the file
//   in UPDATE mode.
//   The Tree will be recovered at the status corresponding to the last AutoSave.
//
   if (!fDirectory) return;
   printf("AutoSave Tree:%s after %g bytes written\n",GetName(),fTotBytes);
   fSavedBytes = fTotBytes;
   TDirectory *dirsav = gDirectory;
   fDirectory->cd();
   Write();
   dirsav->cd();
}

//______________________________________________________________________________
TBranch *TTree::Branch(const Text_t *name, void *address, const Text_t *leaflist,Int_t bufsize)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new TTree Branch*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
//
//     This Branch constructor is provided to support non-objects in
//     a Tree. The variables described in leaflist may be simple variables
//     or structures.
//    See the two following constructors for writing objects in a Tree.
//
//    By default the branch buffers are stored in the same file as the Tree.
//    use TBranch::SetFile to specify a different file

   gTree = this;
   TBranch *branch = new TBranch(name,address,leaflist,bufsize);
   fBranches.Add(branch);
   return branch;
}

//______________________________________________________________________________
TBranch *TTree::Branch(const Text_t *name, const Text_t *classname, void *addobj, Int_t bufsize, Int_t splitlevel)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new TTree BranchObject*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
//
//    Build a TBranchObject for an object of class classname.
//    addobj is the address of a pointer to an object of class classname.
//    IMPORTANT: classname must derive from TObject.
//
//    This option requires access to the library where the corresponding class
//    is defined. Accessing one single data member in the object implies
//    reading the full object.
//    See the next Branch constructor for a more efficient storage
//    in case the event consists of arrays of identical objects.
//
//    By default the branch buffers are stored in the same file as the Tree.
//    use TBranch::SetFile to specify a different file

   gTree = this;
   TBranch *branch = new TBranchObject(name,classname,addobj,bufsize,splitlevel);
   fBranches.Add(branch);
   if (!splitlevel) return branch;

   TObjArray *blist = branch->GetListOfBranches();
   const char *rdname;
   const char *dname;
   char branchname[64];
   TClass *cl = gROOT->GetClass(classname);
   if (!cl) return 0;
   if (!cl->GetListOfRealData()) cl->BuildRealData();
   char **apointer = (char**)(addobj);
   TObject *obj = (TObject*)(*apointer);
   Bool_t delobj = kFALSE;
   if (!obj) {
      obj = (TObject*)cl->New();
      obj->SetBit(kZombie);
      delobj = kTRUE;
   }
//*-*- Loop on all public data members of the class and its base classes
   TBranch *branch1 = 0;
   TRealData *rd;
   TIter      next(cl->GetListOfRealData());
   while ((rd = (TRealData *) next())) {
      TDataMember *dm = rd->GetDataMember();
      if (!dm->IsPersistent()) continue; //do not process members with a ! as the first
                                         // character in the comment field
      rdname = rd->GetName();
      dname  = dm->GetName();

  //  Next line now commented, functionality to process arrays is now implemented
  //  the statement is left to show how to use Property() and kIsArray
  //     if (dm->Property() & kIsArray) continue;

      TDataType *dtype = dm->GetDataType();
      Int_t code = 0;
      if (dtype) code = dm->GetDataType()->GetType();

//*-*- Encode branch name. Use real data member name
      sprintf(branchname,"%s",rdname);

      char leaflist[64];
      Int_t offset    = rd->GetThisOffset();
      char *pointer   = (char*)obj + offset;
      if (dm->IsaPointer()) {
         TClass *clobj = 0;
         if (!dm->IsBasic()) clobj = gROOT->GetClass(dm->GetTypeName());
         if (clobj && !strcmp("TClonesArray",clobj->GetName())) {
            branch1 = new TBranchClones(&branchname[1],pointer,bufsize);
            blist->Add(branch1);
         } else {
            if (!clobj) {
               if (code != 1) continue;
               sprintf(leaflist,"%s/%s",dname,"C");
               branch1 = new TBranch(branchname,pointer,leaflist,bufsize);
               branch1->SetTitle(dname);
               blist->Add(branch1);
            } else {
               if (!clobj->InheritsFrom(TObject::Class())) continue;
               branch1 = new TBranchObject(dname,clobj->GetName(),pointer,bufsize,0);
               branch1->SetName(&branchname[1]);  //do not use the first character (*)
               blist->Add(branch1);
            }
         }
      } else {
//*-*-------------Data Member is a basic data type----------
         if (dm->IsBasic()) {
            if      (code ==  1) sprintf(leaflist,"%s/%s",rdname,"B");
            else if (code == 11) sprintf(leaflist,"%s/%s",rdname,"b");
            else if (code ==  2) sprintf(leaflist,"%s/%s",rdname,"S");
            else if (code == 12) sprintf(leaflist,"%s/%s",rdname,"s");
            else if (code ==  3) sprintf(leaflist,"%s/%s",rdname,"I");
            else if (code == 13) sprintf(leaflist,"%s/%s",rdname,"i");
            else if (code ==  5) sprintf(leaflist,"%s/%s",rdname,"F");
            else if (code ==  8) sprintf(leaflist,"%s/%s",rdname,"D");
            branch1 = new TBranch(branchname,pointer,leaflist,bufsize);
            branch1->SetTitle(rdname);
            blist->Add(branch1);
         }
      }
      branch1->SetOffset(offset);
   }
   if (delobj) delete obj;
   return branch;
}

//______________________________________________________________________________
TBranch *TTree::Branch(const Text_t *name, void *clonesaddress, Int_t bufsize, Int_t splitlevel)
{
//*-*-*-*-*-*-*-*-*-*-*Create a new TTree BranchClones*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
//
//    name:    global name of this BranchClones
//    bufsize: buffersize in bytes of each individual data member buffer
//    clonesaddress is the address of a pointer to a TClonesArray.
//
//    This Tree option is provided in case each event consists of one
//    or more arrays of same class objects (tracks, hits,etc).
//    This function creates as many branches as there are public data members
//    in the objects pointed by the TClonesArray. Note that these data members
//    can be only basic data types, not pointers or objects.
//
//    BranchClones have the following advantages compared to the two other
//    solutions (Branch and BranchObject).
//      - When reading the Tree data, it is possible to read selectively
//        a subset of one object (may be just one single data member).
//      - This solution minimizes the number of objects created/destructed.
//      - Data members of the same type are consecutive in the basket buffers,
//        therefore optimizing the compression algorithm.
//      - Array processing notation becomes possible in the query language.
//
//    By default the branch buffers are stored in the same file as the Tree.
//    use TBranch::SetFile to specify a different file


   if (clonesaddress == 0) return 0;
   char *cpointer =(char*)clonesaddress;
   char **ppointer =(char**)cpointer;
   TClonesArray *list = (TClonesArray*)(*ppointer);
   if (list == 0) return 0;
   gTree = this;
   if (splitlevel) {
      TBranchClones *branch = new TBranchClones(name,clonesaddress,bufsize);
      fBranches.Add(branch);
      return branch;
   } else {
      TBranchObject *branch = new TBranchObject(name,list->ClassName(),clonesaddress,bufsize,0);
//      fBranches.Add(branch);
      return branch;
   }
}


//______________________________________________________________________________
void TTree::Browse(TBrowser *b)
{
   fBranches.Browse(b);
}


//______________________________________________________________________________
void TTree::ClearFormula()
{
//*-*-*-*-*-*-*Delete internal buffers*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*          =======================

   delete fVar1;   fVar1 = 0;
   delete fVar2;   fVar2 = 0;
   delete fVar3;   fVar3 = 0;
   delete fVar4;   fVar4 = 0;
   delete fSelect; fSelect = 0;
}

//______________________________________________________________________________
TTree *TTree::CloneTree(Int_t nevents)
{
// Create a clone of this tree and copy nevents
// By default copy all events
//
// IMPORTANT: Before invoking this function, the branch addresses
//            of this TTree must have been set.
// For examples of CloneTree, see tutorials
//  -copytree:
//    Example of Root macro to copy a subset of a Tree to a new Tree
//    The input file has been generated by the program in $ROOTSYS/test/Event
//    with   Event 1000 1 1 1
//  -copytree2:
//    Example of Root macro to copy a subset of a Tree to a new Tree
//    One branch of the new Tree is written to a separate file
//    The input file has been generated by the program in $ROOTSYS/test/Event
//    with   Event 1000 1 1 1

  // we make a full copy of this tree
   TTree *tree = (TTree*)Clone();
   if (tree == 0) return 0;

   tree->Reset();

  // copy branch addresses starting from branches
   Int_t i;
   TObjArray *branches  = GetListOfBranches();
   Int_t nbranches = branches->GetEntriesFast();
   for (i=0;i<nbranches;i++) {
      TBranch *branch = (TBranch*)branches->UncheckedAt(i);
      if (branch->GetAddress()) {
         tree->SetBranchAddress(branch->GetName(),branch->GetAddress());
      }
   }
  // copy branch addresses starting from leaves
   TObjArray *leaves  = GetListOfLeaves();
   TObjArray *tleaves = tree->GetListOfLeaves();
   Int_t nleaves = leaves->GetEntriesFast();
   for (i=0;i<nleaves;i++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(i);
      TBranch *branch = leaf->GetBranch();
      if (branch->GetAddress()) {
         tree->SetBranchAddress(branch->GetName(),branch->GetAddress());
      } else {
         TLeaf *leaf2 = (TLeaf*)tleaves->UncheckedAt(i);
         leaf2->SetAddress(leaf->GetValuePointer());
      }
   }

  // may be copy some events
   if (nevents < 0) nevents = Int_t(fEntries);
   if (nevents > fEntries) nevents = Int_t(fEntries);
   for (i=0;i<nevents;i++) {
      GetEvent(i);
      tree->Fill();
   }
   return tree;
}

//______________________________________________________________________________
void TTree::CompileVariables(const Text_t *varexp, const Text_t *selection)
{
//*-*-*-*-*-*-*Compile input variables and selection expression*-*-*-*-*-*
//*-*          ================================================
//
//  varexp is an expression of the general form e1:e2:e3
//    where e1,etc is a formula referencing a combination of the columns
//  Example:
//     varexp = x     simplest case: draw a 1-Dim distribution of column named x
//            = sqrt(x)            : draw distribution of sqrt(x)
//            = x*y/z
//            = y:sqrt(x) 2-Dim dsitribution of y versus sqrt(x)
//
//  selection is an expression with a combination of the columns
//  Example:
//      selection = "x<y && sqrt(z)>3.2"
//       in a selection all the C++ operators are authorized
//
//

   const Int_t MAXCOL = 4;
   TString title;
   Int_t i,nch,ncols;
   Int_t index[MAXCOL];
//*-*- Compile selection expression if there is one
   fDimension = 0;
   ClearFormula();
   fMultiplicity = 0;
   Int_t force = 0;
   if (strlen(selection)) {
      fSelect = new TTreeFormula("Selection",selection,this);
      if (!fSelect->GetNdim()) {delete fSelect; fSelect = 0; return; }
      if (fSelect->GetMultiplicity() == 1) fMultiplicity = fSelect;
      if (fSelect->GetMultiplicity() == -1) force = 4;
   }
//*-*- if varexp is empty, take first column by default
   nch = strlen(varexp);
   if (nch == 0) {fDimension = 0; return;}
   title = varexp;

//*-*- otherwise select only the specified columns
   ncols  = 1;
   for (i=0;i<nch;i++)  if (title[i] == ':') ncols++;
   if (ncols > 3 ) return;
   MakeIndex(title,index);

   ResetBit(kForceRead);
   if (ncols >= 1) {
      fVar1 = new TTreeFormula("Var1",GetNameByIndex(title,index,0),this);
      if (!fVar1->GetNdim()) { ClearFormula(); return;}
      if (!fMultiplicity && fVar1->GetMultiplicity() == 1) fMultiplicity = fVar1;
      if (!force && fVar1->GetMultiplicity() == -1) force = 1;
   }
   if (ncols >= 2) {
      fVar2 = new TTreeFormula("Var2",GetNameByIndex(title,index,1),this);
      if (!fVar2->GetNdim()) { ClearFormula(); return;}
      if (!fMultiplicity && fVar2->GetMultiplicity() == 1) fMultiplicity = fVar2;
      if (!force && fVar2->GetMultiplicity() == -1) force = 2;
   }
   if (ncols >= 3) {
      fVar3 = new TTreeFormula("Var3",GetNameByIndex(title,index,2),this);
      if (!fVar3->GetNdim()) { ClearFormula(); return;}
      if (!fMultiplicity && fVar3->GetMultiplicity()  == 1) fMultiplicity = fVar3;
      if (!force && fVar3->GetMultiplicity() == -1) force = 3;
   }
   if (force) SetBit(kForceRead);

   fDimension    = ncols;
}

//______________________________________________________________________________
Int_t TTree::CopyEvents(TTree *tree, Int_t nevents)
{
// Copy nevents from tree to this tree
// By default copy all events
// Return number of bytes copied to this tree.

   if (tree == 0) return 0;

   Int_t nbytes = 0;
   Int_t treeEntries = Int_t(tree->GetEntries());
   if (nevents < 0) nevents = treeEntries;
   if (nevents > treeEntries) nevents = treeEntries;
   for (Int_t i=0;i<nevents;i++) {
      tree->GetEvent(i);
      nbytes += Fill();
   }
   return nbytes;
}

//_______________________________________________________________________
void TTree::CreatePacketGenerator(Int_t nevents, Stat_t firstEvent)
{
   // Create or reset the packet generator.

   if (!gProof) return;

   Stat_t lastEvent = firstEvent + nevents - 1;
   if (lastEvent > fEntries-1)
      lastEvent = fEntries - 1;

   if (!fPacketGen)
      fPacketGen = new TPacketGenerator(firstEvent, lastEvent, this, gProof->GetListOfActiveSlaves());
   else
      fPacketGen->Reset(firstEvent, lastEvent, gProof->GetListOfActiveSlaves());
}

//______________________________________________________________________________
void TTree::Draw(TCut varexp, TCut selection, Option_t *option, Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*-*-*Draw expression varexp for specified events-*-*-*-*-*
//*-*                  ===========================================
//
//      This function accepts TCut objects as arguments.
//      Useful to use the string operator +
//         example:
//            ntuple.Draw("x",cut1+cut2+cut3);
//

   TTree::Draw(varexp.GetTitle(), selection.GetTitle(), option, nevents, firstevent);
}

//______________________________________________________________________________
void TTree::Draw(const Text_t *varexp0, const Text_t *selection, Option_t *option,Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*-*-*Draw expression varexp for specified events-*-*-*-*-*
//*-*                  ===========================================
//
//  varexp is an expression of the general form e1:e2:e3
//    where e1,etc is a formula referencing a combination of the columns
//  Example:
//     varexp = x     simplest case: draw a 1-Dim distribution of column named x
//            = sqrt(x)            : draw distribution of sqrt(x)
//            = x*y/z
//            = y:sqrt(x) 2-Dim dsitribution of y versus sqrt(x)
//
//  selection is an expression with a combination of the columns
//  Example:
//      selection = "x<y && sqrt(z)>3.2"
//       in a selection all the C++ operators are authorized
//
//  option is the drawing option
//      see TH1::Draw for the list of all drawing options.
//      If option contains the string "goff", no graphics is generated.
//
//  nevents is the number of events to process (default is all)
//  first is the first event to process (default is 0)
//
//     Saving the result of Draw to an histogram
//     =========================================
//  By default the temporary histogram created is called htemp.
//  If varexp0 contains >>hnew (following the variable(s) name(s),
//  the new histogram created is called hnew and it is kept in the current
//  directory.
//  Example:
//    tree.Draw("sqrt(x)>>hsqrt","y>0")
//    will draw sqrt(x) and save the histogram as "hsqrt" in the current
//    directory.
//
//  By default, the specified histogram is reset.
//  To continue to append data to an existing histogram, use "+" in front
//  of the histogram name;
//    tree.Draw("sqrt(x)>>+hsqrt","y>0")
//      will not reset hsqrt, but will continue filling.
//
//     Making a Profile histogram
//     ==========================
//  In case of a 2-Dim expression, one can generate a TProfile histogram
//  instead of a TH2F histogram by specyfying option=prof or option=profs.
//  The option=prof is automatically selected in case of y:x>>pf
//  where pf is an existing TProfile histogram.
//
//     Saving the result of Draw to a TEventList
//     =========================================
//  TTree::Draw can be used to fill a TEventList object (list of event numbers)
//  instead of histogramming one variable.
//  If varexp0 has the form >>elist , a TEventList object named "elist"
//  is created in the current directory. elist will contain the list
//  of event numbers satisfying the current selection.
//  Example:
//    tree.Draw(">>yplus","y>0")
//    will create a TEventList object named "yplus" in the current directory.
//    In an interactive session, one can type (after TTree::Draw)
//       yplus.Print("all")
//    to print the list of event numbers in the list.
//
//  By default, the specified event list is reset.
//  To continue to append data to an existing list, use "+" in front
//  of the list name;
//    tree.Draw(">>+yplus","y>0")
//      will not reset yplus, but will enter the selected events at the end
//      of the existing list.
//
//      Using a TEventList as Input
//      ===========================
//  Once a TEventList object has been generated, it can be used as input
//  for TTree::Draw. Use TTree::SetEventList to set the current event list
//  Example:
//     TEventList *elist = (TEventList*)gDirectory->Get("yplus");
//     tree->SetEventList(elist);
//     tree->Draw("py");
//
//  Note: Use tree->SetEventList(0) if you do not want use the list as input.
//
//      How to obtain more info from TTree::Draw
//      ========================================
//
//  Once TTree::Draw has been called, it is possible to access useful
//  information still stored in the TTree object via the following functions:
//    -GetSelectedRows()    // return the number of events accepted by the
//                          //selection expression. In case where no selection
//                          //was specified, returns the number of events processed.
//    -GetV1()              //returns a pointer to the float array of V1
//    -GetV2()              //returns a pointer to the float array of V2
//    -GetV3()              //returns a pointer to the float array of V3
//    -GetW()               //returns a pointer to the double array of Weights
//                          //where weight equal the result of the selection expression.
//   where V1,V2,V3 correspond to the expressions in
//   TTree::Draw("V1:V2:V3",selection);
//
//   Example:
//    Root > ntuple->Draw("py:px","pz>4");
//    Root > TGraph *gr = new TGraph(ntuple->GetSelectedRows(),
//                                   ntuple->GetV2(), ntuple->GetV1());
//    Root > gr->Draw("ap"); //draw graph in current pad
//    creates a TGraph object with a number of points corresponding to the
//    number of events selected by the expression "pz>4", the x points of the graph
//    being the px values of the Tree and the y points the py values.
//
//   Important note: By default TTree::Draw creates the arrays obtained
//    with GetV1, GetV2, GetV3, GetW with a length corresponding to the
//    parameter fEstimate. By default fEstimate=10000 and can be modified
//    via TTree::SetEstimate. A possible recipee is to do
//       tree->SetEstimate(tree->GetEntries());
//    You must call SetEstimate if the expected number of selected rows
//    is greater than 10000.
//
//    You can use the option "goff" to turn off the graphics output
//    of TTree::Draw in the above example.
//
//           Automatic interface to TTree::Draw via the TTreeViewer
//           ======================================================
//
//    A complete graphical interface to this function is implemented
//    in the class TTreeViewer.
//    To start the TTreeViewer, three possibilities:
//       - select TTree context menu item "StartViewer"
//       - type the command  "TTreeViewer TV(treeName)"
//       - execute statement "tree->StartViewer();"
//
   TString  opt;
   Text_t *hdefault = (char *)"htemp";
   Text_t *varexp;
   Int_t i,j,hkeep, action;
   opt = option;
   opt.ToLower();
   Text_t *hname = strstr(varexp0,">>");
   TH1 *oldh1 = 0;
   TEventList *elist = 0;
   char htitle[256];
   Bool_t profile = kFALSE;

   gCurrentHist = 0;
   if (hname) {
      hname += 2;
      hkeep  = 1;
      i = strcspn(varexp0,">>");
      varexp = new char[i+1];
      varexp[0] = 0; //necessary if i=0
      Bool_t hnameplus = kFALSE;
      while (*hname == ' ') hname++;
      if (*hname == '+') {
         hnameplus = kTRUE;
         hname++;
         while (*hname == ' ') hname++;
         j = strlen(hname)-1;
         while (j) {
            if (hname[j] != ' ') break;
            hname[j] = 0;
            j--;
         }
      }
      if (i) {
         strncpy(varexp,varexp0,i); varexp[i]=0;
         oldh1 = (TH1*)gDirectory->Get(hname);
         if (oldh1 && !hnameplus) oldh1->Reset();
      } else {
         elist = (TEventList*)gDirectory->Get(hname);
         if (!elist) {
            elist = new TEventList(hname,selection,1000,0);
         }
         if (elist && !hnameplus) elist->Reset();
      }
   } else {
      hname  = hdefault;
      hkeep  = 0;
      varexp = (char*)varexp0;
      if (gDirectory) {
         oldh1 = (TH1*)gDirectory->Get(hname);
         if (oldh1 && !gProofServ) { oldh1->Delete(); oldh1 = 0;}
      }
   }
//*-* Do not process more than fMaxEventLoop events
   if (nevents > fMaxEventLoop) nevents = fMaxEventLoop;

//*-*- Decode varexp and selection

   CompileVariables(varexp, selection);
   if (!fVar1 && !elist) return;

//*-*- In case oldh1 exists, check dimensionality
   Int_t nsel = strlen(selection);
   if (nsel > 1) {
      if (nsel < 80-(Int_t)strlen(htitle))
         sprintf(htitle,"%s {%s}",varexp,selection);
      else
         sprintf(htitle,"%s {...}",varexp);
   } else {
      sprintf(htitle,"%s",varexp);
   }
   if (oldh1) {
      Int_t mustdelete = 0;
      if (oldh1->InheritsFrom("TProfile")) profile = kTRUE;
      if (opt.Contains("prof")) {
         if (!profile) mustdelete = 1;
      } else {
         if (oldh1->GetDimension() != fDimension) mustdelete = 1;
      }
      if (mustdelete) {
         Warning("Draw","Deleting old histogram with different dimensions");
         delete oldh1; oldh1 = 0;
      }
   }

//*-*- Create a default canvas if none exists
   fDraw = 0;
   if (!gPad && !gProofServ && !opt.Contains("goff") && fDimension > 0) {
      if (!gROOT->GetMakeDefCanvas()) return;
      (gROOT->GetMakeDefCanvas())();
   }

//*-*- 1-D distribution
   if (fDimension == 1) {
      action = 1;
      if (!oldh1) {
         fNbins[0] = 100;
         if (gPad && opt.Contains("same")) {
             TH1 *oldhtemp = (TH1*)gPad->GetPrimitive(hdefault);
             if (oldhtemp) {
                fNbins[0] = oldhtemp->GetXaxis()->GetNbins();
                fVmin[0]  = oldhtemp->GetXaxis()->GetXmin();
                fVmax[0]  = oldhtemp->GetXaxis()->GetXmax();
             } else {
                fVmin[0]  = gPad->GetUxmin();
                fVmax[0]  = gPad->GetUxmax();
             }
         } else {
             action = -1;
         }
      }
      TH1F *h1;
      if (oldh1) {
         h1 = (TH1F*)oldh1;
         fNbins[0] = h1->GetXaxis()->GetNbins();  // for proofserv
      } else {
         h1 = new TH1F(hname,htitle,fNbins[0],fVmin[0],fVmax[0]);
         h1->SetLineColor(GetLineColor());
         h1->SetLineWidth(GetLineWidth());
         h1->SetLineStyle(GetLineStyle());
         h1->SetFillColor(GetFillColor());
         h1->SetFillStyle(GetFillStyle());
         h1->SetMarkerStyle(GetMarkerStyle());
         h1->SetMarkerColor(GetMarkerColor());
         h1->SetMarkerSize(GetMarkerSize());
         if (!hkeep) {
            h1->SetBit(kCanDelete);
            h1->SetDirectory(0);
         }
         if (opt.Length() && opt[0] == 'e') h1->Sumw2();
      }

      if (TProof::Active()) {
         CreatePacketGenerator(nevents, firstevent);
         gProof->SendCurrentState();
         if (action == -1) h1->SetBinContent(0,1.0);
         gProof->SendObject(h1);
         if (!hkeep) delete h1;
         char *mess = new char[strlen(varexp0)+strlen(selection)+strlen(option)+128];
         sprintf(mess, "%s %d %d", GetName(), fMaxVirtualSize, fEstimate);
         gProof->Broadcast(mess, kPROOF_TREEDRAW);
         sprintf(mess,"%s->Draw(\"%s\",\"%s\",\"%s\",%d,%d)", GetName(), varexp0,
                 selection, option, nevents, firstevent);
         gProof->Broadcast(mess, kMESS_CINT);
         delete [] mess;
         gProof->Loop(this);
         if (gDirectory) {
            h1 = (TH1F*)gDirectory->Get(hname);
            if (!h1) {
               Error("Draw", "histogram %s not returned by PROOF", hname);
               fDraw = 1;
            } else if (!hkeep) {
               h1->SetBit(kCanDelete);
               h1->SetDirectory(0);
            }
         }
      } else if (gProofServ) {
         Stat_t first;
         fNfill = 0;
         if (h1->GetBinContent(0) > 0) {
            h1->SetBinContent(0,0.0);
            action = -1;
         }
         while (gProofServ->GetNextPacket(nevents, first))
            EventLoop(action, h1, nevents, (Int_t)first, option);
         EventLoop(action, h1, nevents, (Int_t)first, option);

         // Send all created objects back to client
         TObject *obj;
         TIter next(gDirectory->GetList());
         while ((obj = next()))
            if (obj->InheritsFrom(TH1::Class())) { // send only histograms back
               if (gProofServ->GetLogLevel() > 2)
                  printf("Slave %d: %s: Nentries is %.0f\n",
                         gProofServ->GetOrdinal(), obj->GetName(),
                         ((TH1*)obj)->GetEntries());
               gProofServ->GetSocket()->SendObject(obj);
            }
         fDraw = 1;   // do not draw histogram
      } else
         EventLoop(action, h1, nevents, firstevent, option);

      if (!fDraw && !opt.Contains("goff")) h1->Draw(option);

//*-*- 2-D distribution
   } else if (fDimension == 2) {
      action = 2;
      if (!opt.Contains("same") && gPad)  gPad->Clear();
      if (!oldh1 || !opt.Contains("same")) {
         fNbins[0] = 40;
         fNbins[1] = 40;
         if (opt.Contains("prof")) fNbins[1] = 100;
         if (opt.Contains("same")) {
             TH1 *oldhtemp = (TH1*)gPad->GetPrimitive(hdefault);
             if (oldhtemp) {
                fNbins[1] = oldhtemp->GetXaxis()->GetNbins();
                fVmin[1]  = oldhtemp->GetXaxis()->GetXmin();
                fVmax[1]  = oldhtemp->GetXaxis()->GetXmax();
                fNbins[0] = oldhtemp->GetYaxis()->GetNbins();
                fVmin[0]  = oldhtemp->GetYaxis()->GetXmin();
                fVmax[0]  = oldhtemp->GetYaxis()->GetXmax();
             } else {
                fNbins[1] = 40;
                fVmin[1]  = gPad->GetUxmin();
                fVmax[1]  = gPad->GetUxmax();
                fNbins[0] = 40;
                fVmin[0]  = gPad->GetUymin();
                fVmax[0]  = gPad->GetUymax();
             }
         } else {
             action = -2;
         }
      }
      if (profile || opt.Contains("prof")) {
         TProfile *hp;
         if (oldh1) {
            action = 4;
            hp = (TProfile*)oldh1;
         } else {
            if (action < 0) action = -4;
            if (opt.Contains("profs"))
               hp = new TProfile(hname,htitle,fNbins[1],fVmin[1], fVmax[1],"s");
            else
               hp = new TProfile(hname,htitle,fNbins[1],fVmin[1], fVmax[1],"");
            if (!hkeep) {
               hp->SetBit(kCanDelete);
               hp->SetDirectory(0);
            }
            hp->SetLineColor(GetLineColor());
            hp->SetLineWidth(GetLineWidth());
            hp->SetLineStyle(GetLineStyle());
            hp->SetFillColor(GetFillColor());
            hp->SetFillStyle(GetFillStyle());
            hp->SetMarkerStyle(GetMarkerStyle());
            hp->SetMarkerColor(GetMarkerColor());
            hp->SetMarkerSize(GetMarkerSize());
         }

         EventLoop(action,hp,nevents, firstevent, option);

         if (!fDraw && !opt.Contains("goff")) hp->Draw(option);
      } else {
         TH2F *h2;
         if (oldh1) {
            h2 = (TH2F*)oldh1;
         } else {
            h2 = new TH2F(hname,htitle,fNbins[1],fVmin[1], fVmax[1], fNbins[0], fVmin[0], fVmax[0]);
            h2->SetLineColor(GetLineColor());
            h2->SetFillColor(GetFillColor());
            h2->SetFillStyle(GetFillStyle());
            h2->SetMarkerStyle(GetMarkerStyle());
            h2->SetMarkerColor(GetMarkerColor());
            h2->SetMarkerSize(GetMarkerSize());
            if (!hkeep) {
               h2->SetBit(kCanDelete);
               h2->SetDirectory(0);
            }
         }
         Int_t noscat = strlen(option);
         if (opt.Contains("same")) noscat -= 4;
         if (noscat) {
            EventLoop(action,h2,nevents, firstevent, option);
            if (!fDraw && !opt.Contains("goff")) h2->Draw(option);
         } else {
            action = 12;
            if (!oldh1 && !opt.Contains("same")) action = -12;
            EventLoop(action,h2,nevents, firstevent, option);
            if (oldh1 && !fDraw && !opt.Contains("goff")) h2->Draw(option);
         }
      }

//*-*- 3-D distribution
   } else if (fDimension == 3) {
      action = 13;
      if (!opt.Contains("same")) action = -13;
      EventLoop(action,0,nevents, firstevent, option);

//*-* an Event List
   } else {
      action = 5;
      Int_t oldEstimate = fEstimate;
      SetEstimate(1);
      EventLoop(action,elist,nevents, firstevent, option);
      SetEstimate(oldEstimate);
   }
   if (hkeep) delete [] varexp;
}


//______________________________________________________________________________
void TTree::DropBuffers(Int_t)
{
//*-*-*-*-*Drop branch buffers to accomodate nbytes below MaxVirtualsize*-*-*-*

// Be careful not to remove current read/write buffers
   Int_t i,j;
   Int_t ndrop = 0;
   Int_t nleaves = fLeaves.GetEntriesFast();
   TLeaf *leaf;
   TBranch *branch;
   TBasket *basket;
   for (i=0;i<nleaves;i++)  {
      leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      branch = (TBranch*)leaf->GetBranch();
      Int_t nbaskets = branch->GetListOfBaskets()->GetEntriesFast();
      for (j=0;j<nbaskets-1;j++)  {
         if (j == branch->GetReadBasket() || j == branch->GetWriteBasket()) continue;
         basket = branch->GetBasket(j);
         ndrop += basket->DropBuffers();
         if (fTotalBuffers  < fMaxVirtualSize) return;
      }
   }
}


//______________________________________________________________________________
void TTree::EstimateLimits(Int_t, Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*Estimate histogram limits for conditions of input parameters*-*-*-*
//*-*      ============================================================
//
//  The estimation of the limits is based on estimate events
//  The first estimate/2 and the last esstimate/2 events are used.
//  This algorithm is in general good enough to make a reasonable estimation
//  with a small number of events.
//
//  nevents is the number of events to process (default is all)
//  first is the first event to process (default is 0)
//

   Int_t lastevent;
   lastevent = firstevent + nevents -1;
   if (lastevent > fEntries-1) {
      lastevent = (Int_t)fEntries -1;
      nevents   = lastevent - firstevent + 1;
   }
   fVmin[0] = fVmin[1] = fVmin[2] = 1e30;
   fVmax[0] = fVmax[1] = fVmax[2] = -fVmin[0];

   Int_t action = 11;
   EventLoop(action,0,nevents,firstevent);

//*-*- Compute nice limits
   Int_t nchans = fNbins[0];
   if (fVar1) {
      if (fVmin[0] >= fVmax[0]) { fVmin[0] -= 1; fVmax[0] += 1;}
      FindGoodLimits(nchans,fNbins[0],fVmin[0],fVmax[0]);
   }
   if (fVar2) {
      if (fVmin[1] >= fVmax[1]) { fVmin[1] -= 1; fVmax[1] += 1;}
      FindGoodLimits(nchans,fNbins[1],fVmin[1],fVmax[1]);
   }
   if (fVar3) {
      if (fVmin[2] >= fVmax[2]) { fVmin[2] -= 1; fVmax[2] += 1;}
      FindGoodLimits(nchans,fNbins[2],fVmin[2],fVmax[2]);
   }
}

//______________________________________________________________________________
void TTree::EventLoop(Int_t &action, TObject *obj, Int_t nevents, Int_t firstevent, Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Loop on all events*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==================
//
//  nevents is the number of events to process (default is all)
//  first is the first event to process (default is 0)
//
//  action =  1  Fill 1-D histogram obj
//         =  2  Fill 2-D histogram obj
//         =  3  Fill 3-D histogram obj
//         =  4  Fill Profile histogram obj
//         =  5  Fill a TEventlist
//         = 11  Estimate Limits
//         = 12  Fill 2-D PolyMarker obj
//         = 13  Fill 3-D PolyMarker obj
//  action < 0   Evaluate Limits for case abs(action)
//

   Int_t i,event,eventNumber, lastevent,ndata,nfill0;
   Double_t ww;
   Int_t  npoints;
   lastevent = firstevent + nevents - 1;
   if (lastevent > fEntries-1) {
      lastevent = (Int_t)fEntries - 1;
      nevents   = lastevent - firstevent + 1;
   }

   TDirectory *cursav = gDirectory;

   if (!gProofServ) fNfill = 0;

   //Create a timer to get control in the event loop(s)
   TProcessEventTimer *timer = 0;
   if (!gROOT->IsBatch() && !gProofServ && fTimerInterval)
      timer = new TProcessEventTimer(fTimerInterval);

   npoints = 0;
   if (!fV1 && fVar1)   fV1 = new Float_t[fEstimate];
   if (!fV2 && fVar2)   fV2 = new Float_t[fEstimate];
   if (!fV3 && fVar3)   fV3 = new Float_t[fEstimate];
   if (!fW)             fW  = new Double_t[fEstimate];
   Int_t force = TestBit(kForceRead);
   if (!fMultiplicity || !fDimension) {
      for (event=firstevent;event<firstevent+nevents;event++) {
         eventNumber = GetEventNumber(event);
         if (eventNumber < 0) break;
         if (timer && timer->ProcessEvents()) break;
         if (gROOT->IsInterrupted()) break;
         LoadTree(eventNumber);
         if (fSelect) {
            if (force) fSelect->GetNdata();
            fW[fNfill] = fSelect->EvalInstance(0);
            if (!fW[fNfill]) continue;
         } else fW[fNfill] = 1;
         if (fVar1) {
            if (force) fVar1->GetNdata();
            fV1[fNfill] = fVar1->EvalInstance(0);
         }
         if (fVar2) {
            if (force) fVar2->GetNdata();
            fV2[fNfill] = fVar2->EvalInstance(0);
            if (fVar3) {
               if (force) fVar3->GetNdata();
               fV3[fNfill] = fVar3->EvalInstance(0);
            }
         }
         fNfill++;
         if (fNfill >= fEstimate) {
            TakeAction(fNfill,npoints,action,obj,option);
            fNfill = 0;
         }
      }

      // nevents == -1 when all events have been processed by proofserver
      if (gProofServ && nevents != -1) return;

      if (fNfill) {
         TakeAction(fNfill,npoints,action,obj,option);
      }
      fSelectedRows = npoints;
      delete timer;
      return;
   }

   Bool_t Var1Multiple = kFALSE;
   Bool_t Var2Multiple = kFALSE;
   Bool_t Var3Multiple = kFALSE;
   Bool_t SelectMultiple = kFALSE;
   if (fVar1 && fVar1->GetMultiplicity()) Var1Multiple = kTRUE;
   if (fVar2 && fVar2->GetMultiplicity()) Var2Multiple = kTRUE;
   if (fVar3 && fVar3->GetMultiplicity()) Var3Multiple = kTRUE;
   if (fSelect && fSelect->GetMultiplicity()) SelectMultiple = kTRUE;


   for (event=firstevent;event<firstevent+nevents;event++) {
      eventNumber = GetEventNumber(event);
      if (eventNumber < 0) break;
      if (timer && timer->ProcessEvents()) break;
      if (gROOT->IsInterrupted()) break;
      LoadTree(eventNumber);
      nfill0 = fNfill;
      ndata = fMultiplicity->GetNdata();
      if (!ndata) continue;
      if (fSelect) {
         fW[fNfill] = fSelect->EvalInstance(0);
         if (!fW[fNfill]  && !SelectMultiple) continue;
      } else fW[fNfill] = 1;
      fV1[fNfill] = fVar1->EvalInstance(0);
      if (fVar2) {
         fV2[fNfill] = fVar2->EvalInstance(0);
         if (fVar3)  fV3[fNfill] = fVar3->EvalInstance(0);
      }
      if (fW[fNfill]) {
         fNfill++;
         if (fNfill >= fEstimate) {
            TakeAction(fNfill,npoints,action,obj,option);
            fNfill = 0;
         }
      }
      ww = 1;

      for (i=1;i<ndata;i++) {
         if (SelectMultiple) {
            ww = fSelect->EvalInstance(i);
            if (ww == 0) continue;
         }
         if (Var1Multiple) fV1[fNfill] = fVar1->EvalInstance(i);
         else              fV1[fNfill] = fV1[nfill0];
         if (fVar2) {
            if (Var2Multiple) fV2[fNfill] = fVar2->EvalInstance(i);
            else              fV2[fNfill] = fV2[nfill0];
            if (fVar3) {
               if (Var3Multiple) fV3[fNfill] = fVar3->EvalInstance(i);
               else              fV3[fNfill] = fV3[nfill0];
            }
         }
         fW[fNfill] = ww;

         fNfill++;
         if (fNfill >= fEstimate) {
            TakeAction(fNfill,npoints,action,obj,option);
            fNfill = 0;
         }
      }
   }

   delete timer;

   // nevents == -1 when all events have been processed by proofserver
   if (gProofServ && nevents != -1) return;

   if (fNfill) {
      TakeAction(fNfill,npoints,action,obj,option);
   }

   fSelectedRows = npoints;
   if (cursav) cursav->cd();
}


//______________________________________________________________________________
Int_t TTree::Fill()
{
//*-*-*-*-*Fill all branches of a Tree*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      ===========================
//
//   This function loops on all the branches of this tree.
//   For each branch, it copies to the branch buffer (basket) the current
//   values of the leaves data types.
//   If a leaf is a simple data type, a simple conversion to a machine
//   independent format has to be done.
//
   Int_t i;
   Int_t nbytes = 0;
   Int_t nb = fBranches.GetEntriesFast();
   TBranch *branch;

    //case of one single super branch. Automatically update
    // all the branch addresses if a new object was created
   if (nb == 1) {
      branch = (TBranch*)fBranches.UncheckedAt(0);
      branch->UpdateAddress();
   }

   for (i=0;i<nb;i++)  {
      branch = (TBranch*)fBranches.UncheckedAt(i);
      if (branch->TestBit(kDoNotProcess)) continue;
      nbytes += branch->Fill();
   }
   fEntries++;
   if (fTotBytes-fSavedBytes > fAutoSave) AutoSave();
   return nbytes;
}

//______________________________________________________________________________
void TTree::FindGoodLimits(Int_t nbins, Int_t &newbins, Float_t &xmin, Float_t &xmax)
{
//*-*-*-*-*-*-*-*-*Find reasonable bin values*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              ==========================

   static TGaxis gaxis_tree;
   Float_t binlow,binhigh,binwidth;
   Int_t n;
   Float_t dx = 0.1*(xmax-xmin);
   Float_t umin = xmin - dx;
   Float_t umax = xmax + dx;
   if (umin < 0 && xmin >= 0) umin = 0;
   if (umax > 0 && xmax <= 0) umax = 0;

   gaxis_tree.Optimize(umin,umax,nbins,binlow,binhigh,n,binwidth);

   if (binwidth <= 0 || binwidth > 1.e+39) {
      xmin = -1;
      xmax = 1;
   } else {
      xmin    = binlow;
      xmax    = binhigh;
   }

   newbins = nbins;
}

//______________________________________________________________________________
void TTree::Fit(const Text_t *formula ,const Text_t *varexp, const Text_t *selection,Option_t *option ,Option_t *goption,Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*Fit  a projected item(s) from a Tree*-*-*-*-*-*-*-*-*-*
//*-*              ======================================
//
//  formula is a TF1 expression.
//
//  See TTree::Draw for explanations of the other parameters.
//
//  By default the temporary histogram created is called htemp.
//  If varexp contains >>hnew , the new histogram created is called hnew
//  and it is kept in the current directory.
//  Example:
//    tree.Fit(pol4,sqrt(x)>>hsqrt,y>0)
//    will fit sqrt(x) and save the histogram as "hsqrt" in the current
//    directory.
//

   Int_t nch = strlen(option) + 10;
   char *opt = new char[nch];
   if (option) sprintf(opt,"%sgoff",option);
   else        strcpy(opt,"goff");

   Draw(varexp,selection,opt,nevents,firstevent);

   delete [] opt;

   TH1 *hfit = gCurrentHist;
if (!hfit)printf("ERROR hfit=0\n");
//printf("hname=%s, formula=%s, option=%s, goption=%s\n",hfit->GetName(),formula,option,goption);
   if (hfit) {
      hfit->Fit(formula,option,goption);
   }
}

//______________________________________________________________________________
TBranch *TTree::GetBranch(const Text_t *name)
{
//*-*-*-*-*-*Return pointer to the branch with name*-*-*-*-*-*-*-*
//*-*        ======================================

   Int_t i,j,k,nb1,nb2;
   TObjArray *lb, *lb1;
   TBranch *branch, *b1, *b2;
   Int_t nb = fBranches.GetEntriesFast();
   for (i=0;i<nb;i++) {
      branch = (TBranch*)fBranches.UncheckedAt(i);
      if (!strcmp(branch->GetName(),name)) return branch;
      lb = branch->GetListOfBranches();
      nb1 = lb->GetEntriesFast();
      for (j=0;j<nb1;j++) {
         b1 = (TBranch*)lb->UncheckedAt(j);
         if (!strcmp(b1->GetName(),name)) return b1;
         lb1 = b1->GetListOfBranches();
         nb2 = lb1->GetEntriesFast();
         for (k=0;k<nb2;k++) {
            b2 = (TBranch*)lb1->UncheckedAt(k);
            if (!strcmp(b2->GetName(),name)) return b2;
         }
      }
   }
   TObjArray *leaves = GetListOfLeaves();
   Int_t nleaves = leaves->GetEntriesFast();
   for (i=0;i<nleaves;i++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(i);
      branch = leaf->GetBranch();
      if (!strcmp(branch->GetName(),name)) return branch;
   }
   return 0;
}


//______________________________________________________________________________
TFile *TTree::GetCurrentFile()
{
//*-*-*-*-*-*Return pointer to the current file*-*-*-*-*-*-*-*
//*-*        ==================================

   if (!fDirectory) return 0;
   return fDirectory->GetFile();
}

//______________________________________________________________________________
Int_t TTree::GetEvent(Int_t event, Int_t getall)
{
//*-*-*-*-*-*Read all branches of event and return total number of bytes*-*-*
//*-*        ===========================================================
//     getall = 0 : get only active branches
//     getall = 1 : get all branches

   if (event < 0 || event > fEntries) return 0;
   Int_t i;
   Int_t nbytes = 0;
   fReadEvent = event;
   TBranch *branch;
   if (fActiveBranches && getall == 0) {
      TObjLink *lnk = fActiveBranches->FirstLink();
      while (lnk) {
          branch = (TBranch*)lnk->GetObject();
          nbytes += branch->GetEvent(event);
          lnk = lnk->Next();
      }
      return nbytes;
   }

   Int_t nb = fBranches.GetEntriesFast();
   for (i=0;i<nb;i++)  {
      branch = (TBranch*)fBranches.UncheckedAt(i);
      nbytes += branch->GetEvent(event);
   }
   return nbytes;
}


//______________________________________________________________________________
Int_t TTree::GetEventNumber(Int_t event)
{
//*-*-*-*-*-*Return event number corresponding to event*-*-*
//*-*        ==========================================
//     if no selection list returns event
//     else returns the event number corresponding to the list index=event

   if (!fEventList) return event;
   return fEventList->GetEntry(event);
}


//______________________________________________________________________________
TLeaf *TTree::GetLeaf(const Text_t *name)
{
//*-*-*-*-*-*Return pointer to the 1st Leaf named name in any Branch-*-*-*-*-*
//*-*        =======================================================

   return (TLeaf*)fLeaves.FindObject(name);
}




//______________________________________________________________________________
Float_t TTree::GetMaximum(Text_t *columname)
{
//*-*-*-*-*-*-*-*-*Return maximum of column with name columname*-*-*-*-*-*-*
//*-*              ============================================

   TLeaf *leaf = GetLeaf(columname);
   if (!leaf) return 0;
   TBranch *branch = leaf->GetBranch();
   Float_t cmax = -1e30;
   for (Int_t i=0;i<fEntries;i++) {
      branch->GetEvent(i);
      Float_t val = leaf->GetValue();
      if (val > cmax) cmax = val;
   }
   return cmax;
}


//______________________________________________________________________________
Float_t TTree::GetMinimum(Text_t *columname)
{
//*-*-*-*-*-*-*-*-*Return minimum of column with name columname*-*-*-*-*-*-*
//*-*              ============================================

   TLeaf *leaf = GetLeaf(columname);
   if (!leaf) return 0;
   TBranch *branch = leaf->GetBranch();
   Float_t cmin = 1e30;
   for (Int_t i=0;i<fEntries;i++) {
      branch->GetEvent(i);
      Float_t val = leaf->GetValue();
      if (val < cmin) cmin = val;
   }
   return cmin;
}


//______________________________________________________________________________
const Text_t *TTree::GetNameByIndex(TString &varexp, Int_t *index,Int_t colindex)
{
//*-*-*-*-*-*-*-*-*Return name corresponding to colindex in varexp*-*-*-*-*-*
//*-*              ===============================================
//
//   varexp is a string of names separated by :
//   index is an array with pointers to the start of name[i] in varexp
//

  Int_t i1,n;
  static TString column;
  if (colindex<0 ) return "";
  i1 = index[colindex] + 1;
  n  = index[colindex+1] - i1;
  column = varexp(i1,n);
//  return (const char*)Form((const char*)column);
  return column.Data();
}

//______________________________________________________________________________
void TTree::GetNextPacket(TSlave *sl, Int_t &nevents, Stat_t &firstevent, Stat_t &processed)
{
   // Return in nevents and firstevent the optimal range of events (packet)
   // to be processed by slave sl. See TPacketGenerator for the algorithm
   // used to get the packet size.

   fPacketGen->GetNextPacket(sl, nevents, firstevent);
   processed = fPacketGen->GetEventsProcessed();
}

//______________________________________________________________________________
TSelector *TTree::GetSelector()
{
//*-*-*-*-*-*Return current selector or create default selector
//*-*        ==================================================

   if (fSelector) return fSelector;
   fSelector = new TSelector("selector.C","The default macro selector");
   fSelector->Init(this);
   return fSelector;
}

//______________________________________________________________________________
Int_t TTree::LoadTree(Int_t event)
{
//*-*-*-*-*-*-*-*-*Set current Tree event
//*-*              ======================

// this function is overloaded in TChain

   fReadEvent = event;
   return 0;

}

//______________________________________________________________________________
void TTree::Loop(Option_t *option, Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*Loop on nevents of this tree starting at firstevent
//*-*              ===================================================

   GetSelector();

//*-* Do not process more than fMaxEventLoop events
   if (nevents > fMaxEventLoop) nevents = fMaxEventLoop;
   Int_t lastevent = firstevent + nevents -1;
   if (lastevent > fEntries-1) {
      lastevent = (Int_t)fEntries -1;
   }

   fSelector->Start(option);

   for (Int_t event = firstevent;event<=lastevent;event++) {
      fSelector->Execute(this, event);
   }

   fSelector->Finish(option);
}

//______________________________________________________________________________
Int_t TTree::MakeChopt(Option_t *)
{
//*-*-*-*-*-*-*-*-*Fill Hoption structure with the codes in option*-*-*-*-*-*
//*-*              ===============================================

   return 0;
}

//______________________________________________________________________________
Int_t TTree::MakeClass(const char *classname)
{
//====>
//*-*-*-*-*-*-*Generate skeleton analysis class for this Tree*-*-*-*-*-*-*
//*-*          ==============================================
//
//   The following files are produced: classname.h and classname.C
//   if classname is NULL, classname will be nameoftree.
//
//   The generated code in classname.h includes the following:
//      - Identification of the original Tree and Input file name
//      - Definition of analysis class (data and functions)
//      - the following class functions:
//         -constructor (connecting by default the Tree file)
//         -GetEvent(Int_t event)
//         -Init(TTree *tree) to initialize a new TTree
//         -Show(Int_t event) to read and Dump event
//
//   The generated code in classname.C includes only the main
//   analysis function Loop.
//
//   To use this function:
//      - connect your Tree file (eg: TFile f("myfile.root");)
//      - T->MakeClass("MyClass");
//    where T is the name of the Tree in file myfile.root
//    and MyClass.h, MyClass.C the name of the files created by this function.
//   In a Root session, you can do:
//      Root > .L MyClass.C
//      Root > MyClass t
//      Root > t.GetEvent(12); // Fill t data members with event number 12
//      Root > t.Show();       // Show values of event 12
//      Root > t.Show(16);     // Read and show values of event 16
//      Root > t.Loop();       // Loop on all events
//
//====>

// Connect output files
   char *thead = new char[256];

   if (!classname) classname = GetName();
   sprintf(thead,"%s.h",classname);
   FILE *fp = fopen(thead,"w");
   if (!fp) {
      printf("Cannot open output file:%s\n",thead);
      delete [] thead;
      return 3;
   }
   char *tcimp = new char[256];
   sprintf(tcimp,"%s.C",classname);
   FILE *fpc = fopen(tcimp,"w");
   if (!fpc) {
      printf("Cannot open output file:%s\n",tcimp);
      delete [] thead;
      delete [] tcimp;
      return 3;
   }
   char *treefile = new char[1000];
   if (fDirectory && fDirectory->GetFile())
                strcpy(treefile,fDirectory->GetFile()->GetName());
   else         strcpy(treefile,"Memory Directory");

//======================Generate classname.h=====================
   // Print header
   TObjArray *leaves = GetListOfLeaves();
   Int_t nleaves = leaves->GetEntriesFast();
   TDatime td;
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"//   This class has been automatically generated \n");
   fprintf(fp,"//     (%s by ROOT version%s)\n",td.AsString(),gROOT->GetVersion());
   fprintf(fp,"//   from TTree %s/%s\n",GetName(),GetTitle());
   fprintf(fp,"//   found on file: %s\n",treefile);
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"\n");
   fprintf(fp,"\n");
   fprintf(fp,"#ifndef %s_h\n",classname);
   fprintf(fp,"#define %s_h\n",classname);
   fprintf(fp,"\n");
   fprintf(fp,"class %s {\n",classname);
   fprintf(fp,"   public :\n");
   fprintf(fp,"   TTree          *fTree; //pointer to the analyzed TTree\n");


// First loop on all leaves to generate type declarations
   fprintf(fp,"//Declaration of leaves types\n");
   Int_t len, l;
   TLeaf *leafcount;
   TLeafObject *leafobj;
   char *bname;
   const char *headOK  = "   ";
   const char *headcom = " //";
   const char *head;
   char branchname[64];
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen();
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      if (leafcount) strcpy(branchname,branch->GetName());
      else           strcpy(branchname,leaf->GetTitle());
      char *twodim = (char*)strstr(leaf->GetTitle(),"][");
      bname = branchname;
      while (*bname) {if (*bname == '.') *bname='_'; bname++;}
      if (branch->IsA() == TBranchObject::Class()) {
         if (branch->GetListOfBranches()->GetEntriesFast()) continue;
         leafobj = (TLeafObject*)leaf;
         if (leafobj->GetClass()) head = headOK;
         else                     head = headcom;
         fprintf(fp,"%s%-15s *%s;\n",head,leafobj->GetTypeName(), leafobj->GetName());
         continue;
      }
      if (leafcount) {
         len = leafcount->GetMaximum();
         if (twodim) {
            fprintf(fp,"   %-15s %s[%d]%s;\n",leaf->GetTypeName(), branchname,len,(char*)(twodim+1));
         } else {
            fprintf(fp,"   %-15s %s[%d];\n",leaf->GetTypeName(), branchname,len);
         }
      } else {
         fprintf(fp,"   %-15s %s;\n",leaf->GetTypeName(), branchname);
      }
   }

// generate class member functions prototypes
   fprintf(fp,"\n");
   fprintf(fp,"   %s(TTree *tree=0);\n",classname);
   fprintf(fp,"   ~%s() {;}\n",classname);
   fprintf(fp,"   GetEvent(Int_t event);\n");
   fprintf(fp,"   Init(TTree *tree);\n");
   fprintf(fp,"   Loop();\n");
   fprintf(fp,"   Show(Int_t event = -1);\n");
   fprintf(fp,"};\n");
   fprintf(fp,"\n");
   fprintf(fp,"#endif\n");
   fprintf(fp,"\n");

// generate code for class constructor
   fprintf(fp,"%s::%s(TTree *tree)\n",classname,classname);
   fprintf(fp,"{\n");
   fprintf(fp,"// if parameter tree is not specified (or zero), connect the file\n");
   fprintf(fp,"// used to generate this class and read the Tree.\n");
   fprintf(fp,"   if (tree == 0) {\n");
   fprintf(fp,"      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(\"%s\");\n",treefile);
   fprintf(fp,"      if (!f) {\n");
   fprintf(fp,"         f = new TFile(\"%s\");\n",treefile);
   fprintf(fp,"      }\n");
   fprintf(fp,"      tree = (TTree*)gDirectory->Get(\"%s\");\n\n",GetName());
   fprintf(fp,"   }\n");
   fprintf(fp,"   Init(tree);\n");
   fprintf(fp,"}\n");
   fprintf(fp,"\n");

// generate code for class member function GetEvent()
   fprintf(fp,"Int_t %s::GetEvent(Int_t event)\n",classname);
   fprintf(fp,"{\n");
   fprintf(fp,"// Read specified event from the Tree into data members\n");
   fprintf(fp,"   if (fTree) return fTree->GetEvent(event);\n");
   fprintf(fp,"   else       return 0;\n");
   fprintf(fp,"}\n");
   fprintf(fp,"\n");


// generate code for class member function Init()
   fprintf(fp,"void %s::Init(TTree *tree)\n",classname);
   fprintf(fp,"{\n");
   fprintf(fp,"//   Set branch addresses\n");
   fprintf(fp,"   if (tree == 0) return;\n");
   fprintf(fp,"   fTree = tree;\n");
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen();
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      if (leafcount) strcpy(branchname,branch->GetName());
      else           strcpy(branchname,leaf->GetTitle());
      bname = branchname;
      while (*bname) {if (*bname == '.') *bname='_'; bname++;}
      char *brak = strstr(branchname,"[");
      if (brak) *brak = 0;
      head = headOK;
      if (branch->IsA() == TBranchObject::Class()) {
         if (branch->GetListOfBranches()->GetEntriesFast()) continue;
         leafobj = (TLeafObject*)leaf;
         if (!leafobj->GetClass()) head = headcom;
         strcpy(branchname,branch->GetName());
      }
      if (leafcount) len = leafcount->GetMaximum()+1;
      if (len > 1) fprintf(fp,"   %sfTree->SetBranchAddress(\"%s\",%s);\n",head,branch->GetName(),branchname);
      else         fprintf(fp,"   %sfTree->SetBranchAddress(\"%s\",&%s);\n",head,branch->GetName(),branchname);
   }
   fprintf(fp,"}\n");
   fprintf(fp,"\n");

// generate code for class member function Show()
   fprintf(fp,"void %s::Show(Int_t event)\n",classname);
   fprintf(fp,"{\n");
   fprintf(fp,"// Print contents of event.\n");
   fprintf(fp,"// If event is not specified, print current event\n");

   fprintf(fp,"   if (!fTree) return;\n");
   fprintf(fp,"   fTree->Show(event);\n");
   fprintf(fp,"}\n");
   fprintf(fp,"\n");


//======================Generate classname.C=====================
// generate code for class member function Loop()
   fprintf(fpc,"#include \"%s\"\n",thead);
   fprintf(fpc,"\n");
   fprintf(fpc,"void %s::Loop()\n",classname);
   fprintf(fpc,"{\n");
   fprintf(fpc,"\n//     This is the loop skeleton\n");
   fprintf(fpc,"//       To read only selected branches, Insert statements like:\n");
   fprintf(fpc,"// fTree->SetBranchStatus(\"*\",0);  // disable all branches\n");
   fprintf(fpc,"// fTree->SetBranchStatus(\"branchname\",1);  // activate branchname\n");
   fprintf(fpc,"   if (fTree == 0) return;\n");
   fprintf(fpc,"\n   Int_t nentries = fTree->GetEntries();\n");
   fprintf(fpc,"\n   Int_t nbytes = 0, nb = 0;\n");
   fprintf(fpc,"     for (Int_t i=0; i<nentries;i++) {\n");
   fprintf(fpc,"        nb = fTree->GetEvent(i);   nbytes += nb;\n");
   fprintf(fpc,"     }\n");
   fprintf(fpc,"}\n");

   printf("Files: %s and %s generated from Tree: %s\n",thead,tcimp,GetName());
   delete [] thead;
   delete [] tcimp;
   delete [] treefile;
   fclose(fp);
   fclose(fpc);

   return 0;
}


//______________________________________________________________________________
Int_t TTree::MakeCode(const char *filename)
{
//====>
//*-*-*-*-*-*-*-*-*Generate skeleton function for this Tree*-*-*-*-*-*-*
//*-*              ========================================
//
//   The function code is written on filename
//   if filename is NULL, filename will be nameoftree.C
//
//   The generated code includes the following:
//      - Identification of the original Tree and Input file name
//      - Connection of the Tree file
//      - Declaration of Tree variables
//      - Setting of branches addresses
//      - a skeleton for the event loop
//
//   To use this function:
//      - connect your Tree file (eg: TFile f("myfile.root");)
//      - T->MakeCode("anal.C");
//    where T is the name of the Tree in file myfile.root
//    and anal.C the name of the file created by this function.
//
//   NOTE: Since the implementation of this function, a new and better
//         function TTree::MakeClass has been developped.
//
//          Author: Rene Brun
//====>

// Connect output file
   char *tfile = new char[1000];
   if (filename) strcpy(tfile,filename);
   else          sprintf(tfile,"%s.C",GetName());
   FILE *fp = fopen(tfile,"w");
   if (!fp) {
      printf("Cannot open output file:%s\n",tfile);
      return 3;
   }
   char *treefile = new char[1000];
   if (fDirectory && fDirectory->GetFile())
                strcpy(treefile,fDirectory->GetFile()->GetName());
   else         strcpy(treefile,"Memory Directory");

// Print header
   TObjArray *leaves = GetListOfLeaves();
   Int_t nleaves = leaves->GetEntriesFast();
   TDatime td;
   fprintf(fp,"{\n");
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"//   This file has been automatically generated \n");
   fprintf(fp,"//     (%s by ROOT version%s)\n",td.AsString(),gROOT->GetVersion());
   fprintf(fp,"//   from TTree %s/%s\n",GetName(),GetTitle());
   fprintf(fp,"//   found on file: %s\n",treefile);
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"\n");
   fprintf(fp,"\n");


// Reset and file connect
   fprintf(fp,"//Reset ROOT and connect tree file\n");
   fprintf(fp,"   gROOT->Reset();\n");
   fprintf(fp,"   TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(\"%s\");\n",treefile);
   fprintf(fp,"   if (!f) {\n");
   fprintf(fp,"      f = new TFile(\"%s\");\n",treefile);
   if (gDirectory != gFile) {
      fprintf(fp,"      f->cd(\"%s\");\n",gDirectory->GetPath());
   }
   fprintf(fp,"   }\n");
   fprintf(fp,"   TTree *%s = (TTree*)gDirectory->Get(\"%s\");\n\n",GetName(),GetName());

// First loop on all leaves to generate type declarations
   fprintf(fp,"//Declaration of leaves types\n");
   Int_t len, l;
   TLeaf *leafcount;
   TLeafObject *leafobj;
   char *bname;
   const char *headOK  = "   ";
   const char *headcom = " //";
   const char *head;
   char branchname[64];
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen();
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      if (branch->GetListOfBranches()->GetEntriesFast() > 0) continue;
      if (leafcount) strcpy(branchname,branch->GetName());
      else           strcpy(branchname,leaf->GetTitle());
      char *twodim = (char*)strstr(leaf->GetTitle(),"][");
      bname = branchname;
      while (*bname) {if (*bname == '.') *bname='_'; bname++;}
      if (branch->IsA() == TBranchObject::Class()) {
         leafobj = (TLeafObject*)leaf;
         if (leafobj->GetClass()) head = headOK;
         else                     head = headcom;
         fprintf(fp,"%s%-15s *%s;\n",head,leafobj->GetTypeName(), leafobj->GetName());
         continue;
      }
      if (leafcount) {
         len = leafcount->GetMaximum();
         if (twodim) {
            fprintf(fp,"   %-15s %s[%d]%s;\n",leaf->GetTypeName(), branchname,len,(char*)(twodim+1));
         } else {
            fprintf(fp,"   %-15s %s[%d];\n",leaf->GetTypeName(), branchname,len);
         }
      } else {
         fprintf(fp,"   %-15s %s;\n",leaf->GetTypeName(), branchname);
      }
   }

// Second loop on all leaves to set the corresponding branch address
   fprintf(fp,"\n//Set branch addresses\n");
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen();
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      if (leafcount) strcpy(branchname,branch->GetName());
      else           strcpy(branchname,leaf->GetTitle());
      bname = branchname;
      while (*bname) {if (*bname == '.') *bname='_'; bname++;}
      char *brak = strstr(branchname,"[");
      if (brak) *brak = 0;
      head = headOK;
      if (branch->IsA() == TBranchObject::Class()) {
         leafobj = (TLeafObject*)leaf;
         if (!leafobj->GetClass()) head = headcom;
      }
      if (leafcount) len = leafcount->GetMaximum()+1;
      if (len > 1) fprintf(fp,"%s%s->SetBranchAddress(\"%s\",%s);\n",head,GetName(),branch->GetName(),branchname);
      else         fprintf(fp,"%s%s->SetBranchAddress(\"%s\",&%s);\n",head,GetName(),branch->GetName(),branchname);
   }

//Generate instructions to make the loop on events
   fprintf(fp,"\n//     This is the loop skeleton\n");
   fprintf(fp,"//       To read only selected branches, Insert statements like:\n");
   fprintf(fp,"// %s->SetBranchStatus(\"*\",0);  // disable all branches\n",GetName());
   fprintf(fp,"// %s->SetBranchStatus(\"branchname\",1);  // activate branchname\n",GetName());
   fprintf(fp,"\n   Int_t nentries = %s->GetEntries();\n",GetName());
   fprintf(fp,"\n   Int_t nbytes = 0;\n");
   fprintf(fp,"//   for (Int_t i=0; i<nentries;i++) {\n");
   fprintf(fp,"//      nbytes += %s->GetEvent(i);\n",GetName());
   fprintf(fp,"//   }\n");
   fprintf(fp,"}\n");

   printf("Macro: %s generated from Tree: %s\n",tfile,GetName());
   delete [] tfile;
   delete [] treefile;
   fclose(fp);

   return 0;
}

//______________________________________________________________________________
Int_t TTree::MakeFitOptions(Option_t *)
{
//*-*-*-*-*-*-*-*-*Fill Foption structure with the codes in option*-*-*-*-*-*
//*-*              ===============================================

   return 0;
}


//______________________________________________________________________________
void TTree::MakeIndex(TString &varexp, Int_t *index)
{
//*-*-*-*-*-*-*-*-*Build Index array for names in varexp*-*-*-*-*-*-*-*-*-*-*
//*-*              =====================================

   Int_t ivar = 1;
   index[0]  = -1;
   for (Int_t i=0;i<varexp.Length();i++) {
      if (varexp[i] == ':') {
         index[ivar] = i;
         ivar++;
      }
   }
   index[ivar] = varexp.Length();
}

//______________________________________________________________________________
Bool_t TTree::MemoryFull(Int_t nbytes)
{
//*-*-*-*-*-*Check if adding nbytes to memory we are still below MaxVirtualsize
//*-*        ==================================================================

   if (fTotalBuffers + nbytes < fMaxVirtualSize) return kFALSE;
   return kTRUE;
}

//______________________________________________________________________________
void TTree::Print(Option_t *option)
{
   // Print a summary of the Tree contents. In case options are "p" or "pa"
   // print information about the TPacketGenerator ("pa" is equivalent to
   // TPacketGenerator::Print("all")).

  if (!strcasecmp(option, "p") || !strcasecmp(option, "pa")) {
     TPacketGenerator *t = GetPacketGenerator();
     if (!t) {
        Printf("No TPacketGenerator object available");
        return;
     }
     if (!strcasecmp(option, "p"))
        t->Print();
     else
        t->Print("all");
     return;
  }

  Int_t s = 0;
  if (fDirectory) {
     TKey *key = fDirectory->GetKey(GetName());
     if (key) s = key->GetNbytes();
  }
  Int_t total = Int_t(fTotBytes) + s;
  Int_t file  = Int_t(fZipBytes) + s;
  Float_t cx  = 1;
  if (fZipBytes) cx = fTotBytes/fZipBytes;
  Printf("******************************************************************************");
  Printf("*Tree    :%-10s: %-54s *",GetName(),GetTitle());
  Printf("*Entries : %8d : Total  Size = %9d bytes  File  Size = %10d *",Int_t(fEntries),total,file);
  Printf("*        :          : Tree compression factor = %6.2f                       *",cx);
  Printf("******************************************************************************");

  fBranches.Print(option);
}

//______________________________________________________________________________
void TTree::Project(Text_t *hname, Text_t *varexp, Text_t *selection, Option_t *option,Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*Make a projection of a Tree using selections*-*-*-*-*-*-*
//*-*              =============================================
//
//   Depending on the value of varexp (described in Draw) a 1-D,2-D,etc
//   projection of the Tree will be filled in histogram hname.
//   Note that the dimension of hname must match with the dimension of varexp.
//

   Int_t nch = strlen(hname) + strlen(varexp);
   char *var = new char[nch+5];
   sprintf(var,"%s>>%s",varexp,hname);
   nch = strlen(option) + 10;
   char *opt = new char[nch];
   if (option) sprintf(opt,"%sgoff",option);
   else        strcpy(opt,"goff");

   Draw(var,selection,opt,nevents,firstevent);

   delete [] var;
   delete [] opt;
}

//______________________________________________________________________________
void TTree::Reset(Option_t *option)
{
//*-*-*-*-*-*-*-*Reset buffers and entries count in all branches/leaves*-*-*
//*-*            ======================================================

   fEntries        = 0;
   fTotBytes       = 0;
   fZipBytes       = 0;
   fSavedBytes     = 0;
   fTotalBuffers   = 0;
   fOldEventNumber = -1;
   fReadEvent      = -1;

   Int_t nb = fBranches.GetEntriesFast();
   for (Int_t i=0;i<nb;i++)  {
      TBranch *branch = (TBranch*)fBranches.UncheckedAt(i);
      branch->Reset(option);
   }
}

//______________________________________________________________________________
void TTree::Scan(const Text_t *varexp, const Text_t *selection, Option_t *, Int_t nevents, Int_t firstevent)
{
//*-*-*-*-*-*-*-*-*Loop on Tree & print events following selection*-*-*-*-*-*
//*-*              ===============================================

   const Int_t MAXCOL = 9;
   TTreeFormula *select, *var[MAXCOL];
   TString cnames[MAXCOL];
   TString onerow;
   Int_t event,eventNumber,i,nch;
   Int_t index[MAXCOL];
   Int_t ncols   = 8;
   Int_t nleaves = fLeaves.GetEntriesFast();
   if (nleaves < ncols) ncols = nleaves;
   nch = strlen(varexp);
   Int_t lastevent = firstevent + nevents -1;
   if (lastevent > fEntries-1) {
      lastevent = (Int_t)fEntries -1;
      nevents   = lastevent - firstevent + 1;
   }

//*-*- Compile selection expression if there is one
   select = 0;
   if (strlen(selection)) {
      select = new TTreeFormula("Selection",selection,this);
      if (!select) return;
      if (!select->GetNdim()) {delete select; return ; }
   }
//*-*- if varexp is empty, take first 8 columns by default
   if (nch == 0) {
      for (i=0;i<ncols;i++) {
         cnames[i] = ((TLeaf*)fLeaves[i])->GetName();
      }
//*-*- otherwise select only the specified columns
   } else {
      ncols = 1;
      onerow = varexp;
      for (i=0;i<onerow.Length();i++)  if (onerow[i] == ':') ncols++;
      MakeIndex(onerow,index);
      for (i=0;i<ncols;i++) {
         cnames[i] = GetNameByIndex(onerow,index,i);
      }
   }
//*-*- Create the TreeFormula objects corresponding to each column
   for (i=0;i<ncols;i++) {
      var[i] = new TTreeFormula("Var1",cnames[i].Data(),this);
   }
//*-*- Print header
   onerow = "***********";
   for (i=0;i<ncols;i++) {
      onerow += Form("*%s",var[i]->PrintValue(-2));
   }
   printf("%s*\n",onerow.Data());
   onerow = "*    Row   ";
   for (i=0;i<ncols;i++) {
      onerow += Form("*%s",var[i]->PrintValue(-1));
   }
   printf("%s*\n",onerow.Data());
   onerow = "***********";
   for (i=0;i<ncols;i++) {
      onerow += Form("*%s",var[i]->PrintValue(-2));
   }
   printf("%s*\n",onerow.Data());
//*-*- loop on all selected events
   fSelectedRows = 0;
   for (event=firstevent;event<firstevent+nevents;event++) {
      eventNumber = GetEventNumber(event);
      if (eventNumber < 0) break;
      LoadTree(eventNumber);
      if (select) {
         select->GetNdata();
         if (select->EvalInstance(0) == 0) continue;
      }
      onerow = Form("* %8d ",eventNumber);
      for (i=0;i<ncols;i++) {
         onerow += Form("*%s",var[i]->PrintValue(0));
      }
      fSelectedRows++;
      printf("%s*\n",onerow.Data());
      if (fScanField > 0 && fSelectedRows > 0) {
         if (fSelectedRows%fScanField == 0) {
            fprintf(stderr,"Type <CR> to continue or q to quit ==> ");
            int answer = getchar();
            if (answer == 'q' || answer == 'Q') break;
         }
      }
   }
   onerow = "***********";
   for (i=0;i<ncols;i++) {
      onerow += Form("*%s",var[i]->PrintValue(-2));
   }
   printf("%s*\n",onerow.Data());
   if (select) Printf("==> %d selected events",fSelectedRows);

//*-*- delete temporary objects
   delete select;
   for (i=0;i<ncols;i++) {
      delete var[i];
   }
}

//_______________________________________________________________________
void TTree::SetBranchAddress(const Text_t *bname, void *add)
{
//*-*-*-*-*-*-*-*-*Set branch address*-*-*-*-*-*-*-*
//*-*              ==================
//
//      If object is a TTree, this function is only an interface to TBranch::SetAddress
//      Function overloaded by TChain.

   TBranch *branch = GetBranch(bname);
   if (branch) branch->SetAddress(add);
   else        Error("SetBranchAddress", "unknown branch -> %s", bname);
}

//_______________________________________________________________________
void TTree::SetBranchStatus(const Text_t *bname, Bool_t status)
{
//*-*-*-*-*-*-*-*-*Set branch status Process or DoNotProcess*-*-*-*-*-*-*-*
//*-*              =========================================
//
//      bname is the name of a branch. if bname="*", apply to all branches.
//      status = 1  branch will be processed
//             = 0  branch will not be processed

   TBranch *branch;
   TLeaf *leaf;

   Int_t i;
   Int_t nleaves = fLeaves.GetEntriesFast();
   if (!strcmp(bname,"*")) { // loop on all branches
      for (i=0;i<nleaves;i++)  {
         leaf = (TLeaf*)fLeaves.UncheckedAt(i);
         branch = (TBranch*)leaf->GetBranch();
         if (status) branch->ResetBit(kDoNotProcess);
         else        branch->SetBit(kDoNotProcess);
      }
      if (fActiveBranches) {
         fActiveBranches->Clear();
         delete fActiveBranches;
         fActiveBranches = 0;
      }
      return;
   }

   branch = GetBranch(bname);
   if (branch) {
      if (status) branch->ResetBit(kDoNotProcess);
      else        branch->SetBit(kDoNotProcess);
   } else {
      Error("SetBranchStatus", "unknown branch -> %s", bname);
      return;
   }

   UpdateActiveBranches();
}

//______________________________________________________________________________
void TTree::SetDirectory(TDirectory *dir)
{
   // Remove reference to this tree from current directory and add
   // reference to new directory dir. dir can be 0 in which case the tree
   // does not belong to any directory.

   if (fDirectory == dir) return;
   if (fDirectory) fDirectory->GetList()->Remove(this);
   fDirectory = dir;
   if (fDirectory) fDirectory->GetList()->Add(this);
}

//_______________________________________________________________________
void TTree::SetEstimate(Int_t n)
{
//*-*-*-*-*-*-*-*-*Set number of events to estimate variable limits*-*-*-*
//*-*              ================================================

   if (n<=0) n = 10000;
   fEstimate = n;
   delete [] fV1;  fV1 = 0;
   delete [] fV2;  fV2 = 0;
   delete [] fV3;  fV3 = 0;
   delete [] fW;   fW  = 0;
}

//______________________________________________________________________________
void TTree::SetName(const Text_t *name)
{
//*-*-*-*-*-*-*-*-*-*-*Change the name of this Tree*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
   if (gPad) gPad->Modified();

//  Trees are named objects in a THashList.
//  We must update the hashlist if we change the name
   if (fDirectory) fDirectory->GetList()->Remove(this);
   fName = name;
   if (fDirectory) fDirectory->GetList()->Add(this);
}

//_______________________________________________________________________
void TTree::SetPacketSize(Int_t size)
{
//*-*-*-*-*-*-*-*-*Set number of events per packet for parallel root*-*-*-*-*
//*-*              =================================================

   fPacketSize = size;
}

//_______________________________________________________________________
void TTree::SetSelector(TSelector *selector)
{
//*-*-*-*-*-*-*-*-*Set current selector to user selector*-*-*-*-*-*-*-*
//*-*              =====================================
//
   fSelector = selector;
   if (selector) selector->Init(this);
}

//_______________________________________________________________________
void TTree::SetSelector(const Text_t *macroname)
{
//*-*-*-*-*-*-*-*-*Set current selector to macroname*-*-*-*-*-*-*-*
//*-*              =================================
//
   fSelector = new TSelector(macroname);
   if (fSelector) fSelector->Init(this);
}

//_______________________________________________________________________
void TTree::Show(Int_t event)
{
//*-*-*-*-*-*Print values of all active leaves for event*-*-*-*-*-*-*-*
//*-*        ===========================================
// if event==-1, print current event (default)

   if (event != -1) GetEvent(event);
   printf("======> EVENT:%d\n",fReadEvent);
   TObjArray *leaves  = GetListOfLeaves();
   Int_t nleaves = leaves->GetEntriesFast();
   for (Int_t i=0;i<nleaves;i++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(i);
      TBranch *branch = leaf->GetBranch();
      if (branch->TestBit(kDoNotProcess)) continue;
      if (branch->GetListOfBranches()->GetEntriesFast() > 0) continue;
      Int_t len = leaf->GetLen();
      if (len <= 0) continue;
      if (leaf->IsA() == TLeafF::Class()) len = TMath::Min(len,5);
      if (leaf->IsA() == TLeafD::Class()) len = TMath::Min(len,5);
      len = TMath::Min(len,10);
      printf(" %-15s = ",leaf->GetName());
      for (Int_t l=0;l<len;l++) {
         if (leaf->IsA() == TLeafC::Class()) {
            char *value = (char*)leaf->GetValuePointer();
            printf("%s",value);
         } else if (leaf->IsA() == TLeafB::Class()) {
            char *value = (char*)leaf->GetValuePointer();
            printf("%d",value[l]);
         } else if (leaf->IsA() == TLeafS::Class()) {
            Short_t *value = (Short_t*)leaf->GetValuePointer();
            printf("%d",value[l]);
         } else if (leaf->IsA() == TLeafI::Class()) {
            Int_t *value = (Int_t*)leaf->GetValuePointer();
            printf("%d",value[l]);
         } else if (leaf->IsA() == TLeafF::Class()) {
            Float_t *value = (Float_t*)leaf->GetValuePointer();
            printf("%f",value[l]);
         } else if (leaf->IsA() == TLeafD::Class()) {
            Double_t *value = (Double_t*)leaf->GetValuePointer();
            printf("%g",value[l]);
         } else if (leaf->IsA() == TLeafObject::Class()) {
            TObject *obj = (TObject*)leaf->GetValuePointer();
            printf("%lx", (Long_t)obj);
         }
         if (l == len-1) printf("\n");
         else            printf(", ");
      }
   }
}

//_______________________________________________________________________
void TTree::StartViewer(Int_t ww, Int_t wh)
{
//*-*-*-*-*-*-*-*-*Start the TTreeViewer on this TTree*-*-*-*-*-*-*-*-*-*
//*-*              ===================================
//
//  ww is the width of the canvas in pixels
//  wh is the height of the canvas in pixels

   char *command = new char[200];
   sprintf(command,"new TTreeViewer(\"%s\",\"TreeViewer\",%d,%d);",GetName(),ww,wh);
   gInterpreter->ProcessLine(command);
   delete [] command;
}

//_______________________________________________________________________
void TTree::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   if (b.IsReading()) {
      gTree = this;
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TNamed::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b >> fScanField;
      b >> fMaxEventLoop;
      b >> fMaxVirtualSize;
      b >> fEntries;
      b >> fTotBytes;
      b >> fZipBytes;
      b >> fAutoSave;
      b >> fEstimate;
      fBranches.Streamer(b);
      fLeaves.Streamer(b);
      fSavedBytes = fTotBytes;
      fDirectory = gDirectory;
      gDirectory->Append(this);
      UpdateActiveBranches();
   } else {
      b.WriteVersion(TTree::IsA());
      TNamed::Streamer(b);
      TAttLine::Streamer(b);
      TAttFill::Streamer(b);
      TAttMarker::Streamer(b);
      b << fScanField;
      b << fMaxEventLoop;
      b << fMaxVirtualSize;
      b << fEntries;
      b << fTotBytes;
      b << fZipBytes;
      b << fAutoSave;
      b << fEstimate;
      fBranches.Streamer(b);
      fLeaves.Streamer(b);
   }
}


//______________________________________________________________________________
void TTree::TakeAction(Int_t nfill, Int_t &npoints, Int_t &action, TObject *obj, Option_t *option)
{
//*-*-*-*-*-*Execute action for object obj nfill times*-*-*-*-*-*-*-*-*-*
//*-*        =========================================

  Int_t i;
  if      (action ==  1) ((TH1*)obj)->FillN(nfill,fV1,fW);
  else if (action ==  2) {for(i=0;i<nfill;i++) ((TH1*)obj)->Fill(fV2[i],fV1[i],fW[i]);}
  else if (action ==  4) ((TProfile*)obj)->FillN(nfill,fV2,fV1,fW);
  else if (action ==  5) {
     TEventList *elist = (TEventList*)obj;
     if (elist->GetIndex(fReadEvent) < 0) elist->Enter(fReadEvent);
  }
  else if (action == 12) {
     TPolyMarker *pm = new TPolyMarker(nfill);
     pm->SetMarkerStyle(GetMarkerStyle());
     pm->SetMarkerColor(GetMarkerColor());
     pm->SetMarkerSize(GetMarkerSize());
     Float_t *x = pm->GetX();
     Float_t *y = pm->GetY();
     Float_t u, v;
     Float_t umin = gPad->GetUxmin();
     Float_t umax = gPad->GetUxmax();
     Float_t vmin = gPad->GetUymin();
     Float_t vmax = gPad->GetUymax();

     for (i=0;i<nfill;i++) {
        u = gPad->XtoPad(fV2[i]);
        v = gPad->YtoPad(fV1[i]);
        if (u < umin) u = umin;
        if (u > umax) u = umax;
        if (v < vmin) v = vmin;
        if (v > vmax) v = vmax;
        x[i] = u;
        y[i] = v;
     }

     pm->Draw();
     for(i=0;i<nfill;i++) {
        ((TH1*)obj)->Fill(fV2[i],fV1[i],fW[i]);
     }
  }
  else if (action == 13) {
     TPolyMarker3D *pm3d = new TPolyMarker3D(nfill);
     pm3d->SetMarkerStyle(GetMarkerStyle());
     pm3d->SetMarkerColor(GetMarkerColor());
     pm3d->SetMarkerSize(GetMarkerSize());
     for (i=0;i<nfill;i++) { pm3d->SetPoint(i,fV3[i],fV2[i],fV1[i]);}
     pm3d->Draw();
  }
  else if (action < 0) {
     action = -action;
     TakeEstimate(nfill,npoints,action,obj,option);
  }

//*-* Do we need to update screen?
  npoints += nfill;
  if (!fUpdate) return;
  if (npoints > fDraw+fUpdate) {
     if (fDraw) gPad->Modified();
     else       obj->Draw(option);
     gPad->Update();
     fDraw = npoints;
  }
}


//______________________________________________________________________________
void TTree::TakeEstimate(Int_t nfill, Int_t &, Int_t action, TObject *obj, Option_t *option)
{
//*-*-*-*-*-*Estimate limits for 1-D, 2-D or 3-D objects*-*-*-*-*-*-*-*-*-*
//*-*        ===========================================

  Int_t i;
  Float_t rmin[3],rmax[3];
  fVmin[0] = fVmin[1] = fVmin[2] = 1e30;
  fVmax[0] = fVmax[1] = fVmax[2] = -fVmin[0];
//__________________________1-D histogram_______________________
  if      (action ==  1) {
     for (i=0;i<nfill;i++) {
        if (fVmin[0] > fV1[i]) fVmin[0] = fV1[i];
        if (fVmax[0] < fV1[i]) fVmax[0] = fV1[i];
     }
     Int_t nchans = fNbins[0];
     if (fVmin[0] >= fVmax[0]) { fVmin[0] -= 1; fVmax[0] += 1;}
     FindGoodLimits(nchans,fNbins[0],fVmin[0],fVmax[0]);

     // When a PROOF client ask master for limits
     if (gProofServ) {
        if (gProofServ->GetLogLevel() > 2)
           printf("have limits: (nfill=%d) %d, %f, %f\n", nfill, fNbins[0], fVmin[0], fVmax[0]);
        gProofServ->GetLimits(1, nfill, fNbins, fVmin, fVmax);
        if (gProofServ->GetLogLevel() > 2)
           printf("got limits: (nfill=%d) %d, %f, %f\n", nfill, fNbins[0], fVmin[0], fVmax[0]);
     }

     TH1 *h1 = (TH1*)obj;
     h1->SetBins(fNbins[0],fVmin[0],fVmax[0]);
     h1->FillN(nfill, fV1, fW);
     gCurrentHist = h1;
//__________________________2-D histogram_______________________
  } else if (action ==  2) {
     for (i=0;i<nfill;i++) {
        if (fVmin[0] > fV1[i]) fVmin[0] = fV1[i];
        if (fVmax[0] < fV1[i]) fVmax[0] = fV1[i];
        if (fVmin[1] > fV2[i]) fVmin[1] = fV2[i];
        if (fVmax[1] < fV2[i]) fVmax[1] = fV2[i];
     }
     Int_t nchans = fNbins[0];
     if (fVmin[0] >= fVmax[0]) { fVmin[0] -= 1; fVmax[0] += 1;}
     FindGoodLimits(nchans,fNbins[0],fVmin[0],fVmax[0]);
     if (fVmin[1] >= fVmax[1]) { fVmin[1] -= 1; fVmax[1] += 1;}
     FindGoodLimits(nchans,fNbins[1],fVmin[1],fVmax[1]);

     TH1 *h2 = (TH1*)obj;
     h2->SetBins(fNbins[1],fVmin[1],fVmax[1],fNbins[0],fVmin[0],fVmax[0]);
     h2->FillN(nfill, fV2, fV1, fW);
     gCurrentHist = h2;
//__________________________Profile histogram_______________________
  } else if (action ==  4) {
     for (i=0;i<nfill;i++) {
        if (fVmin[0] > fV1[i]) fVmin[0] = fV1[i];
        if (fVmax[0] < fV1[i]) fVmax[0] = fV1[i];
        if (fVmin[1] > fV2[i]) fVmin[1] = fV2[i];
        if (fVmax[1] < fV2[i]) fVmax[1] = fV2[i];
     }
     Int_t nchans = fNbins[1];
     if (fVmin[1] >= fVmax[1]) { fVmin[1] -= 1; fVmax[1] += 1;}
     FindGoodLimits(nchans,fNbins[1],fVmin[1],fVmax[1]);
     TProfile *hp = (TProfile*)obj;
     hp->SetBins(fNbins[1],fVmin[1],fVmax[1]);
     hp->FillN(nfill, fV2, fV1, fW);
     gCurrentHist = hp;
//__________________________2D scatter plot_______________________
  } else if (action == 12) {
     for (i=0;i<nfill;i++) {
        if (fVmin[0] > fV1[i]) fVmin[0] = fV1[i];
        if (fVmax[0] < fV1[i]) fVmax[0] = fV1[i];
        if (fVmin[1] > fV2[i]) fVmin[1] = fV2[i];
        if (fVmax[1] < fV2[i]) fVmax[1] = fV2[i];
     }
     Int_t nchans = fNbins[0];
     if (fVmin[0] >= fVmax[0]) { fVmin[0] -= 1; fVmax[0] += 1;}
     FindGoodLimits(nchans,fNbins[0],fVmin[0],fVmax[0]);
     if (fVmin[1] >= fVmax[1]) { fVmin[1] -= 1; fVmax[1] += 1;}
     FindGoodLimits(nchans,fNbins[1],fVmin[1],fVmax[1]);

     TH2F *h2 = (TH2F*)obj;
     h2->SetBins(fNbins[1],fVmin[1],fVmax[1],fNbins[0],fVmin[0],fVmax[0]);
     if (!strstr(option,"same") && !strstr(option,"goff")) {
        h2->DrawCopy(option);
        gPad->Update();
     }
     TPolyMarker *pm = new TPolyMarker(nfill);
     pm->SetMarkerStyle(GetMarkerStyle());
     pm->SetMarkerColor(GetMarkerColor());
     pm->SetMarkerSize(GetMarkerSize());
     Float_t *x = pm->GetX();
     Float_t *y = pm->GetY();
     Float_t u, v;
     Float_t umin = gPad->GetUxmin();
     Float_t umax = gPad->GetUxmax();
     Float_t vmin = gPad->GetUymin();
     Float_t vmax = gPad->GetUymax();

     for (i=0;i<nfill;i++) {
        u = gPad->XtoPad(fV2[i]);
        v = gPad->YtoPad(fV1[i]);
        if (u < umin) u = umin;
        if (u > umax) u = umax;
        if (v < vmin) v = vmin;
        if (v > vmax) v = vmax;
        x[i] = u;
        y[i] = v;
     }
     if (!fDraw && !strstr(option,"goff")) pm->Draw();
     if (!h2->TestBit(kCanDelete)) {
        h2->FillN(nfill, x, y, 0);
     }
     gCurrentHist = h2;
//__________________________3D scatter plot_______________________
  } else if (action == 13) {
     fNbins[0] = 40;
     for (i=0;i<nfill;i++) {
        if (fVmin[0] > fV1[i]) fVmin[0] = fV1[i];
        if (fVmax[0] < fV1[i]) fVmax[0] = fV1[i];
        if (fVmin[1] > fV2[i]) fVmin[1] = fV2[i];
        if (fVmax[1] < fV2[i]) fVmax[1] = fV2[i];
        if (fVmin[2] > fV3[i]) fVmin[2] = fV3[i];
        if (fVmax[2] < fV3[i]) fVmax[2] = fV3[i];
     }
     rmin[0] = fVmin[2]; rmin[1] = fVmin[1]; rmin[2] = fVmin[0];
     rmax[0] = fVmax[2]; rmax[1] = fVmax[1]; rmax[2] = fVmax[0];
     gPad->Clear();
     gPad->Range(-1,-1,1,1);
     new TView(rmin,rmax,1);
     TPolyMarker3D *pm3d = new TPolyMarker3D(nfill);
     pm3d->SetMarkerStyle(GetMarkerStyle());
     pm3d->SetMarkerColor(GetMarkerColor());
     pm3d->SetMarkerSize(GetMarkerSize());
     for (i=0;i<nfill;i++) { pm3d->SetPoint(i,fV3[i],fV2[i],fV1[i]);}
     if (!fDraw) pm3d->Draw();
  }
}
//_______________________________________________________________________
void TTree::UpdateActiveBranches()
{
//*-*-*-*-*-*-*-*-*Build the list of active branches*-*-*-*-*-*-*-*
//*-*              =================================
//
//   Scan all branches and enter branches with active status in fActiveBranches.
//
   TBranch *branch, *bclones;
   TLeaf *leaf, *leafcount;

   Int_t i;
   Int_t inactives = 0;
   Int_t nleaves   = fLeaves.GetEntriesFast();

   if (!fActiveBranches) fActiveBranches = new TList();
   else                  fActiveBranches->Clear();

   for (i = 0; i < nleaves; i++) {
      leaf = (TLeaf*)fLeaves.UncheckedAt(i);
      branch = (TBranch*)leaf->GetBranch();
      if (branch->TestBit(kDoNotProcess)) {
         inactives++;
         continue;
      }
      if (branch->TestBit(kIsClone)) {
         leafcount = leaf->GetLeafCount();
         if (!leafcount) continue;
         char bnam[64];
         strcpy(bnam, leafcount->GetName());
         if (bnam[strlen(bnam)-1] == '_') {
            bnam[strlen(bnam)-1] = 0;
            bclones = GetBranch(bnam);
            if (!fActiveBranches->FindObject(bclones)) {
               fActiveBranches->Add(bclones);
               bclones->ResetBit(kDoNotProcess);
            }
         }
         bclones = GetBranch(leaf->GetLeafCount()->GetName());
         if (!fActiveBranches->FindObject(bclones)) {
            fActiveBranches->Add(bclones);
            bclones->ResetBit(kDoNotProcess);
         }
      }
      fActiveBranches->Add(branch);
   }

   // if no active branches, delete list
   Int_t actives = fActiveBranches->GetSize();
   if (!actives || !inactives) {
      delete fActiveBranches;
      fActiveBranches = 0;
   }
}
