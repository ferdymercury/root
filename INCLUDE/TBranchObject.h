//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/09 24/11/99  16.45.22  by  Rene Brun
//*CMZ :  2.23/08 31/10/99  11.20.43  by  Rene Brun
//*CMZ :  2.22/01 03/05/99  16.22.48  by  Rene Brun
//*CMZ :  2.00/00 23/02/98  10.40.13  by  Rene Brun
//*CMZ :  1.03/08 12/11/97  15.55.32  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

#ifndef ROOT_TBranchObject
#define ROOT_TBranchObject

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
// TBranchObject                                                        //
//                                                                      //
// A Branch for the case of an object.                                  //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TBranch
#include "TBranch.h"
#endif

class TBranchObject : public TBranch {

protected:
    enum { kWarn = BIT(12) };

    TString     fClassName;        //Class name of referenced object
    TObject     *fOldObject;       //!Pointer to old object

public:
    TBranchObject();
    TBranchObject(const char *name, const char *classname, void *addobj, Int_t basketsize=32000, Int_t splitlevel = 0, Int_t compress=-1);
    virtual ~TBranchObject();

    virtual void    Browse(TBrowser *b);
    virtual Int_t   Fill();
    virtual Int_t   GetEntry(Int_t entry=0, Int_t getall = 0);
    Bool_t          IsFolder();
    virtual void    Print(Option_t *option="");
    virtual void    Reset(Option_t *option="");
    virtual void    SetAddress(void *addobj);
    virtual void    SetAutoDelete(Bool_t autodel=kTRUE);
    virtual void    SetBasketSize(Int_t buffsize);
    virtual void    UpdateAddress();

    ClassDef(TBranchObject,1)  //Branch in case of an object
};

#endif
