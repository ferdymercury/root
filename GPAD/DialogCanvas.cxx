//*CMZ :  2.00/11 08/08/98  22.35.33  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  18.03.36  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  14.01.59  by  Fons Rademakers
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
#include "TDialogCanvas.h"
#include "TGroupButton.h"
#include "TText.h"
#include "TStyle.h"

ClassImp(TDialogCanvas)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*   A DialogCanvas is a canvas specialized to set attributes.
//*-*   It contains, in general, TGroupButton objects.
//*-*   When the APPLY button is executed, the actions corresponding
//*-*   to the active buttons are executed via the Interpreter.
//*-*
//*-*  See examples in TAttLineCanvas, TAttFillCanvas, TAttTextCanvas, TAttMarkerCanvas

//______________________________________________________________________________
TDialogCanvas::TDialogCanvas() : TCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*-*DialogCanvas default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                    ================================

}

//_____________________________________________________________________________
TDialogCanvas::TDialogCanvas(const Text_t *name, const Text_t *title, UInt_t ww, UInt_t wh)
             : TCanvas(name,title,-ww,wh)
{
//*-*-*-*-*-*-*-*-*-*-*-*DialogCanvas constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================

   SetFillColor(36);
   fIsEditable = kIsNotEditable;
   fRefObject  = 0;
   fRefPad     = 0;
}

//______________________________________________________________________________
TDialogCanvas::~TDialogCanvas()
{
//*-*-*-*-*-*-*-*-*-*-*DialogCanvas default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
}

//______________________________________________________________________________
void TDialogCanvas::Apply(const Text_t *action)
{
//*-*-*-*-*-*-*-*-*Called when the APPLY button is executed*-*-*-*-*-*-*-*-*-*-*
//*-*              ========================================

   SetCursor(kWatch);

   TIter next(fPrimitives);
   TObject *refobj = fRefObject;
   TObject *obj;
   TGroupButton *button;
   if (!strcmp(action,"gStyle")) fRefObject = gStyle;

   while ((obj = next())) {
      if (obj->InheritsFrom(TGroupButton::Class())) {
         button = (TGroupButton*)obj;
         if (button->GetBorderMode() < 0) button->ExecuteAction();
      }
   }
   fRefObject = refobj;

}

//______________________________________________________________________________
void TDialogCanvas::BuildStandardButtons()
{
//*-*-*-*-*-*-*-*-*Create APPLY, gStyle and CLOSE buttons*-*-*-*-*-*-*-*-*-*-*
//*-*              ======================================

   TGroupButton *apply = new TGroupButton("APPLY","Apply","",.05,.01,.3,.09);
   apply->SetTextSize(0.55);
   apply->SetBorderSize(3);
   apply->SetFillColor(44);
   apply->Draw();

   apply = new TGroupButton("APPLY","gStyle","",.375,.01,.625,.09);
   apply->SetTextSize(0.55);
   apply->SetBorderSize(3);
   apply->SetFillColor(44);
   apply->Draw();

   apply = new TGroupButton("APPLY","Close","",.70,.01,.95,.09);
   apply->SetTextSize(0.55);
   apply->SetBorderSize(3);
   apply->SetFillColor(44);
   apply->Draw();
}

//______________________________________________________________________________
void TDialogCanvas::Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2)
{
//*-*-*-*-*-*-*-*-*-*-*Set world coordinate system for the pad*-*-*-*-*-*-*
//*-*                  =======================================

   TPad::Range(x1,y1,x2,y2);
}

//______________________________________________________________________________
void TDialogCanvas::RecursiveRemove(TObject *obj)
{
//*-*-*-*-*-*-*-*Recursively remove object from a pad and its subpads*-*-*-*-*
//*-*            ====================================================

   TPad::RecursiveRemove(obj);
   if (fRefObject == obj) fRefObject = 0;
   if (fRefPad    == obj) fRefPad    = 0;
}

//______________________________________________________________________________
void TDialogCanvas::SetObject()
{
//*-*-*-*-*-*-*Copy referenced object/pad in gROOT to this dialogcanvas*-*-*-*
//*-*          ========================================================

   fRefObject = gROOT->GetSelectedPrimitive();
   fRefPad    = (TPad*)gROOT->GetSelectedPad();
}
