//*CMZ :  2.00/12 04/10/98  18.38.12  by  Fons Rademakers
//*-- Author :    Reiner Rohlfs   30/09/98

#ifndef ROOT_TGDoubleSlider
#define ROOT_TGDoubleSlider

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
// TGDoubleSlider, TGDoubleVSlider and TGDoubleHSlider                  //
//                                                                      //
// DoubleSlider widgets allow easy selection of a min and a max value   //
// out of a range.                                                      //
// DoubleSliders can be either horizontal or vertical oriented and      //
// there is a choice of three different types of tick marks.            //
//                                                                      //
// To change the min value press the mouse near to the left / bottom    //
// edge of the slider.                                                  //
// To change the max value press the mouse near to the right / top      //
// edge of the slider.                                                  //
// To change both values simultaneously press the mouse near to the     //
// center of the slider.                                                //
//                                                                      //
// TGDoubleSlider is an abstract base class. Use the concrete           //
// TGDoubleVSlider and TGDoubleHSlider.                                 //
//                                                                      //
// Dragging the slider will generate the event:                         //
// kC_VSLIDER, kSL_POS, slider id, 0  (for vertical slider)             //
// kC_HSLIDER, kSL_POS, slider id, 0  (for horizontal slider)           //
//                                                                      //
// Pressing the mouse will generate the event:                          //
// kC_VSLIDER, kSL_PRESS, slider id, 0  (for vertical slider)           //
// kC_HSLIDER, kSL_PRESS, slider id, 0  (for horizontal slider)         //
//                                                                      //
// Releasing the mouse will generate the event:                         //
// kC_VSLIDER, kSL_RELEASE, slider id, 0  (for vertical slider)         //
// kC_HSLIDER, kSL_RELEASE, slider id, 0  (for horizontal slider)       //
//                                                                      //
// Use the functions GetMinPosition(), GetMaxPosition() and             //
// GetPosition() to retrieve the position of the slider.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGWidget
#include "TGWidget.h"
#endif

#define  kSL_PRESS      ((EWidgetMessageTypes)3)
#define  kSL_RELEASE    ((EWidgetMessageTypes)4)


//--- sizes for vert. and horz. sliders

enum EDoubleSliderSize {
   kDoubleSliderWidth  = 24,
   kDoubleSliderHeight = kDoubleSliderWidth
};


enum EDoubleSliderScale {
   //--- scaling of slider
   kDoubleScaleNo        = BIT(0),
   kDoubleScaleDownRight = BIT(1),
   kDoubleScaleBoth      = BIT(2)
};




class TGDoubleSlider : public TGFrame, public TGWidget {

protected:
   Float_t          fPos;           // logical position between fVmin and fVmax
   Float_t          fSmin;          // logical position of min value of Slider
   Float_t          fSmax;          // logical position of max value of Slider
   Int_t            fRelPos;        // slider position in pixel coordinates
   Float_t          fVmin;          // logical lower limit of slider
   Float_t          fVmax;          // logical upper limit of slider
   Int_t            fScale;         // tick mark scale
   Int_t            fScaleType;     // tick mark scale type (no, downright, both)
   Bool_t           fDragging;      // true if in dragging mode

   Int_t            fPressPoint;    // mouse position at button press event
   Float_t          fPressSmin;     // logical min position at button press event
   Float_t          fPressSmax;     // logical max position at button press event
   Int_t            fMove;          // 1: move min value
                                    // 2: move max value
                                    // 3: move min and max value
                                    // 0: don't move any value
public:
   TGDoubleSlider(const TGWindow *p, UInt_t w, UInt_t h, UInt_t scale, Int_t id = -1,
                  UInt_t options = kChildFrame,
                  ULong_t back = fgDefaultFrameBackground);

   virtual ~TGDoubleSlider() { }

   virtual Bool_t HandleButton(Event_t *event) = 0;
   virtual Bool_t HandleMotion(Event_t *event) = 0;

   virtual void  SetScale(Int_t scale) { fScale = scale; }
   virtual void  SetRange(Float_t min, Float_t max) { fVmin = min; fVmax = max; }
   virtual void  SetPosition(Float_t min, Float_t max)
                    { fSmin = min; fSmax = max; fClient->NeedRedraw(this); }
   virtual Float_t GetMinPosition() const { return fSmin; }
   virtual Float_t GetMaxPosition() const { return fSmax; }
   virtual void    GetPosition(Float_t &min, Float_t &max) const
                    { min = fSmin; max = fSmax;}
   virtual void    GetPosition(Float_t *min, Float_t *max) const
                    { *min = fSmin; *max = fSmax;}
   virtual void  MapSubwindows() { TGWindow::MapSubwindows(); }

   ClassDef(TGDoubleSlider,0)  // Double slider widget abstract base class
};


class TGDoubleVSlider : public TGDoubleSlider {

protected:
   Int_t   fYp;      // vertical slider y position in pixel coordinates

   virtual void DoRedraw();

public:
   TGDoubleVSlider(const TGWindow *p, UInt_t h, UInt_t scale, Int_t id = -1,
                   UInt_t options = kVerticalFrame,
                   ULong_t back = fgDefaultFrameBackground);
   virtual ~TGDoubleVSlider();

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleMotion(Event_t *event);
   virtual TGDimension GetDefaultSize() const
                     { return TGDimension(kDoubleSliderWidth, fHeight); }

   ClassDef(TGDoubleVSlider,0)  // Vertical double slider widget
};


class TGDoubleHSlider : public TGDoubleSlider {

protected:
   Int_t       fXp;     // horizontal slider x position in pixel coordinates

   virtual void DoRedraw();

public:
   TGDoubleHSlider(const TGWindow *p, UInt_t w, UInt_t scale, Int_t id = -1,
                   UInt_t options = kHorizontalFrame,
                   ULong_t back = fgDefaultFrameBackground);
   virtual ~TGDoubleHSlider();

   virtual Bool_t HandleButton(Event_t *event);
   virtual Bool_t HandleMotion(Event_t *event);
   virtual TGDimension GetDefaultSize() const
                     { return TGDimension(fWidth, kDoubleSliderHeight); }

   ClassDef(TGDoubleHSlider,0)  // Horizontal double slider widget
};

#endif
