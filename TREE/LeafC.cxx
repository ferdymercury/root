//*CMZ :  2.00/00 17/02/98  10.55.38  by  Rene Brun
//*CMZ :  1.03/09 21/01/98  11.36.08  by  Fons Rademakers
//*-- Author :    Rene Brun   17/03/97

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
// A TLeaf for a variable length string.                                //
//////////////////////////////////////////////////////////////////////////

#include "TLeafC.h"
#include "TBranch.h"

ClassImp(TLeafC)

//______________________________________________________________________________
TLeafC::TLeafC(): TLeaf()
{
//*-*-*-*-*-*Default constructor for LeafC*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ============================

   fValue = 0;
}

//______________________________________________________________________________
TLeafC::TLeafC(const Text_t *name, const Text_t *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafC*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//*-*

   fMinimum = 0;
   fMaximum = 0;
   fValue   = 0;
}

//______________________________________________________________________________
TLeafC::~TLeafC()
{
//*-*-*-*-*-*Default destructor for a LeafC*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   if (ResetAddress(0,kTRUE)) delete [] fValue;
}


//______________________________________________________________________________
void TLeafC::Export(TClonesArray *list)
{
//*-*-*-*-*-*Export element from local leaf buffer to ClonesArray*-*-*-*-*
//*-*        ====================================================

   Int_t n = list->GetEntriesFast();
   if (!n) return;
   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 1);
      j += fLen;
   }
}


//______________________________________________________________________________
void TLeafC::FillBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Pack leaf elements in Basket output buffer*-*-*-*-*-*-*
//*-*                  ==========================================

   UChar_t len = strlen(fValue);
   if (len >= fMaximum) fMaximum = len+1;
   if (len >= fLen)     fLen = len+1;
   b << len;
   if (len) b.WriteFastArray(fValue,len);
}

//______________________________________________________________________________
const Text_t *TLeafC::GetTypeName() const
{
//*-*-*-*-*-*-*-*Returns name of leaf type*-*-*-*-*-*-*-*-*-*-*-*
//*-*            =========================

   if (fIsUnsigned) return "UChar_t";
   return "Char_t";
}


//______________________________________________________________________________
void TLeafC::Import(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Import element from ClonesArray into local leaf buffer*-*-*-*-*
//*-*        ======================================================

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy(&fValue[j],(char*)list->UncheckedAt(i) + fOffset, 1);
      j += fLen;
   }
}


//______________________________________________________________________________
void TLeafC::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Print a description of this leaf*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TLeaf::Print(option);

}


//______________________________________________________________________________
void TLeafC::ReadBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//*-*                  ===========================================

   UChar_t len;
   b >> len;
   if (len) {
      if (len >= fLen) len = fLen-1;
      b.ReadFastArray(fValue,len);
      fValue[len] = 0;
   } else {
      fValue = 0;
   }
}

//______________________________________________________________________________
void TLeafC::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*-*-*-*Set leaf buffer data address*-*-*-*-*-*
//*-*                  ============================

   if (ResetAddress(add)) delete [] fValue;
   if (add) fValue = (Char_t*)add;
   else     fValue = new Char_t[fNdata];
}
