//*CMZ :  2.24/03 26/04/2000  18.00.28  by  Rene Brun
//*CMZ :  2.24/02 05/04/2000  08.36.36  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  2.23/09 22/11/99  17.15.18  by  Rene Brun
//*CMZ :  2.23/08 01/11/99  21.36.07  by  Rene Brun
//*CMZ :  2.23/03 10/09/99  20.00.31  by  Rene Brun
//*CMZ :  2.23/00 30/07/99  17.19.12  by  Rene Brun
//*CMZ :  2.00/13 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  2.00/11 23/10/98  12.22.59  by  Rene Brun
//*-- Author :    Rene Brun   27/01/96

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
// A TLeaf for a general object derived from TObject.                   //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TLeafObject.h"
#include "TBranch.h"
#include "TClass.h"
#include "TMethodCall.h"
#include "TDataType.h"


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
TLeafObject::TLeafObject(const char *name, const char *type)
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
        object->SetBit(kInvalidObject);
        object->SetUniqueID(123456789);
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
   else params = ")";

   if (!fClass) fClass      = gROOT->GetClass(GetTitle());
   TMethodCall *m = new TMethodCall(fClass, name, params);
   if (m->GetMethod()) return m;
   Error("GetMethodCall","Unknown method:%s",name);
   delete m;
   return 0;
}

//______________________________________________________________________________
const char *TLeafObject::GetTypeName() const
{
//*-*-*-*-*-*-*-*Returns name of leaf type*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =========================

   return fTitle.Data();
}

//______________________________________________________________________________
void TLeafObject::ReadBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//*-*                  ===========================================

   if (fClass) {
      TObject *object;
      if (!fObjAddress) {
         Long_t *voidobj = new Long_t[1];
         fObjAddress  = (void **)voidobj;
         *fObjAddress = (TObject *)fClass->New();
      }
      object = (TObject*)(*fObjAddress);
      if (fBranch->IsAutoDelete()) {
         delete object;
         object = (TObject *)fClass->New();
      }
      if (!object) return;
      object->Streamer(b);
      // in case we had written a null pointer a Zombie object was created
      // we must delete it
      if (object->TestBit(kInvalidObject)) {
         if (object->GetUniqueID() == 123456789) {
            delete object;
            object = 0;
         }
      }
      *fObjAddress = object;
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
