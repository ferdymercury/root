//*CMZ :  1.03/09 16/12/97  11.36.04  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine   19/02/96

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
