//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.43.40  by  Rene Brun
//*CMZ :  0.90/06 26/11/96  12.56.07  by  Rene Brun
//*-- Author :    Rene Brun   26/11/96

#ifndef ROOT_TDrawPanelHist
#define ROOT_TDrawPanelHist

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
// TDrawPanelHist                                                       //
//                                                                      //
// Class used to control histogram drawing options                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////



#ifndef ROOT_TDialogCanvas
#include "TDialogCanvas.h"
#endif

class TSlider;
class TH1;

class TDrawPanelHist : public TDialogCanvas {

protected:
        TString     fOption;     //Fitting options
        TSlider     *fSlider;    //Pointer to fitpanel slider
        TObject     *fHistogram; //Pointer to histogram

public:
        TDrawPanelHist();
        TDrawPanelHist(const char *name, const char *title, UInt_t ww=500, UInt_t wh=600);
        virtual ~TDrawPanelHist();
        virtual void  AddOption(Option_t *option);
        virtual void  Apply(const char *action="");
        virtual void  BuildStandardButtons();
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        TObject       *GetHistogram() {return fHistogram;}
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetDefaults();
        virtual void  SetSame();

        ClassDef(TDrawPanelHist,1)  //Class used to control histogram drawing options
};

#endif

