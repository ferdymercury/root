//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 22/11/99  17.15.49  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  20.00.31  by  Rene Brun
//*CMZ :  1.00/09 24/04/97  16.04.25  by  Rene Brun
//*-- Author :    Rene Brun   27/01/96

#ifndef ROOT_TLeafObject
#define ROOT_TLeafObject

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
    TLeafObject(const char *name, const char *type);
    virtual ~TLeafObject();

    virtual void    FillBasket(TBuffer &b);
    TClass          *GetClass() {return fClass;}
    TMethodCall     *GetMethodCall(char *name);
    TObject         *GetObject() {return (TObject*)(*fObjAddress);}
    const char      *GetTypeName() const ;
    virtual void    ReadBasket(TBuffer &b);
    virtual void    SetAddress(void *add=0);

    ClassDef(TLeafObject,0)  //A TLeaf for a general object derived from TObject.
};

#endif
