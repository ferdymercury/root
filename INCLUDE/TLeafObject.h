//*CMZ :  1.00/09 24/04/97  16.04.25  by  Rene Brun
//*-- Author :    Rene Brun   27/01/96

#ifndef ROOT_TLeafObject
#define ROOT_TLeafObject

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
// TLeafObject                                                          //
//                                                                      //
// A TLeaf for a general object derived from TObject.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TClass;
class TMethodCall;

class TLeafObject : public TLeaf {

protected:
    TClass      *fClass;          //pointer to class
    void        **fObjAddress;    //Address of Pointer to object

public:
    TLeafObject();
    TLeafObject(const Text_t *name, const Text_t *type);
    virtual ~TLeafObject();

    virtual void    FillBasket(TBuffer &b);
    TClass          *GetClass() {return fClass;}
    TMethodCall     *GetMethodCall(char *name);
    TObject         *GetObject() {return (TObject*)(*fObjAddress);}
    const Text_t    *GetTypeName() const ;
    Float_t         GetValue(Int_t i, TTreeFormula *f=0);
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    SetAddress(void *add=0);

    ClassDef(TLeafObject,0)  //A TLeaf for a general object derived from TObject.
};

#endif
