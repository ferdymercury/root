//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  16.12.32  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.35.42  by  Rene Brun
//*-- Author :    Nenad Buncic   13/09/95

#ifndef ROOT_TTRD2
#define ROOT_TTRD2

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TTRD2                                                                //
//                                                                      //
// TRD2 is a trapezoid with both x and y lengths varying with z. It     //
// has 5 parameters, half length in x at the low z surface, half length //
// in x at the high z surface, half length in y at the low z surface,   //
// half length in y at the high z surface, and half length in z         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TBRIK.h"
#endif

class TTRD2 : public TBRIK {

    protected:
        Float_t fDx2;        // half length in x at the high z surface
        Float_t fDy2;        // half length in y at the high z surface


    public:
        TTRD2();
        TTRD2(const char *name, const char *title, const char *material, Float_t dx1, Float_t dx2,
              Float_t dy1, Float_t dy2, Float_t dz);
        virtual ~TTRD2();

        Float_t         GetDx2() {return fDx2;}
        Float_t         GetDy2() {return fDy2;}
        virtual void    SetPoints(Float_t *buff);

        ClassDef(TTRD2,1)  //TRD2 shape
};

#endif

