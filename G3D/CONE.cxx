//*CMZ :  2.00/12 17/04/99  07.50.09  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.01/07 26/06/97  19.02.04  by  Rene Brun
//*-- Author :    Nenad Buncic   18/09/95

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

#include "TView.h"
#include "TCONE.h"
#include "TNode.h"

ClassImp(TCONE)

//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/cone.gif"> </P> End_Html
// CONE is a conical tube. It has 8 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - dz         half-length in z
//     - rmin1      inside radius at -DZ in z
//     - rmax1      outside radius at -DZ in z
//     - rmin2      inside radius at +DZ in z
//     - rmax2      outside radius at +DZ in z






//______________________________________________________________________________
TCONE::TCONE()
{
//*-*-*-*-*-*-*-*-*-*-*-*CONE shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================


}


//______________________________________________________________________________
TCONE::TCONE(Text_t *name, Text_t *title, Text_t *material, Float_t dz,
             Float_t rmin1, Float_t rmax1,
             Float_t rmin2, Float_t rmax2)
      : TTUBE(name, title,material,rmin1,rmax1,dz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONE shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fRmin2 = rmin2;
    fRmax2 = rmax2;
}


//______________________________________________________________________________
TCONE::TCONE(Text_t *name, Text_t *title, Text_t *material, Float_t dz, Float_t rmax1
            , Float_t rmax2) : TTUBE(name, title,material,0,rmax1,dz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONE shape "simplified" constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==================================

    fRmin2 = 0;
    fRmax2 = rmax2;
}
//______________________________________________________________________________
TCONE::~TCONE()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONE shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}

//______________________________________________________________________________
void TCONE::SetPoints(Float_t *buff)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Create CONE points*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ==================

    Float_t rmin1, rmax1, dz;
    Int_t j, n;

    n = GetNumberOfDivisions();

    rmin1 = TTUBE::fRmin;
    rmax1 = TTUBE::fRmax;
    dz    = TTUBE::fDz;

    Int_t indx = 0;

//*-* We've to checxk whether the table does exist and create it
//*-* since fCoTab/fSiTab are not saved with any TShape::Streamer function
    if (!fCoTab)   MakeTableOfCoSin();

    if (buff) {
        for (j = 0; j < n; j++) {
            buff[indx++] = rmin1 * fCoTab[j];
            buff[indx++] = rmin1 * fSiTab[j];
            buff[indx++] = -dz;
        }
        for (j = 0; j < n; j++) {

            buff[indx++] = rmax1 * fCoTab[j];
            buff[indx++] = rmax1 * fSiTab[j];
            buff[indx++] = -dz;
        }

        for (j = 0; j < n; j++) {
            buff[indx++] = fRmin2 * fCoTab[j];
            buff[indx++] = fRmin2 * fSiTab[j];
            buff[indx++] = dz;
        }

        for (j = 0; j < n; j++) {
            buff[indx++] = fRmax2 * fCoTab[j];
            buff[indx++] = fRmax2 * fSiTab[j];
            buff[indx++] = dz;
        }
    }
}
