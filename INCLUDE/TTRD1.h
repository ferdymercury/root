//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  14.35.23  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  16.10.02  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.35.31  by  Rene Brun
//*-- Author :    Nenad Buncic   17/09/95

#ifndef ROOT_TTRD1
#define ROOT_TTRD1

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

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TTRD1                                                                  //
//                                                                        //
// TRD1 is a trapezoid with only the x length varying with z. It has 4    //
// parameters, the half length in x at the low z surface, that at the     //
// high z surface, the half length in y, and in z.                        //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TBRIK.h"
#endif

class TTRD1 : public TBRIK {

    protected:
        Float_t fDx2;        // half length in x at the high z surface

    public:
        TTRD1();
        TTRD1(const char *name, const char *title, const char *material, Float_t dx1, Float_t dx2, Float_t dy, Float_t dz);
        virtual ~TTRD1();

        virtual Float_t GetDx2() {return fDx2;}
        virtual void    SetPoints(Float_t *buff);

        ClassDef(TTRD1,1)  //TRD1 shape
};

#endif
