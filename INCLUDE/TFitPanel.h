//*CMZ :  2.00/11 08/08/98  22.44.46  by  Rene Brun
//*CMZ :  0.90/06 26/11/96  11.12.29  by  Rene Brun
//*-- Author :    Rene Brun   24/11/96

#ifndef ROOT_TFitPanel
#define ROOT_TFitPanel

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
        TFitPanel(const Text_t *name, const Text_t *title, UInt_t ww=300, UInt_t wh=400);
        virtual ~TFitPanel();
        virtual void  AddOption(Option_t *option);
        virtual void  Apply(const Text_t *action="");
        virtual void  BuildStandardButtons();
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        TObject       *GetObjectFit() {return fObjectFit;}
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetDefaults();
        virtual void  SetFunction(const Text_t *function);
        virtual void  SetSame();

        ClassDef(TFitPanel,1)  //Class used to control histograms fit panel
};

#endif

