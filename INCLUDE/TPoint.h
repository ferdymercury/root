//*CMZ :  0.05/02 22/01/96  11.51.55  by  Rene Brun
//*-- Author :    Fons Rademakers   03/12/95

#ifndef ROOT_TPoint
#define ROOT_TPoint

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
