//*CMZ :  0.90/01 06/10/96  21.42.56  by  Rene Brun
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttLine
#define ROOT_TAttLine

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
// TAttLine                                                             //
//                                                                      //
// Line attributes.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TAttLine {

protected:
        Color_t    fLineColor;           //line color
        Style_t    fLineStyle;           //line style
        Width_t    fLineWidth;           //line width

public:
        TAttLine();
        TAttLine(Color_t lcolor,Style_t lstyle, Width_t lwidth);
        virtual ~TAttLine();
                void     Copy(TAttLine &attline);
        Int_t            DistancetoLine(Int_t px, Int_t py, Float_t xp1, Float_t yp1, Float_t xp2, Float_t yp2 );
        Color_t          GetLineColor() {return fLineColor;}
        Style_t          GetLineStyle() {return fLineStyle;}
        Width_t          GetLineWidth() {return fLineWidth;}
        virtual void     Modify();
        virtual void     Reset(Option_t *option="");
        virtual void     SaveLineAttributes(ofstream &out, const Text_t *name, Int_t coldef=1, Int_t stydef=1, Int_t widdef=1);
        virtual void     SetLineAttributes(); // *MENU*
        virtual void     SetLineColor(Color_t lcolor) { fLineColor = lcolor;}
        virtual void     SetLineStyle(Style_t lstyle) { fLineStyle = lstyle;}
        virtual void     SetLineWidth(Width_t lwidth) { fLineWidth = lwidth;}

        ClassDef(TAttLine,1)  //Line attributes
};

#endif

