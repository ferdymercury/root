//*CMZ :  1.03/09 06/12/97  17.36.35  by  Fons Rademakers
//*-- Author :    Rene Brun   09/12/94

#ifndef ROOT_TPoints
#define ROOT_TPoints

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
// TPoints                                                              //
//                                                                      //
// 2-D graphics point (world coordinates, i.e. floating point).         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TPoints {

private:
   Coord_t    fX;           //X world coordinate
   Coord_t    fY;           //Y world coordinate

public:
   TPoints() : fX(0), fY(0) { }
   TPoints(Coord_t xy) : fX(xy), fY(xy) { }
   TPoints(Coord_t x, Coord_t y) : fX(x), fY(y) { }
   virtual ~TPoints() { }
   Coord_t    GetX() const { return fX; }
   Coord_t    GetY() const { return fY; }
   void       SetX(Coord_t x) { fX = x; }
   void       SetY(Coord_t y) { fY = y; }

   ClassDef(TPoints,0)  //2-D graphics point
};

#endif
