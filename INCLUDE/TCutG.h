//*CMZ :  2.00/13 21/10/98  13.06.55  by  Rene Brun
//*CMZ :  2.00/08 28/05/98  10.27.42  by  Rene Brun
//*CMZ :  1.01/03 18/05/97  23.28.12  by  Rene Brun
//*-- Author :    Rene Brun   16/05/97

#ifndef ROOT_TCutG
#define ROOT_TCutG

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCutG                                                                //
//                                                                      //
// A Graphical cut.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGraph
#include "TGraph.h"
#endif

#ifndef ROOT_TTreeFormula
#include "TTreeFormula.h"
#endif

class TCutG : public TGraph {

protected:
   TString      fVarX;         //X variable
   TString      fVarY;         //Y variable
   TTreeFormula *fFormulaX;    //!pointer to TreeFormula for X
   TTreeFormula *fFormulaY;    //!pointer to TreeFormula for Y
   TTree        *fTree;        //!pointer to current tree

public:
   TCutG();
   TCutG(const Text_t *name, Int_t n, Float_t *x=0, Float_t *y=0);
   virtual ~TCutG();
   virtual Double_t      EvalInstance(Int_t instance);
virtual const Text_t     *GetVarX() const {return fVarX.Data();}
virtual const Text_t     *GetVarY() const {return fVarY.Data();}
        virtual Int_t    IsInside(Float_t x, Float_t y);
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetTree(TTree *tree) {fTree = tree;}
        virtual void     SetVarX(const Text_t *varx); // *MENU*
        virtual void     SetVarY(const Text_t *vary); // *MENU*

   ClassDef(TCutG,1)  // A Graphical cut.
};

#endif
