//*CMZ :  2.23/12 31/01/2000  10.26.19  by  Rene Brun
//*CMZ :  2.23/04 11/10/99  17.20.42  by  Rene Brun
//*CMZ :  2.23/03 08/09/99  18.55.57  by  Fons Rademakers
//*CMZ :  2.21/01 12/01/99  07.53.52  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/11 17/08/98  15.40.44  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  12.34.08  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPolyMarker3D
#define ROOT_TPolyMarker3D

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPolyMarker3D                                                        //
//                                                                      //
// An array of 3-D points with the same marker.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif
#ifndef ROOT_TAtt3D
#include "TAtt3D.h"
#endif
#ifndef ROOT_X3DBuffer
#include "X3DBuffer.h"
#endif

class TH1;

class TPolyMarker3D : public TObject, public TAttMarker, public TAtt3D {

protected:
        Int_t            fN;            //number of points
        Float_t         *fP;            //[3*fN] Array of X,Y,Z coordinates
        TString          fOption;       //options
        UInt_t           fGLList;       // The list number for OpenGL view
        Int_t            fLastPoint;    // The index of the last filled point

public:
                          TPolyMarker3D();
                          TPolyMarker3D(Int_t n, Marker_t marker=1, Option_t *option="");
                          TPolyMarker3D(Int_t n, Float_t *p, Marker_t marker=1, Option_t *option="");
                          TPolyMarker3D(const TPolyMarker3D &polymarker);
        virtual          ~TPolyMarker3D();

        virtual void      Copy(TObject &polymarker);
        Int_t             DistancetoPrimitive(Int_t px, Int_t py);
        virtual void      Draw(Option_t *option="");
        virtual void      DrawPolyMarker(Int_t n, Float_t *p, Marker_t marker, Option_t *option="");
        virtual void      ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual Int_t     GetN(){ return fN;}
        virtual Float_t  *GetP(){ return fP;}
        Option_t         *GetOption() const {return fOption.Data();}
        virtual void      ls(Option_t *option="");
        virtual void      Paint(Option_t *option="");
        static  void      PaintH3(TH1 *h, Option_t *option);
        virtual void      PaintPolyMarker(Int_t n, Float_t *p, Marker_t marker, Option_t *option="");
        virtual void      Print(Option_t *option="");
        virtual void      SavePrimitive(ofstream &out, Option_t *option);
        void              SetPoint(Int_t n, Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      SetPolyMarker(Int_t n, Float_t *p, Marker_t marker, Option_t *option="");
        virtual Int_t     SetNextPoint(Float_t x, Float_t y, Float_t z); // *MENU*
        virtual void      Sizeof3D() const;
        static  void      SizeofH3(TH1 *h);
        virtual Int_t     Size() const {return fLastPoint+1;}

        ClassDef(TPolyMarker3D,1)  //An array of 3-D points with the same marker
};

R__EXTERN Size3D gSize3D;

#endif
