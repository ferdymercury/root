//*CMZ :  2.00/00 05/03/98  18.02.40  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  20.36.22  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/02/95

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

#include "TBaseClass.h"
#include "TClass.h"
#include "TROOT.h"
#include "TString.h"
#include "Api.h"

//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  Each class (see TClass) has a linked list of its base class(es).    //
//  This class describes one single base class.                         //
//  The base class info is obtained via the CINT api.                   //
//     see class TCint.                                                 //
//                                                                      //
//  The base class information is used a.o. in to find all inherited    //
//  methods.                                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


ClassImp(TBaseClass)

//______________________________________________________________________________
TBaseClass::TBaseClass(G__BaseClassInfo *info, TClass *cl) : TDictionary()
{
   // Default TBaseClass ctor. TBaseClasses are constructed in TClass
   // via a call to TCint::CreateListOfBaseClasses().

   fInfo     = info;
   fClass    = cl;
   fClassPtr = 0;
}

//______________________________________________________________________________
TBaseClass::~TBaseClass()
{
   // TBaseClass dtor deletes adopted G__BaseClassInfo object.

   delete fInfo;
}

//______________________________________________________________________________
void TBaseClass::Browse(TBrowser *b)
{
   // Called by the browser, to browse a baseclass.

   TClass *c = GetClassPointer();
   if (c) c->Browse(b);
}

//______________________________________________________________________________
TClass *TBaseClass::GetClassPointer()
{
   // Get pointer to the base class TClass.

   if (!fClassPtr) fClassPtr = gROOT->GetClass(GetName());
   return fClassPtr;
}

//______________________________________________________________________________
Int_t TBaseClass::GetDelta() const
{
   // Get offset from "this" to part of base class.

   return (Int_t)fInfo->Offset();
}

//______________________________________________________________________________
const char *TBaseClass::GetName() const
{
   // Get base class name.

   return fInfo->Name();
}

//______________________________________________________________________________
const char *TBaseClass::GetTitle() const
{
   // Get base class description (comment).

   return ((TBaseClass *)this)->GetClassPointer()->GetTitle();
}

//______________________________________________________________________________
Int_t TBaseClass::Compare(TObject *obj)
{
   // Compare to other object. Returns 0<, 0 or >0 depending on
   // whether "this" is lexicographically less than, equal to, or
   // greater than obj.

   return strcmp(fInfo->Name(), obj->GetName());
}

//______________________________________________________________________________
ULong_t TBaseClass::Hash()
{
   // Return hash value for TBaseClass based on its name.

   TString s = fInfo->Name();
   return s.Hash();
}

//______________________________________________________________________________
Long_t TBaseClass::Property() const
{
   // Get property description word. For meaning of bits see EProperty.

   return fInfo->Property();
}
