//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/10 08/12/99  08.22.00  by  Rene Brun
//*CMZ :  2.23/03 21/09/99  16.25.37  by  Fons Rademakers
//*CMZ :  2.23/02 02/09/99  19.26.21  by  Rene Brun
//*CMZ :  2.23/01 30/08/99  16.09.37  by  Rene Brun
//*-- Author :    Rene Brun   30/08/99
#ifndef ROOT_TVirtualTreePlayer
#define ROOT_TVirtualTreePlayer

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
// TVirtualTreePlayer                                                  //
//                                                                      //
// Abstract base class for Histogram pplayers                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TClass
#include "TClass.h"
#endif

class TTree;
class TH1;
class TTreeFormula;
class TSlave;
class TSQLResult;

class TVirtualTreePlayer : public TObject {


private:
   static TClass   *fgPlayer; //Pointer to Tree player

public:
    TVirtualTreePlayer() { }
    virtual ~TVirtualTreePlayer() { }
    virtual TTree         *CopyTree(const char *selection, Option_t *option=""
                            ,Int_t nentries=1000000000, Int_t firstentry=0) = 0;
    virtual void           DrawSelect(const char *varexp, const char *selection, Option_t *option
                            ,Int_t nentries, Int_t firstentry) = 0;
    virtual void           Fit(const char *formula ,const char *varexp, const char *selection,Option_t *option ,Option_t *goption
                            ,Int_t nentries, Int_t firstentry) = 0;
    virtual TH1           *GetHistogram() = 0;
    virtual void           GetNextPacket(TSlave *sl, Int_t &nentries, Stat_t &firstentry, Stat_t &processed) = 0;
    virtual Int_t          GetSelectedRows() = 0;
    virtual TTreeFormula  *GetSelect() = 0;
    virtual TTreeFormula  *GetVar1() = 0;
    virtual TTreeFormula  *GetVar2() = 0;
    virtual TTreeFormula  *GetVar3() = 0;
    virtual TTreeFormula  *GetVar4() = 0;
    virtual Float_t       *GetV1() = 0;
    virtual Float_t       *GetV2() = 0;
    virtual Float_t       *GetV3() = 0;
    virtual Double_t      *GetW() = 0;
    virtual void           Loop(Option_t *option,Int_t nentries, Int_t firstentry) = 0;
    virtual Int_t          MakeClass(const char *classname) = 0;
    virtual Int_t          MakeCode(const char *filename) = 0;
    virtual void           Scan(const char *varexp, const char *selection, Option_t *option
                            ,Int_t nentries, Int_t firstentry) = 0;
    virtual TSQLResult    *Query(const char *varexp, const char *selection, Option_t *option
                            ,Int_t nentries, Int_t firstentry) = 0;
    virtual void           SetEstimate(Int_t n) = 0;
    virtual void           SetPacketSize(Int_t) = 0;
    virtual void           SetTree(TTree *t) = 0;
    virtual void           StartViewer(Int_t ww, Int_t wh) = 0;

   static  TVirtualTreePlayer *TreePlayer(TTree *obj);
   static void        SetPlayer(const char *player);

    ClassDef(TVirtualTreePlayer,0)  //Abstract interface for Tree players
};

#endif
