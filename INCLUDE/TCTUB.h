//*CMZ :  1.03/08 20/11/97  18.31.27  by  Rene Brun
//*-- Author :    Rene Brun   26/06/97

#ifndef ROOT_TCTUB
#define ROOT_TCTUB

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
// TCTUB                                                                  //
//                                                                        //
// 'CTUB' is a cut  tube with 11 parameters.  The  first 5 parameters     //
//        are the same  as for the TUBS.  The  remaining 6 parameters     //
//        are the director  cosines of the surfaces  cutting the tube     //
//        respectively at the low and high Z values.                      //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTUBS
#include "TTUBS.h"
#endif

class TCTUB : public TTUBS {

    protected:
        Float_t fCosLow[3];        // dir cosinus of surface cutting tube at low z
        Float_t fCosHigh[3];       // dir cosinus of surface cutting tube at high z

    public:
        TCTUB();
        TCTUB(Text_t *name, Text_t *title, Text_t *material, Float_t rmin,
             Float_t rmax, Float_t dz, Float_t phi1, Float_t phi2,
             Float_t coslx, Float_t cosly, Float_t coslz,
             Float_t coshx, Float_t coshy, Float_t coshz);
        virtual ~TCTUB();

        ClassDef(TCTUB,1)  //The Cut Tube shape
};

#endif
