//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/09 04/11/99  19.59.13  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/08 20/11/97  18.31.27  by  Rene Brun
//*-- Author :    Rene Brun   26/06/97

#ifndef ROOT_TCTUB
#define ROOT_TCTUB

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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
        TCTUB(const char *name, const char *title, const char *material, Float_t rmin,
             Float_t rmax, Float_t dz, Float_t phi1, Float_t phi2,
             Float_t coslx, Float_t cosly, Float_t coslz,
             Float_t coshx, Float_t coshy, Float_t coshz);
        TCTUB(const char *name, const char *title, const char *material, Float_t rmin,
             Float_t rmax, Float_t dz, Float_t phi1, Float_t phi2,
             Float_t *lowNormal, Float_t *highNormal);
        virtual ~TCTUB();
        virtual void SetPoints(Float_t *buff);
        ClassDef(TCTUB,1)  //The Cut Tube shape
};

#endif
