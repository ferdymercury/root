//*CMZ :  2.23/04 08/10/99  23.07.16  by  Rene Brun
//*CMZ :  0.80/00 17/07/96  11.35.40  by  Rene Brun
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TAttCanvas
#define ROOT_TAttCanvas

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
        virtual void     ResetAttCanvas(Option_t *option="");
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

