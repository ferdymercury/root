//*CMZ :  2.22/01 03/05/99  16.22.19  by  Rene Brun
//*CMZ :  2.20/03 05/12/98  16.32.24  by  Rene Brun
//*CMZ :  2.20/01 01/12/98  11.14.47  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  17.43.25  by  Rene Brun
//*CMZ :  1.03/08 21/11/97  12.14.53  by  Rene Brun
//*-- Author :    Rene Brun   08/01/96

#ifndef ROOT_TBranch
#define ROOT_TBranch

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
// TBranch                                                              //
//                                                                      //
// A TTree object is a list of TBranchs.                                //
//   A TBranch describes the branch data structure and supports :       //
//     the list of TBaskets (branch buffers) associated to this branch. //
//     the list of TLeaves (branch description)                         //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

#ifndef ROOT_TStringLong
#include "TStringLong.h"
#endif

#ifndef ROOT_Htypes
#include "Htypes.h"
#endif

class TTree;
class TBasket;
class TLeaf;
class TBrowser;
class TDirectory;
class TFile;

   const Int_t kDoNotProcess = BIT(10); // Active bit for branches
   const Int_t kIsClone      = BIT(11); // to indicate a TBranchClones

class TBranch : public TNamed {

protected:
    Int_t       fCompress;        //(=1 branch is compressed, 0 otherwise)
    Int_t       fBasketSize;      //Initial Size of  Basket Buffer
    Int_t       fEntryOffsetLen;  //Initial Length of fEntryOffset table in the basket buffers
    Int_t       fMaxBaskets;      //Maximum number of Baskets so far
    Int_t       fWriteBasket;     //Last basket number written
    Int_t       fReadBasket;      //Current basket number when reading
    Int_t       fReadEntry;       //Current entry number when reading
    Int_t       fEntryNumber;     //Current entry number (last one filled in this branch)
    Int_t       fOffset;          //Offset of this branch
    Int_t       fNleaves;         //Number of leaves
    Stat_t      fEntries;         //Number of entries
    Stat_t      fTotBytes;        //Total number of bytes in all leaves before compression
    Stat_t      fZipBytes;        //Total number of bytes in all leaves after compression
    TObjArray   fBranches;        //List of Branches of this branch
    TObjArray   fLeaves;          //List of leaves of this branch
    TObjArray   fBaskets;         //List of baskets of this branch
    Int_t       *fBasketEntry;    //Table of first entry in eack basket
    Seek_t      *fBasketSeek;     //Addresses of baskets on file
    TTree       *fTree;           //Pointer to Tree header
    char        *fAddress;        //Address of 1st leaf (variable or object)
    TDirectory  *fDirectory;      //Pointer to directory where this branch buffers are stored
    TString     fFileName;        //Name of file where buffers are stored ("" if in same file as Tree header)

public:
    TBranch();
    TBranch(const Text_t *name, void *address, const Text_t *leaflist, Int_t basketsize=32000, Int_t compress=-1);
    virtual ~TBranch();

    virtual void    Browse(TBrowser *b);
    virtual void    DropBaskets();
    virtual Int_t   Fill();
    char            *GetAddress() {return fAddress;}
    virtual Int_t   GetBasketSize() {return fBasketSize;}
    virtual Int_t   GetCompressionLevel() {return fCompress;}
    virtual Int_t   GetEntry(Int_t entry=0);
            Int_t   GetEvent(Int_t entry=0) {return GetEntry(entry);}
    virtual Int_t   GetEntryOffsetLen() {return fEntryOffsetLen;}
    TLeaf           *GetLeaf(Text_t *name);
    TBasket         *GetBasket(Int_t basket);
    Seek_t          GetBasketSeek(Int_t basket);
    TDirectory      *GetDirectory() {return fDirectory;}
    TFile           *GetFile(Int_t mode=0);
    const Text_t    *GetFileName() const {return fFileName.Data();}
    Int_t           GetOffset() {return fOffset;}
    Int_t           GetReadBasket() {return fReadBasket;}
    Int_t           GetReadEntry() {return fReadEntry;}
    Int_t           GetWriteBasket() {return fWriteBasket;}
    virtual Stat_t  GetTotBytes() {return fTotBytes;}
    virtual Stat_t  GetZipBytes() {return fZipBytes;}
    Int_t           GetEntryNumber() {return fEntryNumber;}
    TObjArray       *GetListOfBaskets() {return &fBaskets;}
    TObjArray       *GetListOfBranches() {return &fBranches;}
    TObjArray       *GetListOfLeaves() {return &fLeaves;}
    virtual Int_t   GetMaxBaskets()  {return fMaxBaskets;}
    virtual Int_t   GetNleaves() {return fNleaves;}
    virtual Stat_t  GetEntries() {return fEntries;}
    TTree           *GetTree() {return fTree;}
    virtual Int_t   GetRow(Int_t row);
    Bool_t          IsFolder();
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    Reset(Option_t *option="");
    virtual void    SetAddress(void *add);
    virtual void    SetBasketSize(Int_t buffsize) {fBasketSize=buffsize;}
    virtual void    SetCompressionLevel(Int_t level=1) {fCompress=level;}
    virtual void    SetEntryOffsetLen(Int_t len) {fEntryOffsetLen = len;}
    virtual void    SetFile(TFile *file=0);
    virtual void    SetFile(const Text_t *filename);
    virtual void    SetOffset(Int_t offset=0) {fOffset=offset;}
    virtual void    SetTree(TTree *tree) { fTree = tree;}
    virtual void    UpdateAddress() {;}

    ClassDef(TBranch,3)  //Branch descriptor
};

#endif
