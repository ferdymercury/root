//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.20/00 13/11/98  18.43.35  by  Fons Rademakers
//*CMZ :  2.00/11 08/08/98  22.49.30  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  16.15.45  by  Fons Rademakers
//*-- Author :    Rene Brun   01/07/96

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
#include "TGroupButton.h"
#include "TGXW.h"
#include "TDialogCanvas.h"
#include "TCanvas.h"
#include "TText.h"
#include "TPaveLabel.h"
#include "TInterpreter.h"

#include <string.h>

ClassImp(TGroupButton)

//______________________________________________________________________________
//
//  A TGroupButton object is a specialized TButton used in a group of Buttons.
//  When a button from a group of TGroupButtons is selected, all other buttons
//  from the group with the same name are disabled.
//
//  For examples of use of TGroupButton objects, see:
//    TAttFillCanvas, TAttLineCanvas, TAttTextCanvas and TAttMarkerCanvas.

//______________________________________________________________________________
TGroupButton::TGroupButton(): TButton()
{
//*-*-*-*-*-*-*-*-*-*-*GroupButton default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
   SetFraming();
}

//______________________________________________________________________________
TGroupButton::TGroupButton(const Text_t *groupname, const Text_t *title, const Text_t *method, Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2)
           :TButton(title,method,x1,y1,x2,y2)
{
//*-*-*-*-*-*-*-*-*-*-*GroupButton normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//                     ==============================

   SetName((char*)groupname);
   SetFraming();
}

//______________________________________________________________________________
TGroupButton::~TGroupButton()
{
//*-*-*-*-*-*-*-*-*-*-*GroupButton default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================
}

//______________________________________________________________________________
void TGroupButton::DisplayColorTable(const Text_t *action, Float_t x0, Float_t y0, Float_t wc, Float_t hc)
{
//*-*-*-*-*-*-*-*-*-*-*Display Color Table in an attribute canvas*-*-*-*-*-*-*
//*-*                  ==========================================

   TGroupButton *colorpad;
   Int_t i, j;
   Int_t color;
   Float_t xlow, ylow, hs, ws;

//*-* draw colortable buttons
   hs = hc/5;
   ws = wc/10;
   char command[32];
   for (i=0;i<10;i++) {
      xlow = x0 + ws*i;
      for (j=0;j<5;j++) {
         ylow = y0 + hs*j;
         color = 10*j + i + 1;
         sprintf(command,"%s(%d)",action,10*j+i+1);
         colorpad = new TGroupButton("Color","",command,xlow, ylow, xlow+0.9*ws, ylow+0.9*hs);
         colorpad->SetFillColor(color);
         colorpad->SetBorderSize(1);
         if (i == 0 && j == 0) colorpad->SetBorderMode(-1);
         colorpad->Draw();
      }
   }
}

//______________________________________________________________________________
void TGroupButton::ExecuteAction()
{
//*-*-*-*-*-*-*-*Execute action of this button*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =============================
//*-*
//*-*   If an object has been selected before executing the APPLY button
//*-*   in the control canvas, The member function and its parameters
//*-*   for this object is executed via the interpreter.

   TVirtualPad *pad;
   char line[128];
   strcpy(line,GetMethod());
   char *method = line;
   if(!strlen(line)) return;
   char *params = strchr(method,'(');
   if (params) {
      *params = 0;
      params++;
      char *end = strrchr(params,')');
      if (end) *end = 0;
   }
   TDialogCanvas *canvas = (TDialogCanvas*)GetMother();
   TObject *obj = canvas->GetRefObject();
   if (!obj) return;
   if (strcmp(method,"PIXELS")) {
      obj->Execute(method,params);
   } else {
      TText *text = (TText*)GetListOfPrimitives()->First();
      Int_t npixels = Int_t((YtoPixel(0) - YtoPixel(1))*text->GetTextSize());
      Float_t dy;
      pad = gROOT->GetSelectedPad();
      if (obj->InheritsFrom(TPaveLabel::Class())) {
         TPaveLabel *pl = (TPaveLabel*)obj;
         dy = pad->AbsPixeltoY(0) - pad->AbsPixeltoY(npixels);
         sprintf(params,"%f",dy/(pl->GetY2() - pl->GetY1()));
      } else {
         dy = pad->AbsPixeltoY(0) - pad->AbsPixeltoY(npixels);
         sprintf(params,"%f",dy/(pad->GetY2() - pad->GetY1()));
      }
      obj->Execute("SetTextSize",params);
   }
}

//______________________________________________________________________________
void TGroupButton::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//*-*  This member function is called when a Button object is clicked.
//*-*

   if (fMother->GetCanvas()->IsEditable()) {
      TPad::ExecuteEvent(event,px,py);
      return;
   }

   TIter next(gPad->GetCanvas()->GetListOfPrimitives());
   TObject *obj;
   TGroupButton *button;
   TPad *pad;
   TDialogCanvas *canvas;

   switch (event) {

   case kButton1Down:

   case kMouseMotion:

      break;

   case kButton1Motion:

      break;

   case kButton1Up:
      //Clicked on APPLY button?
      if (!strcasecmp(GetName(),"APPLY")) {
         if (!strcasecmp(GetTitle(),"CLOSE")) {
            gPad->GetCanvas()->Close();
            return;
         }
         canvas = (TDialogCanvas*)GetMother();
         pad = canvas->GetRefPad();
         if (pad) pad->GetCanvas()->FeedbackMode(kFALSE);
         canvas->Apply(GetTitle());   //just in case the apply button executes some code
         if (pad) {
            pad->Modified(kTRUE);
            pad->Update();
         }
         break;
      }
      //Unset other buttons with same name
      while ((obj = next())) {
         if (obj == this) continue;
         if (obj->InheritsFrom(TGroupButton::Class())) {
            button = (TGroupButton*)obj;
            if (!strcmp(button->GetName(),GetName())) {
               if (button->GetBorderMode() < 0) {
                  button->SetBorderMode(1);
                  button->Modified();
               }
            }
         }
      }
      //Set button on
      SetBorderMode(-1);
      Modified();
      gPad->GetCanvas()->Modified();
      gPad->Update();
      break;
   }
}

//______________________________________________________________________________
void TGroupButton::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   TPad *padsav = (TPad*)gPad;
   char quote = '"';
   if (gROOT->ClassSaved(TGroupButton::Class())) {
       out<<"   ";
   } else {
       out<<"   TGroupButton *";
   }
   out<<"button = new TGroupButton("<<quote<<GetName()<<quote<<", "<<quote<<GetTitle()
      <<quote<<","<<quote<<GetMethod()<<quote
      <<","<<fXlowNDC
      <<","<<fYlowNDC
      <<","<<fXlowNDC+fWNDC
      <<","<<fYlowNDC+fHNDC
      <<");"<<endl;

   SaveFillAttributes(out,"button",0,1001);
   SaveLineAttributes(out,"button",1,1,1);
   SaveTextAttributes(out,"button",22,0,1,62,.75);

   if (GetBorderSize() != 2) {
      out<<"   button->SetBorderSize("<<GetBorderSize()<<");"<<endl;
   }
   if (GetBorderMode() != 1) {
      out<<"   button->SetBorderMode("<<GetBorderMode()<<");"<<endl;
   }

   out<<"   button->Draw();"<<endl;
   out<<"   button->cd();"<<endl;

   TIter next(GetListOfPrimitives());
   TObject *obj = next();  //do not save first primitive

   while ((obj = next()))
         obj->SavePrimitive(out, (Option_t *)next.GetOption());

   out<<"   "<<padsav->GetName()<<"->cd();"<<endl;
   padsav->cd();
}

