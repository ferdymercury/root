//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TAttStat
#define ROOT_TAttStat

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
// TAttStat                                                             //
//                                                                      //
// Histogram statistics attributes.                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TAttStat {
protected:
        Color_t    fStatColor;          //stat color
        Style_t    fStatStyle;          //stat style
        Float_t    fStatX;              //X position of top right corner of stat box
        Float_t    fStatY;              //Y position of top right corner of stat box
        Float_t    fStatW;              //width of stat box
        Float_t    fStatH;              //height of stat box

public:
        TAttStat();
        TAttStat(Color_t color, Style_t style, Float_t w, Float_t h, Float_t x, Float_t y);
        virtual ~TAttStat();
                void     Copy(TAttStat &attstat);
        Color_t          GetStatColor() {return fStatColor;}
        Style_t          GetStatStyle() {return fStatStyle;}
        Float_t          GetStatX() {return fStatX;}
        Float_t          GetStatY() {return fStatY;}
        Float_t          GetStatW() {return fStatW;}
        Float_t          GetStatH() {return fStatH;}

        virtual void     Reset(Option_t *option="");
        virtual void     SetStatColor(Color_t scolor) { fStatColor = scolor;}
        virtual void     SetStatStyle(Style_t sstyle) { fStatStyle = sstyle;}
        virtual void     SetStatX(Float_t x) { fStatX = x;}
        virtual void     SetStatY(Float_t y) { fStatY = y;}
        virtual void     SetStatW(Float_t w) { fStatW = w;}
        virtual void     SetStatH(Float_t h) { fStatH = h;}

        ClassDef(TAttStat,0)  //Histogram statistics attributes
};

#endif

