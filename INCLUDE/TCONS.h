//*CMZ :  2.00/12 07/10/98  08.52.48  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/09 23/06/98  14.34.46  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.31.15  by  Rene Brun
//*-- Author :    Nenad Buncic   18/09/95

#ifndef ROOT_TCONS
#define ROOT_TCONS

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

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TCONS                                                                  //
//                                                                        //
// CONS is a phi segment of a conical tube. It has 7 parameters, the half //
// the same 5 as a CONE plus the phi limits                               //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTUBS
#include "TTUBS.h"
#endif

class TCONS : public TTUBS {

    protected:
        Float_t fRmin2;        // inside radius at the high z limit
        Float_t fRmax2;        // outside radius at the high z limit

    public:
        TCONS();
        TCONS(Text_t *name, Text_t *title, Text_t *material, Float_t rmin1, Float_t rmax1,
              Float_t rmin2, Float_t rmax2, Float_t dz, Float_t phi1,
              Float_t phi2);
        TCONS(Text_t *name, Text_t *title, Text_t *material, Float_t rmax1, Float_t dz
                          , Float_t phi1, Float_t phi2, Float_t rmax2 = 0);
        virtual ~TCONS();

        virtual Float_t GetRmin2() {return fRmin2;}
        virtual Float_t GetRmax2() {return fRmax2;}
        virtual void    SetPoints(Float_t *buff);

        ClassDef(TCONS,1)  //CONS shape
};

#endif
