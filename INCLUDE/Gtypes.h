//*CMZ :  0.80/00 18/06/96  15.50.20  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_Gtypes
#define ROOT_Gtypes

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
// Gtypes                                                               //
//                                                                      //
// Types used by the graphics classes.                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Htypes
#include "Htypes.h"
#endif

typedef short     Font_t;        //Font number
typedef short     Style_t;       //Style number
typedef short     Marker_t;      //Marker number
typedef short     Width_t;       //Line width
typedef short     Color_t;       //Color number
typedef short     SCoord_t;      //Screen coordinates
typedef float     Coord_t;       //Pad world coordinates
typedef float     Angle_t;       //Graphics angle
typedef float     Size_t;        //Attribute size

enum EColor { kWhite, kBlack, kRed, kGreen, kBlue, kYellow, kMagenta, kCyan };
enum ELineStyle { kSolid = 1, kDashed, kDotted, kDashDotted };

#endif
