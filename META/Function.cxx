//*CMZ :  2.00/13 29/10/98  11.30.29  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  12.11.08  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  18.02.40  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  23.06.30  by  Fons Rademakers
//*-- Author :    Fons Rademakers   07/02/97

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
// Global functions class (global functions are obtaine from CINT).     //
// This class describes one single global function.                     //
// The TROOT class contains a list of all currently defined global      //
// functions (accessible via TROOT::GetListOfGlobalFunctions()).        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TFunction.h"
#include "TMethodarg.h"
#include "TROOT.h"
#include "TInterpreter.h"
#include "Strlen.h"
#include "Api.h"


ClassImp(TFunction)

//______________________________________________________________________________
TFunction::TFunction(G__MethodInfo *info) : TDictionary()
{
   // Default TFunction ctor. TFunctions are constructed in TROOT via
   // a call to TCint::UpdateListOfGlobalFunctions().

   fInfo       = info;
   fMethodArgs = 0;

   if (fInfo)
      CreateSignature();
}

//______________________________________________________________________________
TFunction::~TFunction()
{
   // TFunction dtor deletes adopted G__MethodInfo.

   delete fInfo;

   if (fMethodArgs) fMethodArgs->Delete();
   delete fMethodArgs;
}

//______________________________________________________________________________
void TFunction::CreateSignature()
{
   // Using the CINT method arg information to create a complete signature string.

   G__MethodArgInfo arg(*fInfo);

   int ifirst = 0;
   fSignature = "(";
   while (arg.Next()) {
      if (ifirst) fSignature += ", ";
      if (arg.Type() == 0) break;
      fSignature += arg.Type()->Name();
      if (arg.Name() && strlen(arg.Name())) {
         fSignature += " ";
         fSignature += arg.Name();
      }
      if (arg.DefaultValue() && strlen(arg.DefaultValue())) {
         fSignature += " = ";
         fSignature += arg.DefaultValue();
      }
      ifirst++;
   }
   fSignature += ")";
}

//______________________________________________________________________________
TList *TFunction::GetListOfMethodArgs()
{
   // Return list containing the TMethodArgs of a TFunction.

   if (!fMethodArgs) {
      if (!gInterpreter)
         Fatal("GetListOfMethodArgs", "gInterpreter not initialized");

      gInterpreter->CreateListOfMethodArgs(this);
   }
   return fMethodArgs;
}

//______________________________________________________________________________
const char *TFunction::GetName() const
{
   // Get function name.

   return fInfo->Name();
}

//______________________________________________________________________________
const char *TFunction::GetTitle() const
{
   // Get function description string (comment).

   return fInfo->Title();
}

//______________________________________________________________________________
const char *TFunction::GetReturnTypeName() const
{
   // Get full type description of function return type, e,g.: "class TDirectory*".

   if (fInfo->Type() == 0) return "Unknown";
   return fInfo->Type()->Name();
}

//______________________________________________________________________________
Int_t TFunction::GetNargs() const
{
   // Number of function arguments.

   return fInfo->NArg();
}

//______________________________________________________________________________
Int_t TFunction::GetNargsOpt() const
{
   // Number of function optional (default) arguments.

   return fInfo->NDefaultArg();
}

//______________________________________________________________________________
Int_t TFunction::Compare(TObject *obj)
{
   // Compare to other object. Returns 0<, 0 or >0 depending on
   // whether "this" is lexicographically less than, equal to, or
   // greater than obj.

   return strcmp(fInfo->Name(), obj->GetName());
}

//______________________________________________________________________________
ULong_t TFunction::Hash()
{
   // Return hash value for TFunction based on its name.

   TString s = fInfo->Name();
   return s.Hash();
}

//______________________________________________________________________________
Long_t TFunction::Property() const
{
   // Get property description word. For meaning of bits see EProperty.

   return fInfo->Property();
}

//______________________________________________________________________________
void *TFunction::InterfaceMethod() const
{
   // Return pointer to the interface method. Using this pointer we
   // can find which TFunction belongs to a G__MethodInfo object.
   // Both need to have the same InterfaceMethod pointer.

   return (void*)fInfo->InterfaceMethod();
}
