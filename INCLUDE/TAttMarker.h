//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/04 08/10/99  23.05.31  by  Rene Brun
//*CMZ :  0.80/00 11/08/96  11.49.08  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttMarker
#define ROOT_TAttMarker

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
        virtual void     ResetAttMarker(Option_t *toption="");
        virtual void     SaveMarkerAttributes(ofstream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t sizdef=1);
        virtual void     SetMarkerAttributes();  // *MENU*
        virtual void     SetMarkerColor(Color_t tcolor=1) { fMarkerColor = tcolor;}
        virtual void     SetMarkerStyle(Style_t mstyle=1) { fMarkerStyle = mstyle;}
        virtual void     SetMarkerSize(Size_t msize=1)    { fMarkerSize  = msize;}

        ClassDef(TAttMarker,1)  //Marker attributes
};

#endif

