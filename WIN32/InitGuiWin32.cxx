//*CMZ :  2.00/05 20/04/98  13.13.24  by  Fons Rademakers
//*CMZ :  1.00/06 22/03/97  22.23.33  by  Rene Brun
//*-- Author :    Rene Brun   22/03/97

#include "TROOT.h"
#include "TGXW.h"
#include "TGuiFactory.h"
#include "TCanvas.h"
#include "TError.h"

#include "TWin32GuiFactory.h"
#include "TGWin32.h"

//______________________________________________________________________________
void InitGui()
{
   // Initialize the GUI and windowing system interface.

   gGuiFactory = new TWin32GuiFactory;
   gGXW        = new TGWin32("Win32", "ROOT interface to Win32");

   gROOT->SetBatch(kFALSE);
}
