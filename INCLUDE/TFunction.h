//*CMZ :  0.90/15 07/02/97  16.03.37  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/02/97

#ifndef ROOT_TFunction
#define ROOT_TFunction

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
   const char  *GetSignature() const { return fSignature.Data(); }
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
