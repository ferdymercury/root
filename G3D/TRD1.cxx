//*CMZ :  1.00/06 23/03/97  11.26.52  by  Rene Brun
//*-- Author :    Nenad Buncic   17/09/95

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

#include "TTRD1.h"
#include "TNode.h"

ClassImp(TTRD1)

//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/trd1.gif"> </P> End_Html
// TRD1 is a trapezoid with the x dimension varying along z.
// It has 7 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - dx1        half-length along x at the z surface positioned at -DZ
//     - dx2        half-length along x at the z surface positioned at +DZ
//     - dy         half-length along the y-axis
//     - dz         half-length along the z-axis




//______________________________________________________________________________
TTRD1::TTRD1()
{
//*-*-*-*-*-*-*-*-*-*-*-*TRD1 shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================

}


//______________________________________________________________________________
TTRD1::TTRD1(Text_t *name, Text_t *title, Text_t *material, Float_t dx1, Float_t dx2, Float_t dy, Float_t dz)
      : TBRIK(name, title,material,dx1,dy,dz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*TRD1 shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fDx2 = dx2;
}


//______________________________________________________________________________
TTRD1::~TTRD1()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*TRD1 shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================


}

//______________________________________________________________________________
void TTRD1::SetPoints(Float_t *buff)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Create TRD1 points*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ==================

    Float_t dx1, dx2, dy, dz;

    dx1 = TBRIK::fDx;
    dx2 = fDx2;
    dy  = TBRIK::fDy;
    dz  = TBRIK::fDz;

    if (buff) {
        buff[ 0] = -dx1;  buff[ 1] = -dy;  buff[ 2] = -dz;
        buff[ 3] =  dx1;  buff[ 4] = -dy;  buff[ 5] = -dz;
        buff[ 6] =  dx1;  buff[ 7] =  dy;  buff[ 8] = -dz;
        buff[ 9] = -dx1;  buff[10] =  dy;  buff[11] = -dz;
        buff[12] = -dx2;  buff[13] = -dy;  buff[14] =  dz;
        buff[15] =  dx2;  buff[16] = -dy;  buff[17] =  dz;
        buff[18] =  dx2;  buff[19] =  dy;  buff[20] =  dz;
        buff[21] = -dx2;  buff[22] =  dy;  buff[23] =  dz;
    }
}
