//*CMZ :  1.01/07 17/04/99  07.50.09  by  Rene Brun
//*-- Author :    Rene Brun   26/06/97

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

#include "TCTUB.h"

ClassImp(TCTUB)

//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/CTUB.gif"> </P> End_Html
//                                                                        //
// 'CTUB' is a cut  tube with 11 parameters.  The  first 5 parameters     //
//        are the same  as for the TUBS.  The  remaining 6 parameters     //
//        are the director  cosines of the surfaces  cutting the tube     //
//        respectively at the low and high Z values.                      //
//                                                                        //
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - rmin       inside radius
//     - rmax       outside radius
//     - dz         half length in z
//     - phi1       starting angle of the segment
//     - phi2       ending angle of the segment
//     - coslx      x dir cosinus at low z face
//     - cosly      y dir cosinus at low z face
//     - coslz      z dir cosinus at low z face
//     - coshx      x dir cosinus at high z face
//     - coshy      y dir cosinus at high z face
//     - coshz      z dir cosinus at high z face


//______________________________________________________________________________
TCTUB::TCTUB()
{
//*-*-*-*-*-*-*-*-*-*-*-*CTUB shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================


}


//______________________________________________________________________________
TCTUB::TCTUB(Text_t *name, Text_t *title, Text_t *material, Float_t rmin,
             Float_t rmax, Float_t dz, Float_t phi1, Float_t phi2,
             Float_t coslx, Float_t cosly, Float_t coslz,
             Float_t coshx, Float_t coshy, Float_t coshz)
      : TTUBS(name,title,material,rmin,rmax,dz,phi1,phi2)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CTUB shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fCosLow[0]  = coslx;
    fCosLow[1]  = cosly;
    fCosLow[2]  = coslz;
    fCosHigh[0] = coshx;
    fCosHigh[1] = coshy;
    fCosHigh[2] = coshz;

}


//______________________________________________________________________________
TCTUB::~TCTUB()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*CTUB shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}

