//*CMZ :  2.20/05 15/12/98  13.08.11  by  Rene Brun
//*CMZ :  2.20/04 11/12/98  16.15.21  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
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
#include <iostream.h>

#include "TROOT.h"
#include "Buttons.h"
#include "TPaveVar.h"

const Int_t kBranchObject = BIT(15);

ClassImp(TPaveVar)

//______________________________________________________________________________
//  A PaveVar is a TPaveLabel  specialized to process
//  variables and cuts inside a TTreeViewer.
//   A TPaveVar object is used by the TTreeViewer to represent
//     - a TTree variable
//     - a selection expression.
//   A TPavevar has the same graphical representation as a TPaveLabel.
//   One can only resize the left or right borders (not top/bottom).
//   The context menu allows merging (and/or) overlapping TPaveVars.
//

//______________________________________________________________________________
TPaveVar::TPaveVar(): TPaveLabel()
{
//*-*-*-*-*-*-*-*-*-*-*PaveVar default constructor*-*-*-*-*-*-*-*-*-*-*-*-*

   fViewer  = 0;
//*-*                  =============================
}

//______________________________________________________________________________
TPaveVar::TPaveVar(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2, const Text_t *label, TTreeViewer *viewer)
           :TPaveLabel(x1,y1,x2,y2,label,"br")
{
//*-*-*-*-*-*-*-*-*-*-*PaveVar normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   fViewer  = viewer;
   SetName(label);
}

//______________________________________________________________________________
TPaveVar::~TPaveVar()
{
//*-*-*-*-*-*-*-*-*-*-*PaveVar default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

}

//______________________________________________________________________________
TPaveVar::TPaveVar(const TPaveVar &PaveVar)
{
   ((TPaveVar&)PaveVar).Copy(*this);
}

//______________________________________________________________________________
void TPaveVar::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this PaveVar to PaveVar*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TPaveLabel::Copy(obj);
   ((TPaveVar&)obj).fViewer      = fViewer;
}
//______________________________________________________________________________
void TPaveVar::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a TPaveVar object is clicked.
//
//  If the mouse is clicked inside the box, the box is moved.
//
//  If the mouse is clicked on the 2 edges (L,R), the box is rscaled
//  parallel to this edge.
//
//    PA                    T                       PB
//     +--------------------------------------------+
//     |                                            |
//     |                                            |
//     |                                            |
//    L|                  INSIDE                    |R
//     |                                            |
//     |                                            |
//     |                                            |
//     |                                            |
//     +--------------------------------------------+
//    PD                    B                      PC
//

   const Int_t kMaxDiff = 5;
   const Int_t kMinSize = 20;

   static Int_t px1, px2, py1, py2, pxl, pyl, pxt, pyt, pxold, pyold;
   static Int_t px1p, px2p, py1p, py2p;
   static Bool_t L, R, INSIDE;
   Int_t  wx, wy;

   Bool_t doing_again = kFALSE;
   Bool_t opaque  = gPad->OpaqueMoving();
   Bool_t ropaque = gPad->OpaqueResizing();

   TVirtualPad  *parent = gPad;
   char *action;

again:

   switch (event) {

   case kButton1Double:
      px1 = -1; //used by kButton1Up
      py1 = strlen(GetName()) + 10;
      if (TestBit(kBranchObject)) break;
      action = new char[py1];
      sprintf(action,"VarDraw:%s",GetName());
      gPad->SetCursor(kWatch);
      fViewer->ExecuteDraw(action);
      fViewer->Modified();
      fViewer->Update();
      delete [] action;
      break;

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

      px1p = parent->XtoAbsPixel(parent->GetX1()) + parent->GetBorderSize();
      py1p = parent->YtoAbsPixel(parent->GetY1()) - parent->GetBorderSize();
      px2p = parent->XtoAbsPixel(parent->GetX2()) - parent->GetBorderSize();
      py2p = parent->YtoAbsPixel(parent->GetY2()) + parent->GetBorderSize();

      L = R = INSIDE = kFALSE;

      if ((py > pyl+kMaxDiff && py < pyt-kMaxDiff) &&
          TMath::Abs(px - pxl) < kMaxDiff) {             // left edge
         pxold = pxl; pyold = pyl; L = kTRUE;
         gPad->SetCursor(kLeftSide);
      }

      if ((py > pyl+kMaxDiff && py < pyt-kMaxDiff) &&
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
      if (L || R)
         fResizing = kTRUE;

      if (!L && !R && !INSIDE)
         gPad->SetCursor(kCross);

      break;

   case kButton1Motion:

      wx = wy = 0;

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

      if (px1 < 0 ) break;
      if (L || R || INSIDE) {
         fX1 = gPad->AbsPixeltoX(px1);
         fY1 = gPad->AbsPixeltoY(py1);
         fX2 = gPad->AbsPixeltoX(px2);
         fY2 = gPad->AbsPixeltoY(py2);
      }

      if (INSIDE) {
         // if it was not a pad that was moved then it must have been
         // a box or something like that so we have to redraw the pad
         gPad->Modified(kTRUE);
         if (!doing_again) gPad->SetCursor(kCross);
      }

      if (L || R)
         gPad->Modified(kTRUE);

      // In case pave coordinates have been modified, recompute NDC coordinates
      {
         Float_t dpx  = gPad->GetX2() - gPad->GetX1();
         Float_t dpy  = gPad->GetY2() - gPad->GetY1();
         Float_t xp1  = gPad->GetX1();
         Float_t yp1  = gPad->GetY1();
         fX1NDC = (fX1-xp1)/dpx;
         fY1NDC = (fY1-yp1)/dpy;
         fX2NDC = (fX2-xp1)/dpx;
         fY2NDC = (fY2-yp1)/dpy;
      }
      gGXW->SetLineColor(-1);
      gGXW->SetLineWidth(-1);
   }
}

//______________________________________________________________________________
void TPaveVar::Merge(Option_t *option)
{
//  Merge all TPaveVars overlapping with this TPaveVar on the TTeeeViewer
//     option = "AND" all paves are ANDed in a new TPaveVar
//     option = "OR"  all paves are ORed in a new TPaveVar

   if (fViewer == 0) return;
   //Scan all TPaveVars, looking for the ones overlapping with this
   TString opt = option;
   opt.ToUpper();
   TIter next(fViewer->GetListOfPrimitives());
   TPaveVar *pl;
   TObject *obj;
   char *name = new char[2000];
   sprintf(name,"(%s)",GetLabel());
   while ((obj=next())) {
      if (obj->InheritsFrom(TPaveVar::Class())) {
         pl = (TPaveVar*)obj;
         if (pl == this) continue;
         // check if at least one corner overlaps with this
         if ((pl->GetX1() > fX1 && pl->GetX1() < fX2) ||
             (pl->GetX2() > fX1 && pl->GetX2() < fX2)) {
              if ((pl->GetY1() > fY1 && pl->GetY1() < fY2) ||
                  (pl->GetY2() > fY1 && pl->GetY2() < fY2)) {
                   if (opt.Contains("AND")) strcat(name,"&&");
                   if (opt.Contains("OR"))  strcat(name,"||");
                   strcat(name,"(");
                   strcat(name,pl->GetLabel());
                   strcat(name,")");
              }
         }
      }
   }
   pl = fViewer->CreateNewVar(name);
   delete [] name;
}

//______________________________________________________________________________
void TPaveVar::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   char quote = '"';
   out<<"   "<<endl;
   if (gROOT->ClassSaved(TPaveVar::Class())) {
       out<<"   ";
   } else {
       out<<"   TPaveVar *";
   }
   out<<"pvar = new TPaveVar("<<fX1<<","<<fY1<<","<<fX2<<","<<fY2
      <<","<<quote<<fLabel<<quote<<","<<quote<<fOption<<quote<<");"<<endl;

   SaveFillAttributes(out,"pvar",0,1001);
   SaveLineAttributes(out,"pvar",1,1,1);
   SaveTextAttributes(out,"pvar",22,0,1,62,0);

   out<<"   pvar->Draw();"<<endl;
}
