//*CMZ :  2.23/12 26/01/2000  09.35.28  by  Rene Brun
//*CMZ :  2.23/02 03/09/99  11.01.33  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.48.25  by  Rene Brun
//*CMZ :  2.00/09 23/06/98  17.59.18  by  Rene Brun
//*CMZ :  1.03/09 16/03/98  08.22.34  by  Fons Rademakers
//*-- Author :    Rene Brun   28/11/96

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

#include "TROOT.h"
#include "TFitPanelGraph.h"
#include "TGroupButton.h"
#include "TSlider.h"
#include "TText.h"
#include "TGraph.h"
#include "TF1.h"

#include <stdio.h>

ClassImp(TFitPanelGraph)

//______________________________________________________________________________
//
//   A TFitPanelGraph is a TFitPanel specialized to control graph fits.
//   With the mouse, the user can control:
//     - the type of function to be fitted
//     - the various fit options
//     - the drawing options
//   When the FIT button is executed, the selected histogram is fitted
//   with the current parameters.
//   The options are documented in TGraph::Fit.
//Begin_Html
/*
<img src="gif/fitpanel.gif">
*/
//End_Html
//

//______________________________________________________________________________
TFitPanelGraph::TFitPanelGraph() : TFitPanel()
{
//*-*-*-*-*-*-*-*-*-*-*-*FitPanelGraph default constructor*-*-*-*-*-*-*-*-*-*-*
//*-*                    ============================

}

//_____________________________________________________________________________
TFitPanelGraph::TFitPanelGraph(const char *name, const char *title, UInt_t ww, UInt_t wh)
          : TFitPanel(name, title,ww,wh)
{
//*-*-*-*-*-*-*-*-*-*-*-*FitPanelGraph constructor*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*                    ========================
}

//______________________________________________________________________________
TFitPanelGraph::~TFitPanelGraph()
{
//*-*-*-*-*-*-*-*-*-*-*FitPanelGraph default destructor*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ===============================
}

//______________________________________________________________________________
void TFitPanelGraph::Apply(const char *action)
{
//*-*-*-*-*-*-*-*-*-*Collect all options and fit histogram*-*-*-*-*-*-*
//*-*                =====================================

   if (!fRefPad) return;
   fRefPad->cd();

   SetCursor(kWatch);

   if (!strcmp(action,"Defaults")) {
      SetDefaults();
      return;
   }
// take into account slider to set the function range;
   TObject *obj;
   TGroupButton *button;
   TIter next(fPrimitives);

   while ((obj = next())) {
      if (obj->InheritsFrom(TGroupButton::Class())) {
         button = (TGroupButton*)obj;
         if (button->GetBorderMode() < 0) button->ExecuteAction();
      }
   }

   TGraph *gr    = (TGraph*)fObjectFit;
   Int_t npoints = gr->GetN();
   Float_t *gx   = gr->GetX();

   TF1 *f1 = (TF1*)gROOT->GetFunction(fFunction.Data());
   if (!f1) return;
   Float_t xgrmin = gx[0];
   Float_t xgrmax = gx[0];
   for (Int_t i=0;i<npoints;i++) {
      if (gx[i] < xgrmin) xgrmin = gx[i];
      if (gx[i] > xgrmax) xgrmax = gx[i];
   }
   Float_t smin  = fSlider->GetMinimum();
   Float_t smax  = fSlider->GetMaximum();
   Float_t xpmin = fRefPad->GetUxmin();
   Float_t xpmax = fRefPad->GetUxmax();
   Float_t xmin  = xpmin + (xpmax-xpmin)*smin;
   Float_t xmax  = xpmin + (xpmax-xpmin)*smax;
   if (smin <= 0) xmin = xgrmin;
   if (smax >= 1) xmax = xgrmax;
   f1->SetRange(xmin,xmax);

   gr->Fit((char*)fFunction.Data(), (char*)fOption.Data(), (char*)fSame.Data());
   fOption   = "r";
   fFunction = "gaus";
   fSame     = "";
   fRefPad->Modified();
   fRefPad->Update();
}

//______________________________________________________________________________
void TFitPanelGraph::SavePrimitive(ofstream &, Option_t *)
{
//*-*-*-*-*-*-*-*-*-*-*Save this fitpanelgraph in a macro*-*-*-*-*-*-*
//*-*                  ==================================
}
