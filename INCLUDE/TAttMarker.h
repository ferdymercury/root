//*CMZ :  0.80/00 11/08/96  11.49.08  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttMarker
#define ROOT_TAttMarker

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
// TAttMarker                                                           //
//                                                                      //
// Marker attributes.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


class TAttMarker {

protected:
        Color_t    fMarkerColor;       //Marker color index
        Style_t    fMarkerStyle;       //Marker style
        Size_t     fMarkerSize;        //Marker size

public:
        TAttMarker();
        TAttMarker(Color_t color, Style_t style, Size_t msize);
        virtual ~TAttMarker();
                void     Copy(TAttMarker &attmarker);
        virtual Color_t  GetMarkerColor() {return fMarkerColor;}
        virtual Style_t  GetMarkerStyle() {return fMarkerStyle;}
        virtual Size_t   GetMarkerSize()  {return fMarkerSize;}
        virtual void     Modify();
        virtual void     Reset(Option_t *toption="");
        virtual void     SaveMarkerAttributes(ofstream &out, const Text_t *name, Int_t coldef=1, Int_t stydef=1, Int_t sizdef=1);
        virtual void     SetMarkerAttributes();  // *MENU*
        virtual void     SetMarkerColor(Color_t tcolor=1) { fMarkerColor = tcolor;}
        virtual void     SetMarkerStyle(Style_t mstyle=1) { fMarkerStyle = mstyle;}
        virtual void     SetMarkerSize(Size_t msize=1)    { fMarkerSize  = msize;}

        ClassDef(TAttMarker,1)  //Marker attributes
};

#endif

