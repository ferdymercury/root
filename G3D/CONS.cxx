//*CMZ :  2.00/12 07/10/98  08.52.28  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/09 07/12/97  16.04.56  by  Fons Rademakers
//*-- Author :    Nenad Buncic   18/09/95

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

#include "TCONS.h"
#include "TNode.h"


ClassImp(TCONS)



//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/cons.gif"> </P> End_Html
// CONS is a segment of a conical tube. It has 10 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - dz         half-length in z
//     - rmin1      inside radius at -DZ in z
//     - rmax1      outside radius at -DZ in z
//     - rmin2      inside radius at +DZ in z
//     - rmax2      outside radius at +DZ in z
//     - phi1       starting angle of the segment
//     - phi2       ending angle of the segment
//
//
// NOTE: phi1 should be smaller than phi2. If this is not the case,
//       the system adds 360 degrees to phi2.





//______________________________________________________________________________
TCONS::TCONS()
{
//*-*-*-*-*-*-*-*-*-*-*-*CONS shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================


}


//______________________________________________________________________________
TCONS::TCONS(Text_t *name, Text_t *title, Text_t *material, Float_t rmin1, Float_t rmax1, Float_t rmin2, Float_t rmax2,
             Float_t dz, Float_t phi1, Float_t phi2) : TTUBS(name,title,material,rmin1,rmax1,dz,phi1,phi2)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONS shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fRmin2 = rmin2;
    fRmax2 = rmax2;
}


//______________________________________________________________________________
TCONS::TCONS(Text_t *name, Text_t *title, Text_t *material, Float_t rmax1, Float_t dz
                          , Float_t phi1, Float_t phi2, Float_t rmax2)
             : TTUBS(name,title,material,rmax1,dz,phi1,phi2)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONS shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fRmin2 = 0;
    fRmax2 = rmax2;
}

//______________________________________________________________________________
TCONS::~TCONS()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CONS shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}

//______________________________________________________________________________
void TCONS::SetPoints(Float_t *buff)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Create CONS points*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ==================

    Int_t j, n;
    Float_t rmin1, rmax1, dz;

    n = GetNumberOfDivisions()+1;

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
