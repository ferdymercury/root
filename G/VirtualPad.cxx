//*CMZ :  2.21/08 11/03/99  08.16.09  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  17.45.42  by  Fons Rademakers
//*-- Author :    Rene Brun   05/12/95

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

#include "TVirtualPad.h"
#include "X3DBuffer.h"

extern "C" {
   Size3D gSize3D;
}
#ifdef R__THREAD
TVirtualPad *gPadMain = 0;
void **(*gThreadTsd)(void*,Int_t) = 0;
int (*gThreadXAR)(char *xact, Int_t nb, void **ar, Int_t *iret)=0;
#else
TVirtualPad *gPad = 0;
#endif

ClassImp(TVirtualPad)

//______________________________________________________________________________
//
//  TVirtualPad is an abstract base class for the Pad and Canvas classes.
//

//______________________________________________________________________________
TVirtualPad::TVirtualPad() : TWbox(), TAttPad()
{
//*-*-*-*-*-*-*-*-*-*-*VirtualPad default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================
}

//______________________________________________________________________________
TVirtualPad::TVirtualPad(const Text_t *, const Text_t *, Float_t,
           Float_t, Float_t, Float_t, Color_t color, Short_t bordersize,
           Short_t bordermode)
          : TWbox(0,0,1,1,color,bordersize,bordermode), TAttPad()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*VirtualPad constructor*-*-*-*-*-*-*-*-*-*-*-*-*
}

//______________________________________________________________________________
TVirtualPad::~TVirtualPad()
{
//*-*-*-*-*-*-*-*-*-*-*VirtualPad destructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  =====================
}

