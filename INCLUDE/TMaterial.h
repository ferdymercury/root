//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 07/08/98  14.15.45  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.25  by  Rene Brun
//*-- Author :    Rene Brun   03/10/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMaterial                                                            //
//                                                                      //
// Materials used in the Geometry Shapes                                //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TMaterial
#define ROOT_TMaterial

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif

class TMaterial  : public TNamed, public TAttFill {
 protected:
   Int_t        fNumber;      //Material matrix number
   Float_t      fA;           //A of Material
   Float_t      fZ;           //Z of Material
   Float_t      fDensity;     //Material density in gr/cm3
   Float_t      fRadLength;   //Material radiation length
   Float_t      fInterLength; //Material interaction length

 public:
        TMaterial();
        TMaterial(const char *name, const char *title, Float_t a, Float_t z, Float_t density);
        TMaterial(const char *name, const char *title, Float_t a, Float_t z, Float_t density, Float_t radl, Float_t inter);
        virtual ~TMaterial();
        virtual Int_t     GetNumber()      {return fNumber;}
        virtual Float_t   GetA()           {return fA;}
        virtual Float_t   GetZ()           {return fZ;}
        virtual Float_t   GetDensity()     {return fDensity;}
        virtual Float_t   GetRadLength()   {return fRadLength;}
        virtual Float_t   GetInterLength() {return fInterLength;}

        ClassDef(TMaterial,3)  //Materials used in the Geometry Shapes
};

#endif
