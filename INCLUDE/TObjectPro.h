//*CMZ :  1.00/07 28/03/97  09.25.32  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   22/12/96

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

#ifndef ROOT_TObjectPro
#define ROOT_TObjectPro

#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TObjectView;


class TObjectPro : public TObject {
////////////////////////////////////////////////////////////////////////
//                                                                    //
// TObjectPro is an ABC base class to replace TObject class in future //
// All other classes must be derived from this                        //
//                                                                    //
////////////////////////////////////////////////////////////////////////

public:
    virtual void Draw(Option_t opt); //  Create "main" image
    virtual TObjectView *CreateClassView(Option_t option);
    virtual TObjectView *CreatePadView(Option_t option);
    virtual TObjectView *CreateBrowseView(Option_t option);
    virtual TObjectView *CreateView(Option_t option); // This function DOES define (and replace TObject::Draw()) the real view of the TObject

 };


#endif
