//*CMZ :  0.80/00 30/07/96  14.01.11  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TLink
#define ROOT_TLink

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
// TLink                                                                //
//                                                                      //
// Hypertext link to an object.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TText
#include "TText.h"
#endif

class TLink : public TText {

protected:
        void   *fLink;           //pointer to object

public:
        TLink();
        TLink(Coord_t x, Coord_t y, void *pointer);
        virtual ~TLink();
        virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);

        ClassDef(TLink,0)  //Link: hypertext link to an object
};

#endif
