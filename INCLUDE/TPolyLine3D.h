//*CMZ :  2.24/01 11/03/2000  09.54.32  by  Rene Brun
//*CMZ :  2.23/12 31/01/2000  10.26.41  by  Rene Brun
//*CMZ :  2.23/03 08/09/99  18.55.03  by  Fons Rademakers
//*CMZ :  2.21/01 12/01/99  07.54.04  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/13 13/10/98  09.21.51  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  10.10.01  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPolyLine3D
#define ROOT_TPolyLine3D

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
// TPolyLine3D                                                          //
//                                                                      //
// A 3-D PolyLine.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TList
#include "TList.h"
#endif
#ifndef ROOT_TTString
#include "TString.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAtt3D
#include "TAtt3D.h"
#endif
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif


class TPolyLine3D : public TObject, public TAttLine, public TAtt3D {

protected:
        Int_t        fN;            //Number of points
        Float_t      *fP;           //[3*fN] Array of 3-D coordinates  (x,y,z)
        TString      fOption;       //options
        UInt_t       fGLList;       //!The list number for OpenGL view
        Int_t        fLastPoint;    //The index of the last filled point

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
        static  void      DrawOutlineCube(TList *outline, Float_t *rmin, Float_t *rmax);
        virtual void      DrawPolyLine(Int_t n, Float_t *p, Option_t *option="");
        virtual void      ExecuteEvent(Int_t event, Int_t px, Int_t py);
        Int_t             GetLastPoint() {return fLastPoint;}
        Int_t             GetN() {return fN;}
        Float_t           *GetP() {return fP;}
        Option_t          *GetOption() const {return fOption.Data();}
        virtual void      ls(Option_t *option="");
        virtual void      Paint(Option_t *option="");
        virtual void      PaintPolyLine(Int_t n, Float_t *p, Option_t *option="");
        virtual void      Print(Option_t *option="");
        virtual void      SavePrimitive(ofstream &out, Option_t *option);
        virtual Int_t     SetNextPoint(Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      SetOption(Option_t *option="") {fOption = option;}
        virtual void      SetPoint(Int_t point, Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      SetPolyLine(Int_t n, Float_t *p=0, Option_t *option="");
        virtual void      Sizeof3D() const;
        virtual Int_t     Size() const { return fLastPoint+1;}

        ClassDef(TPolyLine3D,1)  //A 3-D PolyLine
};

#endif

