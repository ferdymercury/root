//*CMZ :  2.00/00 12/01/98  17.23.28  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/01/98

#ifndef ROOT_TGCanvas
#define ROOT_TGCanvas

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
// TGCanvas and TGViewPort                                              //
//                                                                      //
// A TGCanvas is a frame containing two scrollbars (horizontal and      //
// vertical) and a viewport. The viewport acts as the window through    //
// which we look at the contents of the container frame.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TGHScrollBar;
class TGVScrollBar;


class TGViewPort : public TGCompositeFrame {

protected:
   Int_t       fX0, fY0;     // position of container frame in viewport
   TGFrame    *fContainer;   // container frame (must inherit from TGCompositeFrame)

public:
   TGViewPort(const TGWindow *p, UInt_t w, UInt_t h,
              UInt_t options = kChildFrame,
              ULong_t back = fgDefaultFrameBackground);

   TGFrame *GetContainer() const { return fContainer; }
   void SetContainer(TGFrame *f);

   virtual void DrawBorder() { };
   virtual void Layout() { }
   virtual TGDimension GetDefaultSize() const { return TGDimension(fWidth, fHeight); }

   void SetHPos(Int_t xpos) { if (fContainer) fContainer->Move(fX0 = xpos, fY0); }
   void SetVPos(Int_t ypos) { if (fContainer) fContainer->Move(fX0, fY0 = ypos); }
   void SetPos(Int_t xpos, Int_t ypos) { if (fContainer) fContainer->Move(fX0 = xpos, fY0 = ypos); }

   ClassDef(TGViewPort,0)  // Viewport through which to look at a frame
};


class TGCanvas : public TGFrame {

protected:
   TGViewPort      *fVport;        // viewport through which we look at contents
   TGHScrollBar    *fHScrollbar;   // horizontal scrollbar
   TGVScrollBar    *fVScrollbar;   // vertical scrollbar

public:
   TGCanvas(const TGWindow *p, UInt_t w, UInt_t h,
            UInt_t options = kSunkenFrame | kDoubleBorder,
            ULong_t back = fgDefaultFrameBackground);
   virtual ~TGCanvas();

   void AddFrame(TGFrame *f, TGLayoutHints *l);
   TGFrame *GetContainer() const { return fVport->GetContainer(); }
   TGFrame *GetViewPort()  const { return fVport; }
   virtual void SetContainer(TGFrame *f) { fVport->SetContainer(f); }
   virtual void MapSubwindows();
   virtual void DrawBorder();
   virtual void Layout();
   virtual TGDimension GetDefaultSize() const { return TGDimension(fWidth, fHeight); }

   virtual Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   ClassDef(TGCanvas,0)  // A canvas with two scrollbars and a viewport
};


#endif
