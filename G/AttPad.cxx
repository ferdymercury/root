//*CMZ :  1.03/09 06/12/97  16.51.54  by  Fons Rademakers
//*-- Author :    Rene Brun   04/01/95

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
#include "TAttPad.h"

ClassImp(TAttPad)

//______________________________________________________________________________
//
//  Manages default Pad attributes. Referenced by TStyle.
//

//______________________________________________________________________________
TAttPad::TAttPad()
{
   Reset();
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
}

//______________________________________________________________________________
void TAttPad::Print(Option_t *)
{
}

//______________________________________________________________________________
void TAttPad::Reset(Option_t *)
{
   fLeftMargin   = 0.1;
   fRightMargin  = 0.1;
   fBottomMargin = 0.1;
   fTopMargin    = 0.1;
   fXfile  = 2;
   fYfile  = 2;
   fAfile  = 1;
   fXstat  = 0.99;
   fYstat  = 0.99;
   fAstat  = 2;
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
