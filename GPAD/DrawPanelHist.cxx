//*CMZ :  2.00/11 08/08/98  22.46.52  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  16.14.31  by  Fons Rademakers
//*CMZ :  2.00/00 01/04/98  11.55.49  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  14.08.12  by  Fons Rademakers
//*-- Author :    Rene Brun   26/11/96

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

#include "TROOT.h"
#include "TDrawPanelHist.h"
#include "TGroupButton.h"
#include "TSlider.h"
#include "TText.h"
#include "TH1.h"
#include "TF1.h"

#include <stdio.h>

R__EXTERN TH1 *gCurrentHist;

ClassImp(TDrawPanelHist)

//______________________________________________________________________________
//
//  A TDrawPanelHist is a TDialogCanvas specialized to control
//  histogram drawing options.
//   With the mouse, the user can control:
//     - the drawing range in X and Y
//     - the drawing options
//   When the DRAW button is executed, the selected histogram is drawn
//   with the current parameters.
//
//   Use the slider to control the range of the histogram to be drawn.
//
//   The options are documented in TH1::Draw.
//Begin_Html
/*
<img src="gif/drawpanelhist.gif">
*/
//End_Html
//

//______________________________________________________________________________
TDrawPanelHist::TDrawPanelHist() : TDialogCanvas()
{
   // DrawPanelHist default constructor.

}

//_____________________________________________________________________________
TDrawPanelHist::TDrawPanelHist(const Text_t *name, const Text_t *title, UInt_t ww, UInt_t wh)
          : TDialogCanvas(name, title,ww,wh)
{
   // DrawPanelHist constructor.

   TGroupButton *b;
   fOption    = "";
   fRefPad    = (TPad*)gROOT->GetSelectedPad();
   fRefObject = this;
   fHistogram = gROOT->GetSelectedPrimitive();

   BuildStandardButtons();

   // Range Slider
   fSlider = new TSlider("slider","X slider",.05,.11,.95,.17);
   fSlider->SetObject(this);

   // Standard functions
   Int_t nlines = 14;
   Float_t x0 = 0.1;
   Float_t y  = 0.98;
   Float_t dy = (y-0.18)/nlines;
   Float_t yb = 0.7*dy;

   y -= dy;
   b = new TGroupButton("DRAW","hist","AddOption(\"hist\")",x0,y-yb,.27,y);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW","lego1","AddOption(\"lego1\")",x0,y-yb,.27,y);
      b->Draw();
   b = new TGroupButton("DRAW","lego2","AddOption(\"lego2\")",.3,y-yb,.47,y);
      b->Draw();
   b = new TGroupButton("DRAW","lego3","AddOption(\"lego3\")",.5,y-yb,.67,y);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW","surf","AddOption(\"surf1\")",x0,y-yb,.27,y);
      b->Draw();
   b = new TGroupButton("DRAW","surf/colors","AddOption(\"surf2\")",.3,y-yb,.47,y);
      b->Draw();
   b = new TGroupButton("DRAW","surf/contour","AddOption(\"surf3\")",.5,y-yb,.67,y);
      b->Draw();
   b = new TGroupButton("DRAW","Gouraud","AddOption(\"surf4\")",.7,y-yb,.87,y);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW","cont0","AddOption(\"cont0\")",x0,y-yb,.27,y);
      b->Draw();
   b = new TGroupButton("DRAW","cont1","AddOption(\"cont1\")",.3,y-yb,.47,y);
      b->Draw();
   b = new TGroupButton("DRAW","cont2","AddOption(\"cont2\")",.5,y-yb,.67,y);
      b->Draw();
   b = new TGroupButton("DRAW","cont3","AddOption(\"cont3\")",.7,y-yb,.87,y);
      b->Draw();

   // Quiet/Verbose buttons
   y -= dy;
   b = new TGroupButton("SYSTEM","Cartesian","",x0,y-yb,.45,y);
      b->SetBorderMode(-1);
      b->SetFillColor(15);
      b->Draw();
   b = new TGroupButton("SYSTEM","Polar","AddOption(\"pol\")",.55,y-yb,.9,y);
      b->SetFillColor(15);
      b->Draw();
   y -= dy;
   b = new TGroupButton("SYSTEM","Spheric","AddOption(\"sph\")",x0,y-yb,.45,y);
      b->SetFillColor(15);
      b->Draw();
   b = new TGroupButton("SYSTEM","Cylindric","AddOption(\"cyl\")",.55,y-yb,.9,y);
      b->SetFillColor(15);
      b->Draw();

   // Other buttons
   y -= dy;
   b = new TGroupButton("ERRORS","E1: errors/edges","AddOption(\"E1\")",x0,y-yb,.48,y);
      b->SetFillColor(41);
      b->Draw();
   b = new TGroupButton("ERRORS","E2: errors/rectangles","AddOption(\"E2\")",.52,y-yb,.9,y);
      b->SetFillColor(41);
      b->Draw();
   y -= dy;
   b = new TGroupButton("ERRORS","E3: errors/fill","AddOption(\"E3\")",x0,y-yb,.48,y);
      b->SetFillColor(41);
      b->Draw();
   b = new TGroupButton("ERRORS","E4: errors/contour","AddOption(\"E4\")",.52,y-yb,.9,y);
      b->SetFillColor(41);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW1","L : Lines","AddOption(\"L\")",x0,y-yb,.48,y);
      b->SetFillColor(31);
      b->Draw();
   b = new TGroupButton("DRAW2","P : markers","AddOption(\"P\")",.52,y-yb,.9,y);
      b->SetFillColor(31);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW","ARR : arrows","AddOption(\"ARR\")",x0,y-yb,.48,y);
      b->SetFillColor(31);
      b->Draw();
   b = new TGroupButton("DRAW","BOX : boxes","AddOption(\"BOX\")",.52,y-yb,.9,y);
      b->SetFillColor(31);
      b->Draw();
   y -= dy;
   b = new TGroupButton("DRAW","COL: colors","AddOption(\"COL\")",x0,y-yb,.48,y);
      b->SetFillColor(43);
      b->Draw();
   y -= dy;
   b = new TGroupButton("SAME","Same Picture","SetSame()",x0,y-yb,.48,y);
      b->SetFillColor(43);
      b->Draw();

   char cmd[64];
   if (fHistogram) {
      sprintf(cmd,"drawpanel: %s",fHistogram->GetName());
      SetTitle(cmd);
   }

   Modified(kTRUE);
   Update();

   fRefPad->cd();
}

//______________________________________________________________________________
TDrawPanelHist::~TDrawPanelHist()
{
   // DrawPanelHist destructor.

}

//______________________________________________________________________________
void TDrawPanelHist::AddOption(Option_t *option)
{
   // Add option to the current list of options.

   fOption += option;
}

//______________________________________________________________________________
void TDrawPanelHist::Apply(const Text_t *action)
{
   // Collect all options and draw histogram.

   if (!fRefPad) return;
   fRefPad->cd();

   SetCursor(kWatch);

   if (!strcmp(action,"Defaults")) {
      SetDefaults();
      SetCursor(kCross);
      return;
   }

   // take into account slider to set the histogram range;
   TObject *obj;
   TGroupButton *button;
   TIter next(fPrimitives);

   while ((obj = next())) {
      if (obj->InheritsFrom(TGroupButton::Class())) {
         button = (TGroupButton*)obj;
         if (button->GetBorderMode() < 0) button->ExecuteAction();
      }
   }

   TH1 *h1;
   if (fHistogram->InheritsFrom("TF1")) {
      h1 = (TH1*)((TF1*)fHistogram)->GetHistogram();
   } else if (fHistogram->InheritsFrom("TH1")) {
      h1 = (TH1*)fHistogram;
   } else {
      h1 = 0;
   }
   if (h1) {
      Int_t nbins   = h1->GetXaxis()->GetNbins();
      Int_t first   = 1 + Int_t(nbins*fSlider->GetMinimum());
      Int_t last    =     Int_t(nbins*fSlider->GetMaximum());
      h1->GetXaxis()->SetRange(first,last);
   }
   Int_t keep = fHistogram->TestBit(kCanDelete);
   fHistogram->SetBit(kCanDelete,0);
   fHistogram->Draw((char*)fOption.Data());
   fHistogram->SetBit(kCanDelete,keep);
   fOption   = "";
   fRefPad->Update();
   SetCursor(kCross);
}

//______________________________________________________________________________
void TDrawPanelHist::BuildStandardButtons()
{
   // Create Draw, Defaults and Close buttons.

   TGroupButton *b = new TGroupButton("APPLY","Draw","",.05,.01,.3,.09);
   b->SetTextSize(0.55);
   b->SetBorderSize(3);
   b->SetFillColor(44);
   b->Draw();

   b = new TGroupButton("APPLY","Defaults","",.375,.01,.625,.09);
   b->SetTextSize(0.55);
   b->SetBorderSize(3);
   b->SetFillColor(44);
   b->Draw();

   b = new TGroupButton("APPLY","Close","",.70,.01,.95,.09);
   b->SetTextSize(0.55);
   b->SetBorderSize(3);
   b->SetFillColor(44);
   b->Draw();
}

//______________________________________________________________________________
void TDrawPanelHist::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
   // Control mousse events when slider is used in a drawpanel
   //
   // This function is called by TPad::ExecuteEvent or TSliderBox::ExecuteEvent
   // We return in the first case.
   // When called by the slider,  px = 0 and py = 0

   if (px && py) {
      SetCursor(kCross);
      return;
   }

   Float_t xpmin = fSlider->GetMinimum();
   Float_t xpmax = fSlider->GetMaximum();

   static TH1 *h1;
   static Bool_t done = kFALSE;
   static Int_t px1,py1,px2,py2,nbins;
   static Int_t pxmin,pxmax;
   static Float_t xmin,xmax,ymin,ymax,xleft,xright;
   Int_t first,last;

   if (!fRefPad) return;
   fRefPad->cd();
   fRefPad->GetCanvas()->FeedbackMode(kTRUE);
   gGXW->SetLineWidth(2);

   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      if (done) gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      done = kTRUE;
      if (fHistogram->InheritsFrom("TF1")) {
         h1 = (TH1*)((TF1*)fHistogram)->GetHistogram();
      } else if (fHistogram->InheritsFrom("TH1")) {
         h1 = (TH1*)fHistogram;
      } else {
         h1 = 0;
         break;
      }
      nbins = h1->GetXaxis()->GetNbins();
      xmin  = fRefPad->GetUxmin();
      xmax  = fRefPad->GetUxmax();
      xleft = xmin+(xmax-xmin)*xpmin;
      xright= xmin+(xmax-xmin)*xpmax;
      ymin  = fRefPad->GetUymin();
      ymax  = fRefPad->GetUymax();
      px1   = fRefPad->XtoAbsPixel(xleft);
      py1   = fRefPad->YtoAbsPixel(ymin);
      px2   = fRefPad->XtoAbsPixel(xright);
      py2   = fRefPad->YtoAbsPixel(ymax);
      pxmin = fRefPad->XtoAbsPixel(xmin);
      pxmax = fRefPad->XtoAbsPixel(xmax);
      gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      break;

   case kMouseMotion:
      break;

   case kButton1Motion:
      if (h1 == 0) break;
      gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      first   = 1 + Int_t(nbins*xpmin);
      last    =     Int_t(nbins*xpmax);
      xleft  = fRefPad->XtoPad(h1->GetXaxis()->GetBinLowEdge(first));
      xright = fRefPad->XtoPad(h1->GetXaxis()->GetBinLowEdge(last)+h1->GetXaxis()->GetBinWidth(last));
      px1 = fRefPad->XtoAbsPixel(xleft);
      px2 = fRefPad->XtoAbsPixel(xright);
      if (px1 < pxmin) px1 = pxmin;
      if (px2 > pxmax) px2 = pxmax;
      gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);

      break;

   case kButton1Up:
      gGXW->DrawBox(px1, py1, px2, py2, TGXW::kHollow);
      done = kFALSE;
      fRefPad->GetCanvas()->FeedbackMode(kFALSE);
      gGXW->SetLineWidth(-1);

      break;
   }
}

//______________________________________________________________________________
void TDrawPanelHist::SavePrimitive(ofstream &, Option_t *)
{
   // Save this drawpanel in a macro.

}

//______________________________________________________________________________
void TDrawPanelHist::SetDefaults()
{
   // Set default draw panel options.

   fOption    = "";
   fRefPad    = (TPad*)gROOT->GetSelectedPad();
   fRefObject = this;
   fHistogram = gROOT->GetSelectedPrimitive();

   TIter next(fPrimitives);
   TObject *obj;
   TGroupButton *button;
   while ((obj = next())) {
      if (obj == this) continue;
      if (obj->InheritsFrom(TGroupButton::Class())) {
         button = (TGroupButton*)obj;
         if (button->GetBorderMode() < 0) {
            button->SetBorderMode(1);
            button->Modified();
         }
      }
   }
   fSlider->SetRange(0,1);

   char cmd[64];
   if (fHistogram) {
      sprintf(cmd,"drawpanel: %s",fHistogram->GetName());
      SetTitle(cmd);
   }

   Modified();
   Update();
}

//______________________________________________________________________________
void TDrawPanelHist::SetSame()
{
   // Set graphics option "same".

   AddOption("same");
}
