//*CMZ :  1.03/09 06/12/97  17.36.35  by  Fons Rademakers
//*-- Author :    Rene Brun   09/12/94

#ifndef ROOT_TPoints
#define ROOT_TPoints

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
