//*CMZ :  2.22/07 05/07/99  16.35.42  by  Rene Brun
//*CMZ :  2.22/01 18/05/99  19.07.27  by  Rene Brun
//*CMZ :  2.21/04 03/02/99  10.49.07  by  Rene Brun
//*CMZ :  2.21/02 16/01/99  12.20.44  by  Rene Brun
//*CMZ :  2.20/02 03/12/98  18.59.19  by  Rene Brun
//*CMZ :  2.00/13 29/10/98  18.54.20  by  Rene Brun
//*CMZ :  2.00/12 30/09/98  10.13.46  by  Rene Brun
//*CMZ :  2.00/07 18/05/98  15.22.29  by  Rene Brun
//*CMZ :  2.00/04 31/03/98  08.55.30  by  Rene Brun
//*CMZ :  2.00/03 26/03/98  18.07.32  by  Rene Brun
//*CMZ :  2.00/00 03/03/98  17.06.46  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.42.01  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

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

#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "TROOT.h"
#include "TStyle.h"

TStyle  *gStyle;

ClassImp(TStyle)

//______________________________________________________________________________
//
// TStyle objects may be created to define special styles.
// By default ROOT creates a default style that can be accessed via
// the gStyle pointer.
//
// This class includes functions to set the following object attributes.
//   - Canvas
//   - Pad
//   - Histogram axis
//   - Lines
//   - Fill areas
//   - Text
//   - Markers
//   - Functions
//   - Histogram Statistics and Titles
//

//______________________________________________________________________________
TStyle::TStyle() :TNamed()
{

   Reset();
}

//______________________________________________________________________________
TStyle::TStyle(Text_t *name, Text_t *title) : TNamed(name,title)
{
   gStyle = this;
   Reset();
   gROOT->GetListOfStyles()->Add(this);
}

//______________________________________________________________________________
TStyle::~TStyle()
{
   gROOT->GetListOfStyles()->Remove(this);
}

//______________________________________________________________________________
TStyle::TStyle(const TStyle &style)
{
   ((TStyle&)style).Copy(*this);
}

//______________________________________________________________________________
void TStyle::Browse(TBrowser *)
{
    cd();
}

//______________________________________________________________________________
void TStyle::cd()
{
//   Change current style
   gStyle = this;
}

//______________________________________________________________________________
void TStyle::Copy(TObject &obj)
{
   TAttLine::Copy(((TStyle&)obj));
   TAttFill::Copy(((TStyle&)obj));
   TAttMarker::Copy(((TStyle&)obj));
   TAttText::Copy(((TStyle&)obj));
   fXaxis.Copy(((TStyle&)obj).fXaxis);
   fYaxis.Copy(((TStyle&)obj).fYaxis);
   fZaxis.Copy(((TStyle&)obj).fZaxis);
   ((TStyle&)obj).fScreenFactor   = fScreenFactor;
   ((TStyle&)obj).fCanvasColor    = fCanvasColor;
   ((TStyle&)obj).fCanvasBorderSize= fCanvasBorderSize;
   ((TStyle&)obj).fCanvasBorderMode= fCanvasBorderMode;
   ((TStyle&)obj).fCanvasDefH     = fCanvasDefH;
   ((TStyle&)obj).fCanvasDefW     = fCanvasDefW;
   ((TStyle&)obj).fCanvasDefX     = fCanvasDefX;
   ((TStyle&)obj).fCanvasDefY     = fCanvasDefY;
   ((TStyle&)obj).fPadColor       = fPadColor;
   ((TStyle&)obj).fPadBorderSize  = fPadBorderSize;
   ((TStyle&)obj).fPadBorderMode  = fPadBorderMode;
   ((TStyle&)obj).fPadBottomMargin= fPadBottomMargin;
   ((TStyle&)obj).fPadTopMargin   = fPadTopMargin;
   ((TStyle&)obj).fPadLeftMargin  = fPadLeftMargin;
   ((TStyle&)obj).fPadRightMargin = fPadRightMargin;
   ((TStyle&)obj).fPadGridX       = fPadGridX;
   ((TStyle&)obj).fPadGridY       = fPadGridY;
   ((TStyle&)obj).fPadTickX       = fPadTickX;
   ((TStyle&)obj).fPadTickY       = fPadTickY;
   ((TStyle&)obj).fFuncColor      = fFuncColor;
   ((TStyle&)obj).fFuncStyle      = fFuncStyle;
   ((TStyle&)obj).fFuncWidth      = fFuncWidth;
   ((TStyle&)obj).fFrameFillColor = fFrameFillColor;
   ((TStyle&)obj).fFrameFillStyle = fFrameFillStyle;
   ((TStyle&)obj).fFrameLineColor = fFrameLineColor;
   ((TStyle&)obj).fFrameLineStyle = fFrameLineStyle;
   ((TStyle&)obj).fFrameLineWidth = fFrameLineWidth;
   ((TStyle&)obj).fFrameBorderSize= fFrameBorderSize;
   ((TStyle&)obj).fFrameBorderMode= fFrameBorderMode;
   ((TStyle&)obj).fHistFillColor  = fHistFillColor;
   ((TStyle&)obj).fHistFillStyle  = fHistFillStyle;
   ((TStyle&)obj).fHistLineColor  = fHistLineColor;
   ((TStyle&)obj).fHistLineStyle  = fHistLineStyle;
   ((TStyle&)obj).fHistLineWidth  = fHistLineWidth;
   ((TStyle&)obj).fBarWidth       = fBarWidth;
   ((TStyle&)obj).fBarOffset      = fBarOffset;
   ((TStyle&)obj).fDrawBorder     = fDrawBorder;
   ((TStyle&)obj).fOptLogx        = fOptLogx;
   ((TStyle&)obj).fOptLogy        = fOptLogy;
   ((TStyle&)obj).fOptLogz        = fOptLogz;
   ((TStyle&)obj).fOptDate        = fOptDate;
   ((TStyle&)obj).fOptFile        = fOptFile;
   ((TStyle&)obj).fOptFit         = fOptFit;
   ((TStyle&)obj).fOptStat        = fOptStat;
   ((TStyle&)obj).fOptTitle       = fOptTitle;
   ((TStyle&)obj).fErrorMarker    = fErrorMarker;
   ((TStyle&)obj).fErrorMsize     = fErrorMsize;
   ((TStyle&)obj).fErrorX         = fErrorX;
   ((TStyle&)obj).fStatColor      = fStatColor;
   ((TStyle&)obj).fStatBorderSize = fStatBorderSize;
   ((TStyle&)obj).fStatFont       = fStatFont;
   ((TStyle&)obj).fStatStyle      = fStatStyle;
   ((TStyle&)obj).fStatW          = fStatW;
   ((TStyle&)obj).fStatH          = fStatH ;
   ((TStyle&)obj).fStatX          = fStatX;
   ((TStyle&)obj).fStatY          = fStatY;
   ((TStyle&)obj).fTitleColor     = fTitleColor;
   ((TStyle&)obj).fTitleFont      = fTitleFont;
   ((TStyle&)obj).fTitleBorderSize= fTitleBorderSize;
   ((TStyle&)obj).fTitleW         = fTitleW;
   ((TStyle&)obj).fTitleH         = fTitleH;
   ((TStyle&)obj).fTitleX         = fTitleX;
   ((TStyle&)obj).fTitleY         = fTitleY;
   ((TStyle&)obj).fShowEventStatus= fShowEventStatus;
   ((TStyle&)obj).fLegoInnerR     = fLegoInnerR;
   for (Int_t i=0;i<30;i++) {
      ((TStyle&)obj).fLineStyle[i]     = fLineStyle[i];
   }
   ((TStyle&)obj).fHeaderPS       = fHeaderPS;
}

//______________________________________________________________________________
void TStyle::Reset(Option_t *)
{
   TAttLine::Reset();
   TAttFill::Reset();
   TAttText::Reset();
   TAttMarker::Reset();
   SetFillStyle(1001);
   SetFillColor(19);
   fXaxis.Reset();
   fYaxis.Reset();
   fZaxis.Reset();
   fCanvasColor    = 19;
   fCanvasBorderSize= 2;
   fCanvasBorderMode= 1;
   fCanvasDefH     = 500;
   fCanvasDefW     = 700;
   fCanvasDefX     = 10;
   fCanvasDefY     = 10;
   fPadColor       = fCanvasColor;
   fPadBorderSize  = fCanvasBorderSize;
   fPadBorderMode  = fCanvasBorderMode;
   fPadBottomMargin= 0.1;
   fPadTopMargin   = 0.1;
   fPadLeftMargin  = 0.1;
   fPadRightMargin = 0.1;
   fPadGridX       = kFALSE;
   fPadGridY       = kFALSE;
   fPadTickX       = 0;
   fPadTickY       = 0;
   fFuncColor      = 1;
   fFuncStyle      = 1;
   fFuncWidth      = 3;
   fHistLineColor  = 1;
   fHistFillColor  = 0;
   fHistFillStyle  = 1001;
   fHistLineStyle  = 1;
   fHistLineWidth  = 1;
   fFrameLineColor = 1;
   fFrameFillColor = 0;
   fFrameFillStyle = 1001;
   fFrameLineStyle = 1;
   fFrameLineWidth = 1;
   fFrameBorderSize= 1;
   fFrameBorderMode= 1;
   fBarWidth       = 1;
   fBarOffset      = 0;
   fDrawBorder     = 0;
   fOptLogx        = 0;
   fOptLogy        = 0;
   fOptLogz        = 0;
   fOptDate        = 0;
   fOptFile        = 0;
   fOptFit         = 0;
   fOptStat        = 1;
   fOptTitle       = 1;
   fErrorMarker    = 21;
   fErrorMsize     = 0.05;
   fErrorX         = 0.5;
   fScreenFactor   = 1;
   fStatColor      = fCanvasColor;
   fStatBorderSize = 2;
   fStatFont       = 62;
   fStatStyle      = 1001;
   fStatW          = 0.20;
   fStatH          = 0.16;
   fStatX          = 0.98;
   fStatY          = 0.98;
   fTitleColor     = fCanvasColor;
   fTitleFont      = 62;
   fTitleBorderSize= 2;
   fTitleW         = 0;
   fTitleH         = 0;
   fTitleX         = 0.01;
   fTitleY         = 0.995;
   fShowEventStatus= 0;
   fLegoInnerR     = 0.5;
   fHeaderPS       = "";

   SetLineStyleString(1,"[]");
   SetLineStyleString(2,"[12 12]");
   SetLineStyleString(3,"[4 8]");
   SetLineStyleString(4,"[12 15 4 15]");
   for (Int_t i=5;i<30;i++) SetLineStyleString(i,"[]");

   SetPaperSize();

   SetPalette();
}

//______________________________________________________________________________
Int_t TStyle::AxisChoice( Option_t *axis)
{
   char achoice = toupper(axis[0]);
   if (achoice == 'Y') return 2;
   if (achoice == 'Z') return 3;
   return 1;
}

//______________________________________________________________________________
Int_t TStyle::GetNdivisions( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetNdivisions();
   if (ax == 2) return fYaxis.GetNdivisions();
   if (ax == 3) return fZaxis.GetNdivisions();
   return 0;
}

//______________________________________________________________________________
Color_t TStyle::GetAxisColor( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetAxisColor();
   if (ax == 2) return fYaxis.GetAxisColor();
   if (ax == 3) return fZaxis.GetAxisColor();
   return 0;
}

//______________________________________________________________________________
Int_t TStyle::GetColorPalette(Int_t i)
//   return color number i in current palette
{
   Int_t ncolors = GetNumberOfColors();
   Int_t icol    = i%ncolors;
   if (icol < 0) icol = 0;
   return fPalette.fArray[icol];
}

//______________________________________________________________________________
Color_t TStyle::GetLabelColor( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetLabelColor();
   if (ax == 2) return fYaxis.GetLabelColor();
   if (ax == 3) return fZaxis.GetLabelColor();
   return 0;
}

//______________________________________________________________________________
Style_t TStyle::GetLabelFont( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetLabelFont();
   if (ax == 2) return fYaxis.GetLabelFont();
   if (ax == 3) return fZaxis.GetLabelFont();
   return 0;
}

//______________________________________________________________________________
Float_t TStyle::GetLabelOffset( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetLabelOffset();
   if (ax == 2) return fYaxis.GetLabelOffset();
   if (ax == 3) return fZaxis.GetLabelOffset();
   return 0;
}

//______________________________________________________________________________
Float_t TStyle::GetLabelSize( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetLabelSize();
   if (ax == 2) return fYaxis.GetLabelSize();
   if (ax == 3) return fZaxis.GetLabelSize();
   return 0;
}


//______________________________________________________________________________
const Text_t *TStyle::GetLineStyleString(Int_t i) const
{
//   return line style string (used by Popscript).
//   See SetLineStyleString for more explanations

   if (i < 1 || i > 29) return fLineStyle[0].Data();
   return fLineStyle[i].Data();
}

//______________________________________________________________________________
void TStyle::GetPaperSize(Float_t &xsize, Float_t &ysize)
{
//    Set paper size for PostScript output
//
   xsize = fPaperSizeX;
   ysize = fPaperSizeY;
}

//______________________________________________________________________________
Float_t TStyle::GetTickLength( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetTickLength();
   if (ax == 2) return fYaxis.GetTickLength();
   if (ax == 3) return fZaxis.GetTickLength();
   return 0;
}

//______________________________________________________________________________
Float_t TStyle::GetTitleOffset( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetTitleOffset();
   if (ax == 2) return fYaxis.GetTitleOffset();
   if (ax == 3) return fZaxis.GetTitleOffset();
   return 0;
}

//______________________________________________________________________________
Float_t TStyle::GetTitleSize( Option_t *axis)
{
   Int_t ax = AxisChoice(axis);
   if (ax == 1) return fXaxis.GetTitleSize();
   if (ax == 2) return fYaxis.GetTitleSize();
   if (ax == 3) return fZaxis.GetTitleSize();
   return 0;
}

//______________________________________________________________________________
void TStyle::SetNdivisions(Int_t n, Option_t *axis)
{
// Set the number of divisions to draw an axis.
//  ndiv      : Number of divisions.
//
//       n = N1 + 100*N2 + 10000*N3
//       N1=number of primary divisions.
//       N2=number of secondary divisions.
//       N3=number of 3rd divisions.
//           e.g.:
//           nndi=0 --> no tick marks.
//           nndi=2 --> 2 divisions, one tick mark in the middle
//                      of the axis.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetNdivisions(n);
   if (ax == 2) fYaxis.SetNdivisions(n);
   if (ax == 3) fZaxis.SetNdivisions(n);
}

//______________________________________________________________________________
void TStyle::SetAxisColor(Color_t color, Option_t *axis)
{
// Set color to draw the axis line and tick marks.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetAxisColor(color);
   if (ax == 2) fYaxis.SetAxisColor(color);
   if (ax == 3) fZaxis.SetAxisColor(color);
}

//______________________________________________________________________________
void TStyle::SetHeaderPS(const char *header)
{
// Define a string to be inserted in the Postscript header
// The string in header will be added to the Postscript file
// immediatly following the %%Page line
// For example, this string may contain special Postscript instructions like
//      200 200 translate
// This information is used in TPostScript::Initialize

   fHeaderPS = header;
}

//______________________________________________________________________________
void TStyle::SetLabelColor(Color_t color, Option_t *axis)
{
// Set axis labels color.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetLabelColor(color);
   if (ax == 2) fYaxis.SetLabelColor(color);
   if (ax == 3) fZaxis.SetLabelColor(color);
}

//______________________________________________________________________________
void TStyle::SetLabelFont(Style_t font, Option_t *axis)
{
// Set font number used to draw axis labels.
//    font  : Text font code = 10*fontnumber + precision
//             Font numbers must be between 1 and 14
//             precision = 1 fast hardware fonts (steps in the size)
//             precision = 2 scalable and rotatable hardware fonts
// The default font number is 62.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetLabelFont(font);
   if (ax == 2) fYaxis.SetLabelFont(font);
   if (ax == 3) fZaxis.SetLabelFont(font);
}

//______________________________________________________________________________
void TStyle::SetLabelOffset(Float_t offset, Option_t *axis)
{
// Set offset between axis and axis labels.
// The offset is expressed as a percent of the pad height.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetLabelOffset(offset);
   if (ax == 2) fYaxis.SetLabelOffset(offset);
   if (ax == 3) fZaxis.SetLabelOffset(offset);
}

//______________________________________________________________________________
void TStyle::SetLabelSize(Float_t size, Option_t *axis)
{
// Set size of axis labels. The size is expressed as a percent of the pad height.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetLabelSize(size);
   if (ax == 2) fYaxis.SetLabelSize(size);
   if (ax == 3) fZaxis.SetLabelSize(size);
}


//______________________________________________________________________________
void TStyle::SetLineStyleString(Int_t i, const char *text)
{
// Set line style string (used by Postscript)
// PostScript uses the following convention
//  a line is a suite of segments, each segment is described by the
//  number of pixels. For example default line styles are defined as:
//   linestyle 1  "[]"             solid
//   linestyle 2  "[12 12]"        dashed
//   linestyle 3  "[4 8]"          dotted
//   linestyle 4  "[12 15 4 15]"   dash-dotted
//
//  Up to 30 different styles may be defined.
//   The opening and closing brackets may be omitted
//   They will be automaticalled added by this function.

   Int_t nch = strlen(text);
   char *st = new char[nch+10];
   sprintf(st," ");
   if (strstr(text,"[") == 0) strcat(st,"[");
   strcat(st,text);
   if (strstr(text,"]") == 0) strcat(st,"]");
   strcat(st," 0 sd");
   if (i >= 1 && i <= 29) fLineStyle[i] = st;
   delete [] st;
}


//______________________________________________________________________________
void TStyle::SetOptFit(Int_t mode)
{
// The type of information about fit parameters printed in the histogram
// statistics box can be selected via the parameter mode.
//  The parameter mode can be = pcev  (default = 0111)
//    v = 1;  print name/values of parameters
//    e = 1;  print errors (if e=1, v must be 1)
//    c = 1;  print Chisquare/Number of degress of freedom
//    p = 1;  print Probability
//  Example: gStyle->SetOptFit(1011);
//           print fit probability, parameter names/values and errors.

   fOptFit = mode;
}

//______________________________________________________________________________
void TStyle::SetOptStat(Int_t mode)
{
// The type of information printed in the histogram statistics box
//  can be selected via the parameter mode.
//  The parameter mode can be = ourmeni  (default = 0001111)
//    n = 1;  name of histogram is printed
//    e = 1;  number of entries printed
//    m = 1;  mean value printed
//    r = 1;  rms printed
//    u = 1;  number of underflows printed
//    o = 1;  number of overflows printed
//    i = 1;  integral of bins printed
//  Example: gStyle->SetOptStat(11);
//           print only name of histogram and number of entries.
//
   fOptStat = mode;
}

//______________________________________________________________________________
void TStyle::SetPaperSize(EPaperSize size)
{
   // Set paper size for PostScript output.

   switch (size) {
      case kA4:
         SetPaperSize(20, 26);
         break;
      case kUSLetter:
         SetPaperSize(20, 24);
         break;
      default:
         Error("SetPaperSize", "illegal paper size %d\n", (int)size);
         break;
   }
}

//______________________________________________________________________________
void TStyle::SetPaperSize(Float_t xsize, Float_t ysize)
{
   // Set paper size for PostScript output.
   // The paper size is specified in centimeters. Default is 20x26.

   fPaperSizeX = xsize;
   fPaperSizeY = ysize;
}

//______________________________________________________________________________
void TStyle::SetTickLength(Float_t length, Option_t *axis)
{
// set the tick marks length for an axis.
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetTickLength(length);
   if (ax == 2) fYaxis.SetTickLength(length);
   if (ax == 3) fZaxis.SetTickLength(length);
}

//______________________________________________________________________________
void TStyle::SetTitleOffset(Float_t offset, Option_t *axis)
{
// Specify a parameter offset to control the distance between the axis
// and the axis title.
// offset = 1 means : use the default distance
// offset = 1.2 means: the distance will be 1.2*(default distance)
// offset = 0.8 means: the distance will be 0.8*(default distance)
//
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetTitleOffset(offset);
   if (ax == 2) fYaxis.SetTitleOffset(offset);
   if (ax == 3) fZaxis.SetTitleOffset(offset);
}

//______________________________________________________________________________
void TStyle::SetTitleSize(Float_t size, Option_t *axis)
{
// Set the axis title size.
//
// axis specifies which axis ("x","y","z"), default = "x"

   Int_t ax = AxisChoice(axis);
   if (ax == 1) fXaxis.SetTitleSize(size);
   if (ax == 2) fYaxis.SetTitleSize(size);
   if (ax == 3) fZaxis.SetTitleSize(size);
}

//______________________________________________________________________________
void TStyle::SetPalette(Int_t ncolors, Int_t *colors)
{
// The color palette is used by the histogram classes
//  (see TH1::Draw options).
// For example TH1::Draw("col") draws a 2-D histogram with cells
// represented by a box filled with a color CI function of the cell content.
// if the cell content is N, the color CI used will be the color number
// in colors[N],etc. If the maximum cell content is > ncolors, all
// cell contents are scaled to ncolors.
//
// if ncolors <= 0 a default palette (see below) of 50 colors is defined.
//     the colors defined in this palette are OK for coloring pads, labels
//
// if ncolors == 1 && colors == 0, then
//     a Pretty Palette with a Spectrum Violet->Red is created.
//   It is recommended to use this Pretty palette when drawing legos,
//   surfaces or contours.
//
// if ncolors > 0 and colors = 0, the default palette is used
// with a maximum of ncolors.
//
// The default palette defines:
//   index 0->9   : grey colors from light to dark grey
//   index 10->19 : "brown" colors
//   index 20->29 : "blueish" colors
//   index 30->39 : "redish" colors
//   index 40->49 : basic colors
//
//  The color numbers specified in the palette can be viewed by selecting
//  the item "colors" in the "VIEW" menu of the canvas toolbar.
//  The color parameters can be changed via TColor::SetRGB.

   Int_t i;
   Int_t palette[50] = {19,18,17,16,15,14,13,12,11,20,
                        21,22,23,24,25,26,27,28,29,30, 8,
                        31,32,33,34,35,36,37,38,39,40, 9,
                        41,42,43,44,45,47,48,49,46,50, 2,
                         7, 6, 5, 4, 3, 112,1};
   // set default palette (pad type)
   if (ncolors <= 0) {
      ncolors = 50;
      fPalette.Set(ncolors);
      for (i=0;i<ncolors;i++) fPalette.fArray[i] = palette[i];
      return;
   }
   // set Pretty Palette Spectrum Violet->Red
      if (ncolors == 1 && colors == 0) {
      ncolors = 50;
      fPalette.Set(ncolors);
      for (i=0;i<ncolors;i++) fPalette.fArray[i] = 51+i;
      return;
   }
   // set user defined palette
   if (colors == 0 && ncolors > 50) ncolors = 50;
   fPalette.Set(ncolors);
   if (colors)  for (i=0;i<ncolors;i++) fPalette.fArray[i] = colors[i];
   else         for (i=0;i<ncolors;i++) fPalette.fArray[i] = palette[i];
}
