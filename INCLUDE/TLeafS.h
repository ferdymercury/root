//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  15.32.06  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  19.28.25  by  Rene Brun
//*CMZ :  2.22/05 11/06/99  09.47.55  by  Rene Brun
//*CMZ :  2.21/07 06/03/99  16.27.47  by  Rene Brun
//*CMZ :  2.00/13 22/10/98  18.01.27  by  Rene Brun
//*-- Author :    Rene Brun   31/01/96

#ifndef ROOT_TLeafS
#define ROOT_TLeafS

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLeafS                                                               //
//                                                                      //
// A TLeaf for a 16 bit Integer data type.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

class TLeafS : public TLeaf {

protected:
    Short_t       fMinimum;         //Minimum value if leaf range is specified
    Short_t       fMaximum;         //Maximum value if leaf range is specified
    Short_t       *fValue;          //!Pointer to data buffer

public:
    TLeafS();
    TLeafS(const char *name, const char *type);
    virtual ~TLeafS();

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

    ClassDef(TLeafS,1)  //A TLeaf for a 16 bit Integer data type.
};

#endif
