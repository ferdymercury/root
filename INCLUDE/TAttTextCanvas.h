//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.31.54  by  Rene Brun
//*CMZ :  0.90/03 16/11/96  11.08.40  by  Rene Brun
//*-- Author :    Rene Brun   04/07/96

#ifndef ROOT_TAttTextCanvas
#define ROOT_TAttTextCanvas

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
// TAttTextCanvas                                                       //
//                                                                      //
// A specialized dialog canvas to set text attributes.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TAttTextCanvas : public TDialogCanvas {

public:
   TAttTextCanvas();
   TAttTextCanvas(const char *name, const char *title, UInt_t ww=400, UInt_t wh=600);
   virtual        ~TAttTextCanvas();
   virtual void   UpdateTextAttributes(Int_t align,Float_t angle,Int_t col,Int_t font,Float_t tsize);

   ClassDef(TAttTextCanvas,0)  //A specialized dialog canvas to set text attributes.
};

#endif

