//*CMZ :  2.22/05 11/06/99  09.47.44  by  Rene Brun
//*CMZ :  2.21/07 06/03/99  16.28.15  by  Rene Brun
//*CMZ :  1.03/09 08/12/97  13.30.26  by  Fons Rademakers
//*-- Author :    Rene Brun6  14/01/96

#ifndef ROOT_TLeafF
#define ROOT_TLeafF

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
// TLeafF                                                               //
//                                                                      //
// A TLeaf for a 32 bit floating point data type.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TClonesArray;

class TLeafF : public TLeaf {

protected:
    Float_t       fMinimum;         //Minimum value if leaf range is specified
    Float_t       fMaximum;         //Maximum value if leaf range is specified
    Float_t       *fValue;          //!Pointer to data buffer

public:
    TLeafF();
    TLeafF(const Text_t *name, const Text_t *type);
    virtual ~TLeafF();

    virtual void    Export(TClonesArray *list, Int_t n);
    virtual void    FillBasket(TBuffer &b);
    const Text_t    *GetTypeName() const {return "Float_t";}
    Float_t         GetValue(Int_t i=0, TTreeFormula *f=0);
    virtual void   *GetValuePointer() {return fValue;}
    virtual void    Import(TClonesArray *list, Int_t n);
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    SetAddress(void *add=0);

    ClassDef(TLeafF,1)  //A TLeaf for a 32 bit floating point data type.
};

inline Float_t TLeafF::GetValue(Int_t i, TTreeFormula *) { return fValue[i]; }

#endif
