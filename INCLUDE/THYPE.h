//*CMZ :  2.20/04 08/12/98  09.32.19  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
//*-- Author :    Nenad Buncic   18/09/95

#ifndef ROOT_THYPE
#define ROOT_THYPE

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
// THYPE                                                                  //
//                                                                        //
// HYPE is a DUMMY Root shape set equal to a TTUBE                        //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTUBE
#include "TTUBE.h"
#endif

class THYPE : public TTUBE {

    protected:
        Float_t fPhi;        // stereo angle

    public:
        THYPE();
        THYPE(Text_t *name, Text_t *title, Text_t *material, Float_t rmin, Float_t rmax, Float_t dz,
               Float_t phi);
        virtual ~THYPE();

        virtual Float_t GetPhi() {return fPhi;}

        ClassDef(THYPE,1)  //HYPE shape
};

#endif
