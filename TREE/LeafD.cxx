//*CMZ :  2.21/07 06/03/99  16.26.28  by  Rene Brun
//*CMZ :  2.00/00 03/03/99  14.18.31  by  Rene Brun
//*CMZ :  1.01/04 02/06/97  12.31.14  by  Rene Brun
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
// A TLeaf for a 64 bit floating point data type.                       //
//////////////////////////////////////////////////////////////////////////

#include "TLeafD.h"
#include "TBranch.h"

ClassImp(TLeafD)

//______________________________________________________________________________
TLeafD::TLeafD(): TLeaf()
{
//*-*-*-*-*-*Default constructor for LeafD*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ============================

   fValue = 0;
}

//______________________________________________________________________________
TLeafD::TLeafD(const Text_t *name, const Text_t *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafD*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//*-*

   fMinimum = 0;
   fMaximum = 0;
   fValue   = 0;
}

//______________________________________________________________________________
TLeafD::~TLeafD()
{
//*-*-*-*-*-*Default destructor for a LeafD*-*-*-*-*-*-*-*-*-*-*-*
//*-*        ===============================

   if (ResetAddress(0,kTRUE)) delete [] fValue;
}


//______________________________________________________________________________
void TLeafD::Export(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Export element from local leaf buffer to ClonesArray*-*-*-*-*
//*-*        ====================================================

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 8*fLen);
      j += fLen;
   }
}


//______________________________________________________________________________
void TLeafD::FillBasket(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*-*-*Pack leaf elements in Basket output buffer*-*-*-*-*-*-*
//*-*                  ==========================================

   Int_t len = GetLen();
   b.WriteFastArray(fValue,len);
}


//______________________________________________________________________________
void TLeafD::Import(TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*Import element from ClonesArray into local leaf buffer*-*-*-*-*
//*-*        ======================================================

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy(&fValue[j],(char*)list->UncheckedAt(i) + fOffset, 8*fLen);
      j += fLen;
   }
}

//______________________________________________________________________________
void TLeafD::Print(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*Print a description of this leaf*-*-*-*-*-*-*-*-*
//*-*                  ================================

   TLeaf::Print(option);

}


//______________________________________________________________________________
void TLeafD::ReadBasket(TBuffer &b)
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
void TLeafD::SetAddress(void *add)
{
//*-*-*-*-*-*-*-*-*-*-*Set leaf buffer data address*-*-*-*-*-*
//*-*                  ============================

   if (ResetAddress(add)) delete [] fValue;
   if (add) fValue = (Double_t*)add;
   else     fValue = new Double_t[fNdata];
}
