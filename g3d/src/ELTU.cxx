//*CMZ :  2.23/12 26/01/2000  09.24.05  by  Rene Brun
//*CMZ :  2.00/09 17/04/99  07.50.09  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.01/07 26/06/97  08.49.55  by  Rene Brun
//*-- Author :    Rene Brun   26/06/97

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

#include "TView.h"
#include "TELTU.h"
#include "TNode.h"

ClassImp(TELTU)

//______________________________________________________________________________
// Begin_Html <P ALIGN=CENTER> <IMG SRC="gif/ELTU.gif"> </P> End_Html
// 'ELTU' is a  cylinder with  an elliptical  section.  It  has three
//        parameters:  the  ellipse  semi-axis   in  X,  the  ellipse
//        semi-axis in Y  and the half length in Z.   The equation of
//        the conical curve is:
//             X**2/fRx**2  +  Y**2/fRy**2  =  1
//        ELTU is not divisible.
//
//     - name       name of the shape
//     - title      shape's title
//     - material  (see TMaterial)
//     - rx         the  ellipse  semi-axis   in  X
//     - ry         the  ellipse  semi-axis   in  Y
//     - dz         half-length in z



//______________________________________________________________________________
TELTU::TELTU()
{
//*-*-*-*-*-*-*-*-*-*-*-*ELTU shape default constructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ==============================


}

//______________________________________________________________________________
TELTU::TELTU(const char *name, const char *title, const char *material, Float_t rx, Float_t ry,
             Float_t dz):TTUBE (name,title,material,0,rx,dz,rx?ry/rx:1.0)
{}

//______________________________________________________________________________
TELTU::~TELTU()
{
//*-*-*-*-*-*-*-*-*-*-*-*-*ELTU shape default destructor*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                      =============================

}

