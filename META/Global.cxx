//*CMZ :  1.03/02 02/09/97  17.44.44  by  Rene Brun
//*-- Author :    Rene Brun   13/11/95

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
// Global variables class (global variables are obtained from CINT).    //
// This class describes the attributes of a global variable.            //
// The TROOT class contains a list of all currently defined global      //
// variables (accessible via TROOT::GetListOfGlobals()).                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGlobal.h"
#include "TString.h"
#include "TInterpreter.h"
#include "Api.h"


ClassImp(TGlobal)

//______________________________________________________________________________
TGlobal::TGlobal(G__DataMemberInfo *info) : TDictionary()
{
   // Default TGlobal ctor. TGlobals are constructed in TROOT via
   // a call to TCint::UpdateListOfGlobals().

   fInfo = info;
}

//______________________________________________________________________________
TGlobal::~TGlobal()
{
   // TGlobal dtor deletes adopted G__DataMemberInfo object.

   delete fInfo;
}

//______________________________________________________________________________
void *TGlobal::GetAddress() const
{
   // Return address of global.

   return (void *)fInfo->Offset();
}

//______________________________________________________________________________
Int_t TGlobal::GetArrayDim() const
{
   // Return number of array dimensions.

   return fInfo->ArrayDim();
}

//______________________________________________________________________________
Int_t TGlobal::GetMaxIndex(Int_t dim) const
{
   // Return maximum index for array dimension "dim".

   return fInfo->MaxIndex(dim);
}

//______________________________________________________________________________
const char *TGlobal::GetTypeName() const
{
   // Get type of global variable, e,g.: "class TDirectory*" -> "TDirectory".
   // Result needs to be used or copied immediately.

   return gInterpreter->TypeName(fInfo->Type()->Name());
}

//______________________________________________________________________________
const char *TGlobal::GetFullTypeName() const
{
   // Get full type description of global variable, e,g.: "class TDirectory*".

   return fInfo->Type()->Name();
}

//______________________________________________________________________________
const char *TGlobal::GetName() const
{
   // Get global variable name.

   return fInfo->Name();
}

//______________________________________________________________________________
const char *TGlobal::GetTitle() const
{
   // Get global variable description string (comment).

   return fInfo->Title();
}

//______________________________________________________________________________
Int_t TGlobal::Compare(TObject *obj)
{
   // Compare to other object. Returns 0<, 0 or >0 depending on
   // whether "this" is lexicographically less than, equal to, or
   // greater than obj.

   return strcmp(fInfo->Name(), obj->GetName());
}

//______________________________________________________________________________
ULong_t TGlobal::Hash()
{
   // Return hash value for TGlobal based on its name.

   TString s = fInfo->Name();
   return s.Hash();
}

//______________________________________________________________________________
Long_t TGlobal::Property() const
{
   // Get property description word. For meaning of bits see EProperty.

   return fInfo->Property();
}
