//*CMZ :  2.21/02 18/01/99  16.14.21  by  Rene Brun
//*CMZ :  1.03/01 13/08/97  12.02.09  by  axis
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAxis
#define ROOT_TAxis

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
// TAxis                                                                //
//                                                                      //
// Axis class.                                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TAttAxis
#include "TAttAxis.h"
#endif
#ifndef ROOT_TArrayF
#include "TArrayF.h"
#endif


class TAxis : public TNamed, public TAttAxis {

private:
        Int_t        fNbins;        //Number of bins
        Axis_t       fXmin;         //low edge of first bin
        Axis_t       fXmax;         //upper edge of last bin
        TArrayF      fXbins;        //Bin edges array in X
        Char_t       *fXlabels;     //!Labels associated to axis
        Int_t        fFirst;        //first bin to display
        Int_t        fLast;         //last bin to display

public:
        TAxis();
        TAxis(Int_t nbins, Axis_t xmin, Axis_t xmax);
        TAxis(Int_t nbins, Axis_t *xbins);
        TAxis(const TAxis &axis);
        virtual ~TAxis();
        virtual void    Copy(TObject &axis);
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual void    Draw(Option_t *option="");
        virtual void    DrawAxis(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2);
        virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual Int_t   FindBin(Axis_t x);
        virtual Axis_t  GetBinCenter(Int_t bin);
        virtual Text_t  *GetBinLabel(Int_t bin);
        virtual Axis_t  GetBinLowEdge(Int_t bin);
        virtual Axis_t  GetBinUpEdge(Int_t bin);
        virtual Axis_t  GetBinWidth(Int_t bin);
        virtual void    GetCenter(Axis_t *center);
        virtual void    GetLabel(Text_t *label);
        virtual void    GetLowEdge(Axis_t *edge);
                Int_t   GetNbins() const { return fNbins; }
          const Text_t  *GetTitle() const {return fTitle.Data();}
              TArrayF   *GetXbins() {return &fXbins;}
                 Int_t  GetFirst();
                 Int_t  GetLast();
                Axis_t  GetXmin() const {return fXmin;}
                Axis_t  GetXmax() const {return fXmax;}
        virtual void    ls(Option_t *option="");
        virtual void    Paint(Option_t *option="");
        virtual void    PaintAxis(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2);
        virtual void    Print(Option_t *option="");
        virtual void    Set(Int_t nbins, Axis_t xmin, Axis_t xmax);
        virtual void    Set(Int_t nbins, Axis_t *xbins);
        virtual void    SetBinLabel(Int_t bin, Text_t *label);
        virtual void    SetLabel(const Text_t *label);
        virtual void    SetLimits(Axis_t xmin, Axis_t xmax);
        virtual void    SetRange(Int_t first=0, Int_t last=0);

        ClassDef(TAxis,3)  //Axis class
};

#endif

