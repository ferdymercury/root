//*CMZ :  2.00/00 16/02/98  02.36.04  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

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
//*CMZ :  2.00/00 16/02/98  00.17.08  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97
/**************************************************************************

    This source is based on Xclass95, a Win95-looking GUI toolkit.
    Copyright (C) 1996, 1997 David Barth, Ricky Ralston, Hector Peraza.

    Xclass95 is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

**************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGWidget                                                             //
//                                                                      //
// The widget base class. It is light weight (all inline service        //
// methods) and is typically used as mixin class (via multiple          //
// inheritance), see for example TGButton.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGWidget.h"

ClassImp(TGWidget)
