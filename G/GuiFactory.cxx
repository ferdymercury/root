//*CMZ :  2.00/08 25/05/98  17.04.16  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  20.16.15  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  17.23.26  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/11/95

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
// TGuiFactory                                                          //
//                                                                      //
// This ABC is a factory for GUI components. Depending on which         //
// factory is active one gets either ROOT native (X11 based with Win95  //
// look and feel), Win32 or Mac components.                             //
// In case there is no platform dependent implementation on can run in  //
// batch mode directly using an instance of this base class.            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TGuiFactory.h"
#include "TApplicationImp.h"
#include "TCanvasImp.h"
#include "TBrowserImp.h"
#include "TContextMenuImp.h"
#include "TControlBarImp.h"

TGuiFactory *gGuiFactory = 0;
TGuiFactory *gBatchGuiFactory = 0;

ClassImp(TGuiFactory)

//______________________________________________________________________________
TGuiFactory::TGuiFactory(const char *name, const char *title)
    : TNamed(name, title)
{
   // TGuiFactory ctor only called by derived classes.
}

//______________________________________________________________________________
TApplicationImp *TGuiFactory::CreateApplicationImp(const char *classname, int *argc, char **argv, void *options, Int_t numOptions)
{
   // Create a batch version of TApplicationImp

   return new TApplicationImp(classname, argc, argv, options, numOptions);
}

//______________________________________________________________________________
TCanvasImp *TGuiFactory::CreateCanvasImp(TCanvas *c, const char *title, UInt_t width, UInt_t height)
{
   // Create a batch version of TCanvasImp

   return new TCanvasImp(c, title, width, height);
}

//______________________________________________________________________________
TCanvasImp *TGuiFactory::CreateCanvasImp(TCanvas *c, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   // Create a batch version of TCanvasImp

   return new TCanvasImp(c, title, x, y, width, height);
}

//______________________________________________________________________________
TBrowserImp *TGuiFactory::CreateBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height)
{
   // Create a batch version of TBrowserImp

   return new TBrowserImp(b, title, width, height);
}

//______________________________________________________________________________
TBrowserImp *TGuiFactory::CreateBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   // Create a batch version of TBrowserImp

   return new TBrowserImp(b, title, x, y, width, height);
}

//______________________________________________________________________________
TContextMenuImp *TGuiFactory::CreateContextMenuImp(TContextMenu *c, const char *, const char *)
{
   // Create a batch version of TContextMenuImp

   return new TContextMenuImp(c);
}

//______________________________________________________________________________
TControlBarImp *TGuiFactory::CreateControlBarImp(TControlBar *c, const char *title)
{
   // Create a batch version of TControlBarImp

   return new TControlBarImp(c, title);
}

//______________________________________________________________________________
TControlBarImp *TGuiFactory::CreateControlBarImp(TControlBar *c, const char *title, Int_t x, Int_t y)
{
   // Create a batch version of TControlBarImp

   return new TControlBarImp(c, title, x, y);
}

