//*CMZ :  2.23/12 26/01/2000  11.46.16  by  Rene Brun
//*CMZ :  2.23/04 10/10/99  10.45.29  by  Fons Rademakers
//*CMZ :  2.23/02 07/09/99  10.45.08  by  Fons Rademakers
//*CMZ :  2.22/06 21/06/99  18.02.51  by  Rene Brun
//*CMZ :  2.21/08 11/03/99  08.16.09  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.45.42  by  Fons Rademakers
//*-- Author :    Rene Brun   05/12/95

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

#include "TVirtualPad.h"
#include "X3DBuffer.h"

Size3D gSize3D;

void **(*gThreadTsd)(void*,Int_t) = 0;
Int_t (*gThreadXAR)(const char *xact, Int_t nb, void **ar, Int_t *iret) = 0;

//______________________________________________________________________________
TVirtualPad *&gPad
{
   static TVirtualPad *currentPad = 0;
   if (!gThreadTsd)
      return currentPad;
   else
      return *(TVirtualPad**)(*gThreadTsd)(&currentPad,0);
}


ClassImp(TVirtualPad)

//______________________________________________________________________________
//
//  TVirtualPad is an abstract base class for the Pad and Canvas classes.
//

//______________________________________________________________________________
TVirtualPad::TVirtualPad() : TAttPad()
{
   // VirtualPad default constructor

   fResizing = kFALSE;
}

//______________________________________________________________________________
TVirtualPad::TVirtualPad(const char *, const char *, Float_t,
           Float_t, Float_t, Float_t, Color_t color, Short_t , Short_t)
          : TAttPad()
{
   // VirtualPad constructor

   fResizing = kFALSE;

   SetFillColor(color);
   SetFillStyle(1001);
}

//______________________________________________________________________________
TVirtualPad::~TVirtualPad()
{
   // VirtualPad destructor

}

