//*CMZ :  0.90/05 21/11/96  08.03.21  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TArc
#define ROOT_TArc

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TArc                                                                 //
//                                                                      //
// Arc of a circle.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TEllipse
#include "TEllipse.h"
#endif


class TArc : public TEllipse {

public:
        TArc();
        TArc(Float_t x1, Float_t y1,Float_t radius
           , Float_t phimin=0,Float_t phimax=360);
        TArc(const TArc &arc);
        virtual ~TArc();
                void Copy(TObject &arc);
        virtual void DrawArc(Float_t x1, Float_t y1, Float_t radius
                            ,Float_t  phimin=0, Float_t  phimax=360);
        virtual void   SavePrimitive(ofstream &out, Option_t *option);

        ClassDef(TArc,1)  //Arc of a circle
};

#endif
