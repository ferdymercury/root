//*CMZ :  2.00/11 08/08/98  22.33.00  by  Rene Brun
//*CMZ :  0.90/03 16/11/96  11.08.40  by  Rene Brun
//*-- Author :    Rene Brun   04/07/96

#ifndef ROOT_TAttMarkerCanvas
#define ROOT_TAttMarkerCanvas

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
// TAttMarkerCanvas                                                     //
//                                                                      //
// A specialized dialog canvas to set marker attributes.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TAttMarkerCanvas : public TDialogCanvas {

public:
   TAttMarkerCanvas();
   TAttMarkerCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);
   virtual        ~TAttMarkerCanvas();
   virtual void   UpdateMarkerAttributes(Int_t col,Int_t sty,Float_t msiz);

   ClassDef(TAttMarkerCanvas,0)  //A specialized dialog canvas to set marker attributes.
};

#endif

