//*CMZ :  2.22/04 01/06/99  11.09.13  by  Rene Brun
//*CMZ :  2.22/01 03/05/99  16.21.34  by  Rene Brun
//*CMZ :  2.00/12 15/09/98  16.35.30  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.49.57  by  Rene Brun
//*CMZ :  2.00/00 05/04/98  17.03.27  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  16.18.34  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/97

#ifndef ROOT_TChain
#define ROOT_TChain

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TChain                                                               //
//                                                                      //
// A chain of TTrees.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTree
#include "TTree.h"
#endif

class TFile;
class TBrowser;

class TChain : public TTree {

protected:
    Int_t       fTreeOffsetLen;     //Current size of fTreeOffset array
    Int_t       fNtrees;            //Number of Trees
    Int_t       fTreeNumber;        //Current Tree number in fTreeOffset table
    Int_t       fNbranches;         //Number of branches in associated Tree
    Int_t       *fTreeOffset;       //Array of variables
    TTree       *fTree;             //Pointer to current tree
    TFile       *fFile;             //Pointer to current file
    TObjArray   *fFiles;            //List of file names containing the Trees
    TList       *fStatus;           //List of active/inactive branches

public:
    TChain();
    TChain(const Text_t *name, const Text_t *title="");
    virtual ~TChain();

    virtual void      Add(const Text_t *name);
    virtual void      Browse(TBrowser *b);
    virtual void      CreatePackets();
    virtual void      Draw(Option_t *opt);
    virtual void      Draw(TCut varexp, TCut selection, Option_t *option=""
                       ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      Draw(const Text_t *varexp, const Text_t *selection, Option_t *option=""
                     ,Int_t nentries=1000000000, Int_t firstentry=0); // *MENU*
    virtual TBranch  *GetBranch(const Text_t *name) {return fTree->GetBranch(name);}
    virtual Int_t     GetNtrees() {return fNtrees;}
    virtual Int_t     GetEntry(Int_t entry=0, Int_t getall=0);
    TFile            *GetFile() {return fFile;}
    TLeaf            *GetLeaf(const Text_t *name) {return fTree->GetLeaf(name);}
    TObjArray        *GetListOfBranches();
    TObjArray        *GetListOfFiles() {return fFiles;}
    TObjArray        *GetListOfLeaves();
    virtual Float_t   GetMaximum(Text_t *columname);
    virtual Float_t   GetMinimum(Text_t *columname);
    virtual Int_t     GetNbranches() {return fTree->GetNbranches();}
    TList            *GetStatus() {return fStatus;}
    TTree            *GetTree() {return fTree;}
            Int_t     GetTreeNumber() {return fTreeNumber;}
            Int_t    *GetTreeOffset() {return fTreeOffset;}
    virtual Int_t     GetTreeOffsetLen() {return fTreeOffsetLen;}
            Int_t     LoadTree(Int_t entry);
    virtual void      Loop(Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0); // *MENU*
    virtual void      ls(Option_t *option="");
    virtual void      Merge(const Text_t *name);
    virtual void      Merge(TFile *file, Int_t basketsize, Option_t *option="");
    virtual void      Print(Option_t *option="");
    virtual void      SetBranchAddress(const Text_t *bname,void *add);
    virtual void      SetBranchStatus(const Text_t *bname,Bool_t status=1);
    virtual void      SetPacketSize(Int_t size = 100);

    ClassDef(TChain,1)  //A chain of TTrees
};

inline void TChain::Draw(Option_t *opt)
{ Draw(opt, "", "", 1000000000, 0); }

#endif
