//*CMZ :  2.00/11 18/08/98  10.10.30  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  12.14.21  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  10.11.15  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPolyLine
#define ROOT_TPolyLine

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
// TPolyLine                                                            //
//                                                                      //
// A PolyLine.                                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TString
#include "TString.h"
#endif
#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif


class TPolyLine : public TObject, public TAttLine, public TAttFill {

protected:
        Int_t        fN;            //Number of points
        Float_t      *fX;           //Array of X coordinates
        Float_t      *fY;           //Array of Y coordinates
        TString      fOption;       //options

public:
        TPolyLine();
        TPolyLine(Int_t n, Option_t *option="");
        TPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        TPolyLine(const TPolyLine &polyline);
        virtual ~TPolyLine();
        virtual void    Copy(TObject &polyline);
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual void    Draw(Option_t *option="");
        virtual void    DrawPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
        Int_t           GetN() {return fN;}
        Float_t         *GetX() {return fX;}
        Float_t         *GetY() {return fY;}
        Option_t        *GetOption() const {return fOption.Data();}
        virtual void    ls(Option_t *option="");
        virtual void    Paint(Option_t *option="");
        virtual void    PaintPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    PaintPolyLineNDC(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    Print(Option_t *option="");
        virtual void    SavePrimitive(ofstream &out, Option_t *option);
        virtual void    SetOption(Option_t *option="") {fOption = option;}
        virtual void    SetPoint(Int_t point, Float_t x, Float_t y); // *MENU*
        virtual void    SetPolyLine(Int_t n, Float_t *x=0, Float_t *y=0, Option_t *option="");

        ClassDef(TPolyLine,1)  //A PolyLine
};

#endif

