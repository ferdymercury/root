//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.31.02  by  Rene Brun
//*CMZ :  0.90/03 16/11/96  11.08.39  by  Rene Brun
//*-- Author :    Rene Brun   04/07/96

#ifndef ROOT_TAttFillCanvas
#define ROOT_TAttFillCanvas

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
// TAttFillCanvas                                                       //
//                                                                      //
// A specialized dialog canvas to set fill attributes.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TAttFillCanvas : public TDialogCanvas {

public:
   TAttFillCanvas();
   TAttFillCanvas(const char *name, const char *title, UInt_t ww=400, UInt_t wh=600);
   virtual        ~TAttFillCanvas();
   virtual void   UpdateFillAttributes(Int_t col, Int_t sty);

   ClassDef(TAttFillCanvas,0)  //A specialized dialog canvas to set fill attributes.
};

#endif

