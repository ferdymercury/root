//*CMZ :  2.00/13 13/10/98  09.21.51  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  10.10.01  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  12.29.50  by  Rene Brun
//*CMZ :  1.00/07 03/04/97  09.54.56  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPolyLine3D
#define ROOT_TPolyLine3D

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
// TPolyLine3D                                                          //
//                                                                      //
// A 3-D PolyLine.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TTString
#include "TString.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif


class TPolyLine3D : public TObject, public TAttLine {

protected:
        Int_t        fN;            //Number of points
        Float_t      *fP;           //Array of 3-D coordinates  (x,y,z)
        TString      fOption;       //options
        UInt_t       fGLList;       // The list number for OpenGL view
        Int_t        fLastPoint;    // The number of the last filled point

public:
        TPolyLine3D();
        TPolyLine3D(Int_t n, Option_t *option="");
        TPolyLine3D(Int_t n, Float_t *p, Option_t *option="");
        TPolyLine3D(Int_t n, Float_t *x, Float_t *y, Float_t *z, Option_t *option="");
        TPolyLine3D(const TPolyLine3D &polylin);
        virtual ~TPolyLine3D();

        virtual void      Copy(TObject &polyline);
        virtual Int_t     DistancetoPrimitive(Int_t px, Int_t py);
        virtual void      Draw(Option_t *option="");
        virtual void      DrawPolyLine(Int_t n, Float_t *p, Option_t *option="");
        virtual void      ExecuteEvent(Int_t event, Int_t px, Int_t py);
        Int_t             GetLastPoint() {return fLastPoint;}
        Int_t             GetN() {return fN;}
        Float_t           *GetP() {return fP;}
        Option_t          *GetOption() const {return fOption.Data();}
        virtual Bool_t    Is3D() {return kTRUE;}
        virtual void      ls(Option_t *option="");
        virtual void      Paint(Option_t *option="");
        virtual void      PaintPolyLine(Int_t n, Float_t *p, Option_t *option="");
        virtual void      Print(Option_t *option="");
        virtual void      SavePrimitive(ofstream &out, Option_t *option);
        virtual void      SetNextPoint(Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      SetOption(Option_t *option="") {fOption = option;}
        virtual void      SetPoint(Int_t point, Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      SetPolyLine(Int_t n, Float_t *p=0, Option_t *option="");
        virtual void      Sizeof3D() const;

        ClassDef(TPolyLine3D,1)  //A 3-D PolyLine
};

#endif

