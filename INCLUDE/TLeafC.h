//*CMZ :  1.03/09 08/12/97  13.28.15  by  Fons Rademakers
//*-- Author :    Rene Brun   17/03/97

#ifndef ROOT_TLeafC
#define ROOT_TLeafC

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
// TLeafC                                                               //
//                                                                      //
// A TLeaf for a variable length string.                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TClonesArray;

class TLeafC : public TLeaf {

protected:
    Int_t        fMinimum;         //Minimum value if leaf range is specified
    Int_t        fMaximum;         //Maximum value if leaf range is specified
    Char_t       *fValue;          //Pointer to data buffer

public:
    TLeafC();
    TLeafC(const Text_t *name, const Text_t *type);
    virtual ~TLeafC();

    virtual void    Export(TClonesArray *list);
    virtual void    FillBasket(TBuffer &b);
    virtual Int_t   GetMaximum() {return fMaximum;}
    virtual Int_t   GetMinimum() {return fMinimum;}
    const Text_t    *GetTypeName() const;
    Float_t         GetValue(Int_t i=0, TTreeFormula *f=0);
    virtual void   *GetValuePointer() {return fValue;}
    char            *GetValueString() {return fValue;}
    virtual void    Import(TClonesArray *list, Int_t n);
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    SetAddress(void *add=0);

    ClassDef(TLeafC,1)  //A TLeaf for a variable length string.
};

inline Float_t TLeafC::GetValue(Int_t i, TTreeFormula *) { return fValue[i]; }

#endif
