//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  1.00/06 17/04/99  07.50.09  by  Rene Brun
//*-- Author :    Nenad Buncic   29/09/95

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

#include "TPGON.h"

ClassImp(TPGON)

//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/pgon.gif"> </P> End_Html
// PGON is a polygon. It has the following parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - phi1       the azimuthal angle &phi at which the volume begins (angles
//                  are counted counterclockwise)
//     - dphi1      opening angle of the volume, which extends from phi1 to
//                  phi1+dphi
//     - npdv       number of sides of the cross section between the given
//                  phi limits
//     - nz         number of planes perpendicular to the z axis where
//                  the dimension of the section is given -- this number
//                  should be at least 2
//     - rmin       array of dimension nz with minimum radius at a given plane
//     - rmax       array of dimension nz with maximum radius at a given plane
//     - z          array of dimension nz with z position of given plane






//______________________________________________________________________________
TPGON::TPGON ()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PGON shape default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============================


}


//______________________________________________________________________________
TPGON::TPGON (const char *name, const char *title, const char *material, Float_t phi1,
              Float_t dphi1, Int_t npdv, Int_t nz)
     : TPCON (name, title,material, phi1, dphi1, nz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PGON shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================
//*-*  Parameters of the nz positions must be entered via TPCON::DefineSection.

    SetNumberOfDivisions (npdv);
}


//______________________________________________________________________________
TPGON::~TPGON ()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PGON shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================
}

//______________________________________________________________________________
void TPGON::FillTableOfCoSin(Double_t phi, Double_t angstep,Int_t n)
{
 // Fill the table of cos and sin to prepare drawing
  Double_t factor = 1./TMath::Sin(angstep);
  Double_t ph = phi-angstep;
  for (Int_t j = 0; j < n; j++)
  {
    ph += angstep;
    fCoTab[j] = factor*TMath::Cos(ph);
    fSiTab[j] = factor*TMath::Sin(ph);
  }
}
