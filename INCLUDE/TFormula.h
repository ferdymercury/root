//*CMZ :  2.20/05 13/12/98  10.51.29  by  Rene Brun
//*CMZ :  2.00/12 06/09/98  17.48.13  by  Rene Brun
//*CMZ :  1.00/08 15/04/97  17.59.03  by  Rene Brun
//*-- Author :    Rene Brun   19/08/95
// ---------------------------------- Formula.h

#ifndef ROOT_TFormula
#define ROOT_TFormula

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
// TFormula                                                             //
//                                                                      //
// The formula base class  f(x,y,z,par)                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TFormula : public TNamed {

protected:

  Int_t     fNdim;            //Dimension of function (1=1-Dim, 2=2-Dim,etc)
  Int_t     fNpar;            //Number of parameters
  Int_t     fNoper;           //Number of operators
  Int_t     fNconst;          //Number of constants
  Int_t     fNumber;          //formula number identifier
  Int_t     fNval;            //Number of different variables in expression
  Int_t     fNstring;         //Number of different constants character strings
  TString   *fExpr;           //List of expressions
  Int_t     *fOper;           //List of operators
  Double_t  *fConst;          //Array of fNconst formula constants
  Double_t  *fParams;         //Array of fNpar parameters
  TString   *fNames;          //Array of parameter names

public:
           TFormula();
           TFormula(const char *name,const char *formula);
           TFormula(const TFormula &formula);
 virtual   ~TFormula();
 virtual void       Analyze(const char *schain, Int_t &err);
 virtual Int_t      Compile(const char *expression="");
 virtual void       Copy(TObject &formula);
 virtual char       *DefinedString(Int_t code);
 virtual Double_t   DefinedValue(Int_t code);
 virtual Int_t      DefinedVariable(TString &variable);
 virtual Double_t   Eval(Double_t x, Double_t y=0, Double_t z=0);
 virtual Double_t   EvalPar(Double_t *x, Double_t *params=0);
         Int_t      GetNdim() {return fNdim;}
         Int_t      GetNpar() {return fNpar;}
         Int_t      GetNumber() {return fNumber;}
 Double_t           GetParameter(Int_t ipar) {return fParams[ipar];}
 virtual void       GetParameters(Double_t *params){for(Int_t i=0;i<fNpar;i++) params[i] = fParams[i];}
 virtual const char *GetParName(Int_t ipar) const;
 virtual void       Print(Option_t *option=""); // *MENU*
 virtual void       SetNumber(Int_t number) {fNumber = number;}
 virtual void       SetParameter(Int_t ipar, Double_t parvalue);
 virtual void       SetParameters(Double_t *params);
 virtual void       SetParameters(Double_t p0,Double_t p1,Double_t p2=0,Double_t p3=0,Double_t p4=0
                       ,Double_t p5=0,Double_t p6=0,Double_t p7=0,Double_t p8=0,Double_t p9=0); // *MENU*
 virtual void       SetParName(Int_t ipar, const char *name) {fNames[ipar] = name;}
 virtual void       SetParNames(const char *name0="p0",const char *name1="p1",const char
                            *name2="p2",const char *name3="p3",const char
                            *name4="p4", const char *name5="p5",const char *name6="p6",const char *name7="p7",const char
                            *name8="p8",const char *name9="p9"); // *MENU*
 virtual void       Update() {;}

 ClassDef(TFormula,3)  //The formula base class  f(x,y,z,par)
};

#endif
