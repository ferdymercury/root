//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  08.05.48  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TArrow
#define ROOT_TArrow

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
// TArrow                                                               //
//                                                                      //
// One arrow --->.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TString
#include "TString.h"
#endif
#ifndef ROOT_TLine
#include "TLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif


class TArrow : public TLine, public TAttFill {
protected:
        Float_t      fAngle;        //Arrow opening angle (degrees)
        Float_t      fArrowSize;    //Arrow Size
        TString      fOption;       //Arrow shapes

public:
        TArrow();
        TArrow(Float_t x1, Float_t y1,Float_t x2 ,Float_t y2
                               ,Float_t arrowsize=0.05 ,Option_t *option=">");
        TArrow(const TArrow &arrow);
        virtual ~TArrow();
                void   Copy(TObject &arrow);
        virtual void   Draw(Option_t *option="");
        virtual void   DrawArrow(Float_t x1, Float_t y1,Float_t x2 ,Float_t y2
                               ,Float_t arrowsize=0.05 ,Option_t *option=">");
        Float_t        GetAngle() {return fAngle;}
        Float_t        GetArrowSize() {return fArrowSize;}
        Option_t      *GetOption() const { return fOption.Data();}
        virtual void   Paint(Option_t *option="");
        virtual void   PaintArrow(Float_t x1, Float_t y1,Float_t x2 ,Float_t y2
                                 ,Float_t arrowsize=0.05 ,Option_t *option=">");
        virtual void   SavePrimitive(ofstream &out, Option_t *option);
        virtual void   SetAngle(Float_t angle=60) {fAngle=angle;} // *MENU*
        virtual void   SetArrowSize(Float_t arrowsize=0.05) {fArrowSize=arrowsize;} // *MENU*
        virtual void   SetOption(Option_t *option=">"){ fOption = option;}

        ClassDef(TArrow,1)  //one arrow --->
};

#endif
