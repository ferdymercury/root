//*CMZ :  2.20/04 17/04/99  07.50.09  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98

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
#include "THYPE.h"
#include "TNode.h"
#include "TVirtualPad.h"

#include "TGLKernelABC.h"

ClassImp(THYPE)


//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/hype.gif"> </P> End_Html
// HYPE is an hyperboloid (not implemented. It has 4 parameters:
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - rmin       inner radius of the tube
//     - rmax       outer radius of the tube
//     - dz         half-length of the box along the z-axis
//     - phi        stereo angle




//______________________________________________________________________________
THYPE::THYPE()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*HYPE shape default constructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      ==============================

}


//______________________________________________________________________________
THYPE::THYPE(Text_t *name, Text_t *title, Text_t *material, Float_t rmin,
             Float_t rmax, Float_t dz, Float_t phi)
      : TTUBE(name,title,material,rmin,rmax,dz)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*HYPE shape normal constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

    fPhi = phi;
}


//______________________________________________________________________________
THYPE::~THYPE()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*HYPE shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}
