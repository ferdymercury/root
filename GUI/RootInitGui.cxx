//*CMZ :  2.00/05 22/11/98  00.22.53  by  Fons Rademakers
//*CMZ :  2.00/02 17/03/98  09.49.12  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  03.51.34  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

#include "TROOT.h"
#include "TCanvas.h"
#include "TRootGuiFactory.h"
#include "TGX11.h"

//______________________________________________________________________________
void InitGui()
{
   // Initialize the GUI and windowing system interface.
   // This version initializes the ROOT native GUI system.

   gGuiFactory = new TRootGuiFactory;
   gGXW        = new TGX11("X11", "ROOT interface to X11");

   gROOT->SetBatch(kFALSE);
}
