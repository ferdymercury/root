//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/10 16/12/99  17.44.47  by  Rene Brun
//*CMZ :  2.23/03 14/09/99  08.30.32  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.12.06  by  Rene Brun
//*CMZ :  2.22/06 17/06/99  18.42.49  by  Rene Brun
//*CMZ :  2.22/01 04/05/99  18.36.09  by  Rene Brun
//*-- Author :    Rene Brun   04/01/95

#ifndef ROOT_TTreePlayer
#define ROOT_TTreePlayer

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
// TTreePlayer                                                          //
//                                                                      //
// A TTree object is a list of TBranch.                                 //
//   To Create a TTree object one must:                                 //
//    - Create the TTree header via the TTree constructor               //
//    - Call the TBranch constructor for every branch.                  //
//                                                                      //
//   To Fill this object, use member function Fill with no parameters.  //
//     The Fill function loops on all defined TBranch.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTree
#include "TTree.h"
#endif
#ifndef ROOT_TVirtualTreePlayer
#include "TVirtualTreePlayer.h"
#endif

class TSelector;
class TTreeFormula;
class TH1;
class TSlave;
class TPacketGenerator;
class TSQLResult;


class TTreePlayer : public TVirtualTreePlayer {

protected:
    TTree        *fTree;            //Pointer to current Tree
    Int_t         fDraw;            //Last entry loop number when object was drawn
    TTreeFormula  *fVar1;           //Pointer to first variable formula
    TTreeFormula  *fVar2;           //Pointer to second variable formula
    TTreeFormula  *fVar3;           //Pointer to third variable formula
    TTreeFormula  *fVar4;           //Pointer to fourth variable formula
    TTreeFormula  *fSelect;         //Pointer to selection formula
    TTreeFormula  *fMultiplicity;   //Pointer to formula giving ndata per entry
    Int_t         fDimension;       //Dimension of the current expression
    Int_t         fSelectedRows;    //Number of selected entries
    Int_t         fPacketSize;      //Number of entries in one packet for parallel root
    Int_t         fNbins[4];        //Number of bins per dimension
    Float_t       fVmin[4];         //Minima of varexp columns
    Float_t       fVmax[4];         //Maxima of varexp columns
    Float_t       *fV1;             //Local buffer for variable 1
    Float_t       *fV2;             //Local buffer for variable 2
    Float_t       *fV3;             //Local buffer for variable 3
    Double_t      *fW;              //Local buffer for weights
    TSelector     *fSelector;       //Pointer to current selector
    TPacketGenerator *fPacketGen;   //Packet generator
    Int_t          fNfill;          //Local for EntryLoop
    TH1           *fHistogram;      //Pointer to histogram used for the projection

protected:
    const   char  *GetNameByIndex(TString &varexp, Int_t *index,Int_t colindex);
    virtual void    MakeIndex(TString &varexp, Int_t *index);
    void            TakeAction(Int_t nfill, Int_t &npoints, Int_t &action, TObject *obj, Option_t *option);
    void            TakeEstimate(Int_t nfill, Int_t &npoints, Int_t action, TObject *obj, Option_t *option);

public:
    TTreePlayer();
    virtual ~TTreePlayer();

    virtual void      ClearFormula();
    virtual void      CompileVariables(const char *varexp="", const char *selection="");
    virtual TTree    *CopyTree(const char *selection, Option_t *option=""
                       ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      CreatePacketGenerator(Int_t nentries, Stat_t firstEntry);
    virtual void      DrawSelect(const char *varexp, const char *selection, Option_t *option=""
                       ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      EstimateLimits(Int_t estimate, Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      EntryLoop(Int_t &action, TObject *obj, Int_t nentries=1000000000, Int_t firstentry=0, Option_t *option="");

            void      FindGoodLimits(Int_t nbins, Int_t &newbins, Float_t &xmin, Float_t &xmax);
    virtual void      Fit(const char *formula ,const char *varexp, const char *selection,Option_t *option ,Option_t *goption
                       ,Int_t nentries, Int_t firstentry);
    TH1              *GetHistogram() {return fHistogram;}
    TTreeFormula     *GetMultiplicity()   {return fMultiplicity;}
    virtual void      GetNextPacket(TSlave *sl, Int_t &nentries, Stat_t &firstentry, Stat_t &processed);
    TPacketGenerator *GetPacketGenerator() const { return fPacketGen; }
    virtual Int_t     GetPacketSize() const {return fPacketSize;}
    TTreeFormula     *GetSelect()    {return fSelect;}
    virtual Int_t     GetSelectedRows() {return fSelectedRows;}
    TSelector        *GetSelector();
    TTreeFormula     *GetVar1() {return fVar1;}
    TTreeFormula     *GetVar2() {return fVar2;}
    TTreeFormula     *GetVar3() {return fVar3;}
    TTreeFormula     *GetVar4() {return fVar4;}
    virtual Float_t  *GetV1()   {return fV1;}
    virtual Float_t  *GetV2()   {return fV2;}
    virtual Float_t  *GetV3()   {return fV3;}
    virtual Double_t *GetW()    {return fW;}
    virtual void      Loop(Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0);
    virtual Int_t     MakeClass(const char *classname=0);
    virtual Int_t     MakeCode(const char *filename=0);
    virtual void      Scan(const char *varexp="", const char *selection="", Option_t *option=""
                       ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual TSQLResult *Query(const char *varexp="", const char *selection="", Option_t *option=""
                         ,Int_t nentries=1000000000, Int_t firstentry=0);
    virtual void      SetEstimate(Int_t n);
    virtual void      SetPacketSize(Int_t size = 100);
    virtual void      SetSelector(TSelector *selector=0);
    virtual void      SetSelector(const char *macroname);
    virtual void      SetTree(TTree *t) {fTree = t;}
    virtual void      StartViewer(Int_t ww, Int_t wh);

    ClassDef(TTreePlayer,0)  //manager class to play with TTrees
};

#endif
