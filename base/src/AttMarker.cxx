//*CMZ :  2.24/03 18/04/2000  10.52.55  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  09.41.47  by  Rene Brun
//*CMZ :  2.23/04 08/10/99  23.08.54  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  14.14.54  by  Fons Rademakers
//*CMZ :  2.22/09 12/07/99  17.54.52  by  Rene Brun
//*CMZ :  2.22/02 25/05/99  09.56.13  by  Rene Brun
//*CMZ :  2.22/00 27/03/99  02.20.28  by  Rene Brun
//*-- Author :    Rene Brun   12/05/95

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#include <fstream.h>

#include "TROOT.h"
#include "Strlen.h"
#include "TAttMarker.h"
#include "TVirtualPad.h"
#include "TStyle.h"
#include "TVirtualX.h"

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
//*-*     20 : full circle
//*-*     21 : full square
//*-*     22 : full triangle up
//*-*     23 : full triangle down
//*-*     24 : open circle
//*-*     25 : open square
//*-*     26 : open triangle up
//*-*     27 : open diamond
//*-*     28 : open cross
//*-*     29 : open star
//*-*     30 : full star
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
      gVirtualX->SetMarkerColor(fMarkerColor);
      gVirtualX->SetMarkerSize (fMarkerSize);
      gVirtualX->SetMarkerStyle(fMarkerStyle);
   }

   gPad->SetAttMarkerPS(fMarkerColor,fMarkerStyle,fMarkerSize);
}

//______________________________________________________________________________
void TAttMarker::ResetAttMarker(Option_t *)
{
//*-*-*-*-*-*-*-*-*Reset this marker attributes to default values*-*-*-*-*-*-*
//*-*              ==============================================

   fMarkerColor  = 1;
   fMarkerStyle  = 1;
   fMarkerSize   = 1;
}

//______________________________________________________________________________
void TAttMarker::SaveMarkerAttributes(ofstream &out, const char *name, Int_t coldef, Int_t stydef, Int_t sizdef)
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
   if (!lc->FindObject("R__attmarker")) {
      gROOT->ProcessLine("TAttMarkerCanvas *R__attmarker = "
                         "new TAttMarkerCanvas(\"R__attmarker\",\"Marker Attributes\","
                         "250,400);");
   }
   gROOT->ProcessLine(Form("R__attmarker->UpdateMarkerAttributes(%d,%d,%f);"
                           "R__attmarker->Show();",fMarkerColor,fMarkerStyle,fMarkerSize));
}
