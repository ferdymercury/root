//*CMZ :  2.00/11 08/08/98  22.43.40  by  Rene Brun
//*CMZ :  0.90/06 26/11/96  12.56.07  by  Rene Brun
//*-- Author :    Rene Brun   26/11/96

#ifndef ROOT_TDrawPanelHist
#define ROOT_TDrawPanelHist

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
        TDrawPanelHist(const Text_t *name, const Text_t *title, UInt_t ww=500, UInt_t wh=600);
        virtual ~TDrawPanelHist();
        virtual void  AddOption(Option_t *option);
        virtual void  Apply(const Text_t *action="");
        virtual void  BuildStandardButtons();
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        TObject       *GetHistogram() {return fHistogram;}
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetDefaults();
        virtual void  SetSame();

        ClassDef(TDrawPanelHist,1)  //Class used to control histogram drawing options
};

#endif

