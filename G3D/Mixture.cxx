//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.00/00 17/04/99  07.50.09  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  16.44.34  by  Fons Rademakers
//*-- Author :    Rene Brun   03/10/95

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

#include "TMixture.h"
#include "TMath.h"

ClassImp(TMixture)

//______________________________________________________________________________
//
// Manages a detector mixture. See class TGeometry.
//

//______________________________________________________________________________
TMixture::TMixture()
{
//*-*-*-*-*-*-*-*-*-*-*Mixture default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   fAmixt = 0;
   fZmixt = 0;
   fWmixt = 0;

}

//______________________________________________________________________________
TMixture::TMixture(const char *name, const char *title, Int_t nmixt)
           :TMaterial(name,title,0,0,0)
{
//*-*-*-*-*-*-*-*-*-*-*Mixture normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================
//*-*
//*-*       Defines mixture OR COMPOUND as composed by
//*-*       the basic nmixt materials defined later by DefineElement.
//*-*
//*-*       If nmixt > 0 then Wmixt contains the PROPORTION BY WEIGHTS
//*-*       of each basic material in the mixture.
//*-*
//*-*       If nmixt < 0 then Wmixt contains the number of atoms
//*-*       of a given kind into the molecule of the COMPOUND
//*-*       In this case, Wmixt is changed to relative weights.                                                 *
//*-*
//*-*       nb : the radiation length is computed according
//*-*            the EGS manual slac-210 uc-32 June-78
//*-*                          formula  2-6-8 (37)
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   if (nmixt == 0) {
      fAmixt = 0;
      fZmixt = 0;
      fWmixt = 0;
      fNmixt = 0;
      Error("TMixture", "mixture number is 0");
      return;
   }
   Int_t nm = TMath::Abs(nmixt);
   fNmixt   = nmixt;
   fAmixt   = new Float_t[nm];
   fZmixt   = new Float_t[nm];
   fWmixt   = new Float_t[nm];
}


//______________________________________________________________________________
TMixture::~TMixture()
{
//*-*-*-*-*-*-*-*-*-*-*Mixture default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   delete [] fAmixt;
   delete [] fZmixt;
   delete [] fWmixt;
   fAmixt = 0;
   fZmixt = 0;
   fWmixt = 0;
}

//______________________________________________________________________________
void TMixture::DefineElement(Int_t n, Float_t a, Float_t z, Float_t w)
{
//*-*-*-*-*-*-*-*-*-*-*Define one mixture element*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==========================

   if (n < 0 || n >= TMath::Abs(fNmixt)) return;
   fAmixt[n] = a;
   fZmixt[n] = z;
   fWmixt[n] = w;
}

//_______________________________________________________________________
void TMixture::Streamer(TBuffer &b)
{
//*-*-*-*-*-*-*-*-*Stream a class object*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*              =========================================
   UInt_t R__s, R__c;
   if (b.IsReading()) {
      b.ReadVersion(&R__s, &R__c);
      TMaterial::Streamer(b);
      b >> fNmixt;
      fAmixt   = new Float_t[fNmixt];
      fZmixt   = new Float_t[fNmixt];
      fWmixt   = new Float_t[fNmixt];
      b.ReadArray(fAmixt);
      b.ReadArray(fZmixt);
      b.ReadArray(fWmixt);
      b.CheckByteCount(R__s, R__c, TMixture::IsA());
   } else {
      R__c = b.WriteVersion(TMixture::IsA(), kTRUE);
      TMaterial::Streamer(b);
      b << fNmixt;
      b.WriteArray(fAmixt, fNmixt);
      b.WriteArray(fZmixt, fNmixt);
      b.WriteArray(fWmixt, fNmixt);
      b.SetByteCount(R__c, kTRUE);
   }
}

