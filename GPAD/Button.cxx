//*CMZ :  2.22/01 03/05/99  11.39.17  by  Fons Rademakers
//*CMZ :  2.21/05 07/02/99  16.47.39  by  Fons Rademakers
//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.20/03 06/12/98  11.01.00  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  17.18.36  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  16.02.26  by  Fons Rademakers
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
#include "TButton.h"
#include "TCanvas.h"
#include "TText.h"
#include "TInterpreter.h"

#include <string.h>

const Int_t kFraming = BIT(6);

ClassImp(TButton)

//______________________________________________________________________________
//  A TButton object is a user interface object.
//  A TButton has a name and an associated action.
//  When the button is clicked with the left mouse button, the cooresponding
//  action is executed.
//  A Tbutton can be created by direct invokation of the constructors
//  or via the graphics editor.
//  The Action can be set via TButton::SetMethod.
//  The action can be any command. Examples of actions:
//     "34+78" When the button is clicked, the result of addition is printed.
//     ".x macro.C" . Clicking the button executes the macro macro.C
//  The action can be modified at any time via TButton::SetMethod.
//
//  To modify the layout/size/contents of one or several buttons
//  in a canvas, you must set the canvas editable via TCanvas::SetEditable.
//  By default a TCanvas is editable.
//  By default a TDialogCanvas is not editable.
//  TButtons are in general placed in a TDialogCanvas.
//
//  A TButton being a TPad, one can draw graphics primitives in it
//  when the TCanvas/TDialogCanvas is editable.
//
//       Example of a macro creating a dialogcanvas with buttons
//void but() {
////   example of a dialogcanvas with a few buttons
//
//   TDialogCanvas *dialog = new TDialogCanvas("dialog","",200,300);
//
//// Create first button. Clicking on this button will execute 34+56
//   TButton *but1 = new TButton("button1","34+56",.05,.8,.45,.88);
//   but1->Draw();
//
//// Create second button. Clicking on this button will create a new canvas
//   TButton *but2 = new TButton("canvas","c2 = new TCanvas("c2")",.55,.8,.95,.88);
//   but2->Draw();
//
//// Create third button. Clicking on this button will invoke the browser
//   but3 = new TButton("Browser","br = new TBrowser("br")",0.25,0.54,0.75,0.64);
//   but3->SetFillColor(42);
//   but3->Draw();
//
//// Create last button with no name. Instead a graph is draw inside the button
//// Clicking on this button will invoke the macro tutorials/graph.C
//   button = new TButton("",".x tutorials/graph.C",0.15,0.15,0.85,0.38);
//   button->SetFillColor(42);
//   button->Draw();
//   button->cd();
//
//   Float_t x[8] = {0.08,0.21,0.34,0.48,0.61,0.7,0.81,0.92};
//   Float_t y[8] = {0.2,0.65,0.4,0.34,0.24,0.43,0.75,0.52};
//   TGraph *graph = new TGraph(8,x,y);
//   graph->SetMarkerColor(4);
//   graph->SetMarkerStyle(21);
//   graph->Draw("lp");
//
//   dialog->cd();
//}
//
//   Executing the macro above produces the following dialogcanvas
//Begin_Html
/*
<img src="gif/dialogbuttons.gif">
*/
//End_Html

//______________________________________________________________________________
TButton::TButton(): TPad()
{
//*-*-*-*-*-*-*-*-*-*-*Button default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================

}

//______________________________________________________________________________
TButton::TButton(const Text_t *title, const Text_t *method, Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2)
           :TPad("button",title,x1,y1,x2,y2,18,2,1), TAttText(22,0,1,61,0.65)
{
//*-*-*-*-*-*-*-*-*-*-*Button normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
//
//   Note that the button coordinates x1,y1,x2,y2 are always in the range [0,1]
//
   fFraming=0;
   SetBit(kCanDelete);
   fModified = kTRUE;
   fMethod = method;
   if (strlen(title)) {
      TText *text = new TText(0.5*(fX1+fX2),0.5*(fY1+fY2),(char*)title);
      fPrimitives->Add(text);
   }
}

//______________________________________________________________________________
TButton::~TButton()
{
//*-*-*-*-*-*-*-*-*-*-*Button default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================

   if (fPrimitives) fPrimitives->Delete();
}

//______________________________________________________________________________
void TButton::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this button with its current attributes*-*-*-*-*
//*-*                  ============================================

   AppendPad(option);
}

//______________________________________________________________________________
void TButton::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a Button object is clicked.
//

   if (fMother->GetCanvas()->IsEditable()) {
      TPad::ExecuteEvent(event,px,py);
      return;
   }

   HideToolTip(event);

   switch (event) {

   case kMouseEnter:
      TPad::ExecuteEvent(event,px,py);
      break;

   case kButton1Down:
      SetBorderMode(-1);
      fFocused=1;
      Modified();
      GetCanvas()->Modified();
      Update();
      break;

   case kMouseMotion:

      break;

   case kButton1Motion:
      if (px<XtoAbsPixel(1) && px>XtoAbsPixel(0) &&
          py<YtoAbsPixel(0) && py>YtoAbsPixel(1)) {
         if (!fFocused) {
            SetBorderMode(-1);
            fFocused=1;
            Modified();
            GetCanvas()->Modified();
            Update();
         }
      } else if (fFocused) {
         SetBorderMode(1);
         fFocused=0;
         Modified();
         GetCanvas()->Modified();
         Update();
      }
      break;

   case kButton1Up:
      gPad->SetCursor(kWatch);
   if (fFocused) gInterpreter->ProcessLine(GetMethod());
#ifndef WIN32
      SetBorderMode(1);
      Modified();
      GetCanvas()->Modified();
      Update();
#else
      // The following instructions must be executed via the interpreter
      // Otherwise, we get a Thread problem under WindowsNT
      char command[128];
      sprintf(command,"((TButton*)0x%x)->%s",this,"SetBorderMode(1)");
      gInterpreter->ProcessLine(command);
      sprintf(command,"((TButton*)0x%x)->%s",this,"Modified()");
      gInterpreter->ProcessLine(command);
      sprintf(command,"((TButton*)0x%x)->%s",this,"GetCanvas()->Modified()");
      gInterpreter->ProcessLine(command);
      sprintf(command,"((TButton*)0x%x)->%s",this,"Update()");
      gInterpreter->ProcessLine(command);
#endif
      gPad->SetCursor(kCross);
      break;
   }
}

//______________________________________________________________________________
void TButton::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this button with its current attributes*-*-*-*
//*-*                  =============================================

   TPad::Paint(option);  //only called for Postscript print
}


//______________________________________________________________________________
void TButton::PaintModified()
{
   TObject *obj = GetListOfPrimitives()->First();
   if (obj && obj->InheritsFrom("TText")) {
      TText *text = (TText*)obj;
      text->SetTextSize(GetTextSize());
      text->SetTextFont(GetTextFont());
      text->SetTextAlign(GetTextAlign());
      text->SetTextColor(GetTextColor());
      text->SetTextAngle(GetTextAngle());
   }
   TPad::PaintModified();
}

//______________________________________________________________________________
void TButton::Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*-*-*Set world coordinate system for the pad*-*-*-*-*-*-*
//*-*                  =======================================

   TPad::Range(x1,y1,x2,y2);
}

//______________________________________________________________________________
void TButton::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   TPad *padsav = (TPad*)gPad;
   char quote = '"';
   if (gROOT->ClassSaved(TButton::Class())) {
       out<<"   ";
   } else {
       out<<"   TButton *";
   }
   out<<"button = new TButton("<<quote<<GetTitle()
      <<quote<<","<<quote<<GetMethod()<<quote
      <<","<<fXlowNDC
      <<","<<fYlowNDC
      <<","<<fXlowNDC+fWNDC
      <<","<<fYlowNDC+fHNDC
      <<");"<<endl;

   SaveFillAttributes(out,"button",0,1001);
   SaveLineAttributes(out,"button",1,1,1);
   SaveTextAttributes(out,"button",22,0,1,61,.65);

   if (GetBorderSize() != 2) {
      out<<"   button->SetBorderSize("<<GetBorderSize()<<");"<<endl;
   }
   if (GetBorderMode() != 1) {
      out<<"   button->SetBorderMode("<<GetBorderMode()<<");"<<endl;
   }

   if (GetFraming()) out<<"button->SetFraming();"<<endl;

   out<<"   button->Draw();"<<endl;

   TIter next(GetListOfPrimitives());
   TObject *obj = next();  //do not save first primitive

   Int_t nprim = 0;
   while ((obj = next())) {
       if (!nprim) out<<"   button->cd();"<<endl;
       nprim++;
       obj->SavePrimitive(out, (Option_t *)next.GetOption());
   }

   if (nprim) out<<"   "<<padsav->GetName()<<"->cd();"<<endl;
   padsav->cd();
}

//______________________________________________________________________________
void TButton::SetFraming(Bool_t f)
{
// if framing is set, button will be highlighted

   fFraming=f;
   if (f) SetBit(kFraming);
   else   ResetBit(kFraming);
}
