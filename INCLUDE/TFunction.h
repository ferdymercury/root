//*CMZ :  2.23/04 05/10/99  16.17.38  by  Fons Rademakers
//*CMZ :  0.90/15 07/02/97  16.03.37  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/02/97

#ifndef ROOT_TFunction
#define ROOT_TFunction

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TFunction                                                            //
//                                                                      //
// Dictionary of global functions (global functions are obtained from   //
// CINT).                                                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class G__MethodInfo;


class TFunction : public TDictionary {

friend class TCint;

protected:
   G__MethodInfo  *fInfo;            //pointer to CINT function info
   TString         fSignature;       //string containing function signature
   TList          *fMethodArgs;      //list of function arguments

   virtual void    CreateSignature();

public:
   TFunction(G__MethodInfo *info = 0);
   virtual     ~TFunction();
   const char  *GetName() const;
   const char  *GetSignature();
   const char  *GetTitle() const;
   const char  *GetReturnTypeName() const;
   TList       *GetListOfMethodArgs();
   Int_t        GetNargs() const;
   Int_t        GetNargsOpt() const;
   Int_t        Compare(TObject *obj);
   ULong_t      Hash();
   void        *InterfaceMethod() const;
   Long_t       Property() const;

   ClassDef(TFunction,0)  //Dictionary for global function
};

#endif
