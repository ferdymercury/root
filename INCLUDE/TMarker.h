//*CMZ :  2.00/00 16/01/98  15.09.09  by  Fons Rademakers
//*CMZ :  0.90/05 21/11/96  09.51.30  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TMarker
#define ROOT_TMarker

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
// TMarker                                                              //
//                                                                      //
// Marker.                                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TMarker : public TObject, public TAttMarker {

protected:
        Coord_t     fX;           //X position of marker (left,center,etc..)
        Coord_t     fY;           //Y position of marker (left,center,etc..)

public:
        TMarker();
        TMarker(Coord_t x, Coord_t y, Int_t marker);
        TMarker(const TMarker &marker);
        virtual ~TMarker();
                void     Copy(TObject &marker);
        virtual Int_t    DistancetoPrimitive(Int_t px, Int_t py);
        virtual void     Draw(Option_t *option="");
        virtual void     DrawMarker(Coord_t x, Coord_t y);
        virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);
        Coord_t          GetX()  {return fX;}
        Coord_t          GetY()  {return fY;}
        virtual void     ls(Option_t *option="");
        virtual void     Paint(Option_t *option="");
        virtual void     PaintMarker(Coord_t x, Coord_t y);
        virtual void     PaintMarkerNDC(Coord_t u, Coord_t v);
        virtual void     Print(Option_t *option="");
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetX(Coord_t x) { fX = x;} // *MENU*
        virtual void     SetY(Coord_t y) { fY = y;} // *MENU*

        static  void     DisplayMarkerTypes();

        ClassDef(TMarker,1)  //Marker
};

#endif

