//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.44.46  by  Rene Brun
//*CMZ :  0.90/06 26/11/96  11.12.29  by  Rene Brun
//*-- Author :    Rene Brun   24/11/96

#ifndef ROOT_TFitPanel
#define ROOT_TFitPanel

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
// TFitPanel                                                            //
//                                                                      //
// Class used to control histograms fit panel                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////



#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TSlider;
class TH1;

class TFitPanel : public TDialogCanvas {

protected:
        TString     fOption;     //Fitting options
        TString     fFunction;   //Function to fit
        TString     fSame;       //graphics option to superimpose new fit on existing picture
        TSlider     *fSlider;    //Pointer to fitpanel slider
        TObject     *fObjectFit; //Pointer to object to fit

public:
        TFitPanel();
        TFitPanel(const char *name, const char *title, UInt_t ww=300, UInt_t wh=400);
        virtual ~TFitPanel();
        virtual void  AddOption(Option_t *option);
        virtual void  Apply(const char *action="");
        virtual void  BuildStandardButtons();
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        TObject       *GetObjectFit() {return fObjectFit;}
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetDefaults();
        virtual void  SetFunction(const char *function);
        virtual void  SetSame();

        ClassDef(TFitPanel,1)  //Class used to control histograms fit panel
};

#endif

