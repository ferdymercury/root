//*CMZ :  1.03/08 20/11/97  18.33.55  by  Rene Brun
//*-- Author :    Nenad Buncic   27/09/95

#ifndef ROOT_TPGON
#define ROOT_TPGON

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

    public:
        TPGON();
        TPGON(Text_t *name, Text_t *title, Text_t *material, Float_t phi1, Float_t dphi1,
              Int_t npdv, Int_t nz);
        virtual ~TPGON();

        ClassDef(TPGON,1)  //PGON shape
};

#endif
