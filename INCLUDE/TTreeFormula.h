//*CMZ :  2.23/09 21/11/99  19.54.58  by  Fons Rademakers
//*CMZ :  2.23/03 10/09/99  19.59.19  by  Rene Brun
//*CMZ :  2.00/12 28/08/98  16.38.16  by  Rene Brun
//*CMZ :  1.01/01 05/05/97  08.41.11  by  Rene Brun
//*-- Author :    Rene Brun   19/01/96
// ---------------------------------- TreeFormula.h

#ifndef ROOT_TTreeFormula
#define ROOT_TTreeFormula

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
// TTreeFormula                                                         //
//                                                                      //
// The Tree formula class                                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TFormula
#include "TFormula.h"
#endif

#ifndef ROOT_TLeaf
#include "TLeaf.h"
#endif

#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

const Int_t kMAXCODES = 100;

class TTree;
class TMethodCall;
class TLeafObject;

class TTreeFormula : public TFormula {

protected:
   enum { kIsCharacter = BIT(12) };

   TTree       *fTree;            //pointer to Tree
   Short_t     fCodes[kMAXCODES]; //List of leaf numbers referenced in formula
   Int_t       fNcodes;           //Number of leaves referenced in formula
   Int_t       fMultiplicity;     //Number of array elements in leaves in case of a TClonesArray
   Int_t       fInstance;         //Instance number for GetValue
   Int_t       fNindex;           //Size of fIndex
   Int_t       *fIndex;           //array of instances numbers
   TObjArray   fMethods;          //List of leaf method calls

public:
             TTreeFormula();
             TTreeFormula(const char *name,const char *formula, TTree *tree);
   virtual   ~TTreeFormula();
   virtual Int_t      DefinedVariable(TString &variable);
   virtual Double_t   EvalInstance(Int_t i=0);
   TMethodCall        *GetMethodCall(Int_t code);
   virtual Int_t      GetMultiplicity() {return fMultiplicity;}
   virtual TLeaf      *GetLeaf(Int_t n);
   virtual Int_t      GetNcodes() {return fNcodes;}
   virtual Int_t      GetNdata();
   virtual Float_t    GetValueLeafObject(Int_t i, TLeafObject *leaf);
   virtual char       *PrintValue(Int_t mode=0);
   virtual void       SetTree(TTree *tree) {fTree = tree;}

   ClassDef(TTreeFormula,1)  //The Tree formula
};

#endif
