//*CMZ :  2.21/07 03/03/99  10.24.17  by  Rene Brun
//*-- Author :    Rene Brun   03/03/99

#ifndef ROOT_TGraphAsymmErrors
#define ROOT_TGraphAsymmErrors

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
// TGraphAsymmErrors                                                    //
//                                                                      //
// a Graph with asymmetric error bars                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGraph
#include "TGraph.h"
#endif

class TGraphAsymmErrors : public TGraph {

protected:
    Float_t    *fEXlow;        //array of X low errors
    Float_t    *fEXhigh;       //array of X high errors
    Float_t    *fEYlow;        //array of Y low errors
    Float_t    *fEYhigh;       //array of Y high errors

public:
        TGraphAsymmErrors();
        TGraphAsymmErrors(Int_t n, Float_t *x=0, Float_t *y=0, Float_t *exl=0, Float_t *exh=0, Float_t *eyl=0, Float_t *eyh=0);
        virtual ~TGraphAsymmErrors();
        virtual void    ComputeRange(Float_t &xmin, Float_t &ymin, Float_t &xmax, Float_t &ymax);
        Float_t         GetErrorX(Int_t bin);
        Float_t         GetErrorY(Int_t bin);
        Float_t         *GetEXlow()  {return fEXlow;}
        Float_t         *GetEXhigh() {return fEXhigh;}
        Float_t         *GetEYlow()  {return fEYlow;}
        Float_t         *GetEYhigh() {return fEYhigh;}
        virtual void    Paint(Option_t *chopt="");
        virtual void    Print(Option_t *chopt="");
        virtual void    SavePrimitive(ofstream &out, Option_t *option);
        virtual void    SetPoint(Int_t i, Float_t x, Float_t y);
        virtual void    SetPointError(Int_t i, Float_t exl, Float_t exh, Float_t eyl, Float_t eyh);

        ClassDef(TGraphAsymmErrors,1)  //a Graph with asymmetric error bars
};

#endif
