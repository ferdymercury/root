//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/12 07/10/98  08.52.48  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/09 23/06/98  14.36.04  by  Rene Brun
//*CMZ :  2.00/00 18/02/98  16.12.32  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.36.16  by  Rene Brun
//*-- Author :    Nenad Buncic   18/09/95

#ifndef ROOT_TTUBS
#define ROOT_TTUBS

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
// TTUBS                                                                  //
//                                                                        //
// TUBS is a phi segment of a tube. It has 5 parameters, the same 3 as    //
// TUBE plus the phi limits. The segment start at first limit and         //
// includes increasing phi value up to the second limit or that plus      //
// 360 degrees.                                                           //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TTUBE
#include "TTUBE.h"
#endif

class TTUBS : public TTUBE {

    protected:
        Float_t fPhi1;        // first phi limit
        Float_t fPhi2;        // second phi limit
        virtual void    MakeTableOfCoSin();  // Create the table of the fSiTab; fCoTab
        virtual void    PaintGLPoints(Float_t *vertex);

    public:
        TTUBS();
        TTUBS(const char *name, const char *title, const char *material, Float_t rmin, Float_t rmax, Float_t dz,
               Float_t phi1, Float_t phi2);
        TTUBS(const char *name, const char *title, const char *material, Float_t rmax, Float_t dz,
               Float_t phi1, Float_t phi2);
        virtual ~TTUBS();

        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual Float_t GetPhi1() {return fPhi1;}
        virtual Float_t GetPhi2() {return fPhi2;}
        virtual void    Paint(Option_t *option);
        virtual void    SetPoints(Float_t *buff);
        virtual void    Sizeof3D() const;

        ClassDef(TTUBS,1)  //TUBS shape
};

#endif
