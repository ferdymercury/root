//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  15.30.58  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  19.28.25  by  Rene Brun
//*CMZ :  2.22/05 11/06/99  09.47.24  by  Rene Brun
//*CMZ :  2.21/07 06/03/99  16.27.22  by  Rene Brun
//*CMZ :  2.00/12 22/09/98  15.39.33  by  Rene Brun
//*-- Author :    Rene Brun   31/01/96

#ifndef ROOT_TLeafB
#define ROOT_TLeafB

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
// TLeafB                                                               //
//                                                                      //
// A TLeaf for an 8 bit Integer data type.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TLeafB : public TLeaf {

protected:
    Char_t       fMinimum;         //Minimum value if leaf range is specified
    Char_t       fMaximum;         //Maximum value if leaf range is specified
    Char_t       *fValue;          //!Pointer to data buffer

public:
    TLeafB();
    TLeafB(const char *name, const char *type);
    virtual ~TLeafB();

    virtual void    Export(TClonesArray *list, Int_t n);
    virtual void    FillBasket(TBuffer &b);
    const char     *GetTypeName() const;
    Float_t         GetValue(Int_t i=0);
    virtual void   *GetValuePointer() {return fValue;}
    virtual void    Import(TClonesArray *list, Int_t n);
    virtual void    Print(Option_t *option="");
    virtual void    ReadBasket(TBuffer &b);
    virtual void    ReadBasketExport(TBuffer &b, TClonesArray *list, Int_t n);
    virtual void    SetAddress(void *add=0);

    ClassDef(TLeafB,1)  //A TLeaf for an 8 bit Integer data type.
};

inline Float_t TLeafB::GetValue(Int_t i)
  { return (IsUnsigned())? (UChar_t)(fValue[i]):fValue[i]; }

#endif
