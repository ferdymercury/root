//*CMZ :  2.00/12 28/08/98  16.38.16  by  Rene Brun
//*CMZ :  1.01/01 05/05/97  08.41.11  by  Rene Brun
//*-- Author :    Rene Brun   19/01/96
// ---------------------------------- TreeFormula.h

#ifndef ROOT_TTreeFormula
#define ROOT_TTreeFormula

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

class TTreeFormula : public TFormula {

protected:
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
   virtual char       *PrintValue(Int_t mode=0);
   virtual void       SetTree(TTree *tree) {fTree = tree;}

   ClassDef(TTreeFormula,1)  //The Tree formula
};

#endif
