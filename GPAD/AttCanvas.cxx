//*CMZ :  2.23/04 08/10/99  23.11.43  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  16.47.36  by  Fons Rademakers
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
   ResetAttCanvas();
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
void TAttCanvas::ResetAttCanvas(Option_t *)
{
   fXBetween     = 2;
   fYBetween     = 2;
   fTitleFromTop = 1.2;
   fXdate        = 0.2;
   fYdate        = 0.3;
   fAdate        = 1;
}
