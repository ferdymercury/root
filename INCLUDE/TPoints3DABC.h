//*CMZ :  2.22/01 12/05/99  16.46.26  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   04/05/99
#ifndef ROOT_TPoints3DABC
#define ROOT_TPoints3DABC

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPoints3DABC                                                         //
//                                                                      //
// Abstract class to define Arrays of 3D points                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TPoints3DABC : public TObject {

public:
        TPoints3DABC(){;}
        virtual ~TPoints3DABC(){;}

        static  Int_t     DistancetoLine(Int_t px, Int_t py, Float_t x1, Float_t y1, Float_t x2, Float_t y2, Int_t lineWidth = 1 );

        virtual Int_t     Add(Float_t x, Float_t y, Float_t z);
        virtual Int_t     AddLast(Float_t x, Float_t y, Float_t z);
        virtual Int_t     GetLastPosition()const    =0;
        // GetN()  returns the number of allocated cells if any.
        //         GetN() > 0 shows how many cells
        //         can be available via GetP() method.
        //         GetN() == 0 then GetP() must return 0 as well
        virtual Int_t     GetN() const;
        virtual Float_t  *GetP() const;
        virtual Float_t   GetX(Int_t idx)  const    =0;
        virtual Float_t   GetY(Int_t idx)  const    =0;
        virtual Float_t   GetZ(Int_t idx)  const    =0;
        virtual Float_t  *GetXYZ(Float_t *xyz,Int_t idx,Int_t num=1)  const;
        virtual const Float_t  *GetXYZ(Int_t idx)   =0;
        virtual Option_t *GetOption()      const    =0;
        virtual void      PaintPoints(Int_t n, Float_t *p,Option_t *option="")  =0;
        virtual Int_t     SetLastPosition(Int_t idx)=0;
        virtual Int_t     SetNextPoint(Float_t x, Float_t y, Float_t z);
        virtual void      SetOption(Option_t *option="")=0;
        virtual Int_t     SetPoint(Int_t point, Float_t x, Float_t y, Float_t z)=0;
        virtual Int_t     SetPoints(Int_t n, Float_t *p=0, Option_t *option="") =0;
        virtual Int_t     Size() const              =0;

        ClassDef(TPoints3DABC,0)  //A 3-D Points

};

#endif
