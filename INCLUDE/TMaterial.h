//*CMZ :  2.00/11 07/08/98  14.15.45  by  Rene Brun
//*CMZ :  1.03/08 20/11/97  18.32.25  by  Rene Brun
//*-- Author :    Rene Brun   03/10/95

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
        TMaterial(Text_t *name, Text_t *title, Float_t a, Float_t z, Float_t density);
        TMaterial(Text_t *name, Text_t *title, Float_t a, Float_t z, Float_t density, Float_t radl, Float_t inter);
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
