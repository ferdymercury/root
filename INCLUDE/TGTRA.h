//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  15.58.58  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.11  by  Rene Brun
//*-- Author :    Nenad Buncic   19/09/95

#ifndef ROOT_TGTRA
#define ROOT_TGTRA

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
// TGTRA                                                                  //
//                                                                        //
// GTRA is general twisted trapezoid. Essentially this is a TRAP shape,   //
// except this it is twisted in the x, y plane as a function z.           //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBRIK
#include "TBRIK.h"
#endif

class TGTRA : public TBRIK {

    protected:
        Float_t fTwist;     // twisting parameter
        Float_t fH1;        // half length in y at low z
        Float_t fBl1;       // half length in x at low z and y low edge
        Float_t fTl1;       // half length in x at low z and y high edge
        Float_t fAlpha1;    // angle w.r.t. the y axis
        Float_t fH2;        // half length in y at high z
        Float_t fBl2;       // half length in x at high z and y low edge
        Float_t fTl2;       // half length in x at high z and y high edge
        Float_t fAlpha2;    // angle w.r.t. the y axis

    public:
        TGTRA();
        TGTRA(const char *name, const char *title, const char *material, Float_t dz, Float_t theta, Float_t phi, Float_t twist, Float_t h1,
              Float_t bl1, Float_t tl1, Float_t alpha1, Float_t h2, Float_t bl2, Float_t tl2,
              Float_t alpha2);
        virtual ~TGTRA();

        Float_t         GetTwist()  {return fTwist;}
        Float_t         GetH1()     {return fH1;}
        Float_t         GetBl1()    {return fBl1;}
        Float_t         GetTl1()    {return fTl1;}
        Float_t         GetAlpha1() {return fAlpha1;}
        Float_t         GetH2()     {return fH2;}
        Float_t         GetBl2()    {return fBl2;}
        Float_t         GetTl2()    {return fTl2;}
        Float_t         GetAlpha2() {return fAlpha2;}

        virtual void    SetPoints(Float_t *buff);

        ClassDef(TGTRA,1)  //GTRA shape
};

#endif
