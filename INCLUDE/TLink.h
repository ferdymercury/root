//*CMZ :  0.80/00 30/07/96  14.01.11  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TLink
#define ROOT_TLink

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
