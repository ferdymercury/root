//*CMZ :  0.90/05 21/11/96  10.02.55  by  Rene Brun
//*-- Author :    Rene Brun   19/11/95

#ifndef ROOT_TPavesText
#define ROOT_TPavesText

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

