//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 22/11/99  17.28.17  by  Rene Brun
//*CMZ :  2.22/01 19/05/99  12.38.49  by  Rene Brun
//*CMZ :  2.00/00 06/02/98  15.40.00  by  Rene Brun
//*CMZ :  1.03/03 04/09/97  12.40.50  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TText
#define ROOT_TText

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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
        // TText status bits
        enum { kTextNDC = BIT(14) };

        TText();
        TText(Coord_t x, Coord_t y, const char *text);
        TText(const TText &text);
        virtual ~TText();
                void     Copy(TObject &text);
        virtual Int_t    DistancetoPrimitive(Int_t px, Int_t py);
        virtual TText   *DrawText(Coord_t x, Coord_t y, const char *text);
        virtual TText   *DrawTextNDC(Coord_t x, Coord_t y, const char *text);
        virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);

         Coord_t         GetX()  {return fX;}
         Coord_t         GetY()  {return fY;}

        virtual void     ls(Option_t *option="");
        virtual void     Paint(Option_t *option="");
        virtual void     PaintText(Coord_t x, Coord_t y, const char *text);
        virtual void     PaintTextNDC(Coord_t u, Coord_t v, const char *text);
        virtual void     Print(Option_t *option="");
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetNDC(Bool_t isNDC=kTRUE);
        virtual void     SetText(Coord_t x, Coord_t y, const char *text) {fX=x; fY=y; SetTitle(text);} // *MENU* *ARGS={x=>fX,y=>fY,text=>fTitle}
        virtual void     SetX(Coord_t x) { fX = x;} // *MENU*
        virtual void     SetY(Coord_t y) { fY = y;} // *MENU*

        ClassDef(TText,1)  //Text
};

#endif

