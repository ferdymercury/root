//*CMZ :  0.05/02 22/01/96  11.51.55  by  Rene Brun
//*-- Author :    Fons Rademakers   03/12/95

#ifndef ROOT_TPoint
#define ROOT_TPoint

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPoint                                                               //
//                                                                      //
// TPoint implements a 2D screen (device) point (see also TPoints).     //
//                                                                      //
// Don't add in dictionary since that will add a virtual table pointer  //
// and that will destroy the data layout of an array of TPoint's which  //
// should match the layout of an array of XPoint's (so no extra copying //
// needs to be done in the X11 drawing routines).                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TPoint {

public:    // for easy access
#ifndef WIN32
   SCoord_t    fX;         //X device coordinate
   SCoord_t    fY;         //Y device coordinate
#else
   long        fX;         //X device coordinate
   long        fY;         //Y device coordinate
#endif

public:
   TPoint() : fX(0), fY(0) { }
   TPoint(SCoord_t xy) : fX(xy), fY(xy) { }
   TPoint(SCoord_t x, SCoord_t y) : fX(x), fY(y) { }
   ~TPoint() { }
   SCoord_t    GetX() const { return (SCoord_t)fX; }
   SCoord_t    GetY() const { return (SCoord_t)fY; }
   void        SetX(SCoord_t x) { fX = x; }
   void        SetY(SCoord_t y) { fY = y; }
};

#endif
