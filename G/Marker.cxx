//*CMZ :  2.20/05 15/12/98  09.17.21  by  Rene Brun
//*CMZ :  2.00/00 16/01/98  15.11.19  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  17.28.47  by  Fons Rademakers
//*-- Author :    Rene Brun   12/05/95

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

#include <stdlib.h>
#include <fstream.h>
#include <iostream.h>

#include "TROOT.h"
#include "TVirtualPad.h"
#include "TMarker.h"
#include "TGXW.h"
#include "TMath.h"
#include "TPoint.h"
#include "TText.h"

ClassImp(TMarker)

//______________________________________________________________________________
//
// Manages Markers. Marker attributes are managed by TAttMarker.
// The list of standard ROOT markers is shown in this picture
//Begin_Html
/*
<img src="gif/markers.gif">
*/
//End_Html
//

//______________________________________________________________________________
TMarker::TMarker(): TObject(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*Marker default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================
   fX = 0;
   fY = 0;
}
//______________________________________________________________________________
TMarker::TMarker(Coord_t x, Coord_t y, Int_t marker)
      :TObject(), TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*Marker normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
   fX = x;
   fY = y;
   fMarkerStyle = marker;
}

//______________________________________________________________________________
TMarker::~TMarker()
{
//*-*-*-*-*-*-*-*-*-*-*Marker default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =========================
}

//______________________________________________________________________________
TMarker::TMarker(const TMarker &marker)
{
   ((TMarker&)marker).Copy(*this);
}

//______________________________________________________________________________
void TMarker::Copy(TObject &obj)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this marker to marker*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================

   TObject::Copy(obj);
   TAttMarker::Copy(((TMarker&)obj));
   ((TMarker&)obj).fX = fX;
   ((TMarker&)obj).fY = fY;
}

//______________________________________________________________________________
void TMarker::DisplayMarkerTypes()
{
//*-*-*-*-*-*-*-*-*-*-*Display the table of markers with their numbers*-*-*-*
//*-*                  ===============================================

  TMarker *marker = new TMarker();
  marker->SetMarkerSize(3);
  TText *text = new TText();
  text->SetTextFont(62);
  text->SetTextAlign(22);
  text->SetTextSize(0.1);
  char atext[] = "       ";
  Float_t x = 0;
  Float_t dx = 1/12.0;
  for (Int_t i=1;i<12;i++) {
     x += dx;
     sprintf(atext,"%d",i);
     marker->SetMarkerStyle(i);
     marker->DrawMarker(x,.35);
     text->DrawText(x,.17,atext);
     sprintf(atext,"%d",i+19);
     marker->SetMarkerStyle(i+19);
     marker->DrawMarker(x,.8);
     text->DrawText(x,.62,atext);
  }
  delete marker;
  delete text;
}

//______________________________________________________________________________
Int_t TMarker::DistancetoPrimitive(Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to a marker*-*-*-*-*-*
//*-*                  ===========================================
//  Compute the closest distance of approach from point px,py to this marker.
//  The distance is computed in pixels units.
//

   const Int_t kMaxDiff = 10;
   Int_t pxm  = gPad->XtoAbsPixel(fX);
   Int_t pym  = gPad->YtoAbsPixel(fY);
   Int_t dist = (px-pxm)*(px-pxm) + (py-pym)*(py-pym);

   if (dist > kMaxDiff) return 9999;
   return dist;
}

//______________________________________________________________________________
void TMarker::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this marker with its current attributes*-*-*-*-*-*-*
//*-*                  ============================================

   AppendPad(option);

}

//______________________________________________________________________________
void TMarker::DrawMarker(Coord_t x, Coord_t y)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this marker with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*                  =====================================
   TMarker *newmarker = new TMarker(x, y, 1);
   TAttMarker::Copy(*newmarker);
   newmarker->SetBit(kCanDelete);
   newmarker->AppendPad();
}

//______________________________________________________________________________
void TMarker::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a marker is clicked with the locator
//
//  If Left button is clicked on a marker, the marker is moved to
//     a new position when the mouse button is released.
//

   TPoint p;
   static Int_t pxold, pyold;

   switch (event) {


   case kButton1Down:
      gGXW->SetTextColor(-1);  // invalidate current text color (use xor mode)
      TAttMarker::Modify();  //Change marker attributes only if necessary

      // No break !!!

   case kMouseMotion:
      pxold = px;  pyold = py;
      gPad->SetCursor(kMove);
      break;

   case kButton1Motion:
      p.fX = pxold; p.fY = pyold;
      gGXW->DrawPolyMarker(1, &p);
      p.fX = px; p.fY = py;
      gGXW->DrawPolyMarker(1, &p);
      pxold = px;  pyold = py;
      break;

   case kButton1Up:
      fX = gPad->AbsPixeltoX(px);
      fY = gPad->AbsPixeltoY(py);
      gPad->Modified(kTRUE);
      gGXW->SetTextColor(-1);
      break;
   }
}

//______________________________________________________________________________
void TMarker::ls(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*-*List this marker with its attributes*-*-*-*-*-*-*-*-*
//*-*                    ====================================
   IndentLevel();
   printf("Marker  X=%f Y=%f marker type=%d\n",fX,fY,fMarkerStyle);
}

//______________________________________________________________________________
void TMarker::Paint(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this marker with its current attributes*-*-*-*-*-*-*
//*-*                  =============================================
   PaintMarker(fX,fY);
}

//______________________________________________________________________________
void TMarker::PaintMarker(Coord_t x, Coord_t y)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this marker with new coordinates*-*-*-*-*-*-*-*-*-*
//*-*                  =====================================

   TAttMarker::Modify();  //Change line attributes only if necessary
   gPad->PaintPolyMarker(1,&x,&y,"");
}

//______________________________________________________________________________
void TMarker::PaintMarkerNDC(Coord_t, Coord_t)
{
//*-*-*-*-*-*-*-*Draw this marker with new coordinates in NDC*-*-*-*-*-*-*-*-*-*
//*-*            ============================================

}

//______________________________________________________________________________
void TMarker::Print(Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Dump this marker with its attributes*-*-*-*-*-*-*-*-*-*
//*-*                  ====================================

   printf("Marker  X=%f Y=%f",fX,fY);
   if (GetMarkerColor() != 1) printf(" Color=%d",GetMarkerColor());
   if (GetMarkerStyle() != 1) printf(" MarkerStyle=%d",GetMarkerStyle());
   if (GetMarkerSize()  != 1) printf(" MarkerSize=%f",GetMarkerSize());
   printf("\n");
}

//______________________________________________________________________________
void TMarker::SavePrimitive(ofstream &out, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

   if (gROOT->ClassSaved(TMarker::Class())) {
       out<<"   ";
   } else {
       out<<"   TMarker *";
   }
   out<<"marker = new TMarker("<<fX<<","<<fY<<","<<fMarkerStyle<<");"<<endl;

   SaveMarkerAttributes(out,"marker",1,1,1);

   out<<"   marker->Draw();"<<endl;
}
