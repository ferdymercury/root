//*CMZ :  2.22/01 19/05/99  12.47.17  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  09.49.48  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TLine
#define ROOT_TLine

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLine                                                                //
//                                                                      //
// A line segment.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif


class TLine : public TObject, public TAttLine {

protected:
        Coord_t      fX1;           //X of 1st point
        Coord_t      fY1;           //Y of 1st point
        Coord_t      fX2;           //X of 2nd point
        Coord_t      fY2;           //Y of 2nd point

protected:
        virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);

public:
        TLine();
        TLine(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2);
        TLine(const TLine &line);
        virtual ~TLine();
                void   Copy(TObject &line);
        virtual void   Draw(Option_t *option="");
        virtual TLine *DrawLine(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t y2);
        virtual TLine *DrawLineNDC(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t y2);
        Coord_t        GetX1() {return fX1;}
        Coord_t        GetX2() {return fX2;}
        Coord_t        GetY1() {return fY1;}
        Coord_t        GetY2() {return fY2;}
        virtual void   ls(Option_t *option="");
        virtual void   Paint(Option_t *option="");
        virtual void   PaintLine(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2);
        virtual void   PaintLineNDC(Coord_t u1, Coord_t v1,Coord_t u2, Coord_t  v2);
        virtual void   Print(Option_t *option="");
        virtual void   SavePrimitive(ofstream &out, Option_t *option);
        virtual void   SetX1(Coord_t x1) {fX1=x1;}
        virtual void   SetX2(Coord_t x2) {fX2=x2;}
        virtual void   SetY1(Coord_t y1) {fY1=y1;}
        virtual void   SetY2(Coord_t y2) {fY2=y2;}

        ClassDef(TLine,1)  //A line segment
};

#endif
