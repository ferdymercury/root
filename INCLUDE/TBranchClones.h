//*CMZ :  2.00/00 23/02/98  11.00.31  by  Rene Brun
//*CMZ :  1.03/08 12/11/97  10.08.18  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

#ifndef ROOT_TBranchClones
#define ROOT_TBranchClones

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
// TBranchClones                                                        //
//                                                                      //
// A Branch for the case of an array of clone objects.                  //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TBranch
#include "TBranch.h"
#endif

#ifndef ROOT_TClonesArray
#include "TClonesArray.h"
#endif

class TBranchClones : public TBranch {

protected:
    TClonesArray     *fList;           //Pointer to the clonesarray
    Int_t            fRead;            //flag = 1 if clonesarray has been read
    Int_t            fN;               //Number of elements in ClonesArray
    Int_t            fNdataMax;        //Maximum value of fN
    TString          fClassName;       //name of the class of the objets in the ClonesArray
    TBranch          *fBranchCount;    //Branch with clones count

public:
    TBranchClones();
    TBranchClones(const Text_t *name, void *clonesaddress, Int_t basketsize=32000,Int_t compress=-1);
    virtual ~TBranchClones();

    virtual void    Browse(TBrowser *b);
    virtual Int_t   Fill();
    virtual Int_t   GetEvent(Int_t event=0);
    virtual Int_t   GetN() {return fN;}
    TClonesArray    *GetList() {return fList;}
    Bool_t          IsFolder() {return kTRUE;}
    virtual void    Print(Option_t *option="");
    virtual void    Reset(Option_t *option="");
    virtual void    SetAddress(void *add);
    virtual void    SetBasketSize(Int_t buffsize);

    ClassDef(TBranchClones,1)  //Branch in case of an array of clone objects
};

#endif
