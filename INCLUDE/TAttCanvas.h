//*CMZ :  0.80/00 17/07/96  11.35.40  by  Rene Brun
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TAttCanvas
#define ROOT_TAttCanvas

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
// TAttCanvas                                                           //
//                                                                      //
// Canvas attributes.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif

#ifndef ROOT_Htypes
#include "Htypes.h"
#endif


class TAttCanvas {
private:
        Coord_t    fXBetween;        //X distance between pads
        Coord_t    fYBetween;        //Y distance between pads
        Coord_t    fTitleFromTop;    //Y distance of Global Title from top
        Coord_t    fXdate;           //X position where to draw the date
        Coord_t    fYdate;           //X position where to draw the date
        Coord_t    fAdate;           //Alignment for the date

public:
        TAttCanvas();
        virtual ~TAttCanvas();
        virtual void     Copy(TAttCanvas &attcanvas);
        Coord_t          GetAdate() { return fAdate;}
        Coord_t          GetTitleFromTop() { return fTitleFromTop;}
        Coord_t          GetXBetween() { return fXBetween;}
        Coord_t          GetXdate() { return fXdate;}
        Coord_t          GetYBetween() { return fYBetween;}
        Coord_t          GetYdate() { return fYdate;}
        virtual void     Print(Option_t *option="");
        virtual void     Reset(Option_t *option="");
        virtual void     SetAdate(Coord_t adate) { fAdate=adate;}
        virtual void     SetTitleFromTop(Coord_t titlefromtop)
                                        { fTitleFromTop=titlefromtop;}
        virtual void     SetXBetween(Coord_t xbetween) { fXBetween=xbetween;}
        virtual void     SetXdate(Coord_t xdate) { fXdate=xdate;}
        virtual void     SetYBetween(Coord_t ybetween) { fYBetween=ybetween;}
        virtual void     SetYdate(Coord_t ydate) { fYdate=ydate;}

        ClassDef(TAttCanvas,1)  //Canvas attributes
};

#endif

