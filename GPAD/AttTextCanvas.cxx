//*CMZ :  2.23/12 30/01/2000  17.16.02  by  Rene Brun
//*CMZ :  2.23/02 03/09/99  12.24.55  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.37.16  by  Rene Brun
//*CMZ :  1.03/09 10/12/97  09.35.54  by  Rene Brun
//*-- Author :    Rene Brun   04/07/96

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

#include "TROOT.h"
#include "TAttTextCanvas.h"
#include "TGroupButton.h"
#include "TLine.h"
+SEq,TText.

ClassImp(TAttTextCanvas)

//______________________________________________________________________________
//
//   An AttTextCanvas is a TDialogCanvas specialized to set text attributes.
//Begin_Html
/*
<img src="gif/atttextcanvas.gif">
*/
//End_Html
//

//______________________________________________________________________________
TAttTextCanvas::TAttTextCanvas() : TDialogCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*-*AttTextCanvas default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                    ================================

}

//_____________________________________________________________________________
TAttTextCanvas::TAttTextCanvas(const char *name, const char *title, UInt_t ww, UInt_t wh)
             : TDialogCanvas(name,title,ww,wh)
{
//*-*-*-*-*-*-*-*-*-*-*-*AttTextCanvas constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

   TVirtualPad *padsav = gPad;

   BuildStandardButtons();

//*-*- Font styles choice buttons
   char fx11[50];
   TGroupButton *test1 = 0;
   TText *text;
   Float_t xlow, ylow, wpad, hpad;
   Int_t i,j;
   Int_t nfonts = 14;
   xlow = 0.46;
   wpad = 0.98-xlow;
   hpad = (0.98-0.38)/nfonts;
   char command[64];
   for (i=1;i<=nfonts;i++) {
      if (i==  1) strcpy(fx11, "times-medium-i-normal");
      if (i==  2) strcpy(fx11, "times-bold-r-normal");
      if (i==  3) strcpy(fx11, "times-bold-i-normal");
      if (i==  4) strcpy(fx11, "helvetica-medium-r-normal");
      if (i==  5) strcpy(fx11, "helvetica-medium-o-normal");
      if (i==  6) strcpy(fx11, "helvetica-bold-r-normal");
      if (i==  7) strcpy(fx11, "helvetica-bold-o-normal");
      if (i==  8) strcpy(fx11, "courier-medium-r-normal");
      if (i==  9) strcpy(fx11, "courier-medium-o-normal");
      if (i== 10) strcpy(fx11, "courier-bold-r-normal");
      if (i== 11) strcpy(fx11, "courier-bold-o-normal");
      if (i== 12) strcpy(fx11, "greek-medium-r-normal");
      if (i== 13) strcpy(fx11, "times-medium-r-normal");
      if (i== 14) strcpy(fx11, "Zaft-Dingbats");
      ylow = 0.38 + (i-1)*hpad;
      sprintf(command,"SetTextFont(%d)",10*i+2);
      test1 = new TGroupButton("Style",fx11,command,xlow, ylow, xlow+wpad, ylow+0.8*hpad);
      if (i == 6) test1->SetBorderMode(-1);
      test1->SetBorderSize(1);
      test1->Draw();
      cd();
   }

//*-*-  Text Alignment choice buttons
   wpad = 0.12;
   hpad = 0.10;
   Int_t align;
   Float_t xt = 0;
   Float_t yt = 0;
   for (j=0;j<3;j++) {
      ylow = 0.12 + j*hpad;
      for (i=0;i<3;i++) {
         align = 10*(j+1) + i + 1;
         xlow = 0.02 + i*wpad;
         sprintf(command,"SetTextAlign(%d)",align);
         test1 = new TGroupButton("Align","",command,xlow, ylow, xlow+0.9*wpad, ylow+0.9*hpad);
         if (!i && !j) test1->SetBorderMode(-1);
         test1->SetFillColor(42);
         test1->SetBorderSize(2);
         test1->Draw();
         test1->cd();
         sprintf(fx11,"%d",align);
         if (i == 0) yt = 0.01;
         if (i == 1) yt = 0.5;
         if (i == 2) yt = 0.99;
         if (j == 0) xt = 0.01;
         if (j == 1) xt = 0.5;
         if (j == 2) xt = 0.99;
         text = new TText(xt, yt, fx11);
         test1->SetTitle(fx11);
         test1->SetTextAlign(align);
         test1->SetTextSize(0.3);
         text->Draw();
         cd();
      }
   }

//*-*-  Text Size choice buttons
   wpad = (0.98-0.42)/5;
   hpad = 0.08;
   Int_t npixels = 0;
   Float_t tsize;
   for (j=0;j<3;j++) {
      ylow = 0.12 + j*hpad;
      for (i=0;i<5;i++) {
         npixels += 3;
         xlow = 0.42 + i*wpad;
         sprintf(command,"PIXELS(%d)",npixels);
         test1 = new TGroupButton("Size","Aa",command,xlow, ylow, xlow+0.9*wpad, ylow+0.9*hpad);
         if (npixels == 18) test1->SetBorderMode(-1);
         test1->SetFillColor(18);
         test1->SetBorderSize(2);
         tsize = test1->PixeltoY(0) - test1->PixeltoY(npixels);
         test1->SetTextSize(tsize);
         test1->Draw();
         cd();
      }
   }

//*-* draw colortable pads
   test1->DisplayColorTable("SetTextColor",0.02, 0.70, 0.40, 0.28);
   Update();

   padsav->cd();
}

//______________________________________________________________________________
TAttTextCanvas::~TAttTextCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*AttTextCanvas default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
}

//______________________________________________________________________________
void TAttTextCanvas::UpdateTextAttributes(Int_t align,Float_t angle,Int_t col,Int_t font,Float_t tsize)
{
//*-*-*-*-*-*-*-*-*-*-*Update text attributes*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

   TIter next(GetListOfPrimitives());
   TGroupButton *button;
   char cmd[64];
   fRefObject = gROOT->GetSelectedPrimitive();
   fRefPad    = (TPad*)gROOT->GetSelectedPad();
   if (fRefObject) {
      sprintf(cmd,"atttext: %s",fRefObject->GetName());
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
      sprintf(cmd,"SetTextAlign(%d)",align);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetTextAngle(%f)",angle);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetTextColor(%d)",col);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetTextFont(%d)",font);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      sprintf(cmd,"SetTextSize(%f)",tsize);
      if (!strcmp(button->GetTitle(),cmd)) button->SetBorderMode(-1);
      if (button->GetBorderMode() < 0) {
         button->Modified();
      }
   }
   Update();
}
