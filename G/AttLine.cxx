//*CMZ :  2.00/07 28/10/98  12.49.05  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  16.49.51  by  Fons Rademakers
//*-- Author :    Rene Brun   28/11/94

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

#include "TROOT.h"
#include "Strlen.h"
#include "TAttLine.h"
#include "TVirtualPad.h"
#include "TStyle.h"
#include "TGXW.h"
#include "TInterpreter.h"
#include "TPostscript.h"
#include "TMath.h"

#include <fstream.h>

ClassImp(TAttLine)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*Line Attributes class*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =====================
//*-*  Line attributes are:
//*-*    Line Color (see TAttFill for the list of colors)
//*-*    Line Style 1=solid, 2=dash, 3=dash-dot, 4=dot-dot
//*-*    Line Width expressed in pixel units
//*-*
//*-*  This class is used (in general by secondary inheritance)
//*-*  by many other classes (graphics, histograms).
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TAttLine::TAttLine()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttLine default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*  Default line attributes are taking from the current style
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   if (!gStyle) return;
   fLineColor = gStyle->GetLineColor();
   fLineWidth = gStyle->GetLineWidth();
   fLineStyle = gStyle->GetLineStyle();
}

//______________________________________________________________________________
TAttLine::TAttLine(Color_t color, Style_t style, Width_t width)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttLine normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*  Line attributes are taking from the argument list
//*-*    color : must be one of the valid color index
//*-*    style : 1=solid, 2=dash, 3=dash-dot, 4=dot-dot
//*-*    width : expressed in pixel units
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   fLineColor = color;
   fLineWidth = width;
   fLineStyle = style;
}

//______________________________________________________________________________
TAttLine::~TAttLine()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttLine destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =================
}

//______________________________________________________________________________
void TAttLine::Copy(TAttLine &attline)
{
//*-*-*-*-*-*-*-*-*Copy this line attributes to a new attline*-*-*-*-*-*-*-*-*
//*-*              ==========================================
   attline.fLineColor  = fLineColor;
   attline.fLineStyle  = fLineStyle;
   attline.fLineWidth  = fLineWidth;
}

//______________________________________________________________________________
Int_t TAttLine::DistancetoLine(Int_t px, Int_t py, Float_t xp1, Float_t yp1, Float_t xp2, Float_t yp2 )
{
//*-*-*-*-*-*-*-*-*-*-*Compute distance from point px,py to a line*-*-*-*-*-*
//*-*                  ===========================================
//*-*  Compute the closest distance of approach from point px,py to this line.
//*-*  The distance is computed in pixels units.
//*-*
//*-*  Algorithm:
//*-*
//*-*    A(x1,y1)         P                             B(x2,y2)
//*-*    ------------------------------------------------
//*-*                     I
//*-*                     I
//*-*                     I
//*-*                     I
//*-*                    M(x,y)
//*-*
//*-*  Let us call  a = distance AM     A=a**2
//*-*               b = distance BM     B=b**2
//*-*               c = distance AB     C=c**2
//*-*               d = distance PM     D=d**2
//*-*               u = distance AP     U=u**2
//*-*               v = distance BP     V=v**2     c = u + v
//*-*
//*-*  D = A - U
//*-*  D = B - V  = B -(c-u)**2
//*-*     ==> u = (A -B +C)/2c
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   Float_t xl, xt, yl, yt;
   Float_t x     = px;
   Float_t y     = py;
   Float_t x1    = gPad->XtoAbsPixel(xp1);
   Float_t y1    = gPad->YtoAbsPixel(yp1);
   Float_t x2    = gPad->XtoAbsPixel(xp2);
   Float_t y2    = gPad->YtoAbsPixel(yp2);
   if (x1 < x2) {xl = x1; xt = x2;}
   else         {xl = x2; xt = x1;}
   if (y1 < y2) {yl = y1; yt = y2;}
   else         {yl = y2; yt = y1;}
   if (x < xl-2 || x> xt+2) return 9999;  //following algorithm only valid in the box
   if (y < yl-2 || y> yt+2) return 9999;  //surrounding the line
   Float_t xx1   = x  - x1;
   Float_t xx2   = x  - x2;
   Float_t x1x2  = x1 - x2;
   Float_t yy1   = y  - y1;
   Float_t yy2   = y  - y2;
   Float_t y1y2  = y1 - y2;
   Float_t A     = xx1*xx1   + yy1*yy1;
   Float_t B     = xx2*xx2   + yy2*yy2;
   Float_t C     = x1x2*x1x2 + y1y2*y1y2;
   if (C <= 0)  return 9999;
   Float_t c     = TMath::Sqrt(C);
   Float_t u     = (A - B + C)/(2*c);
   Float_t D     = TMath::Abs(A - u*u);
   if (D < 0)   return 9999;

   return Int_t(TMath::Sqrt(D) - 0.5*float(fLineWidth));
}

//______________________________________________________________________________
void TAttLine::Modify()
{
//*-*-*-*-*-*-*-*-*-*Change current line attributes if necessary*-*-*-*-*-*-*
//*-*                ===========================================

   if (!gPad) return;
   if (!gPad->IsBatch()) {
      gGXW->SetLineColor(fLineColor);
      if (fLineStyle > 0 && fLineStyle < 5) gGXW->SetLineStyle(fLineStyle);
      else                                  gGXW->SetLineStyle(1);
      gGXW->SetLineWidth(fLineWidth);
   }

   if (gCurrentPS) {
      gCurrentPS->SetLineColor(fLineColor);
      if (fLineStyle > 0 && fLineStyle < 30) gCurrentPS->SetLineStyle(fLineStyle);
      else                                   gCurrentPS->SetLineStyle(1);
      gCurrentPS->SetLineWidth(fLineWidth);
   }
}

//______________________________________________________________________________
void TAttLine::Reset(Option_t *)
{
//*-*-*-*-*-*-*-*-*Reset this line attributes to default values*-*-*-*-*-*-*
//*-*              ============================================

   fLineColor  = 1;
   fLineStyle  = 1;
   fLineWidth  = 1;
}

//______________________________________________________________________________
void TAttLine::SaveLineAttributes(ofstream &out, const Text_t *name, Int_t coldef, Int_t stydef, Int_t widdef)
{
    // Save line attributes as C++ statement(s) on output stream out

   if (fLineColor != coldef) {
      out<<"   "<<name<<"->SetLineColor("<<fLineColor<<");"<<endl;
   }
   if (fLineStyle != stydef) {
      out<<"   "<<name<<"->SetLineStyle("<<fLineStyle<<");"<<endl;
   }
   if (fLineWidth != widdef) {
      out<<"   "<<name<<"->SetLineWidth("<<fLineWidth<<");"<<endl;
   }
}

//______________________________________________________________________________
void TAttLine::SetLineAttributes()
{
//*-*-*-*-*-*-*-*-*Invoke the DialogCanvas Line attributes*-*-*-*-*-*-*
//*-*              =======================================

   if (gPad) gROOT->SetSelectedPad(gPad->GetSelectedPad());

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("attline")) {
      char cmd[] = "attline = new TAttLineCanvas(\"attline\",\"Line Attributes\",250,400)";
      gInterpreter->ProcessLine(cmd);
   }
   char cmdupd[] = "attline->UpdateLineAttributes(    ,     ,    )";
   sprintf(cmdupd,"attline->UpdateLineAttributes(%d,%d,%d)",fLineColor,fLineStyle,fLineWidth);
   gInterpreter->ProcessLine(cmdupd);
}
