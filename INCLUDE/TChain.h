//*CMZ :  2.24/05 15/05/2000  21.27.20  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/09 18/11/99  12.16.17  by  Rene Brun
//*CMZ :  2.23/03 12/09/99  13.16.02  by  Fons Rademakers
//*CMZ :  2.23/01 31/08/99  08.45.35  by  Rene Brun
//*CMZ :  2.22/04 01/06/99  11.09.13  by  Rene Brun
//*CMZ :  2.22/01 03/05/99  16.21.34  by  Rene Brun
//*-- Author :    Rene Brun   03/02/97

#ifndef ROOT_TChain
#define ROOT_TChain

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
    TObject     *fNotify;           //Object to be notified when loading a new file

public:
    TChain();
    TChain(const char *name, const char *title="");
    virtual ~TChain();

    virtual void      Add(const char *name, Int_t nentries=-1);
    virtual void      Browse(TBrowser *b);
    virtual void      CreatePackets();
    virtual void      Draw(Option_t *opt);
    virtual void      Draw(TCut varexp, TCut selection, Option_t *option=""
                       ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      Draw(const char *varexp, const char *selection, Option_t *option=""
                     ,Int_t nentries=1000000000, Int_t firstentry=0); // *MENU*
    virtual TBranch  *GetBranch(const char *name);
    virtual Int_t     GetNtrees() {return fNtrees;}
    virtual Int_t     GetEntry(Int_t entry=0, Int_t getall=0);
    TFile            *GetFile() {return fFile;}
    TLeaf            *GetLeaf(const char *name);
    TObjArray        *GetListOfBranches();
    TObjArray        *GetListOfFiles() {return fFiles;}
    TObjArray        *GetListOfLeaves();
    virtual Float_t   GetMaximum(const char *columname);
    virtual Float_t   GetMinimum(const char *columname);
    virtual Int_t     GetNbranches();
    TObject          *GetNotify() {return fNotify;}
    TList            *GetStatus() {return fStatus;}
    TTree            *GetTree() {return fTree;}
            Int_t     GetTreeNumber() {return fTreeNumber;}
            Int_t    *GetTreeOffset() {return fTreeOffset;}
    virtual Int_t     GetTreeOffsetLen() {return fTreeOffsetLen;}
            Int_t     LoadTree(Int_t entry);
    virtual void      Loop(Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0); // *MENU*
    virtual void      ls(Option_t *option="");
    virtual void      Merge(const char *name);
    virtual void      Merge(TFile *file, Int_t basketsize, Option_t *option="");
    virtual void      Print(Option_t *option="");
    virtual void      SetBranchAddress(const char *bname,void *add);
    virtual void      SetBranchStatus(const char *bname,Bool_t status=1);
    virtual void      SetPacketSize(Int_t size = 100);
    virtual void      SetNotify(TObject *obj) {fNotify = obj;}

    ClassDef(TChain,1)  //A chain of TTrees
};

inline void TChain::Draw(Option_t *opt)
{ Draw(opt, "", "", 1000000000, 0); }

#endif
