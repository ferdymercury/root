//*CMZ :  2.00/00 06/02/98  15.40.00  by  Rene Brun
//*CMZ :  1.03/03 04/09/97  12.40.50  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TText
#define ROOT_TText

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
// TText                                                                //
//                                                                      //
// Text.                                                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TText : public TNamed, public TAttText {

protected:
        Coord_t     fX;           //X position of text (left,center,etc..)
        Coord_t     fY;           //Y position of text (left,center,etc..)

public:
        TText();
        TText(Coord_t x, Coord_t y, const Text_t *text);
        TText(const TText &text);
        virtual ~TText();
                void     Copy(TObject &text);
        virtual Int_t    DistancetoPrimitive(Int_t px, Int_t py);
        virtual void     Draw(Option_t *option="");
        virtual void     DrawText(Coord_t x, Coord_t y, const Text_t *text);
        virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);

         Coord_t         GetX()  {return fX;}
         Coord_t         GetY()  {return fY;}

        virtual void     ls(Option_t *option="");
        virtual void     Paint(Option_t *option="");
        virtual void     PaintText(Coord_t x, Coord_t y, const Text_t *text);
        virtual void     PaintTextNDC(Coord_t u, Coord_t v, const Text_t *text);
        virtual void     Print(Option_t *option="");
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetNDC(Bool_t isNDC=kTRUE);
        virtual void     SetText(Coord_t x, Coord_t y, const Text_t *text) {fX=x; fY=y; SetTitle(text);} // *MENU* *ARGS={x=>fX,y=>fY,text=>fTitle}
        virtual void     SetX(Coord_t x) { fX = x;} // *MENU*
        virtual void     SetY(Coord_t y) { fY = y;} // *MENU*

        ClassDef(TText,1)  //Text
};

#endif

