//*CMZ :  2.21/05 08/02/99  10.45.50  by  Rene Brun
//*CMZ :  2.00/03 27/03/98  16.45.37  by  Reiner Rohlfs
//*CMZ :  2.00/01 13/03/98  11.46.45  by  Fons Rademakers
//*CMZ :  2.00/00 23/02/98  02.19.42  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/02/98

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
//*CMZ :  2.00/00 16/02/98  00.17.08  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97
/**************************************************************************

    This source is based on Xclass95, a Win95-looking GUI toolkit.
    Copyright (C) 1996, 1997 David Barth, Ricky Ralston, Hector Peraza.

    Xclass95 is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

**************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGToolTip                                                            //
//                                                                      //
// A tooltip is a one line help text that is displayed in a window      //
// when the cursor rests over a widget. For an example of usage see     //
// the TGButton class.                                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGToolTip.h"
#include "TGLabel.h"
#include "TTimer.h"
#include "TSystem.h"
#include "TVirtualPad.h"
#include "TBox.h"


ClassImp(TGToolTip)

//______________________________________________________________________________
class TTipDelayTimer : public TTimer {
private:
   TGToolTip   *fTip;
public:
   TTipDelayTimer(TGToolTip *tip, Long_t ms) : TTimer(ms, kTRUE) { fTip = tip; }
   Bool_t Notify();
};

//______________________________________________________________________________
Bool_t TTipDelayTimer::Notify()
{
   fTip->HandleTimer(0);
   Reset();
   return kFALSE;
}


//______________________________________________________________________________
TGToolTip::TGToolTip(const TGWindow *p, const TGFrame *f, const char *text,
   Long_t delayms) : TGCompositeFrame(p, 10, 10, kHorizontalFrame | kRaisedFrame)
{
   // Create a tool tip. P is the tool tips parent window (normally
   // fClient->GetRoot(), f is the frame to which the tool tip is associated,
   // text is the tool tip one-liner and delayms is the delay in ms before
   // the tool tip is shown.

   SetWindowAttributes_t attr;
   attr.fMask             = kWAOverrideRedirect | kWASaveUnder;
   attr.fOverrideRedirect = kTRUE;
   attr.fSaveUnder        = kTRUE;

   gGXW->ChangeWindowAttributes(fId, &attr);
   SetBackgroundColor(fgLightYellowPixel);

   fLabel = new TGLabel(this, text);
   fLabel->SetBackgroundColor(fgLightYellowPixel);

   AddFrame(fLabel, fL1 = new TGLayoutHints(kLHintsLeft | kLHintsTop,
                                            2, 3, 0, 0));
   MapSubwindows();
   Resize(GetDefaultSize());

   fWindow = f;
   fPad    = 0;
   fBox    = 0;
   fDelay = new TTipDelayTimer(this, delayms);
}

//______________________________________________________________________________
TGToolTip::TGToolTip(const TGWindow *p, const TBox *box, const char *text,
   Long_t delayms) : TGCompositeFrame(p, 10, 10, kHorizontalFrame | kRaisedFrame)
{
   // Create a tool tip. P is the tool tips parent window (normally
   // fClient->GetRoot(), f is the frame to which the tool tip is associated,
   // text is the tool tip one-liner and delayms is the delay in ms before
   // the tool tip is shown.

   SetWindowAttributes_t attr;
   attr.fMask             = kWAOverrideRedirect | kWASaveUnder;
   attr.fOverrideRedirect = kTRUE;
   attr.fSaveUnder        = kTRUE;

   gGXW->ChangeWindowAttributes(fId, &attr);
   SetBackgroundColor(fgLightYellowPixel);

   fLabel = new TGLabel(this, text);
   fLabel->SetBackgroundColor(fgLightYellowPixel);

   AddFrame(fLabel, fL1 = new TGLayoutHints(kLHintsLeft | kLHintsTop,
                                            2, 3, 0, 0));
   MapSubwindows();
   Resize(GetDefaultSize());

   fWindow = 0;
   fPad    = 0;
   fBox    = box;
   fDelay = new TTipDelayTimer(this, delayms);
}

//______________________________________________________________________________
TGToolTip::~TGToolTip()
{
   // Delete a tool tip object.

   delete fDelay;
   delete fLabel;
   delete fL1;
}

//______________________________________________________________________________
void TGToolTip::DrawBorder()
{
   // Draw border of tool tip window.

   gGXW->DrawLine(fId, fgShadowGC, 0, 0, fWidth-2, 0);
   gGXW->DrawLine(fId, fgShadowGC, 0, 0, 0, fHeight-2);
   gGXW->DrawLine(fId, fgBlackGC,  0, fHeight-1, fWidth-1, fHeight-1);
   gGXW->DrawLine(fId, fgBlackGC,  fWidth-1, fHeight-1, fWidth-1, 0);
}

//______________________________________________________________________________
void TGToolTip::Show(Int_t x, Int_t y)
{
   // Show tool tip window.

   Move(x, y);
   MapWindow();
   RaiseWindow();
}

//______________________________________________________________________________
void TGToolTip::Hide()
{
   // Hide tool tip window. Use this method to hide the tool tip in a client
   // class.

   UnmapWindow();

   fDelay->Remove();
}

//______________________________________________________________________________
void TGToolTip::Reset()
{
   // Reset tool tip popup delay timer. Use this method to activate tool tip
   // in a client class.

   fDelay->Reset();
   gSystem->AddTimer(fDelay);
}

//______________________________________________________________________________
void TGToolTip::Reset(const TVirtualPad *parent)
{
   // Reset tool tip popup delay timer. Use this method to activate tool tip
   // in a client class. Use this method for graphics objects drawn in a
   // TCanvas, also the tool tip must have been created with the ctor
   // taking the TBox as argument.

   fPad = parent;

   fDelay->Reset();
   gSystem->AddTimer(fDelay);
}

//______________________________________________________________________________
Bool_t TGToolTip::HandleTimer(TTimer *)
{
   // If tool tip delay timer times out show tool tip window.

   Int_t    x=0, y=0, px1=0, px2=0, py1=0, py2=0;
   Window_t wtarget;

   if (fWindow) {
      gGXW->TranslateCoordinates(fWindow->GetId(), GetParent()->GetId(),
                                 fWindow->GetWidth() >> 1, fWindow->GetHeight(),
                                 x, y, wtarget);
   } else {

      if (!fPad) {
         Error("HandleTimer", "parent pad not set for tool tip");
         return kTRUE;
      }

      if (fBox) {
         px1 = fPad->XtoAbsPixel(fBox->GetX1());
         px2 = fPad->XtoAbsPixel(fBox->GetX2());
         py1 = fPad->YtoAbsPixel(fBox->GetY1());
         py2 = fPad->YtoAbsPixel(fBox->GetY2());
      }
      gGXW->TranslateCoordinates(gGXW->GetWindowID(fPad->GetCanvasID()),
                                 GetParent()->GetId(),
                                 px1 + ((px2-px1) >> 1), py1,
                                 x, y, wtarget);
   }

   Int_t   screenX, screenY;
   UInt_t  screenW, screenH;     // width and height of screen

   gGXW->GetWindowSize(gClient->GetRoot()->GetId(), screenX, screenY,
                                                    screenW, screenH);

   if (x + fWidth > screenW)
      x = screenW - fWidth;

   if (y+4 + GetHeight() > screenH)
      if (fWindow)
         y -= GetHeight() + fWindow->GetHeight() + 2*4;
      else
         y -= GetHeight() + py1-py2 + 2*4;

   Show(x, y+4);

   fDelay->Remove();

   return kTRUE;
}
