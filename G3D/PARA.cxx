//*CMZ :  1.00/07 27/03/97  17.55.23  by  Rene Brun
//*-- Author :    Nenad Buncic   19/09/95

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

#include "TPARA.h"
#include "TNode.h"

ClassImp(TPARA)


//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/para.gif"> </P> End_Html
// PARA is a parallelepiped. It has 9 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - dx         half-length in x
//     - dy         half-length in y
//     - dz         half-length in z
//     - alpha      angle formed by the y axis and by the plane joining the
//                  centre of the faces parallel to the z-x plane at -DY and +DY
//     - theta      polar angle of the line joining the centres of the faces
//                  at -DZ and +DZ in z
//     - phi        azimuthal angle of the line joining the centres of the
//                  faces at -DZ and +DZ in z




//______________________________________________________________________________
TPARA::TPARA()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PARA shape default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============================

}


//______________________________________________________________________________
TPARA::TPARA(Text_t *name, Text_t *title, Text_t *material, Float_t dx, Float_t dy, Float_t dz,
             Float_t alpha, Float_t theta, Float_t phi) : TBRIK(name, title,material, dx, dy, dz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PARA shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fAlpha = alpha;
    fTheta = theta;
    fPhi   = phi;
}


//______________________________________________________________________________
TPARA::~TPARA()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*PARA shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}

//______________________________________________________________________________
void TPARA::SetPoints(Float_t *buff)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Create PARA points*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                            ==================

    Float_t dx, dy, dz, dxx, dyy, ddx, ddy, theta, phi, alpha;
    const Float_t PI = Float_t (TMath::Pi());

    alpha = fAlpha     * PI/180.0;
    theta = TBRIK::fDx * PI/180.0;
    phi   = TBRIK::fDy * PI/180.0;

    dx = TBRIK::fDx;
    dy = TBRIK::fDy;
    dz = TBRIK::fDz;

    dxx = 2*fDz*TMath::Sin(theta)*TMath::Cos(phi);
    dyy = 2*fDz*TMath::Sin(theta)*TMath::Sin(phi);
    ddx = 2*fDy*TMath::Tan(alpha);
    ddy = 2*fDy*(1.0/TMath::Cos(alpha) - 1);


    if (buff) {
        buff[ 0] = -dx;         buff[ 1] = -dy;         buff[ 2] = -dz;
        buff[ 3] =  dx;         buff[ 4] = -dy;         buff[ 5] = -dz;
        buff[ 6] =  dx+ddx;     buff[ 7] =  dy+ddy;     buff[ 8] = -dz;
        buff[ 9] = -dx+ddx;     buff[10] =  dy+ddy;     buff[11] = -dz;
        buff[12] = -dx+dxx;     buff[13] = -dy+dyy;     buff[14] =  dz;
        buff[15] =  dx+dxx;     buff[16] = -dy+dyy;     buff[17] =  dz;
        buff[18] =  dx+dxx+ddx; buff[19] =  dy+dyy+ddy; buff[20] =  dz;
        buff[21] = -dx+dxx+ddx; buff[22] =  dy+dyy+ddy; buff[23] =  dz;
    }
}
