//*CMZ :  2.00/00 17/02/98  10.54.38  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  14.22.16  by  Fons Rademakers
//*-- Author :    Rene Brun   08/01/96

#ifndef ROOT_TLeaf
#define ROOT_TLeaf

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
// TLeaf                                                                //
//                                                                      //
// A TTree object is a list of TBranch.                                 //
// A TBranch object is a list of TLeaf.                                 //
// A TLeaf describes the branch data types.                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TBranch
#include "TBranch.h"
#endif
#ifndef ROOT_TClonesArray
#include "TClonesArray.h"
#endif

class TBrowser;
class TTreeFormula;

class TLeaf : public TNamed {

protected:
    Int_t       fLen;             //Number of fixed length elements
    Int_t       fLenType;         //Number of bytes for this data type
    Int_t       fNdata;           //Number of elements in fAddress data buffer
    Int_t       fOffset;          //Offset in ClonesArray object (if one)
    TLeaf       *fLeafCount;      //Pointer to Leaf count if variable length
    Bool_t      fIsRange;         //(=kTRUE if leaf has a range, kFALSE otherwise)
    Bool_t      fIsUnsigned;      //(=kTRUE if unsigned, kFALSE otherwise)
    TBranch     *fBranch;         //Pointer to supporting branch

public:
    TLeaf();
    TLeaf(const Text_t *name, const Text_t *type);
    virtual ~TLeaf();

    virtual void    Browse(TBrowser *b);
    virtual void    Export(TClonesArray *list);
    virtual void    FillBasket(TBuffer &b);
    TBranch         *GetBranch() { return fBranch; }
    virtual TLeaf   *GetLeafCount() { return fLeafCount; }
    virtual TLeaf   *GetLeafCounter(Int_t &countval);
    virtual Int_t   GetLen() const;
    virtual Int_t   GetLenStatic() { return fLen; }
    virtual Int_t   GetLenType() { return fLenType; }
    virtual Int_t   GetMaximum() { return 0; }
    virtual Int_t   GetMinimum() { return 0; }
    virtual Int_t   GetNdata() { return fNdata; }
    virtual Int_t   GetOffset() { return fOffset; }
    virtual void   *GetValuePointer() { return 0; }
    virtual const Text_t *GetTypeName() const { return ""; }
    virtual Float_t GetValue(Int_t i=0, TTreeFormula *f=0);
    virtual void    Import(TClonesArray *list, Int_t n);
    virtual Bool_t  IsRange()    { return fIsRange; }
    virtual Bool_t  IsUnsigned() { return fIsUnsigned; }
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
            Int_t   ResetAddress(void *add, Bool_t destructor = kFALSE);
    virtual void    SetAddress(void *add=0);
    virtual void    SetBranch(TBranch *branch) { fBranch = branch; }
    virtual void    SetLeafCount(TLeaf *leaf) { fLeafCount=leaf; }
    virtual void    SetLen(Int_t len=1) { fLen=len; }
    virtual void    SetOffset(Int_t offset=0) { fOffset = offset; }
    virtual void    SetRange(Bool_t range=kTRUE) { fIsRange = range; }
    virtual void    SetUnsigned() { fIsUnsigned = kTRUE; }

    ClassDef(TLeaf,1)  //Leaf: description of a Branch data type
};

inline void    TLeaf::Export(TClonesArray *) { }
inline Float_t TLeaf::GetValue(Int_t, TTreeFormula *) { return 0; }
inline void    TLeaf::Import(TClonesArray *, Int_t) { }
inline void    TLeaf::SetAddress(void *) { }

#endif
