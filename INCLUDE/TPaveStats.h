//*CMZ :  2.22/00 19/03/99  00.05.39  by  Rene Brun
//*CMZ :  2.21/08 15/03/99  18.47.27  by  Rene Brun
//*-- Author :    Rene Brun   15/03/99
#ifndef ROOT_TPaveStats
#define ROOT_TPaveStats

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
// TPaveStats                                                           //
//                                                                      //
// a special TPaveText to draw histogram statistics                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPaveText
#include "TPaveText.h"
#endif


class TPaveStats : public TPaveText {

protected:
        Int_t         fOptFit;            //option Fit
        Int_t         fOptStat;           //option Stat

public:
        TPaveStats();
        TPaveStats(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Option_t *option="br");
        virtual ~TPaveStats();
        virtual TBox    *AddBox(Float_t , Float_t , Float_t , Float_t) {return 0;}
        virtual TLine   *AddLine(Float_t , Float_t , Float_t, Float_t) {return 0;}
        virtual void     DeleteText() {;}
        virtual void     EditText() {;}
        Int_t            GetOptFit() {return fOptFit;}
        Int_t            GetOptStat() {return fOptStat;}
        virtual void     InsertText(const Text_t *) {;}
        virtual void     ReadFile(const Text_t *, Option_t *, Int_t, Int_t) {;}
        virtual void     SaveStyle(); // *MENU*
        virtual void     SetAllWith(const Text_t *, Option_t *, Float_t) {;}
        virtual void     SetMargin(Float_t) {;}
        void             SetOptFit(Int_t fit=1) {fOptFit = fit;} // *MENU*
        void             SetOptStat(Int_t stat=1) {fOptStat = stat;} // *MENU*

        ClassDef(TPaveStats,1)  //a special TPaveText to draw histogram statistics.
};

#endif
