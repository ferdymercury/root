//*CMZ :  2.21/05 07/02/99  20.37.45  by  Rene Brun
//*CMZ :  2.20/06 17/12/98  09.27.13  by  Rene Brun
//*CMZ :  2.00/13 26/10/98  11.10.43  by  Rene Brun
//*CMZ :  2.00/12 06/09/98  15.37.18  by  Rene Brun
//*CMZ :  2.00/11 22/08/98  18.04.48  by  Rene Brun
//*CMZ :  2.00/08 04/06/98  10.35.23  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  15.57.18  by  Fons Rademakers
//*-- Author :    Rene Brun   04/01/95

#ifndef ROOT_TTree
#define ROOT_TTree

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
// A TTree object is a list of TBranch.                                 //
//   To Create a TTree object one must:                                 //
//    - Create the TTree header via the TTree constructor               //
//    - Call the TBranch constructor for every branch.                  //
//                                                                      //
//   To Fill this object, use member function Fill with no parameters.  //
//     The Fill function loops on all defined TBranch.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

#ifndef ROOT_TClonesArray
#include "TClonesArray.h"
#endif

#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif

#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif

#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

#ifndef ROOT_TBranch
#include "TBranch.h"
#endif

#ifndef ROOT_TCut
#include "TCut.h"
#endif

class TSelector;
class TBrowser;
class TFile;
class TDirectory;
class TLeaf;
class TTreeFormula;
class TH1;
class TPolyMarker;
class TEventList;
class TSlave;
class TPacketGenerator;

class TTree : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

protected:
    Int_t         fScanField;       //Number of runs before prompting in Scan
    Int_t         fDraw;            //Last event loop number when object was drawn
    Int_t         fUpdate;          //Update frequency for EventLoop
    Int_t         fMaxEventLoop;    //Maximum number of events to process
    Int_t         fMaxVirtualSize;  //Maximum total size of buffers kept in memory
    Int_t         fAutoSave;        //Autosave tree when fAutoSave bytes produced
    Stat_t        fEntries;         //Number of entries
    Stat_t        fTotBytes;        //Total number of bytes in all branches before compression
    Stat_t        fZipBytes;        //Total number of bytes in all branches after compression
    Stat_t        fSavedBytes;      //Number of autosaved bytes
    TTreeFormula  *fVar1;           //Pointer to first variable formula
    TTreeFormula  *fVar2;           //Pointer to second variable formula
    TTreeFormula  *fVar3;           //Pointer to third variable formula
    TTreeFormula  *fVar4;           //Pointer to fourth variable formula
    TTreeFormula  *fSelect;         //Pointer to selection formula
    TTreeFormula  *fMultiplicity;   //Pointer to formula giving ndata per event
    Int_t         fChainOffset;     //Offset of 1st event of this Tree in a TChain
    Int_t         fReadEvent;       //Number of the event being processed
    Int_t         fTotalBuffers;    //Total number of bytes in branch buffers
    Int_t         fEstimate;        //Number of events to estimate histogram limits
    Int_t         fDimension;       //Dimension of the current expression
    Int_t         fSelectedRows;    //Number of selected events
    Int_t         fPacketSize;      //Number of events in one packet for parallel root
    Int_t         fNbins[4];        //Number of bins per dimension
    Float_t       fVmin[4];         //Minima of varexp columns
    Float_t       fVmax[4];         //Maxima of varexp columns
    Float_t       *fV1;             //Local buffer for variable 1
    Float_t       *fV2;             //Local buffer for variable 2
    Float_t       *fV3;             //Local buffer for variable 3
    Double_t      *fW;              //Local buffer for weights
    TDirectory    *fDirectory;      //Pointer to directory holding this tree
    TObjArray     fBranches;        //List of Branches
    TObjArray     fLeaves;          //Direct pointers to individual branch leaves
    TList         *fActiveBranches; //List of active branches
    TEventList    *fEventList;      //Pointer to event selection list (if one)
    TSelector     *fSelector;       //Pointer to current selector
    TPacketGenerator *fPacketGen;   //Packet generator
    Int_t          fNfill;          //Local for EventLoop
    Int_t          fTimerInterval;  //Timer interval in milliseconds

protected:
    const   Text_t  *GetNameByIndex(TString &varexp, Int_t *index,Int_t colindex);
    virtual Int_t   MakeChopt(Option_t *option);
    virtual Int_t   MakeFitOptions(Option_t *option);
    virtual void    MakeIndex(TString &varexp, Int_t *index);
    virtual void    SetDirectory(TDirectory *dir);
    void            TakeAction(Int_t nfill, Int_t &npoints, Int_t &action, TObject *obj, Option_t *option);
    void            TakeEstimate(Int_t nfill, Int_t &npoints, Int_t action, TObject *obj, Option_t *option);

public:
    TTree();
    TTree(const Text_t *name, const Text_t *title, Int_t maxvirtualsize=0);
    virtual ~TTree();

    virtual void      AddTotBytes(Int_t tot) {fTotBytes += tot;}
    virtual void      AddZipBytes(Int_t zip) {fZipBytes += zip;}
    virtual void      AutoSave();
    TBranch          *Branch(const Text_t *name, void *clonesaddress, Int_t bufsize=32000, Int_t splitlevel=1);
    TBranch          *Branch(const Text_t *name, const Text_t *classname, void *addobj, Int_t bufsize=32000, Int_t splitlevel=1);
    TBranch          *Branch(const Text_t *name, void *address, const Text_t *leaflist, Int_t bufsize=32000);
    virtual void      Browse(TBrowser *b);
    virtual void      ClearFormula();
    virtual TTree    *CloneTree(Int_t nevents=-1);
    virtual void      CompileVariables(const Text_t *varexp="", const Text_t *selection="");
    virtual Int_t     CopyEvents(TTree *tree, Int_t nevents=-1);
    virtual void      CreatePacketGenerator(Int_t nevents, Stat_t firstEvent);
    virtual void      Draw(Option_t *opt);
    virtual void      Draw(TCut varexp, TCut selection, Option_t *option=""
                       ,Int_t nevents=1000000000, Int_t firstevent=0);
    virtual void      Draw(const Text_t *varexp, const Text_t *selection, Option_t *option=""
                       ,Int_t nevents=1000000000, Int_t firstevent=0); // *MENU*
    void              DropBuffers(Int_t nbytes);
    virtual void      EstimateLimits(Int_t estimate, Int_t nevents=1000000000, Int_t firstevent=0);
    virtual void      EventLoop(Int_t &action, TObject *obj, Int_t nevents=1000000000, Int_t firstevent=0, Option_t *option="");
    virtual Int_t     Fill();
    virtual void      Fit(const Text_t *formula ,const Text_t *varexp, const Text_t *selection="",Option_t *option="" ,Option_t *goption=""
                       ,Int_t nevents=1000000000, Int_t firstevent=0); // *MENU*

            void      FindGoodLimits(Int_t nbins, Int_t &newbins, Float_t &xmin, Float_t &xmax);
    virtual TBranch  *GetBranch(const Text_t *name);
    virtual Int_t     GetChainOffset() const { return fChainOffset; }
    TFile            *GetCurrentFile();
    TDirectory       *GetDirectory() {return fDirectory;}
    virtual Stat_t    GetEntries()   {return fEntries;}
    virtual Int_t     GetEstimate() const { return fEstimate; }
    virtual Int_t     GetEvent(Int_t event=0, Int_t getall=0);
    TEventList       *GetEventList() {return fEventList;}
    virtual Int_t     GetEventNumber(Int_t event);
    virtual TLeaf    *GetLeaf(const Text_t *name);
    virtual TList    *GetListOfActiveBranches()   {return fActiveBranches;}
    virtual TObjArray       *GetListOfBranches()  {return &fBranches;}
    virtual TObjArray       *GetListOfLeaves()    {return &fLeaves;}
    virtual Int_t     GetMaxEventLoop() {return fMaxEventLoop;}
    virtual Float_t   GetMaximum(Text_t *columname);
    virtual Float_t   GetMinimum(Text_t *columname);
    virtual Int_t     GetMaxVirtualSize() {return fMaxVirtualSize;}
    TTreeFormula     *GetMultiplicity()   {return fMultiplicity;}
    virtual Int_t     GetNbranches() {return fBranches.GetEntriesFast();}
    virtual void      GetNextPacket(TSlave *sl, Int_t &nevents, Stat_t &firstevent, Stat_t &processed);
    TPacketGenerator *GetPacketGenerator() const { return fPacketGen; }
    virtual Int_t     GetPacketSize() const {return fPacketSize;}
    virtual Int_t     GetReadEvent() {return fReadEvent;}
    virtual Int_t     GetScanField() {return fScanField;}
    TTreeFormula     *GetSelect()    {return fSelect;}
    virtual Int_t     GetSelectedRows() {return fSelectedRows;}
    TSelector        *GetSelector();
    TTreeFormula     *GetVar1() {return fVar1;}
    TTreeFormula     *GetVar2() {return fVar2;}
    TTreeFormula     *GetVar3() {return fVar3;}
    TTreeFormula     *GetVar4() {return fVar4;}
    virtual Float_t  *GetV1()   {return fV1;}
    virtual Float_t  *GetV2()   {return fV2;}
    virtual Float_t  *GetV3()   {return fV3;}
    virtual Double_t *GetW()    {return fW;}
    virtual Stat_t    GetTotBytes() {return fTotBytes;}
    virtual Stat_t    GetZipBytes() {return fZipBytes;}
    virtual void      IncrementTotalBuffers(Int_t nbytes) {fTotalBuffers += nbytes;}
    Bool_t            IsFolder() {return kTRUE;}
    virtual Int_t     LoadTree(Int_t event);
    virtual void      Loop(Option_t *option="",Int_t nevents=1000000000, Int_t firstevent=0); // *MENU*
    virtual Int_t     MakeClass(const char *classname=0);
    virtual Int_t     MakeCode(const char *filename=0);
    Bool_t            MemoryFull(Int_t nbytes);
    virtual void      Print(Option_t *option=""); // *MENU*
    virtual void      Project(Text_t *hname, Text_t *varexp, Text_t *selection="", Option_t *option=""
                       ,Int_t nevents=1000000000, Int_t firstevent=0);
    virtual void      Reset(Option_t *option="");
    virtual void      Scan(const Text_t *varexp="", const Text_t *selection="", Option_t *option=""
                       ,Int_t nevents=1000000000, Int_t firstevent=0); // *MENU*
    virtual void      SetAutoSave(Int_t autosave=10000000) {fAutoSave=autosave;}
    virtual void      SetBranchAddress(const Text_t *bname,void *add);
    virtual void      SetBranchStatus(const Text_t *bname,Bool_t status=1);
    virtual void      SetChainOffset(Int_t offset=0) {fChainOffset=offset;}
    virtual void      SetEstimate(Int_t nevents=10000);
    virtual void      SetEventList(TEventList *list) {fEventList = list;}
    virtual void      SetMaxEventLoop(Int_t maxev=1000000000) {fMaxEventLoop = maxev;} // *MENU*
    virtual void      SetMaxVirtualSize(Int_t size=0) {fMaxVirtualSize = size;} // *MENU*
    virtual void      SetName(const Text_t *name); // *MENU*
    virtual void      SetPacketSize(Int_t size = 100);
    virtual void      SetScanField(Int_t n=50) {fScanField = n;} // *MENU*
    virtual void      SetSelector(TSelector *selector=0);
    virtual void      SetSelector(const Text_t *macroname);
    virtual void      SetTimerInterval(Int_t msec=333) {fTimerInterval=msec;}
    virtual void      SetUpdate(Int_t freq=0) {fUpdate = freq;}
    virtual void      Show(Int_t event=-1);
    virtual void      StartViewer(Int_t ww=520, Int_t wh=400); // *MENU*
    virtual void      UpdateActiveBranches();

    ClassDef(TTree,1)  //Tree descriptor (the main ROOT I/O class)
};

inline void TTree::Draw(Option_t *opt)
{ Draw(opt, "", "", 1000000000, 0); }

#endif
