//*CMZ :  2.23/12 31/01/2000  10.25.46  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  10.10.51  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  12.14.39  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  10.15.23  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TPolyMarker
#define ROOT_TPolyMarker

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
// TPolyMarker                                                          //
//                                                                      //
// An array of points with the same marker.                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif

class TPolyMarker : public TObject, public TAttMarker {
protected:
        Int_t       fN;            //number of points
        Float_t     *fX;           //[fN] Array of X coordinates
        Float_t     *fY;           //[fN] Array of Y coordinates
        TString     fOption;       //options

public:
        TPolyMarker();
        TPolyMarker(Int_t n, Option_t *option="");
        TPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        TPolyMarker(const TPolyMarker &polymarker);
        virtual ~TPolyMarker();
        virtual void     Copy(TObject &polymarker);
        virtual void     Draw(Option_t *option="");
        virtual void     DrawPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual Int_t    GetN() {return fN;}
        Option_t         *GetOption() const {return fOption.Data();}
        Float_t          *GetX() {return fX;}
        Float_t          *GetY() {return fY;}
        virtual void     ls(Option_t *option="");
        virtual void     Paint(Option_t *option="");
        virtual void     PaintPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void     Print(Option_t *option="");
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetPoint(Int_t point, Float_t x, Float_t y); // *MENU*
        virtual void     SetPolyMarker(Int_t n, Float_t *x=0, Float_t *y=0, Option_t *option="");

        ClassDef(TPolyMarker,1)  //An array of points with the same marker
};

#endif
