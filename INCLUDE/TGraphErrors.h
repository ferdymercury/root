//*CMZ :  2.23/12 31/01/2000  10.49.20  by  Rene Brun
//*CMZ :  2.21/07 01/03/99  09.33.20  by  Rene Brun
//*CMZ :  2.00/08 19/05/98  11.12.07  by  Rene Brun
//*CMZ :  1.03/05 14/10/97  17.45.33  by  Rene Brun
//*-- Author :    Rene Brun   15/09/96

#ifndef ROOT_TGraphErrors
#define ROOT_TGraphErrors

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
// TGraphErrors                                                         //
//                                                                      //
// a Graph with error bars                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGraph
#include "TGraph.h"
#endif

class TGraphErrors : public TGraph {

protected:
    Float_t    *fEX;        //[fNpoints] array of X errors
    Float_t    *fEY;        //[fNpoints] array of Y errors

public:
        TGraphErrors();
        TGraphErrors(Int_t n, Float_t *x=0, Float_t *y=0, Float_t *ex=0, Float_t *ey=0);
        virtual ~TGraphErrors();
        virtual void    ComputeRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax);
        Float_t         GetErrorX(Int_t bin);
        Float_t         GetErrorY(Int_t bin);
        Float_t         *GetEX() {return fEX;}
        Float_t         *GetEY() {return fEY;}
        virtual void    Paint(Option_t *chopt="");
        virtual void    Print(Option_t *chopt="");
        virtual void    SavePrimitive(ofstream &out, Option_t *option);
        virtual void    SetPoint(Int_t i, Float_t x, Float_t y);
        virtual void    SetPointError(Int_t i, Float_t ex, Float_t ey);

        ClassDef(TGraphErrors,1)  //a Graph with error bars
};

#endif


