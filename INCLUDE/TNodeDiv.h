//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.33.10  by  Rene Brun
//*-- Author :    Rene Brun   21/09/95

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
// TNodeDiv                                                             //
//                                                                      //
// Description of parameters to divide a 3-D geometry object            //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNodeDiv
#define ROOT_TNodeDiv

#ifndef ROOT_TNode
#include "TNode.h"
#endif


class TNodeDiv  : public TNode {
 protected:
   Int_t           fNdiv;        //Number of divisions
   Int_t           fAxis;        //Axis number where object is divided

 public:
        TNodeDiv();
        TNodeDiv(const char *name, const char *title, const char *shapename, Int_t ndiv, Int_t axis, Option_t *option="");
        TNodeDiv(const char *name, const char *title, TShape *shape, Int_t ndiv, Int_t axis, Option_t *option="");
        virtual ~TNodeDiv();
        virtual void             Draw(Option_t *option="");
        virtual void             Paint(Option_t *option="");

        ClassDef(TNodeDiv,1)  //Description of parameters to divide a 3-D geometry object
};

#endif
