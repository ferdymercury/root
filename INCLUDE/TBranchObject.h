//*CMZ :  2.00/00 23/02/98  10.40.13  by  Rene Brun
//*CMZ :  1.03/08 12/11/97  15.55.32  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

#ifndef ROOT_TBranchObject
#define ROOT_TBranchObject

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
// A Branch for the case of an object.                                  //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TBranch
#include "TBranch.h"
#endif

class TBranchObject : public TBranch {

protected:
    TString     fClassName;        //Class name of referenced object
    TObject     *fOldObject;       //!Pointer to old object

public:
    TBranchObject();
    TBranchObject(const Text_t *name, const Text_t *classname, void *addobj, Int_t basketsize=32000, Int_t splitlevel = 0, Int_t compress=-1);
    virtual ~TBranchObject();

    virtual void    Browse(TBrowser *b);
    virtual Int_t   Fill();
    virtual Int_t   GetEvent(Int_t event=0);
    Bool_t          IsFolder();
    virtual void    Print(Option_t *option="");
    virtual void    Reset(Option_t *option="");
    virtual void    SetAddress(void *addobj);
    virtual void    SetBasketSize(Int_t buffsize);
    virtual void    UpdateAddress();

    ClassDef(TBranchObject,1)  //Branch in case of an object
};

#endif
