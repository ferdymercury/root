//*CMZ :  1.03/09 06/12/97  16.47.36  by  Fons Rademakers
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

#include "Strlen.h"
#include "TAttCanvas.h"

ClassImp(TAttCanvas)

//______________________________________________________________________________
//
//     Manages canvas attributes. Referenced by TStyle.
//

//______________________________________________________________________________
TAttCanvas::TAttCanvas()
{
   Reset();
}

//______________________________________________________________________________
TAttCanvas::~TAttCanvas()
{

}

//______________________________________________________________________________
void TAttCanvas::Copy(TAttCanvas &attcanvas)
{
   attcanvas.fXBetween     = fXBetween;
   attcanvas.fYBetween     = fYBetween;
   attcanvas.fTitleFromTop = fTitleFromTop;
   attcanvas.fXdate        = fXdate;
   attcanvas.fYdate        = fYdate;
   attcanvas.fAdate        = fAdate;
}

//______________________________________________________________________________
void TAttCanvas::Print(Option_t *)
{

}

//______________________________________________________________________________
void TAttCanvas::Reset(Option_t *)
{
   fXBetween     = 2;
   fYBetween     = 2;
   fTitleFromTop = 1.2;
   fXdate        = 0.2;
   fYdate        = 0.3;
   fAdate        = 1;
}
