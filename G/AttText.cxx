//*CMZ :  2.20/05 15/12/98  17.02.02  by  Fons Rademakers
//*CMZ :  2.20/00 21/11/98  01.06.52  by  Fons Rademakers
//*CMZ :  2.00/05 30/10/98  09.05.36  by  Rene Brun
//*CMZ :  1.03/09 28/02/98  18.39.56  by  Fons Rademakers
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

#include <fstream.h>

#include "TROOT.h"
#include "Strlen.h"
#include "TAttText.h"
#include "TVirtualPad.h"
#include "TStyle.h"
#include "TGXW.h"
#include "TInterpreter.h"
#include "TPostscript.h"
#include "TError.h"

static Float_t x11factor[13] ={1.000,1.000,1.010,0.910,0.920,0.920,0.925,1.204,
                               1.204,1.168,1.166,1.007,1.026};

ClassImp(TAttText)

//______________________________________________________________________________
//*-*-*-*-*-*-*-*-*-*-*-*-*Text Attributes class*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =====================
//*-*  Text attributes are:
//*-*    Text Alignment
//*-*    Text Color
//*-*    Text Font
//*-*    Text Size
//*-*    Text Angle
//*-*
//*-*  This class is used (in general by secondary inheritance)
//*-*  by many other classes (graphics, histograms).
//*-*
//*-*  List of the currently supported fonts (screen and PostScript)
//*-*  =============================================================
//*-*   Font ID       X11                       Win32 TTF       lfItalic  lfWeight  x 10
//*-*        1 : times-medium-i-normal      "Times New Roman"      1           4
//*-*        2 : times-bold-r-normal        "Times New Roman"      0           7
//*-*        3 : times-bold-i-normal        "Times New Roman"      1           7
//*-*        4 : helvetica-medium-r-normal  "Arial"                0           4
//*-*        5 : helvetica-medium-o-normal  "Arial"                1           4
//*-*        6 : helvetica-bold-r-normal    "Arial"                0           7
//*-*        7 : helvetica-bold-o-normal    "Arial"                1           7
//*-*        8 : courier-medium-r-normal    "Courier New"          0           4
//*-*        9 : courier-medium-o-normal    "Courier New"          1           4
//*-*       10 : courier-bold-r-normal      "Courier New"          0           7
//*-*       11 : courier-bold-o-normal      "Courier New"          1           7
//*-*       12 : symbol-medium-r-normal     "Symbol"               0           6
//*-*       13 : times-medium-r-normal      "Times New Roman"      0           4
//*-*       14 :                            "Wingdings"            0           4
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//______________________________________________________________________________
TAttText::TAttText()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttText default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*  Default text attributes are taking from the current style
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   if (!gStyle) return;
   fTextAlign = gStyle->GetTextAlign();
   fTextAngle = gStyle->GetTextAngle();
   fTextColor = gStyle->GetTextColor();
   fTextFont  = gStyle->GetTextFont();
   fTextSize  = gStyle->GetTextSize();
}

//______________________________________________________________________________
TAttText::TAttText(Int_t align, Float_t angle, Color_t color, Style_t font, Float_t tsize)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttText normal constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ===========================
//*-*  Text attributes are taking from the argument list
//*-*    align : Text alignment = 10*HorizontalAlign + VerticalAlign
//*-*            For Horizontal alignment the following convention applies:
//*-*               1=left adjusted, 2=centered, 3=rigth adjusted
//*-*            For Vertical alignment the following convention applies:
//*-*               1=bottom adjusted, 2=centered, 3=top adjusted
//*-*            For example align = 11 = left adjusted and bottom adjusted
//*-*                        align = 32 = right adjusted and vertically centered
//*-*    angle : Text angle in degrees
//*-*    color : Text Color Index
//*-*    font  : Text font code = 10*fontnumber + precision
//*-*             Font numbers must be between 1 and 14
//*-*             precision = 1 fast hardware fonts (steps in the size)
//*-*             precision = 2 scalable and rotatable hardware fonts
//*-*    size  : Character size expressed in percentage of the current pad height
//*-*            The textsize in pixels (say charheight) will be:
//*-*             charheight = textsize*canvas_height if current pad is horizontal.
//*-*             charheight = textsize*canvas_width  if current pad is vertical.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
   fTextAlign = align;
   fTextAngle = angle;
   fTextColor = color;
   fTextFont  = font;
   fTextSize  = tsize;
}

//______________________________________________________________________________
TAttText::~TAttText()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*AttText destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =================

}

//______________________________________________________________________________
void TAttText::Copy(TAttText &atttext)
{
//*-*-*-*-*-*-*-*-*Copy this text attributes to a new atttext*-*-*-*-*-*-*-*-*
//*-*              ==========================================
   atttext.fTextAlign  = fTextAlign;
   atttext.fTextAngle  = fTextAngle;
   atttext.fTextColor  = fTextColor;
   atttext.fTextFont   = fTextFont;
   atttext.fTextSize   = fTextSize;
}

//______________________________________________________________________________
void TAttText::Modify()
{
//*-*-*-*-*-*-*-*-*-*Change current text attributes if necessary*-*-*-*-*-*-*
//*-*                ===========================================

   if (!gPad) return;
//*-*- Do we need to change font?
   if (!gPad->IsBatch()) {
      gGXW->SetTextAngle(fTextAngle);
      Float_t wh = (Float_t)gPad->XtoPixel(gPad->GetX2());
      Float_t hh = (Float_t)gPad->YtoPixel(gPad->GetY1());
      Float_t tsize;
      if (wh < hh)  tsize = fTextSize*wh;
      else          tsize = fTextSize*hh;

#ifndef WIN32
again:
      if (gGXW->HasTTFonts() && gGXW->GetTextSize() != -10.0) {
      //if (gGXW->HasTTFonts()) {
//#if 0
         if (fTextAngle != 0) {
            gGXW->SetTextSize(-10.0);
            goto again;
         }
//#endif
         if (gGXW->GetTextFont() != fTextFont) {
            gGXW->SetTextFont(fTextFont);
            if (!gGXW->HasTTFonts()) goto again;
            gGXW->SetTextSize(tsize);
         }
         if (gGXW->GetTextSize() != tsize)
            gGXW->SetTextSize(tsize);

      } else if (gGXW->GetTextFont() != fTextFont ||
                 gGXW->GetTextSize() != tsize) {
         char     fx11[64];
         Int_t   fpx11 = fTextFont; if (fpx11 < 0) fpx11 = -fpx11;
         Int_t  ifpx11 = fpx11/10;
         Int_t    prec = fpx11%10;
         Int_t      ih = Int_t(tsize); // to be set to IH = INT(WKSC(IWKNB)*YRATIO*RCHH*1.5)
         Float_t rsize = Float_t(ih);
         if (ih > 37) ih = 37;
         if (ih <= 0) ih = 1;
         if (ifpx11 <= 0 || ifpx11 > 13) ifpx11 = 6;
//*-*-          Set Font name
         switch (ifpx11) {
           case  1 : strcpy(fx11, "-*-times-medium-i-normal--");     break;
           case  2 : strcpy(fx11, "-*-times-bold-r-normal--");       break;
           case  3 : strcpy(fx11, "-*-times-bold-i-normal--");       break;
           case  4 : strcpy(fx11, "-*-helvetica-medium-r-normal--"); break;
           case  5 : strcpy(fx11, "-*-helvetica-medium-o-normal--"); break;
           case  6 : strcpy(fx11, "-*-helvetica-bold-r-normal--");   break;
           case  7 : strcpy(fx11, "-*-helvetica-bold-o-normal--");   break;
           case  8 : strcpy(fx11, "-*-courier-medium-r-normal--");   break;
           case  9 : strcpy(fx11, "-*-courier-medium-o-normal--");   break;
           case 10 : strcpy(fx11, "-*-courier-bold-r-normal--");     break;
           case 11 : strcpy(fx11, "-*-courier-bold-o-normal--");     break;
           case 12 : strcpy(fx11, "-*-symbol-medium-r-normal--");    break;
           case 13 : strcpy(fx11, "-*-times-medium-r-normal--");     break;
         };
         char *buffer;
         Int_t il = strlen(fx11);
//*-*           Check if closest font has already been computed
         static Int_t first = 1;
         static Int_t fontchecked[13][40];
         if (first) {
            for (int ifont=0;ifont<13;ifont++) {
               for (int isize=0;isize<40;isize++) fontchecked[ifont][isize] = 0;
            }
            first = 0;
         }
         Int_t ihh = fontchecked[ifpx11-1][ih-1];
         if (ihh) {
            buffer = fx11 + il;
            sprintf(buffer,"%d-*",ihh);
            gGXW->SetTextFont(fx11, TGXW::kLoad);
         } else {
//*-*-           Find smallest size available
            Int_t isxfnt;
            for (isxfnt=8; isxfnt<17; isxfnt++) {
               buffer = fx11 + il;
               sprintf(buffer,"%d-*",isxfnt);
               if (!gGXW->SetTextFont(fx11, TGXW::kCheck) ) break;
               if (isxfnt == 16) Warning("TAttText::Modify", "cannot find the right size font");
            }
//*-*-           Find the closest size available
            ihh = ih;
            while (1) {
               if (ihh < isxfnt) ihh = isxfnt;
               buffer = fx11 + il;
               sprintf(buffer,"%d-*",ihh);
               if (!gGXW->SetTextFont(fx11, TGXW::kLoad) ) {
                  fontchecked[ifpx11-1][ih-1] = ihh;
                  break;
               }
               if (ihh == isxfnt) {
                  Warning("TAttText::Modify", "cannot find the right size font");
                  return;
               }
               ihh--;
            }
         }

//*-*-           Set text magnification factor
         Float_t mgn = 1;
         if (prec == 2) mgn = x11factor[ifpx11-1]*rsize/Float_t(ihh);
         if (mgn <=0 || mgn > 100) mgn = 1;
         gGXW->SetTextMagnitude(mgn);
         gGXW->DrawText(0,0,0,-mgn,0,TGXW::kClear);
         gGXW->SetTextFont(fTextFont);
         gGXW->SetTextSize(tsize);
      }
#else
      if (gGXW->GetTextFont() != fTextFont)   gGXW->SetTextFont(fTextFont);
      if (gGXW->GetTextSize() != tsize)       gGXW->SetTextSize(tsize);
#endif
      gGXW->SetTextAlign(fTextAlign);
      gGXW->SetTextColor(fTextColor);
   }

   if (gCurrentPS) {
      gCurrentPS->SetTextAlign(fTextAlign);
      gCurrentPS->SetTextColor(fTextColor);
      gCurrentPS->SetTextAngle(fTextAngle);
      gCurrentPS->SetTextSize(fTextSize);
      gCurrentPS->SetTextFont(fTextFont);
   }
}

//______________________________________________________________________________
void TAttText::Reset(Option_t *)
{
//*-*-*-*-*-*-*-*-*Reset this text attributes to default values*-*-*-*-*-*-*
//*-*              ============================================

   fTextAlign  = 11;
   fTextAngle  = 0;
   fTextColor  = 1;
   fTextFont   = 62;
   fTextSize   = 0.05;
}

//______________________________________________________________________________
void TAttText::SaveTextAttributes(ofstream &out, const Text_t *name, Int_t alidef, Float_t angdef, Int_t coldef, Int_t fondef, Float_t sizdef)
{
    // Save text attributes as C++ statement(s) on output stream out

   if (fTextAlign != alidef) {
      out<<"   "<<name<<"->SetTextAlign("<<fTextAlign<<");"<<endl;
   }
   if (fTextColor != coldef) {
      out<<"   "<<name<<"->SetTextColor("<<fTextColor<<");"<<endl;
   }
   if (fTextFont != fondef) {
      out<<"   "<<name<<"->SetTextFont("<<fTextFont<<");"<<endl;
   }
   if (fTextSize != sizdef) {
      out<<"   "<<name<<"->SetTextSize("<<fTextSize<<");"<<endl;
   }
   if (fTextAngle != angdef) {
      out<<"   "<<name<<"->SetTextAngle("<<fTextAngle<<");"<<endl;
   }
}

//______________________________________________________________________________
void TAttText::SetTextAttributes()
{
//*-*-*-*-*-*-*-*-*Invoke the DialogCanvas Text attributes*-*-*-*-*-*-*
//*-*              =======================================

   if (gPad) gROOT->SetSelectedPad(gPad->GetSelectedPad());

   TList *lc = (TList*)gROOT->GetListOfCanvases();
   if (!lc->FindObject("atttext")) {
      char cmd[] = "atttext = new TAttTextCanvas(\"atttext\",\"Text Attributes\",400,600)";
      gInterpreter->ProcessLine(cmd);
   }
   char cmdupd[] = "atttext->UpdateTextAttributes(    ,     ,     ,     ,             )";
   sprintf(cmdupd,"atttext->UpdateTextAttributes(%d,%f,%d,%d,%f)",fTextAlign,fTextAngle,fTextColor,fTextFont,fTextSize);
   gInterpreter->ProcessLine(cmdupd);
}
