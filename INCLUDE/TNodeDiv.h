//*CMZ :  1.03/08 20/11/97  18.33.10  by  Rene Brun
//*-- Author :    Rene Brun   21/09/95

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
        TNodeDiv(Text_t *name, Text_t *title, Text_t *shapename, Int_t ndiv, Int_t axis, Option_t *option="");
        TNodeDiv(Text_t *name, Text_t *title, TShape *shape, Int_t ndiv, Int_t axis, Option_t *option="");
        virtual ~TNodeDiv();
        virtual void             Draw(Option_t *option="");
        virtual void             Paint(Option_t *option="");

        ClassDef(TNodeDiv,1)  //Description of parameters to divide a 3-D geometry object
};

#endif
