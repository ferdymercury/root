//*CMZ :  2.21/04 05/02/99  14.52.21  by  Fons Rademakers
//*CMZ :  2.20/05 14/12/98  15.16.42  by  Fons Rademakers
//*CMZ :  1.01/05 06/06/97  14.39.11  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/95

#ifndef ROOT_Buttons
#define ROOT_Buttons

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

enum EEventType {
   kNoEvent       =  0,
   kButton1Down   =  1, kButton2Down   =  2, kButton3Down   =  3, kKeyDown  =  4,
   kButton1Up     = 11, kButton2Up     = 12, kButton3Up     = 13, kKeyUp    = 14,
   kButton1Motion = 21, kButton2Motion = 22, kButton3Motion = 23, kKeyPress = 24,
   kButton1Locate = 41, kButton2Locate = 42, kButton3Locate = 43,
   kMouseMotion   = 51, kMouseEnter    = 52, kMouseLeave    = 53,
   kButton1Double = 61, kButton2Double = 62, kButton3Double = 63
};

enum EEditMode {
   kPolyLine  = 1,  kSPolyLine = 2,  kPolyGone  = 3,
   kSPolyGone = 4,  kBox       = 5,  kDelete    = 6,
   kPad       = 7,  kText      = 8,  kEditor    = 9,
   kExit      = 10, kPave      = 11, kPaveLabel = 12,
   kPaveText  = 13, kPavesText = 14, kEllipse   = 15,
   kArc       = 16, kLine      = 17, kArrow     = 18,
   kGraph     = 19, kMarker    = 20, kPolyMarker= 21,
   kPolyLine3D= 22, kWbox      = 23, kGaxis     = 24,
   kF1        = 25, kF2        = 26, kF3        = 27,
   kDiamond   = 28, kPolyMarker3D = 29
};

#endif
