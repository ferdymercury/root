//*CMZ :  2.00/09 20/06/98  19.45.53  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/08 20/11/97  18.31.42  by  Rene Brun
//*-- Author :    Rene Brun   26/06/97

#ifndef ROOT_TELTU
#define ROOT_TELTU

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

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TELTU                                                                  //
//                                                                        //
// 'ELTU' is a  cylinder with  an elliptical  section.  It  has three     //
//        parameters:  the  ellipse  semi-axis   in  X,  the  ellipse     //
//        semi-axis in Y  and the half length in Z.   The equation of     //
//        the conical curve is:                                           //
//             X**2/fRx**2  +  Y**2/fRy**2  =  1                          //
//        ELTU is not divisible.                                          //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTUBE
#include "TTUBE.h"
#endif

class TELTU : public TTUBE {

    public:
        TELTU();
        TELTU(Text_t *name, Text_t *title, Text_t *material, Float_t rx, Float_t ry,Float_t dz);
        virtual ~TELTU();

        ClassDef(TELTU,1)  //ELTU shape
};

#endif
