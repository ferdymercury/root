//*CMZ :  2.00/06 26/04/98  15.23.22  by  Fons Rademakers
//*CMZ :  2.00/00 17/02/98  15.43.55  by  Fons Rademakers
//*-- Author :    Fons Rademakers   10/01/98

#ifndef ROOT_TGScrollBar
#define ROOT_TGScrollBar

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
// TGScrollBar and TGScrollBarElement                                   //
//                                                                      //
// The classes in this file implement scrollbars. Scrollbars can be     //
// either placed horizontal or vertical. A scrollbar contains three     //
// TGScrollBarElements: The "head", "tail" and "slider". The head and   //
// tail are fixed at either end and have the typical arrows in them.    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGButton
#include "TGButton.h"
#endif


//--- scrollbar types

enum EScrollBarMode {
   kSBHorizontal,
   kSBVertical
};

class TTimer;


class TGScrollBarElement : public TGFrame {

protected:
   Int_t            fState;  // state of scrollbar element (button up or down)
   const TGPicture *fPic;    // picture in scrollbar element

public:
   TGScrollBarElement(const TGWindow *p, const TGPicture *pic, UInt_t w, UInt_t h,
              UInt_t options = kRaisedFrame | kDoubleBorder,
              ULong_t back = fgDefaultFrameBackground) :
      TGFrame(p, w, h, options, back) { fPic = pic; fState = kButtonUp; }

   virtual void SetState(Int_t state);
   virtual void DrawBorder();

   ClassDef(TGScrollBarElement,0)  // Scrollbar element (head, tail, slider)
};


class TGScrollBar : public TGFrame, public TGWidget {

friend class TGClient;

protected:
   Int_t                fX0, fY0;      // current slider position in pixels
   Int_t                fXp, fYp;      // previous slider position in pixels
   Bool_t               fDragging;     // in dragging mode?
   Int_t                fRange;        // logical upper range of scrollbar
   Int_t                fPsize;        // logical page size of scrollbar
   Int_t                fPos;          // logical current position
   Int_t                fSliderSize;   // logical slider size
   Int_t                fSliderRange;  // logical slider range
   TGScrollBarElement  *fHead;         // head button of scrollbar
   TGScrollBarElement  *fTail;         // tail button of scrollbar
   TGScrollBarElement  *fSlider;       // slider
   const TGPicture     *fHeadPic;      // picture in head (up or left arrow)
   const TGPicture     *fTailPic;      // picture in tail (down or right arrow)
   TTimer              *fRepeat;       // repeat rate timer (when mouse stays pressed)
   Window_t             fSubw;         // sub window in which mouse is pressed

   static Pixmap_t    fgBckgndPixmap;
   static Int_t       fgScrollBarWidth;

public:
   TGScrollBar(const TGWindow *p, UInt_t w, UInt_t h,
               UInt_t options = kChildFrame,
               ULong_t back = fgDefaultFrameBackground) :
      TGFrame(p, w, h, options, back)
            { fMsgWindow = p; fRepeat = 0; SetBackgroundPixmap(fgBckgndPixmap); }
   virtual ~TGScrollBar();

   virtual void   DrawBorder() { }
   virtual Bool_t HandleButton(Event_t *event) = 0;
   virtual Bool_t HandleMotion(Event_t *event) = 0;
   virtual Bool_t HandleTimer(TTimer *t);
   virtual void   Layout() = 0;

   virtual void  SetRange(Int_t range, Int_t page_size) = 0;
   virtual void  SetPosition(Int_t pos) = 0;
   virtual Int_t GetPosition() const { return fPos; }

   virtual void MapSubwindows() { TGWindow::MapSubwindows(); }

   ClassDef(TGScrollBar,0)  // Scrollbar widget
};



class TGHScrollBar : public TGScrollBar {

public:
   TGHScrollBar(const TGWindow *p, UInt_t w, UInt_t h,
                UInt_t options = kHorizontalFrame,
                ULong_t back = fgDefaultFrameBackground);
   virtual ~TGHScrollBar() { }

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleMotion(Event_t *event);
   virtual TGDimension GetDefaultSize() const
                     { return TGDimension(fWidth, fgScrollBarWidth); }
   virtual void Layout();

   virtual void SetRange(Int_t range, Int_t page_size);
   virtual void SetPosition(Int_t pos);

   ClassDef(TGHScrollBar,0)  // Horizontal scrollbar widget
};



class TGVScrollBar : public TGScrollBar {

public:
   TGVScrollBar(const TGWindow *p, UInt_t w, UInt_t h,
                UInt_t options = kVerticalFrame,
                ULong_t back = fgDefaultFrameBackground);
   virtual ~TGVScrollBar() { }

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleMotion(Event_t *event);
   virtual TGDimension GetDefaultSize() const
                      { return TGDimension(fgScrollBarWidth, fHeight); }
   virtual void Layout();

   virtual void SetRange(Int_t range, Int_t page_size);
   virtual void SetPosition(Int_t pos);

   ClassDef(TGVScrollBar,0)  // Vertical scrollbar widget
};

#endif
