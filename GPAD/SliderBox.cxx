//*CMZ :  2.00/10 27/06/98  18.06.49  by  Rene Brun
//*CMZ :  2.00/09 14/06/98  13.35.37  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  16.38.47  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  15.58.34  by  Fons Rademakers
//*-- Author :    Rene Brun   23/11/96

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

#include <fstream.h>

#include "TROOT.h"
#include "TSlider.h"
#include "TSliderBox.h"
#include "TInterpreter.h"

#include <string.h>

ClassImp(TSliderBox)

//______________________________________________________________________________
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TSliderBox                                                           //
//                                                                      //
//  The moving box in a TSlider                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
TSliderBox::TSliderBox(): TWbox()
{
//*-*-*-*-*-*-*-*-*-*-*SliderBox default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =============================

  fSlider = 0;
}

//______________________________________________________________________________
TSliderBox::TSliderBox(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2, Color_t color, Short_t bordersize, Short_t bordermode)
           :TWbox(x1,y1,x2,y2,color,bordersize,bordermode)
{
//*-*-*-*-*-*-*-*-*-*-*SliderBox normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   fSlider = 0;
}

//______________________________________________________________________________
TSliderBox::~TSliderBox()
{
//*-*-*-*-*-*-*-*-*-*-*SliderBox default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

}

//______________________________________________________________________________
void TSliderBox::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Interaction with a slider*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================

   const Int_t kMaxDiff = 5;
   const Int_t kMinSize = 20;

   static Int_t px1, px2, py1, py2, pxl, pyl, pxt, pyt, pxold, pyold;
   static Int_t px1p, px2p, py1p, py2p;
   static Bool_t  L, R, T, B, INSIDE;
   Int_t  wx, wy;
   Bool_t doing_again = kFALSE;
   Bool_t opaque  = gPad->OpaqueMoving();
   Bool_t ropaque = gPad->OpaqueResizing();

   TVirtualPad  *parent = gPad;

   Int_t border   = parent->GetBorderSize();
   Int_t pxpadmin = parent->XtoAbsPixel(parent->GetX1()) + border;
   Int_t pxpadmax = parent->XtoAbsPixel(parent->GetX2()) - border;
   Int_t pypadmin = parent->YtoAbsPixel(parent->GetY1()) - border;
   Int_t pypadmax = parent->YtoAbsPixel(parent->GetY2()) + border;

   Bool_t vertical = kTRUE;
   if (pxpadmax-pxpadmin > pypadmin-pypadmax) vertical = kFALSE;

again:

   switch (event) {

   case kButton1Down:

      gGXW->SetLineColor(-1);
      TAttLine::Modify();  //Change line attributes only if necessary
      if (GetFillColor())
         gGXW->SetLineColor(GetFillColor());
      else
         gGXW->SetLineColor(1);
      gGXW->SetLineWidth(2);

      // No break !!!

   case kMouseMotion:

      px1 = gPad->XtoAbsPixel(GetX1());
      py1 = gPad->YtoAbsPixel(GetY1());
      px2 = gPad->XtoAbsPixel(GetX2());
      py2 = gPad->YtoAbsPixel(GetY2());

      if (px1 < px2) {
         pxl = px1;
         pxt = px2;
      } else {
         pxl = px2;
         pxt = px1;
      }
      if (py1 < py2) {
         pyl = py1;
         pyt = py2;
      } else {
         pyl = py2;
         pyt = py1;
      }

      px1p = pxpadmin;
      py1p = pypadmin;
      px2p = pxpadmax;
      py2p = pypadmax;

      L = R  = T = B = INSIDE = kFALSE;

      if (vertical && (px > pxl+kMaxDiff && px < pxt-kMaxDiff) &&
          TMath::Abs(py - pyl) < kMaxDiff) {             // top edge
         pxold = pxl; pyold = pyl; T = kTRUE;
         gPad->SetCursor(kTopSide);
      }

      if (vertical && (px > pxl+kMaxDiff && px < pxt-kMaxDiff) &&
          TMath::Abs(py - pyt) < kMaxDiff) {             // bottom edge
         pxold = pxt; pyold = pyt; B = kTRUE;
         gPad->SetCursor(kBottomSide);
      }

      if (!vertical && (py > pyl+kMaxDiff && py < pyt-kMaxDiff) &&
          TMath::Abs(px - pxl) < kMaxDiff) {             // left edge
         pxold = pxl; pyold = pyl; L = kTRUE;
         gPad->SetCursor(kLeftSide);
      }

      if (!vertical && (py > pyl+kMaxDiff && py < pyt-kMaxDiff) &&
          TMath::Abs(px - pxt) < kMaxDiff) {             // right edge
          pxold = pxt; pyold = pyt; R = kTRUE;
          gPad->SetCursor(kRightSide);
      }

      if ((px > pxl+kMaxDiff && px < pxt-kMaxDiff) &&
          (py > pyl+kMaxDiff && py < pyt-kMaxDiff)) {    // inside box
         pxold = px; pyold = py; INSIDE = kTRUE;
         if (event == kButton1Down)
            gPad->SetCursor(kMove);
         else
            gPad->SetCursor(kCross);
      }

      fResizing = kFALSE;
      if ( L || R || T || B)
         fResizing = kTRUE;

      if ( !L && !R && !T && !B && !INSIDE)
         gPad->SetCursor(kCross);

      break;

   case kButton1Motion:

      wx = wy = 0;

      if (T) {
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
         py2 += py - pyold;
         if (py2 > py1-kMinSize) { py2 = py1-kMinSize; wy = py2; }
         if (py2 < py2p) { py2 = py2p; wy = py2; }
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      }
      if (B) {
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
         py1 += py - pyold;
         if (py1 < py2+kMinSize) { py1 = py2+kMinSize; wy = py1; }
         if (py1 > py1p) { py1 = py1p; wy = py1; }
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      }
      if (L) {
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
         px1 += px - pxold;
         if (px1 > px2-kMinSize) { px1 = px2-kMinSize; wx = px1; }
         if (px1 < px1p) { px1 = px1p; wx = px1; }
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      }
      if (R) {
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
         px2 += px - pxold;
         if (px2 < px1+kMinSize) { px2 = px1+kMinSize; wx = px2; }
         if (px2 > px2p) { px2 = px2p; wx = px2; }
         if (!ropaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      }
      if (INSIDE) {
         if (!opaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);  // draw the old box
         Int_t dx = px - pxold;
         Int_t dy = py - pyold;
         px1 += dx; py1 += dy; px2 += dx; py2 += dy;
         if (px1 < px1p) { dx = px1p - px1; px1 += dx; px2 += dx; wx = px+dx; }
         if (px2 > px2p) { dx = px2 - px2p; px1 -= dx; px2 -= dx; wx = px-dx; }
         if (py1 > py1p) { dy = py1 - py1p; py1 -= dy; py2 -= dy; wy = py-dy; }
         if (py2 < py2p) { dy = py2p - py2; py1 += dy; py2 += dy; wy = py+dy; }
         if (!opaque) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);  // draw the new box
      }

      if (wx || wy) {
         if (wx) px = wx;
         if (wy) py = wy;
         gGXW->Warp(px, py);
      }

      pxold = px;
      pyold = py;

      if ((INSIDE && opaque) || (fResizing && ropaque)) {
         event = kButton1Up;
         doing_again = kTRUE;
         goto again;
      }

      break;

   case kButton1Up:

      if (T || B || L || R || INSIDE) {
         fX1 = gPad->AbsPixeltoX(px1);
         fY1 = gPad->AbsPixeltoY(py1);
         fX2 = gPad->AbsPixeltoX(px2);
         fY2 = gPad->AbsPixeltoY(py2);
      }

      if (INSIDE) {
         // if it was not a pad that was moved then it must have been
         // a box or something like that so we have to redraw the pad
         if (parent == gPad) gPad->Modified(kTRUE);
         if (!doing_again) gPad->SetCursor(kCross);
      }

      if (T || B ||  L || R )
         gPad->Modified(kTRUE);

      // Restore original event type
      if (doing_again)
         event = kButton1Motion;
      else {
         gGXW->SetLineColor(-1);
         gGXW->SetLineWidth(-1);
      }

      break;
   }


   // Give control to object using the slider

   Float_t xpmin,xpmax;
   if (vertical) {
      xpmin = Float_t(pypadmin-py1)/Float_t(pypadmin-pypadmax);
      xpmax = Float_t(pypadmin-py2)/Float_t(pypadmin-pypadmax);
   } else {  //vertical slider
      xpmin = Float_t(px1-pxpadmin)/Float_t(pxpadmax-pxpadmin);
      xpmax = Float_t(px2-pxpadmin)/Float_t(pxpadmax-pxpadmin);
   }
   fSlider->SetMinimum(xpmin);
   fSlider->SetMaximum(xpmax);

   //A user method to execute?
   Int_t lenMethod = strlen(fSlider->GetMethod());
   if (event == kButton1Up && lenMethod > 0 ) {
      gPad->SetCursor(kWatch);
      gInterpreter->ProcessLine(fSlider->GetMethod());
      return;
   }

   //An object connected to this slider?
   TObject *obj = fSlider->GetObject();
   if (obj) {
      obj->ExecuteEvent(event,0,0);
   }
}

//______________________________________________________________________________
void TSliderBox::SavePrimitive(ofstream &, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

}

