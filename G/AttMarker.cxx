//*CMZ :  1.03/09 06/12/97  16.51.17  by  Fons Rademakers
//*-- Author :    Rene Brun   12/05/95

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
#include "Strlen.h"
#include "TAttMarker.h"
#include "TVirtualPad.h"
#include "TMarker.h"
#include "TStyle.h"
#include "TGXW.h"
#include "TInterpreter.h"
#include "TPostscript.h"


ClassImp(TAttMarker)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*Marker Attributes class*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =======================
//*-*  Marker attributes are:
//*-*    Marker Color
//*-*    Marker style
//*-*    Marker Size
//*-*
//*-*  This class is used (in general by secondary inheritance)
//*-*  by many other classes (graphics, histograms).
//*-*
//*-*  List of the currently supported markers (screen and PostScript)
//*-*  ===============================================================
//*-*      1 : dot
//*-*      2 : +
//*-*      3 : *
//*-*      4 : o (open circle)
//*-*      5 : x
//*-*      6 : full circle (small)
//*-*      7 : full circle (medium)
//*-*      8 : full circle (large)
//*-*      9 -->19 : dot
//*-*     20 : full circle (large)
//*-*     21 : full triangle up
//*-*     22 : full triangle down
//*-*     23 : two nested open hexagones
//*-*     24 : open square
//*-*     25 : open triangle up
//*-*     26 : open diamond
//*-*     27 : open cross
//*-*     28 : full pentagon
//*-*     29 : open hexagone
//*-*     30 : open square
//*-*
//Begin_Html
/*
<img src="gif/markers.gif">
*/
//End_Html
//*-*
//*-*   Various marker sizes are shown in the figure below.
//*-*   The default marker size=1 is shown in the botton left corner.
//*-*   Marker sizes smaller than 1 can be specified.
//*-*
//Begin_Html
/*
<img src="gif/markersize.gif">
*/
//End_Html
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TAttMarker::TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttMarker default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================
//*-*  Default text attributes are taking from the current style
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   if (!gStyle) return;
   fMarkerColor = gStyle->GetMarkerColor();
   fMarkerStyle = gStyle->GetMarkerStyle();
   fMarkerSize  = gStyle->GetMarkerSize();
}

//______________________________________________________________________________
TAttMarker::TAttMarker(Color_t color, Style_t style, Size_t msize)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttMarker normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ============================
//*-*  Text attributes are taking from the argument list
//*-*    color : Marker Color Index
//*-*    style : Marker style (from 1 to 30)
//*-*    size  : marker size (float)
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   fMarkerColor = color;
   fMarkerSize  = msize;
   fMarkerStyle = style;
}

//______________________________________________________________________________
TAttMarker::~TAttMarker()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttMarker destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ====================

}

//______________________________________________________________________________
void TAttMarker::Copy(TAttMarker &attmarker)
{
//*-*-*-*-*-*-*-*-*Copy this marker attributes to a new atttext*-*-*-*-*-*-*-*
//*-*              ============================================
   attmarker.fMarkerColor  = fMarkerColor;
   attmarker.fMarkerStyle  = fMarkerStyle;
   attmarker.fMarkerSize   = fMarkerSize;
}

//______________________________________________________________________________
void TAttMarker::Modify()
{
//*-*-*-*-*-*-*-*-*-*Change current marker attributes if necessary*-*-*-*-*-*-*
//*-*                =============================================

   if (!gPad) return;
   if (!gPad->IsBatch()) {
      gGXW->SetMarkerColor(fMarkerColor);
      gGXW->SetMarkerSize (fMarkerSize);
      gGXW->SetMarkerStyle(fMarkerStyle);
   }

   if (gCurrentPS) {
      gCurrentPS->SetMarkerColor(fMarkerColor);
      gCurrentPS->SetMarkerStyle(fMarkerStyle);
      gCurrentPS->SetMarkerSize (fMarkerSize);
   }
}

//______________________________________________________________________________
void TAttMarker::Reset(Option_t *)
{
//*-*-*-*-*-*-*-*-*Reset this marker attributes to default values*-*-*-*-*-*-*
//*-*              ==============================================

   fMarkerColor  = 1;
   fMarkerStyle  = 1;
   fMarkerSize   = 1;
}

//______________________________________________________________________________
void TAttMarker::SaveMarkerAttributes(ofstream &out, const Text_t *name, Int_t coldef, Int_t stydef, Int_t sizdef)
{
    // Save line attributes as C++ statement(s) on output stream out

   if (fMarkerColor != coldef) {
      out<<"   "<<name<<"->SetMarkerColor("<<fMarkerColor<<");"<<endl;
   }
   if (fMarkerStyle != stydef) {
      out<<"   "<<name<<"->SetMarkerStyle("<<fMarkerStyle<<");"<<endl;
   }
   if (fMarkerSize != sizdef) {
      out<<"   "<<name<<"->SetMarkerSize("<<fMarkerSize<<");"<<endl;
   }

}

//______________________________________________________________________________
void TAttMarker::SetMarkerAttributes()
{
//*-*-*-*-*-*-*-*-*Invoke the DialogCanvas Marker attributes*-*-*-*-*-*-*
//*-*              =========================================

   if (gPad) gROOT->SetSelectedPad(gPad->GetSelectedPad());

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("attmarker")) {
      char cmd[] = "attmarker = new TAttMarkerCanvas(\"attmarker\",\"Marker Attributes\",250,400)";
      gInterpreter->ProcessLine(cmd);
   }
   char cmdupd[] = "attmarker->UpdateMarkerAttributes(    ,     ,     )";
   sprintf(cmdupd,"attmarker->UpdateMarkerAttributes(%d,%d,%f)",fMarkerColor,fMarkerStyle,fMarkerSize);
   gInterpreter->ProcessLine(cmdupd);
}
