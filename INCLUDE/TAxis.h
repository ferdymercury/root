//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/11 30/12/99  11.31.51  by  Rene Brun
//*CMZ :  2.23/09 22/11/99  16.52.53  by  Rene Brun
//*CMZ :  2.23/07 21/10/99  15.11.30  by  Rene Brun
//*CMZ :  2.23/04 11/10/99  16.50.53  by  Rene Brun
//*CMZ :  2.22/04 01/06/99  12.37.01  by  Rene Brun
//*CMZ :  2.22/01 17/05/99  13.16.14  by  Rene Brun
//*CMZ :  2.21/02 18/01/99  16.14.21  by  Rene Brun
//*CMZ :  1.03/01 13/08/97  12.02.09  by  axis
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAxis
#define ROOT_TAxis

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
        Int_t        fNbins;          //Number of bins
        Axis_t       fXmin;           //low edge of first bin
        Axis_t       fXmax;           //upper edge of last bin
        TArrayF      fXbins;          //Bin edges array in X
        Char_t       *fXlabels;       //!Labels associated to axis
        Int_t        fFirst;          //first bin to display
        Int_t        fLast;           //last bin to display
        TString      fTimeFormat;     //Date&time format, ex: 09/12/99 12:34:00
        Bool_t       fTimeDisplay;    //on/off displaying time values instead of numerics
        TObject     *fParent;         //Object owning this axis

public:
        // TAxis status bits
        enum { kAxisRange = BIT(11), kCenterTitle = BIT(12) };

        TAxis();
        TAxis(Int_t nbins, Axis_t xmin, Axis_t xmax);
        TAxis(Int_t nbins, Axis_t *xbins);
        TAxis(const TAxis &axis);
        virtual ~TAxis();
        virtual void    CenterTitle(Bool_t center=kTRUE);  //*MENU*
        const char      *ChooseTimeFormat(Float_t axislength=0);
        virtual void    Copy(TObject &axis);
        virtual Int_t   DistancetoPrimitive(Int_t px, Int_t py);
        virtual void    ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual Int_t   FindBin(Axis_t x);
        virtual Int_t   FindFixBin(Axis_t x);
        virtual Axis_t  GetBinCenter(Int_t bin);
        virtual char  *GetBinLabel(Int_t bin);
        virtual Axis_t  GetBinLowEdge(Int_t bin);
        virtual Axis_t  GetBinUpEdge(Int_t bin);
        virtual Axis_t  GetBinWidth(Int_t bin);
        virtual void    GetCenter(Axis_t *center);
        virtual void    GetLabel(char *label);
        virtual void    GetLowEdge(Axis_t *edge);
                Int_t   GetNbins() const { return fNbins; }
        virtual TObject *GetParent() {return fParent;}
        virtual Bool_t  GetTimeDisplay() {return fTimeDisplay;}
        virtual const char  *GetTimeFormat() const {return fTimeFormat.Data();}
         const char   *GetTitle() const {return fTitle.Data();}
              TArrayF   *GetXbins() {return &fXbins;}
                 Int_t  GetFirst();
                 Int_t  GetLast();
                Axis_t  GetXmin() const {return fXmin;}
                Axis_t  GetXmax() const {return fXmax;}
        virtual void    Set(Int_t nbins, Axis_t xmin, Axis_t xmax);
        virtual void    Set(Int_t nbins, Axis_t *xbins);
        virtual void    SetBinLabel(Int_t bin, char *label);
        virtual void    SetLabel(const char *label);
        virtual void    SetLimits(Axis_t xmin, Axis_t xmax);
        virtual void    SetParent(TObject *obj) {fParent = obj;}
        virtual void    SetRange(Int_t first=0, Int_t last=0);  //*MENU*
        virtual void    SetTimeDisplay(Int_t value) {fTimeDisplay = value;} //*TOGGLE*
        virtual void    SetTimeFormat(const char *format="");  //*MENU*
        virtual void    UnZoom();  //*MENU*

        ClassDef(TAxis,4)  //Axis class
};

#endif

