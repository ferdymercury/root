//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/05 18/10/99  19.01.48  by  Rene Brun
//*CMZ :  2.23/01 17/09/99  09.53.16  by  Rene Brun
//*CMZ :  2.22/00 19/03/99  00.05.39  by  Rene Brun
//*CMZ :  2.21/08 15/03/99  18.47.27  by  Rene Brun
//*-- Author :    Rene Brun   15/03/99
#ifndef ROOT_TPaveStats
#define ROOT_TPaveStats

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
        TString       fFormatFit;         //Printing format for fit parameters
        TString       fFormatStats;       //Printing format for stats

public:
        TPaveStats();
        TPaveStats(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Option_t *option="br");
        virtual ~TPaveStats();
        virtual TBox    *AddBox(Float_t , Float_t , Float_t , Float_t) {return 0;}
        virtual TLine   *AddLine(Float_t , Float_t , Float_t, Float_t) {return 0;}
        virtual void     DeleteText() {;}
        virtual void     EditText() {;}
        virtual const char  *GetFormatFit  () const {return fFormatFit.Data();}
        virtual const char  *GetFormatStats() const {return fFormatStats.Data();}
        Int_t            GetOptFit() {return fOptFit;}
        Int_t            GetOptStat() {return fOptStat;}
        virtual void     InsertText(const char *) {;}
        virtual void     ReadFile(const char *, Option_t *, Int_t, Int_t) {;}
        virtual void     SaveStyle(); // *MENU*
        virtual void     SetAllWith(const char *, Option_t *, Float_t) {;}
        virtual void     SetFormatFit(const char *format="5.4g"); // *MENU*
        virtual void     SetFormatStats(const char *format="6.4g"); // *MENU*
        virtual void     SetMargin(Float_t) {;}
        void             SetOptFit(Int_t fit=1) {fOptFit = fit;} // *MENU*
        void             SetOptStat(Int_t stat=1) {fOptStat = stat;} // *MENU*

        ClassDef(TPaveStats,2)  //a special TPaveText to draw histogram statistics.
};

#endif
