//*CMZ :  2.00/13 22/10/98  17.43.42  by  Rene Brun
//*CMZ :  2.00/12 22/09/98  15.40.57  by  Rene Brun
//*CMZ :  1.03/09 08/12/97  13.29.01  by  Fons Rademakers
//*-- Author :    Rene Brun6  14/01/96

#ifndef ROOT_TLeafI
#define ROOT_TLeafI

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
// TLeafI                                                               //
//                                                                      //
// A TLeaf for an Integer data type.                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TClonesArray;

class TLeafI : public TLeaf {

protected:
    Int_t       fMinimum;         //Minimum value if leaf range is specified
    Int_t       fMaximum;         //Maximum value if leaf range is specified
    Int_t       *fValue;          //Pointer to data buffer

public:
    TLeafI();
    TLeafI(const Text_t *name, const Text_t *type);
    virtual ~TLeafI();

    virtual void    Export(TClonesArray *list);
    virtual void    FillBasket(TBuffer &b);
    const Text_t    *GetTypeName() const;
    virtual Int_t   GetMaximum() {return fMaximum;}
    virtual Int_t   GetMinimum() {return fMinimum;}
    Float_t         GetValue(Int_t i=0, TTreeFormula *f=0);
    virtual void   *GetValuePointer() {return fValue;}
    virtual void    Import(TClonesArray *list, Int_t n);
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    SetAddress(void *add=0);
    virtual void    SetMaximum(Int_t max) {fMaximum = max;}

    ClassDef(TLeafI,1)  //A TLeaf for an Integer data type.
};

#endif
