//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  2.23/11 11/01/2000  15.19.30  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  17.14.21  by  Rene Brun
//*CMZ :  2.23/03 17/09/99  08.39.37  by  Rene Brun
//*CMZ :  2.22/00 08/04/99  14.21.16  by  Rene Brun
//*CMZ :  2.21/07 06/03/99  16.26.02  by  Rene Brun
//*CMZ :  2.00/13 03/03/99  14.18.31  by  Rene Brun
//*-- Author :    Rene Brun   12/01/96

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
// A TLeaf for a 16 bit Integer data type.                              //
//////////////////////////////////////////////////////////////////////////

#include "TLeafS.h"
#include "TBranch.h"

ClassImp(TLeafS)

//______________________________________________________________________________
TLeafS::TLeafS(): TLeaf()
{
//*-*-*-*-*-*Default constructor for LeafS*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ============================

   fValue = 0;
}

//______________________________________________________________________________
TLeafS::TLeafS(const char *name, const char *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafS*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//*-*

   fLenType = 2;
   fMinimum = 0;
   fMaximum = 0;
   fValue   = 0;
}

//______________________________________________________________________________
TLeafS::~TLeafS()
{
//*-*-*-*-*-*Default destructor for a LeafS*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   if (ResetAddress(0,kTRUE)) delete [] fValue;
}


//______________________________________________________________________________
void TLeafS::Export(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Export element from local leaf buffer to ClonesArray*-*-*-*-*
//*-*        ====================================================

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 2*fLen);
      j += fLen;
   }
}


//______________________________________________________________________________
void TLeafS::FillBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Pack leaf elements in Basket output buffer*-*-*-*-*-*-*
//*-*                  ==========================================

   Int_t i;
   Int_t len = GetLen();
   if (IsRange()) {
         if (fValue[0] > fMaximum) fMaximum = fValue[0];
   }
   if (IsUnsigned()) {
      for (i=0;i<len;i++) b << (UShort_t)fValue[i];
   } else {
      b.WriteFastArray(fValue,len);
   }
}


//______________________________________________________________________________
const char *TLeafS::GetTypeName() const
{
//*-*-*-*-*-*-*-*Returns name of leaf type*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =========================

   if (fIsUnsigned) return "UShort_t";
   return "Short_t";
}


//______________________________________________________________________________
Float_t TLeafS::GetValue(Int_t i)
{
//*-*-*-*-*-*-*-*Returns current value of leaf*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =============================

   if (fIsUnsigned) return (UShort_t)fValue[i];
   return fValue[i];
}

//______________________________________________________________________________
void TLeafS::Import(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Import element from ClonesArray into local leaf buffer*-*-*-*-*
//*-*        ======================================================

   const Short_t kShortUndefined = -9999;
   Int_t j = 0;
   char *clone;
   for (Int_t i=0;i<n;i++) {
      clone = (char*)list->UncheckedAt(i);
      if (clone) memcpy(&fValue[j],clone + fOffset, 2*fLen);
      else       memcpy(&fValue[j],&kShortUndefined,  2*fLen);
      j += fLen;
   }
}

//______________________________________________________________________________
void TLeafS::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Print a description of this leaf*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TLeaf::Print(option);

}


//______________________________________________________________________________
void TLeafS::ReadBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//*-*                  ===========================================

   if (fNdata == 1) {
      b >> fValue[0];
   }else {
      if (fLeafCount) {
         Int_t len = Int_t(fLeafCount->GetValue());
         if (len > fLeafCount->GetMaximum()) {
            printf("ERROR leaf:%s, len=%d and max=%d\n",GetName(),len,fLeafCount->GetMaximum());
            len = fLeafCount->GetMaximum();
         }
         b.ReadFastArray(fValue,len*fLen);
      } else {
         b.ReadFastArray(fValue,fLen);
      }
   }
}

//______________________________________________________________________________
void TLeafS::ReadBasketExport(TBuffer &b, TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//  and export buffer to TClonesArray objects

   if (n*fLen == 1) {
      b >> fValue[0];
   } else {
      b.ReadFastArray(fValue,n*fLen);
   }

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 2*fLen);
      j += fLen;
   }
}

//______________________________________________________________________________
void TLeafS::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*-*-*-*Set leaf buffer data address*-*-*-*-*-*
//*-*                  ============================

   if (ResetAddress(add)) delete [] fValue;
   if (add) fValue = (Short_t*)add;
   else     fValue = new Short_t[fNdata];
}
