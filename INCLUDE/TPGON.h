//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.33.55  by  Rene Brun
//*-- Author :    Nenad Buncic   27/09/95

#ifndef ROOT_TPGON
#define ROOT_TPGON

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
// TPGON                                                                  //
//                                                                        //
// PGON is a polygone. It has at least 10 parameters, the lower phi limit,//
// the range in phi, the number of straight sides (of equal length)       //
// between those phi limits, the number (at least two) of z planes where  //
// the radius is changing for each z boundary and the z coordinate, the   //
// minimum radius and the maximum radius.                                 //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPCON
#include "TPCON.h"
#endif

class TPGON : public TPCON {
    protected:
        virtual void    FillTableOfCoSin(Double_t phi, Double_t angstep,Int_t n); // Fill the table of cosin
    public:
        TPGON();
        TPGON(const char *name, const char *title, const char *material, Float_t phi1, Float_t dphi1,
              Int_t npdv, Int_t nz);
        virtual ~TPGON();
        ClassDef(TPGON,1)  //PGON shape
};

#endif
