//*CMZ :  1.03/09 05/03/99  11.19.42  by  Fons Rademakers
//*-- Author :    Rene Brun   31/10/96

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

#include <fstream.h>

#include "TROOT.h"
#include "TVirtualPad.h"
#include "TFrame.h"

ClassImp(TFrame)

//______________________________________________________________________________
//
// a TFrame is a TWbox for drawing histogram frames.
//

//______________________________________________________________________________
TFrame::TFrame(): TWbox()
{
//*-*-*-*-*-*-*-*-*-*-*frame default constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ========================

}

//______________________________________________________________________________
TFrame::TFrame(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2)
       :TWbox(x1,y1,x2,y2)
{
//*-*-*-*-*-*-*-*-*-*-*frame normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================
}

//______________________________________________________________________________
TFrame::TFrame(const TFrame &frame)
{
   ((TFrame&)frame).Copy(*this);
}

//______________________________________________________________________________
TFrame::~TFrame()
{
//*-*-*-*-*-*-*-*-*-*-*wbox default destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =======================

}

//______________________________________________________________________________
void TFrame::Copy(TObject &frame)
{
//*-*-*-*-*-*-*-*-*-*-*Copy this frame to frame*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ======================
   TWbox::Copy(frame);
}

//______________________________________________________________________________
void TFrame::Draw(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Draw this wbox with its current attributes*-*-*-*-*-*-*
//*-*                  ==========================================

   AppendPad(option);

}

//______________________________________________________________________________
void TFrame::ExecuteEvent(Int_t event, Int_t px, Int_t py)
{
//*-*-*-*-*-*-*-*-*-*-*Execute action corresponding to one event*-*-*-*
//*-*                  =========================================
//  This member function is called when a TFrame object is clicked.
//

   TWbox::ExecuteEvent(event, px, py);

   if (event != kButton1Up) return;
// update pad margins
   Float_t xmin = gPad->GetUxmin();
   Float_t xmax = gPad->GetUxmax();
   Float_t ymin = gPad->GetUymin();
   Float_t ymax = gPad->GetUymax();
   Float_t dx   = xmax-xmin;
   Float_t dy   = ymax-ymin;
   gPad->SetLeftMargin((fX1-gPad->GetX1())/(gPad->GetX2()-gPad->GetX1()));
   gPad->SetRightMargin((gPad->GetX2()-fX2)/(gPad->GetX2()-gPad->GetX1()));
   gPad->SetBottomMargin((fY1-gPad->GetY1())/(gPad->GetY2()-gPad->GetY1()));
   gPad->SetTopMargin((gPad->GetY2()-fY2)/(gPad->GetY2()-gPad->GetY1()));
   Float_t dxr  = dx/(1 - gPad->GetLeftMargin() - gPad->GetRightMargin());
   Float_t dyr  = dy/(1 - gPad->GetBottomMargin() - gPad->GetTopMargin());

   // Range() could change the size of the pad pixmap and therefore should
   // be called before the other paint routines
   gPad->Range(xmin - dxr*gPad->GetLeftMargin(),
                      ymin - dyr*gPad->GetBottomMargin(),
                      xmax + dxr*gPad->GetRightMargin(),
                      ymax + dyr*gPad->GetTopMargin());
   gPad->RangeAxis(xmin, ymin, xmax, ymax);
   fX1 = xmin;
   fY1 = ymin;
   fX2 = xmax;
   fY2 = ymax;
}

//______________________________________________________________________________
void TFrame::Paint(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Paint this wbox with its current attributes*-*-*-*-*-*-*
//*-*                  ===========================================

   TWbox::Paint(option);
   gPad->PaintLine(fX1,fY1,fX2,fY1);
   gPad->PaintLine(fX2,fY1,fX2,fY2);
   gPad->PaintLine(fX2,fY2,fX1,fY2);
   gPad->PaintLine(fX1,fY2,fX1,fY1);
}

//______________________________________________________________________________
void TFrame::Pop()
{
   // Do not pop frame's, if allowed they would cover the picture they frame.
}

//______________________________________________________________________________
void TFrame::SavePrimitive(ofstream &, Option_t *)
{
    // Save primitive as a C++ statement(s) on output stream out

}
