//*CMZ :  1.03/09 16/12/97  11.36.04  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine   19/02/96

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

//______________________________________________________________________________
//*-*-*-*-*The   G W i n 3 2 D o u b l e B u f f e r O b j e c t  class *-*-*-*-
//*-*            ======================================================
//*-*
//*-*  Basic interface to the WIN32 graphics system
//*-*
//*-*  This is psecial kind of pixmap windows object to implement
//*-*  double buffer mechanism
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#include "TGWin32DoubleBufferObject.h"

ClassImp(TGWin32DoubleBufferObject)

//______________________________________________________________________________
