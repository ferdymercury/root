//*CMZ :  2.00/13 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  2.00/11 23/10/98  12.22.59  by  Rene Brun
//*CMZ :  1.03/09 08/12/97  13.45.37  by  Fons Rademakers
//*-- Author :    Rene Brun   27/01/96

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
// A TLeaf for a general object derived from TObject.                   //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TLeafObject.h"
#include "TBranch.h"
#include "TClass.h"
#include "TMethodCall.h"
#include "TDataType.h"
#include "TTreeFormula.h"

ClassImp(TLeafObject)

//______________________________________________________________________________
TLeafObject::TLeafObject(): TLeaf()
{
//*-*-*-*-*-*Default constructor for LeafObject*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        =================================
   fClass      = 0;
   fObjAddress = 0;
}

//______________________________________________________________________________
TLeafObject::TLeafObject(const Text_t *name, const Text_t *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafObject*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==================
//*-*

  SetTitle(type);
  fClass      = gROOT->GetClass(type);
  fObjAddress = 0;
}

//______________________________________________________________________________
TLeafObject::~TLeafObject()
{
//*-*-*-*-*-*Default destructor for a LeafObject*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ==================================

}


//______________________________________________________________________________
void TLeafObject::FillBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Pack leaf elements in Basket output buffer*-*-*-*-*-*-*
//*-*                  =========================================

   TObject *object  = GetObject();
   if (object) {
      object->Streamer(b);
   } else {
     if (fClass) {
        object = (TObject *)fClass->New();
        object->SetBit(kZombie);
        object->Streamer(b);
        delete object;
     } else {
        Error("FillBasket","Attempt to write a NULL object in leaf:%s",GetName());
     }
   }
}

//______________________________________________________________________________
TMethodCall *TLeafObject::GetMethodCall(char *name)
{
//*-*-*-*-*-*-*-*Returns pointer to method corresponding to name*-*-*-*-*-*-*
//*-*            ============================================
//*-*
//*-*    name is a string with the general form  "method(list of params)"
//*-*   If list of params is omitted, () is assumed;
//*-*

   char *params = strchr(name,'(');
   if (params) { *params = 0; params++; }

   if (!fClass) fClass      = gROOT->GetClass(GetTitle());
   TMethodCall *m = new TMethodCall(fClass, name, params);
   if (m->GetMethod()) return m;
   Error("GetMethodCall","Unknow method:%s",name);
   delete m;
   return 0;
}

//______________________________________________________________________________
const Text_t *TLeafObject::GetTypeName() const
{
//*-*-*-*-*-*-*-*Returns name of leaf type*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =========================

   return fTitle.Data();
}

//______________________________________________________________________________
Float_t TLeafObject::GetValue(Int_t i, TTreeFormula *f)
{
//*-*-*-*-*-*-*-*Returns result of leaf method*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =============================

   if (!f) return 0;
   TMethodCall *m = f->GetMethodCall(i);
   if (!m) return 0;

   void *thisobj = GetObject();

   EReturnType r = m->ReturnType();

   if (r == kLong) {
      Long_t l;
      m->Execute(thisobj, l);
      return (Float_t) l;
   }
   if (r == kDouble) {
      Double_t d;
      m->Execute(thisobj, d);
      return (Float_t) d;
   }
   m->Execute(thisobj);
   return 0;
}


//______________________________________________________________________________
void TLeafObject::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Print a description of this leaf*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TLeaf::Print(option);

}


//______________________________________________________________________________
void TLeafObject::ReadBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//*-*                  ===========================================

   if (fClass) {
      if (fObjAddress) {
         TObject *oldobject = (TObject*)(*fObjAddress);
         delete oldobject;
      } else {
         Long_t *voidobj = new Long_t[1];
         fObjAddress = (void **)voidobj;
      }
      TObject *object = (TObject *)fClass->New();
      if (object) {
         object->Streamer(b);
         // in case we had written a null pointer a Zombie object was created
         // we must delete it
         if (object->IsZombie()) {
            delete object;
            object = 0;
         }
         *fObjAddress = object;
      }
   } else GetBranch()->SetAddress(0);
}

//______________________________________________________________________________
void TLeafObject::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*-*-*-*Set leaf buffer data address*-*-*-*-*-*
//*-*                  ============================

   fObjAddress = (void **)add;
}

//______________________________________________________________________________
void TLeafObject::Streamer(TBuffer &b)
{
   // Stream an object of class TLeafObject.

   if (b.IsReading()) {
      b.ReadVersion();  //Version_t v = b.ReadVersion();
      TLeaf::Streamer(b);
      fObjAddress = 0;
      fClass  = gROOT->GetClass(fTitle.Data());
      if (!fClass) Warning("Streamer","Cannot find class:%s",fTitle.Data());
      } else {
      b.WriteVersion(TLeafObject::IsA());
      TLeaf::Streamer(b);
   }
}
