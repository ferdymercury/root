//*CMZ :  2.00/06 15/05/98  09.53.09  by  Rene Brun
//*CMZ :  1.03/09 15/12/97  08.18.17  by  Rene Brun
//*-- Author :    Rene Brun   03/05/95

#ifndef ROOT_TGraph
#define ROOT_TGraph

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
// TGraph                                                               //
//                                                                      //
// Graph graphics class.                                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif
#ifndef ROOT_TAttMarker
#include "TAttMarker.h"
#endif


class TH1F;
class TAxis;

class TGraph : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

protected:
    Int_t      fNpoints;     //Number of points
    Float_t    *fX;          //array of X points
    Float_t    *fY;          //array of Y points
    Option_t   *fOption;     //Axis options
    TList      *fFunctions;  //Pointer to list of functions (fits and user)
    TH1F       *fHistogram;  //Pointer to histogram used for drawing axis
    Float_t    fMaximum;     //Maximum value for plotting along y
    Float_t    fMinimum;     //Minimum value for plotting along y

public:
        TGraph();
        TGraph(Int_t n, Float_t *x=0, Float_t *y=0);
        virtual ~TGraph();
                void    ComputeLogs(Int_t npoints, Int_t opt);
        virtual void    ComputeRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax);
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual void    Draw(Option_t *chopt="");
        virtual void    DrawGraph(Int_t n, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    DrawPanel(); // *MENU*
        virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual void    Fit(Text_t *formula ,Option_t *option="" ,Option_t *goption=""); // *MENU*
        virtual void    FitPanel(); // *MENU*
        virtual Float_t GetErrorX(Int_t bin);
        virtual Float_t GetErrorY(Int_t bin);
        TH1F            *GetHistogram();
        TList           *GetListOfFunctions() { return fFunctions; }
        Int_t           GetN() {return fNpoints;}
        Float_t         *GetX() {return fX;}
        Float_t         *GetY() {return fY;}
        TAxis           *GetXaxis();
        TAxis           *GetYaxis();
        virtual void    GetPoint(Int_t i, Float_t &x, Float_t &y);
        virtual void    InitExpo();
        virtual void    InitGaus();
        virtual void    InitPolynom();
        virtual void    LeastSquareFit(Int_t n, Int_t m, Double_t *a);
        virtual void    LeastSquareLinearFit(Int_t ndata, Double_t &a0, Double_t &a1, Int_t &ifail);
        virtual void    Paint(Option_t *chopt="");
        virtual void    PaintGraph(Int_t npoints, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    PaintGrapHist(Int_t npoints, Float_t *x, Float_t *y, Option_t *option="");
        virtual void    Print(Option_t *chopt="");
        virtual void    SavePrimitive(ofstream &out, Option_t *option);
        virtual void    SetMaximum(Float_t maximum=-1111); // *MENU*
        virtual void    SetMinimum(Float_t minimum=-1111); // *MENU*
        virtual void    SetPoint(Int_t i, Float_t x, Float_t y);
                void    Smooth(Int_t npoints, Float_t *x, Float_t *y, Int_t drawtype);
                void    Zero(Int_t &k,Float_t AZ,Float_t BZ,Float_t E2,Float_t &X,Float_t &Y
                        ,Int_t maxiterations);

        ClassDef(TGraph,1)  //Graph graphics class
};

#endif


