//*CMZ :  1.03/09 06/12/97  16.49.04  by  Fons Rademakers
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

#include "Strlen.h"
#include "TAttHist.h"
#include "TStyle.h"

ClassImp(TAttHist)

//______________________________________________________________________________
//
// Manages default histogram attributes. Referenced by TStyle.
//

//______________________________________________________________________________
TAttHist::TAttHist()
{
   if (!gStyle) return;
   fHistColor = gStyle->GetHistLineColor();
   fHistWidth = gStyle->GetHistLineWidth();
   fHistStyle = gStyle->GetHistLineStyle();
}

//______________________________________________________________________________
TAttHist::TAttHist(Color_t color, Style_t style, Width_t width)
{
   fHistColor = color;
   fHistWidth = width;
   fHistStyle = style;
}

//______________________________________________________________________________
TAttHist::~TAttHist()
{
}

//______________________________________________________________________________
void TAttHist::Copy(TAttHist &atthist)
{
   atthist.fHistColor  = fHistColor;
   atthist.fHistStyle  = fHistStyle;
   atthist.fHistWidth  = fHistWidth;
}

//______________________________________________________________________________
void TAttHist::Print(Option_t *)
{
}


//______________________________________________________________________________
void TAttHist::Reset(Option_t *)
{
   fHistColor = 1;
   fHistStyle = 1;
   fHistWidth = 1;
}
