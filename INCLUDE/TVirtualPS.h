//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/02 05/09/99  16.19.45  by  Rene Brun
//*-- Author :    Rene Brun   05/09/99
#ifndef ROOT_TVirtualPS
#define ROOT_TVirtualPS

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
// TVirtualPS                                                           //
//                                                                      //
// Abstract interface to a PostScript driver.                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

class TVirtualPS : public TNamed, public TAttLine, public TAttFill, public TAttMarker, public TAttText {

public:
   TVirtualPS();
   TVirtualPS(const char *filename, Int_t type=-111);
   virtual     ~TVirtualPS();
   virtual void  Close(Option_t *opt="") = 0;
   virtual void  DrawBox(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2) = 0;
   virtual void  DrawFrame(Coord_t xl, Coord_t yl, Coord_t xt, Coord_t  yt,
                           Int_t mode, Int_t border, Int_t dark, Int_t light) = 0;
   virtual void  DrawPolyMarker(Int_t n, Float_t *x, Float_t *y) = 0;
   virtual void  DrawPS(Int_t n, Float_t *xw, Float_t *yw) = 0;
   virtual void  NewPage() = 0;
   virtual void  Open(const char *filename, Int_t type=-111) = 0;
   virtual void  PrintFast(Int_t nch, const char *string="") = 0;
   virtual void  Text(Float_t x, Float_t y, const char *string) = 0;

   ClassDef(TVirtualPS,0)  //Abstract interface to a PostScript driver
};


R__EXTERN TVirtualPS  *gVirtualPS;

#endif
