//*CMZ :  1.03/09 06/12/97  16.48.24  by  Fons Rademakers
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
#include "TStyle.h"
#include "TAttFunc.h"

ClassImp(TAttFunc)

//______________________________________________________________________________
//
//  Manages Functions attributes. Referenced by TStyle.
//

//______________________________________________________________________________
TAttFunc::TAttFunc()
{
   if (!gStyle) return;
   fFuncColor = gStyle->GetFuncColor();
   fFuncWidth = gStyle->GetFuncWidth();
   fFuncStyle = gStyle->GetFuncStyle();
}

//______________________________________________________________________________
TAttFunc::TAttFunc(Color_t color, Style_t style, Width_t width)
{
   fFuncColor = color;
   fFuncWidth = width;
   fFuncStyle = style;
}

//______________________________________________________________________________
TAttFunc::~TAttFunc()
{
}

//______________________________________________________________________________
void TAttFunc::Copy(TAttFunc &attfunc)
{
   attfunc.fFuncColor  = fFuncColor;
   attfunc.fFuncStyle  = fFuncStyle;
   attfunc.fFuncWidth  = fFuncWidth;
}

//______________________________________________________________________________
void TAttFunc::Reset(Option_t *)
{
   fFuncColor  = 1;
   fFuncStyle  = 1;
   fFuncWidth  = 1;
}
