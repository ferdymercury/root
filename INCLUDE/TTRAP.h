//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  14.14.38  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.35.20  by  Rene Brun
//*-- Author :    Nenad Buncic   19/09/95

#ifndef ROOT_TTRAP
#define ROOT_TTRAP

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
// TTRAP                                                                  //
//                                                                        //
// TRAP is a general trapezoid, i.e. one for which the faces perpendicular//
// to z are trapezia and their centres are not the same x, y. It has 11   //
// parameters: the half length in z, the polar angles from the centre of  //
// the face at low z to that at high z, H1 the half length in y at low z, //
// LB1 the half length in x at low z and y low edge, LB2 the half length  //
// in x at low z and y high edge, TH1 the angle w.r.t. the y axis from the//
// centre of low y edge to the centre of the high y edge, and H2, LB2,    //
// LH2, TH2, the corresponding quantities at high z.                      //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TBRIK.h"
#endif

class TTRAP : public TBRIK {

    protected:
        Float_t fH1;        // half length in y at low z
        Float_t fBl1;       // half length in x at low z and y low edge
        Float_t fTl1;       // half length in x at low z and y high edge
        Float_t fAlpha1;    // angle w.r.t. the y axis
        Float_t fH2;        // half length in y at high z
        Float_t fBl2;       // half length in x at high z and y low edge
        Float_t fTl2;       // half length in x at high z and y high edge
        Float_t fAlpha2;    // angle w.r.t. the y axis

    public:
        TTRAP();
        TTRAP(const char *name, const char *title, const char *material, Float_t dz, Float_t theta, Float_t phi, Float_t h1,
              Float_t bl1, Float_t tl1, Float_t alpha1, Float_t h2, Float_t bl2, Float_t tl2,
              Float_t alpha2);
        virtual ~TTRAP();

        virtual Float_t  GetH1()     {return fH1;}
        virtual Float_t  GetBl1()    {return fBl1;}
        virtual Float_t  GetTl1()    {return fTl1;}
        virtual Float_t  GetAlpha1() {return fAlpha1;}
        virtual Float_t  GetH2()     {return fH2;}
        virtual Float_t  GetBl2()    {return fBl2;}
        virtual Float_t  GetTl2()    {return fTl2;}
        virtual Float_t  GetAlpha2() {return fAlpha2;}
        virtual void     SetPoints(Float_t *buff);

        ClassDef(TTRAP,1)  //TRAP shape
};

#endif
