//*CMZ :  2.23/12 26/01/2000  09.45.01  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  15.37.19  by  Rene Brun
//*CMZ :  2.23/03 17/09/99  08.42.06  by  Rene Brun
//*CMZ :  2.22/00 08/04/99  14.20.22  by  Rene Brun
//*CMZ :  2.21/07 06/03/99  16.26.28  by  Rene Brun
//*CMZ :  2.00/00 03/03/99  14.18.31  by  Rene Brun
//*-- Author :    Rene Brun   12/01/96

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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
TLeafD::TLeafD(const char *name, const char *type)
       :TLeaf(name,type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*Create a LeafD*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============
//*-*

   fLenType = 8;
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

   const Double_t kDoubleUndefined = -9999.;
   Int_t j = 0;
   char *clone;
   for (Int_t i=0;i<n;i++) {
      clone = (char*)list->UncheckedAt(i);
      if (clone) memcpy(&fValue[j],clone + fOffset, 8*fLen);
      else       memcpy(&fValue[j],&kDoubleUndefined,  8*fLen);
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
void TLeafD::ReadBasketExport(TBuffer &b, TClonesArray *list, Int_t n)
{
//*-*-*-*-*-*-*-*-*-*-*Read leaf elements from Basket input buffer*-*-*-*-*-*
//  and export buffer to TClonesArray objects

   b.ReadFastArray(fValue,n*fLen);

   Int_t j = 0;
   for (Int_t i=0;i<n;i++) {
      memcpy((char*)list->UncheckedAt(i) + fOffset,&fValue[j], 8*fLen);
      j += fLen;
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
