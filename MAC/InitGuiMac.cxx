//*CMZ :  2.00/05 20/04/98  13.12.54  by  Fons Rademakers
//*CMZ :  1.00/06 23/03/97  08.47.46  by  Rene Brun
//*-- Author :    Rene Brun   22/03/97

#include "TROOT.h"
#include "TGXW.h"
#include "TGuiFactory.h"
#include "TCanvas.h"
#include "TError.h"

#include "TMacGuiFactory.h"
#include "TGMac.h"

//______________________________________________________________________________
void InitGui()
{
   // Initialize the GUI and windowing system interface.

   gGuiFactory = new TMacGuiFactory;
   gGXW        = new TGMac("Mac", "ROOT interface to Macintosh graphics");

   gROOT->SetBatch(kFALSE);
}
