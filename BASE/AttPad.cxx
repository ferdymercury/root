//*CMZ :  2.23/04 08/10/99  23.09.38  by  Rene Brun
//*CMZ :  2.23/02 03/09/99  10.32.16  by  Rene Brun
//*CMZ :  2.22/00 26/03/99  23.40.28  by  Rene Brun
//*CMZ :  2.21/02 16/01/99  15.04.29  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  16.51.54  by  Fons Rademakers
//*-- Author :    Rene Brun   04/01/95

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

#include "Strlen.h"
#include "TAttPad.h"
#include "TBuffer.h"
#include "TStyle.h"

ClassImp(TAttPad)

//______________________________________________________________________________
//
//  Manages default Pad attributes. Referenced by TStyle.
//

//______________________________________________________________________________
TAttPad::TAttPad()
{
   ResetAttPad();
}

//______________________________________________________________________________
TAttPad::~TAttPad()
{

}

//______________________________________________________________________________
void TAttPad::Copy(TAttPad &attpad)
{
   attpad.fLeftMargin   = fLeftMargin;
   attpad.fRightMargin  = fRightMargin;
   attpad.fBottomMargin = fBottomMargin;
   attpad.fTopMargin    = fTopMargin;
   attpad.fXfile   = fXfile;
   attpad.fYfile   = fYfile;
   attpad.fAfile   = fAfile;
   attpad.fXstat   = fXstat;
   attpad.fYstat   = fYstat;
   attpad.fAstat   = fAstat;
   attpad.fFrameFillColor = fFrameFillColor;
   attpad.fFrameFillStyle = fFrameFillStyle;
   attpad.fFrameLineColor = fFrameLineColor;
   attpad.fFrameLineStyle = fFrameLineStyle;
   attpad.fFrameLineWidth = fFrameLineWidth;
   attpad.fFrameBorderSize= fFrameBorderSize;
   attpad.fFrameBorderMode= fFrameBorderMode;
}

//______________________________________________________________________________
void TAttPad::Print(Option_t *)
{
}

//______________________________________________________________________________
void TAttPad::ResetAttPad(Option_t *)
{
   fLeftMargin   = gStyle->GetPadLeftMargin();
   fRightMargin  = gStyle->GetPadRightMargin();
   fBottomMargin = gStyle->GetPadBottomMargin();
   fTopMargin    = gStyle->GetPadTopMargin();
   fXfile  = 2;
   fYfile  = 2;
   fAfile  = 1;
   fXstat  = 0.99;
   fYstat  = 0.99;
   fAstat  = 2;
   fFrameLineColor = gStyle->GetFrameLineColor();
   fFrameFillColor = gStyle->GetFrameFillColor();
   fFrameFillStyle = gStyle->GetFrameFillStyle();
   fFrameLineStyle = gStyle->GetFrameLineStyle();
   fFrameLineWidth = gStyle->GetFrameLineWidth();
   fFrameBorderSize= gStyle->GetFrameBorderSize();
   fFrameBorderMode= gStyle->GetFrameBorderMode();
}

//______________________________________________________________________________
void TAttPad::SetBottomMargin(Float_t margin)
{
//*-*-*-*-*-*-*-*-*Set Pad bottom margin in per cent of the pad height*-*-*-*
//*-*              ===================================================
   if (margin <= 0 || margin >=1) margin = 0.1;
   if (margin + fTopMargin >= 1) return;
   fBottomMargin = margin;
}

//______________________________________________________________________________
void TAttPad::SetLeftMargin(Float_t margin)
{
//*-*-*-*-*-*-*-*-*Set Pad left margin in per cent of the pad width*-*-*-*-*
//*-*              ================================================
   if (margin <= 0 || margin >=1) margin = 0.1;
   if (margin + fRightMargin >= 1) return;
   fLeftMargin = margin;
}

//______________________________________________________________________________
void TAttPad::SetRightMargin(Float_t margin)
{
//*-*-*-*-*-*-*-*-*Set Pad right margin in per cent of the pad width*-*-*-*-*
//*-*              =================================================
   if (margin <= 0 || margin >=1) margin = 0.1;
   if (margin + fLeftMargin >= 1) return;
   fRightMargin = margin;
}

//______________________________________________________________________________
void TAttPad::SetTopMargin(Float_t margin)
{
//*-*-*-*-*-*-*-*-*Set Pad top margin in per cent of the pad height*-*-*-*-*
//*-*              ================================================
   if (margin <= 0 || margin >=1) margin = 0.1;
   if (margin + fBottomMargin >= 1) return;
   fTopMargin = margin;
}

//______________________________________________________________________________
void TAttPad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttPad.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion();
      R__b >> fLeftMargin;
      R__b >> fRightMargin;
      R__b >> fBottomMargin;
      R__b >> fTopMargin;
      R__b >> fXfile;
      R__b >> fYfile;
      R__b >> fAfile;
      R__b >> fXstat;
      R__b >> fYstat;
      R__b >> fAstat;
      if (R__v > 1) {
         R__b >> fFrameFillColor;
         R__b >> fFrameLineColor;
         R__b >> fFrameFillStyle;
         R__b >> fFrameLineStyle;
         R__b >> fFrameLineWidth;
         R__b >> fFrameBorderSize;
         R__b >> fFrameBorderMode;
      }
   } else {
      R__b.WriteVersion(TAttPad::IsA());
      R__b << fLeftMargin;
      R__b << fRightMargin;
      R__b << fBottomMargin;
      R__b << fTopMargin;
      R__b << fXfile;
      R__b << fYfile;
      R__b << fAfile;
      R__b << fXstat;
      R__b << fYstat;
      R__b << fAstat;
      R__b << fFrameFillColor;
      R__b << fFrameLineColor;
      R__b << fFrameFillStyle;
      R__b << fFrameLineStyle;
      R__b << fFrameLineWidth;
      R__b << fFrameBorderSize;
      R__b << fFrameBorderMode;
   }
}
