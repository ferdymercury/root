//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/04 10/10/99  16.59.47  by  Rene Brun
//*CMZ :  2.00/11 17/04/99  07.50.09  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  16.34.57  by  Fons Rademakers
//*-- Author :    Rene Brun   03/10/95

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

#include "TROOT.h"
#include "TGeometry.h"
#include "TMaterial.h"

ClassImp(TMaterial)

//______________________________________________________________________________
//
// Manages a detector material. See class TGeometry
//

//______________________________________________________________________________
TMaterial::TMaterial()
{
//*-*-*-*-*-*-*-*-*-*-*Material default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   //do nothing
}



//______________________________________________________________________________
TMaterial::TMaterial(const char *name, const char *title, Float_t a, Float_t z, Float_t density)
           :TNamed(name,title), TAttFill(0,1)
{
//*-*-*-*-*-*-*-*-*-*-*Material normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   if (!gGeometry) gGeometry = new TGeometry("Geometry","Default Geometry");
   fA       = a;
   fZ       = z;
   fDensity = density;
   fNumber  = gGeometry->GetListOfMaterials()->GetSize();
   fRadLength   = 0;
   fInterLength = 0;
   gGeometry->GetListOfMaterials()->Add(this);
}



//______________________________________________________________________________
TMaterial::TMaterial(const char *name, const char *title, Float_t a, Float_t z, Float_t density, Float_t radl, Float_t inter)
           :TNamed(name,title), TAttFill(0,1)
{
//*-*-*-*-*-*-*-*-*-*-*Material normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   if (!gGeometry) gGeometry = new TGeometry("Geometry","Default Geometry");
   fA       = a;
   fZ       = z;
   fDensity = density;
   fNumber  = gGeometry->GetListOfMaterials()->GetSize();
   fRadLength   = radl;
   fInterLength = inter;
   gGeometry->GetListOfMaterials()->Add(this);
}


//______________________________________________________________________________
TMaterial::~TMaterial()
{
//*-*-*-*-*-*-*-*-*-*-*Material default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   gGeometry->GetListOfMaterials()->Remove(this);

}

//______________________________________________________________________________
void TMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMaterial.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c);
      TNamed::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fA;
      R__b >> fZ;
      R__b >> fDensity;
      if (R__v > 2) {
         TAttFill::Streamer(R__b);
         R__b >> fRadLength;
         R__b >> fInterLength;
      } else {
         fRadLength   = 0;
         fInterLength = 0;
      }
      R__b.CheckByteCount(R__s, R__c, TMaterial::IsA());
   } else {
      R__c = R__b.WriteVersion(TMaterial::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fNumber;
      R__b << fA;
      R__b << fZ;
      R__b << fDensity;
      TAttFill::Streamer(R__b);
      R__b << fRadLength;
      R__b << fInterLength;
      R__b.SetByteCount(R__c, kTRUE);
   }
}
