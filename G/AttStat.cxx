//*CMZ :  1.03/09 06/12/97  16.52.17  by  Fons Rademakers
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

#include "TAttStat.h"

ClassImp(TAttStat)

//______________________________________________________________________________
//
//  Manages default histogram statistics style and options.
//  Referenced by TStyle.
//

//______________________________________________________________________________
TAttStat::TAttStat()
{
   Reset();
}

//______________________________________________________________________________
TAttStat::TAttStat(Color_t color, Style_t style, Float_t w, Float_t h, Float_t x, Float_t y)
{
   fStatColor = color;
   fStatStyle = style;
   fStatX     = x;
   fStatY     = y;
   fStatW     = w;
   fStatH     = h;
   if (x == 0) fStatX = 1-fStatW-0.01;
   if (y == 0) fStatY = 1-fStatH-0.01;
}

//______________________________________________________________________________
TAttStat::~TAttStat()
{
}

//______________________________________________________________________________
void TAttStat::Copy(TAttStat &attstat)
{
   attstat.fStatColor  = fStatColor;
   attstat.fStatStyle  = fStatStyle;
   attstat.fStatX      = fStatX;
   attstat.fStatY      = fStatY;
   attstat.fStatW      = fStatW;
   attstat.fStatH      = fStatH;
}

//______________________________________________________________________________
void TAttStat::Reset(Option_t *)
{
   fStatColor  = 19;
   fStatStyle  = 1;
   fStatW      = 0.20;
   fStatH      = 0.16;
   fStatX      = 0.99;
   fStatY      = 0.99;
}
