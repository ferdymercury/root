//*CMZ :  2.23/02 05/09/99  21.22.18  by  Rene Brun
//*-- Author :    Rene Brun   05/09/99
#ifndef ROOT_TViewerX3D
#define ROOT_TViewerX3D

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
// TViewerX3D                                                           //
//                                                                      //
// C++ interface to the X3D viewer                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TVirtualPad
#include "TVirtualPad.h"
#endif


class TViewerX3D : public TObject {


public:
   TViewerX3D();
   virtual ~TViewerX3D() { }
   static void View(TVirtualPad *pad, Option_t *option);

   ClassDef(TViewerX3D,1)  //C++ interface to the X3D viewer
};

#endif
