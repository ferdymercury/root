//*CMZ :  2.00/00 02/01/98  18.02.43  by  Fons Rademakers
//*-- Author :    Fons Rademakers   02/01/98

#ifndef ROOT_TGDimension
#define ROOT_TGDimension

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
// TGDimension + TGPosition                                             //
//                                                                      //
// Two small classes that implement dimensions (width and height) and   //
// positions (x and y). They are trivial and their members are public.  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


class TGDimension {
public:
   UInt_t  fWidth;       // width
   UInt_t  fHeight;      // height

   TGDimension() { fWidth = fHeight = 0; }
   TGDimension(UInt_t width, UInt_t height) { fWidth = width; fHeight = height; }
   TGDimension(const TGDimension &d) { fWidth = d.fWidth; fHeight = d.fHeight; }
   ClassDef(TGDimension,0)  // Dimension object (width, height)
};


class TGPosition {
public:
   Int_t  fX;         // x position
   Int_t  fY;         // y position

   TGPosition() { fX = fY = 0; }
   TGPosition(Int_t xc, Int_t yc) { fX = xc; fY = yc; }
   TGPosition(const TGPosition &p) { fX = p.fX; fY = p.fY; }
   ClassDef(TGPosition,0)  // Position object (x and y)
};

#endif
