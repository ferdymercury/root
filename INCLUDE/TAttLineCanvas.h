//*CMZ :  2.00/11 08/08/98  22.30.12  by  Rene Brun
//*CMZ :  0.90/03 16/11/96  11.08.40  by  Rene Brun
//*-- Author :    Rene Brun   03/07/96

#ifndef ROOT_TAttLineCanvas
#define ROOT_TAttLineCanvas

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
// TAttLineCanvas                                                       //
//                                                                      //
// A specialized dialog canvas to set line attributes.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TAttLineCanvas : public TDialogCanvas {

public:
   TAttLineCanvas();
   TAttLineCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);
   virtual        ~TAttLineCanvas();
   virtual void   UpdateLineAttributes(Int_t col, Int_t sty, Int_t width);

   ClassDef(TAttLineCanvas,0)  //A specialized dialog canvas to set line attributes.
};

#endif

