//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/13 28/10/98  09.21.36  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.25.12  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

#include <stdlib.h>
#include <fstream.h>
#include <iostream.h>

#include "TROOT.h"
#include "TLine.h"
#include "TVirtualPad.h"
#include "TClass.h"
#include "TGXW.h"
#include "TMath.h"

ClassImp(TLine)

//______________________________________________________________________________
//
// A Graphical line
//

//______________________________________________________________________________
TLine::TLine(): TObject(), TAttLine()
{
//*-*-*-*-*-*-*-*-*-*-*Line default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

}
//______________________________________________________________________________
TLine::TLine(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t  y2)
      :TObject(), TAttLine()
{
//*-*-*-*-*-*-*-*-*-*-*Line normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================
   fX1=x1; fY1=y1; fX2=x2; fY2=y2;
}

//______________________________________________________________________________
TLine::~TLine()
{
//*-*-*-*-*-*-*-*-*-*-*Line default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================

}

//______________________________________________________________________________
TLine::TLine(const TLine &line)
{
   ((TLine&)line).Copy(*this);
}

//______________________________________________________________________________
void TLine::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this line to line*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================

   TObject::Copy(obj);
   TAttLine::Copy(((TLine&)obj));
   ((TLine&)obj).fX1 = fX1;
   ((TLine&)obj).fY1 = fY1;
   ((TLine&)obj).fX2 = fX2;
   ((TLine&)obj).fY2 = fY2;
}

//______________________________________________________________________________
Int_t TLine::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to a line*-*-*-*-*-*
//*-*                  ===========================================

   return DistancetoLine(px,py,fX1,fY1,fX2,fY2);
}

//______________________________________________________________________________
void TLine::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this line with its current attributes*-*-*-*-*-*-*
//*-*                  ==========================================

   AppendPad(option);
}

//______________________________________________________________________________
void TLine::DrawLine(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t  y2)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this line with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*                  ===================================
   TLine *newline = new TLine(x1, y1, x2, y2);
   TAttLine::Copy(*newline);
   newline->SetBit(kCanDelete);
   newline->AppendPad();
}

//______________________________________________________________________________
void TLine::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a line is clicked with the locator
//
//  If Left button clicked on one of the line end points, this point
//     follows the cursor until button is released.
//
//  if Middle button clicked, the line is moved parallel to itself
//     until the button is released.
//

   Int_t kMaxDiff = 20;
   static Int_t d1,d2,px1,px2,py1,py2;
   static Int_t pxold, pyold, px1old, py1old, px2old, py2old;
   static Bool_t P1, P2, L;
   Int_t dx, dy;


   switch (event) {

   case kButton1Down:
      gGXW->SetLineColor(-1);
      TAttLine::Modify();  //Change line attributes only if necessary

      // No break !!!

   case kMouseMotion:

      px1 = gPad->XtoAbsPixel(fX1);
      py1 = gPad->YtoAbsPixel(fY1);
      px2 = gPad->XtoAbsPixel(fX2);
      py2 = gPad->YtoAbsPixel(fY2);

      P1 = P2 = L = kFALSE;

      d1  = abs(px1 - px) + abs(py1-py); //simply take sum of pixels differences
      if (d1 < kMaxDiff) { //*-*================>OK take point number 1
         px1old = px1; py1old = py1;
         P1 = kTRUE;
         gPad->SetCursor(kPointer);
         return;
      }
      d2  = abs(px2 - px) + abs(py2-py); //simply take sum of pixels differences
      if (d2 < kMaxDiff) { //*-*================>OK take point number 2
         px2old = px2; py2old = py2;
         P2 = kTRUE;
         gPad->SetCursor(kPointer);
         return;
      }

      L = kTRUE;
      pxold = px; pyold = py;
      gPad->SetCursor(kMove);

      break;

   case kButton1Motion:

      if (P1) {
         gGXW->DrawLine(px1old, py1old, px2, py2);
         gGXW->DrawLine(px, py, px2, py2);
         px1old = px;
         py1old = py;
      }
      if (P2) {
         gGXW->DrawLine(px1, py1, px2old, py2old);
         gGXW->DrawLine(px1, py1, px, py);
         px2old = px;
         py2old = py;
      }
      if (L) {
         gGXW->DrawLine(px1, py1, px2, py2);
         dx = px-pxold;  dy = py-pyold;
         px1 += dx; py1 += dy; px2 += dx; py2 += dy;
         gGXW->DrawLine(px1, py1, px2, py2);
         pxold = px;
         pyold = py;
      }
      break;

   case kButton1Up:

      if (P1) {
         fX1 = gPad->AbsPixeltoX(px);
         fY1 = gPad->AbsPixeltoY(py);
      }
      if (P2) {
         fX2 = gPad->AbsPixeltoX(px);
         fY2 = gPad->AbsPixeltoY(py);
      }
      if (L) {
         fX1 = gPad->AbsPixeltoX(px1);
         fY1 = gPad->AbsPixeltoY(py1);
         fX2 = gPad->AbsPixeltoX(px2);
         fY2 = gPad->AbsPixeltoY(py2);
      }
      gPad->Modified(kTRUE);
      gGXW->SetLineColor(-1);
      break;

   case kButton1Locate:

      ExecuteEvent(kButton1Down, px, py);
      while (1) {
         px = py = 0;
         event = gGXW->RequestLocator(1,1,px,py);

         ExecuteEvent(kButton1Motion, px, py);

         if (event != -1) {                     // button is released
            ExecuteEvent(kButton1Up, px, py);
            return;
         }
      }
   }
}

//______________________________________________________________________________
void TLine::ls(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*List this line with its attributes*-*-*-*-*-*-*-*-*
//*-*                    ==================================
   IndentLevel();
   printf("%s  X1= %f Y1=%f X2=%f Y2=%f\n",IsA()->GetName(),fX1,fY1,fX2,fY2);
}

//______________________________________________________________________________
void TLine::Paint(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this line with its current attributes*-*-*-*-*-*-*
//*-*                  ===========================================
   PaintLine(fX1,fY1,fX2,fY2);
}

//______________________________________________________________________________
void TLine::PaintLine(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t y2)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this line with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*                  ===================================

   TAttLine::Modify();  //Change line attributes only if necessary
   gPad->PaintLine(x1,y1,x2,y2);
}

//______________________________________________________________________________
void TLine::PaintLineNDC(Coord_t u1, Coord_t v1, Coord_t u2, Coord_t v2)
{
//*-*-*-*-*-*-*-*Draw this line with new coordinates in NDC*-*-*-*-*-*-*-*-*-*
//*-*            ==========================================
   TAttLine::Modify();  //Change line attributes only if necessary
   gPad->PaintLineNDC(u1,v1,u2,v2);
}

//______________________________________________________________________________
void TLine::Print(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this line with its attributes*-*-*-*-*-*-*-*-*-*
//*-*                  ==================================

   printf("%s  X1=%f Y1=%f X2=%f Y2=%f",IsA()->GetName(),fX1,fY1,fX2,fY2);
   if (GetLineColor() != 1) printf(" Color=%d",GetLineColor());
   if (GetLineStyle() != 1) printf(" Style=%d",GetLineStyle());
   if (GetLineWidth() != 1) printf(" Width=%d",GetLineWidth());
   printf("\n");
}

//______________________________________________________________________________
void TLine::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   if (gROOT->ClassSaved(TLine::Class())) {
       out<<"   ";
   } else {
       out<<"   TLine *";
   }
   out<<"line = new TLine("<<fX1<<","<<fY1<<","<<fX2<<","<<fY2
      <<");"<<endl;

   SaveLineAttributes(out,"line",1,1,1);

   out<<"   line->Draw();"<<endl;
}
