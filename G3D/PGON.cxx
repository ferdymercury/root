//*CMZ :  1.00/06 23/03/97  11.26.51  by  Rene Brun
//*-- Author :    Nenad Buncic   29/09/95

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
TPGON::TPGON (Text_t *name, Text_t *title, Text_t *material, Float_t phi1,
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




