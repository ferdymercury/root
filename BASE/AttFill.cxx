//*CMZ :  2.23/12 26/01/2000  09.41.47  by  Rene Brun
//*CMZ :  2.23/09 17/11/99  14.35.41  by  Rene Brun
//*CMZ :  2.23/04 08/10/99  23.08.00  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  14.14.54  by  Fons Rademakers
//*CMZ :  2.22/09 12/07/99  17.51.51  by  Rene Brun
//*CMZ :  2.22/00 27/03/99  02.19.56  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.56.19  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

#include <fstream.h>

#include "TROOT.h"
#include "TAttFill.h"
#include "TVirtualPad.h"
#include "TStyle.h"
#include "TVirtualX.h"

ClassImp(TAttFill)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*Fill Area Attributes class*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==========================
//*-*  Fill Area attributes are:
//*-*    Fill Color
//*-*    Fill Style
//*-*
//*-*  This class is used (in general by secondary inheritance)
//*-*  by many other classes (graphics, histograms).
//*-*
//*-*  The following table shows the list of default colors.
//Begin_Html
/*
<img src="gif/colors.gif">
*/
//End_Html
//*-*
//*-*  Conventions for fill styles:
//*-*    0 = hollow
//*-*    1001 : Solid
//*-*    2001 : hatch style
//*-*    3000+pattern_number (see below)
//*-*  The following table shows the list of pattern styles.
//Begin_Html
/*
<img src="gif/fillstyles.gif">
*/
//End_Html
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TAttFill::TAttFill()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttFill default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*  Default fill attributes are taking from the current style
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   if (!gStyle) return;
   fFillColor = gStyle->GetFillColor();
   fFillStyle = gStyle->GetFillStyle();
}

//______________________________________________________________________________
TAttFill::TAttFill(Color_t color, Style_t style)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttFill normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*    color Fill Color
//*-*    style Fill Style
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   fFillColor = color;
   fFillStyle = style;
}

//______________________________________________________________________________
TAttFill::~TAttFill()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttFill destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =================
}

//______________________________________________________________________________
void TAttFill::Copy(TAttFill &attfill)
{
//*-*-*-*-*-*-*-*-*Copy this fill attributes to a new attfill*-*-*-*-*-*-*-*-*
//*-*              ==========================================
   attfill.fFillColor  = fFillColor;
   attfill.fFillStyle  = fFillStyle;
}

//______________________________________________________________________________
void TAttFill::Modify()
{
//*-*-*-*-*-*-*-*Change current fill area attributes if necessary*-*-*-*-*-*-*
//*-*            ================================================

   if (!gPad) return;
   if (!gPad->IsBatch()) {
      gVirtualX->SetFillColor(fFillColor);
      gVirtualX->SetFillStyle(fFillStyle);
   }

   gPad->SetAttFillPS(fFillColor,fFillStyle);
}

//______________________________________________________________________________
void TAttFill::ResetAttFill(Option_t *)
{
//*-*-*-*-*-*-*-*-*Reset this fill attributes to default values*-*-*-*-*-*-*
//*-*              ============================================
  fFillColor = 1;
  fFillStyle = 0;
}

//______________________________________________________________________________
void TAttFill::SaveFillAttributes(ofstream &out, const char *name, Int_t coldef, Int_t stydef)
{
    // Save fill attributes as C++ statement(s) on output stream out

   if (fFillColor != coldef) {
      out<<"   "<<name<<"->SetFillColor("<<fFillColor<<");"<<endl;
   }
   if (fFillStyle != stydef) {
      out<<"   "<<name<<"->SetFillStyle("<<fFillStyle<<");"<<endl;
   }
}

//______________________________________________________________________________
void TAttFill::SetFillAttributes()
{
//*-*-*-*-*-*-*-*-*Invoke the DialogCanvas Fill attributes*-*-*-*-*-*-*
//*-*              =======================================

   if (gPad) gROOT->SetSelectedPad(gPad->GetSelectedPad());

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("R__attfill")) {
      gROOT->ProcessLine("TAttFillCanvas *R__attfill = "
                         "new TAttFillCanvas(\"R__attfill\",\"Fill Attributes\","
                         "250,400);");
   }
   gROOT->ProcessLine(Form("R__attfill->UpdateFillAttributes(%d,%d);"
                           "R__attfill->Show();",fFillColor,fFillStyle));
}
