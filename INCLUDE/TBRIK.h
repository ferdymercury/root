//*CMZ :  2.00/00 18/02/98  15.54.59  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.30.42  by  Rene Brun
//*-- Author :    Nenad Buncic   17/09/95

#ifndef ROOT_TBRIK
#define ROOT_TBRIK

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
// TBRIK                                                                  //
//                                                                        //
// BRIK is a box. It has 3 parameters, the half length in x, y, and z     //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TShape
#include "TShape.h"
#endif

class TBRIK : public TShape {

    protected:
        Float_t fDx;        // half length in x
        Float_t fDy;        // half length in y
        Float_t fDz;        // half length in z

    public:
        TBRIK();
        TBRIK(Text_t *name, Text_t *title, Text_t *material, Float_t dx, Float_t dy, Float_t dz);
        virtual ~TBRIK();

        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        Float_t         GetDx() {return fDx;}
        Float_t         GetDy() {return fDy;}
        Float_t         GetDz() {return fDz;}
        virtual void    Paint(Option_t *option);
        virtual void    PaintGLPoints(Float_t *buff);
        virtual void    SetPoints(Float_t *buff);
        virtual void    Sizeof3D() const;

        ClassDef(TBRIK,1)  //TBRIK shape
};

#endif
