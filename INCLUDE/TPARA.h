//*CMZ :  2.00/09 23/06/98  14.07.21  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.33.22  by  Rene Brun
//*-- Author :    Nenad Buncic   19/09/95

#ifndef ROOT_TPARA
#define ROOT_TPARA

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// TPARA                                                                  //
//                                                                        //
// PARA is parallelepiped. It has 6 parameters, the half length in x,     //
// the half length in y, the half length in z, the angle w.r.t. the y     //
// axis from the centre of the low y edge to the centre of the high y     //
// edge, and the theta phi polar angles from the centre of the low        //
// z face to the centre of the high z face.                               //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TBRIK.h"
#endif

class TPARA : public TBRIK {

    protected:
        Float_t fAlpha;  // angle w.r.t. the y axis from the centre of the low y to the high y
        Float_t fTheta;  // polar angle from the centre of the low z to the high z
        Float_t fPhi;    // polar angle from the centre of the low z to the high z

    public:
        TPARA();
        TPARA(Text_t *name, Text_t *title, Text_t *material, Float_t dx, Float_t dy, Float_t dz,
              Float_t alpha, Float_t theta, Float_t phi);
        virtual ~TPARA();

        virtual Float_t  GetAlpha()  {return fAlpha;}
        virtual Float_t  GetTheta()  {return fTheta;}
        virtual Float_t  GetPhi()    {return fPhi;}
        virtual void     SetPoints  (Float_t *buff);

        ClassDef(TPARA,1)  //PARA shape
};

#endif
