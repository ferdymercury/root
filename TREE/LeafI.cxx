//*CMZ :  2.00/13 22/10/98  17.43.42  by  Rene Brun
//*CMZ :  2.00/11 21/08/98  23.23.42  by  Rene Brun
//*CMZ :  2.00/00 17/02/98  10.56.06  by  Rene Brun
//*CMZ :  1.02/00 18/07/97  12.17.20  by  Rene Brun
//*-- Author :    Rene Brun   12/01/96

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
// A TLeaf for an Integer data type.                                    //
//////////////////////////////////////////////////////////////////////////

#include "TLeafI.h"
#include "TBranch.h"

ClassImp(TLeafI)

//______________________________________________________________________________
TLeafI::TLeafI(): TLeaf()
{
//*-*-*-*-*-*Default constructor for LeafI*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ============================

   fValue = 0;
}

//______________________________________________________________________________
TLeafI::TLeafI(const Text_t *name, const Text_t *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafI*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//*-*

   fMinimum = 0;
   fMaximum = 0;
   fValue   = 0;
}

//______________________________________________________________________________
TLeafI::~TLeafI()
{
//*-*-*-*-*-*Default destructor for a LeafI*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   if (ResetAddress(0,kTRUE)) delete [] fValue;
}


//______________________________________________________________________________
void TLeafI::Export(TClonesArray *list)
{
//*-*-*-*-*-*Export element from local leaf buffer to ClonesArray*-*-*-*-*
//*-*        ======================================================

   Int_t n = list->GetEntriesFast();
   if (!n) return;
   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 4*fLen);
      j += fLen;
   }
}

//______________________________________________________________________________
void TLeafI::FillBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Pack leaf elements in Basket output buffer*-*-*-*-*-*-*
//*-*                  =========================================

   Int_t i;
   Int_t len = GetLen();
   if (IsRange()) {
         if (fValue[0] > fMaximum) fMaximum = fValue[0];
   }
   if (IsUnsigned()) {
      for (i=0;i<len;i++) b << (UInt_t)fValue[i];
   } else {
      b.WriteFastArray(fValue,len);
   }
}

//______________________________________________________________________________
const Text_t *TLeafI::GetTypeName() const
{
//*-*-*-*-*-*-*-*Returns name of leaf type*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =========================

   if (fIsUnsigned) return "UInt_t";
   return "Int_t";
}


//______________________________________________________________________________
Float_t TLeafI::GetValue(Int_t i, TTreeFormula *)
{
//*-*-*-*-*-*-*-*Returns current value of leaf*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =============================

   if (fIsUnsigned) return (UInt_t)fValue[i];
   return fValue[i];
}



//______________________________________________________________________________
void TLeafI::Import(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Import element from ClonesArray into local leaf buffer*-*-*-*-*
//*-*        ======================================================

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy(&fValue[j],(char*)list->UncheckedAt(i) + fOffset, 4*fLen);
      j += fLen;
   }
}

//______________________________________________________________________________
void TLeafI::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Print a description of this leaf*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TLeaf::Print(option);

}

//______________________________________________________________________________
void TLeafI::ReadBasket(TBuffer &b)
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
void TLeafI::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*-*-*-*Set leaf buffer data address*-*-*-*-*-*
//*-*                  ============================

   if (ResetAddress(add)) delete [] fValue;
   if (add) fValue = (Int_t*)add;
   else     fValue = new Int_t[fNdata];
}
