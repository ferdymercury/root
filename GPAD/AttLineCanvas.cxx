//*CMZ :  2.00/11 08/08/98  22.36.40  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  09.34.25  by  Rene Brun
//*-- Author :    Rene Brun   03/07/96

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
#include "TAttLineCanvas.h"
#include "TGroupButton.h"
#include "TLine.h"
#include "TText.h"

ClassImp(TAttLineCanvas)

//______________________________________________________________________________
//
//   An AttLineCanvas is a TDialogCanvas specialized to set line attributes.
//Begin_Html
/*
<img src="gif/attlinecanvas.gif">
*/
//End_Html
//

//______________________________________________________________________________
TAttLineCanvas::TAttLineCanvas() : TDialogCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*-*AttLineCanvas default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                    ================================

}

//_____________________________________________________________________________
TAttLineCanvas::TAttLineCanvas(const Text_t *name, const Text_t *title, UInt_t ww, UInt_t wh)
             : TDialogCanvas(name,title,ww,wh)
{
//*-*-*-*-*-*-*-*-*-*-*-*AttLineCanvas constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

   TVirtualPad *padsav = gPad;

   BuildStandardButtons();

//*-*- Line styles choice buttons
   TGroupButton *test1 = 0;
   TLine *line;
   Float_t xlow, ylow, wpad, hpad;
   Int_t i,j;
   xlow = 0.05;
   wpad = 0.9;
   hpad = 0.042;
   char command[64];
   for (i=0;i<4;i++) {
      ylow = 0.13 + i*hpad;
      sprintf(command,"SetLineStyle(%d)",i+1);
      test1 = new TGroupButton("Style","",command,xlow, ylow, xlow+wpad, ylow+0.8*hpad);
      if (i == 0) test1->SetBorderMode(-1);
      test1->SetBorderSize(1);
      test1->Draw();
      test1->cd();
      line = new TLine(0.05, 0.5, 0.95,0.5);
      line->SetLineColor(1);
      line->SetLineStyle(i+1);
      line->Draw();
      cd();
   }

//*-*-  Line Width choice buttons
   wpad = 0.19;
   hpad = 0.085;
   Int_t number = 0;
   for (j=0;j<3;j++) {
      ylow = 0.32 + j*hpad;
      for (i=0;i<5;i++) {
         number++;
         xlow = 0.05 + i*wpad;
         sprintf(command,"SetLineWidth(%d)",number);
         test1 = new TGroupButton("Width","",command,xlow, ylow, xlow+0.9*wpad, ylow+0.9*hpad);
         if (number == 1) test1->SetBorderMode(-1);
         test1->SetFillColor(18);
         test1->SetBorderSize(2);
         test1->Draw();
         test1->cd();
         line = new TLine(0.5, 0.1, 0.5,0.9);
         line->SetLineColor(1);
         line->SetLineWidth(number);
         line->Draw();
         cd();
      }
   }

//*-* draw colortable pads
   test1->DisplayColorTable("SetLineColor",0.05, 0.60, 0.90, 0.38);
   Modified(kTRUE);
   Update();

   padsav->cd();
}

//______________________________________________________________________________
TAttLineCanvas::~TAttLineCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*AttLineCanvas default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
}

//______________________________________________________________________________
void TAttLineCanvas::UpdateLineAttributes(Int_t col, Int_t sty, Int_t width)
{
//*-*-*-*-*-*-*-*-*-*-*Update object attributes*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

   TIter next(GetListOfPrimitives());
   TGroupButton *button;
   char cmd[64];
   fRefObject = gROOT->GetSelectedPrimitive();
   fRefPad    = (TPad*)gROOT->GetSelectedPad();
   if (fRefObject) {
      sprintf(cmd,"attline: %s",fRefObject->GetName());
      SetTitle(cmd);
   }
   TObject *obj;
   while ((obj = next())) {
      if (!obj->InheritsFrom(TGroupButton::Class())) continue;
      button = (TGroupButton*)obj;
      if (button->GetBorderMode() < 0) {
         button->SetBorderMode(1);
         button->Modified();
      }
      sprintf(cmd,"SetLineColor(%d)",col);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetLineStyle(%d)",sty);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetLineWidth(%d)",width);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      if (button->GetBorderMode() < 0) {
         button->Modified();
      }
   }
   Update();
}
