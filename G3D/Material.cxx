//*CMZ :  2.00/11 17/04/99  07.50.09  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  16.34.57  by  Fons Rademakers
//*-- Author :    Rene Brun   03/10/95

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
TMaterial::TMaterial(Text_t *name, Text_t *title, Float_t a, Float_t z, Float_t density)
           :TNamed(name,title), TAttFill(0,1)
{
//*-*-*-*-*-*-*-*-*-*-*Material normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

   fA       = a;
   fZ       = z;
   fDensity = density;
   fNumber  = gGeometry->GetListOfMaterials()->GetSize();
   fRadLength   = 0;
   fInterLength = 0;
   gGeometry->GetListOfMaterials()->Add(this);
}



//______________________________________________________________________________
TMaterial::TMaterial(Text_t *name, Text_t *title, Float_t a, Float_t z, Float_t density, Float_t radl, Float_t inter)
           :TNamed(name,title), TAttFill(0,1)
{
//*-*-*-*-*-*-*-*-*-*-*Material normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ============================

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

   if (R__b.IsReading()) {
      Version_t v = R__b.ReadVersion();
      TNamed::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fA;
      R__b >> fZ;
      R__b >> fDensity;
      if (v > 2) {
         TAttFill::Streamer(R__b);
         R__b >> fRadLength;
         R__b >> fInterLength;
      } else {
         fRadLength   = 0;
         fInterLength = 0;
      }
   } else {
      R__b.WriteVersion(TMaterial::IsA());
      TNamed::Streamer(R__b);
      R__b << fNumber;
      R__b << fA;
      R__b << fZ;
      R__b << fDensity;
      TAttFill::Streamer(R__b);
      R__b << fRadLength;
      R__b << fInterLength;
   }
}
