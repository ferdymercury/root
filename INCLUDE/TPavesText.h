//*CMZ :  0.90/05 21/11/96  10.02.55  by  Rene Brun
//*-- Author :    Rene Brun   19/11/95

#ifndef ROOT_TPavesText
#define ROOT_TPavesText

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
// TPavesText                                                           //
//                                                                      //
// PavesText   A PaveText with a number of stacked paves.               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPaveText
#include "TPaveText.h"
#endif

class TPavesText : public TPaveText {

protected:
        Int_t      fNpaves;        //Number of stacked paves

public:
        TPavesText();
        TPavesText(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Int_t npaves=5, Option_t *option="br");
        TPavesText(const TPavesText &pavestext);
        virtual ~TPavesText();
                void  Copy(TObject &pavestext);
        virtual void  Draw(Option_t *option="");
        virtual Int_t GetNpaves() {return fNpaves;}
        virtual void  Paint(Option_t *option="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetNpaves(Int_t npaves=5) {fNpaves=npaves;} // *MENU*

        ClassDef(TPavesText,1)  //Stacked Paves with text strings
};

#endif

