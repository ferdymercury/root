//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.20/04 08/12/98  09.32.19  by  Rene Brun
//*-- Author :    Rene Brun   08/12/98
//*-- Author :    Nenad Buncic   18/09/95

#ifndef ROOT_THYPE
#define ROOT_THYPE

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
        THYPE(const char *name, const char *title, const char *material, Float_t rmin, Float_t rmax, Float_t dz,
               Float_t phi);
        virtual ~THYPE();

        virtual Float_t GetPhi() {return fPhi;}

        ClassDef(THYPE,1)  //HYPE shape
};

#endif
