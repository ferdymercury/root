//*CMZ :  2.21/08 11/03/99  16.29.53  by  Fons Rademakers
//*CMZ :  2.00/10 16/07/98  16.37.38  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/07/98

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

#ifndef ROOT_TRootEmbeddedCanvas
#define ROOT_TRootEmbeddedCanvas

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootEmbeddedCanvas                                                  //
//                                                                      //
// This class creates a TGCanvas in which a TCanvas is created. Use     //
// GetCanvas() to get a pointer to the TCanvas.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif


class TCanvas;


class TRootEmbeddedCanvas : public TGCanvas {

friend class TRootEmbeddedContainer;

private:
   TRootEmbeddedContainer *fCanvasContainer;  // container in canvas widget
   TCanvas                *fCanvas;           // pointer to TCanvas

   Bool_t   fAutoFit;    // when true canvas container keeps same size as canvas
   Int_t    fButton;     // currently pressed button

   Bool_t   HandleContainerButton(Event_t *ev);
   Bool_t   HandleContainerDoubleClick(Event_t *ev);
   Bool_t   HandleContainerConfigure(Event_t *ev);
   Bool_t   HandleContainerKey(Event_t *ev);
   Bool_t   HandleContainerMotion(Event_t *ev);
   Bool_t   HandleContainerExpose(Event_t *ev);
   Bool_t   HandleContainerCrossing(Event_t *ev);

public:
   TRootEmbeddedCanvas(const char *name, const TGWindow *p, UInt_t w,
            UInt_t h, UInt_t options = kSunkenFrame | kDoubleBorder,
            ULong_t back = fgDefaultFrameBackground);
   virtual ~TRootEmbeddedCanvas();

   TCanvas   *GetCanvas() const { return fCanvas; }

   ClassDef(TRootEmbeddedCanvas,0)  //A ROOT TCanvas that can be embedded in a TGFrame
};

#endif
