//*CMZ :  2.00/08 25/05/98  18.44.01  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  18.09.14  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

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
// TRootGuiFactory                                                      //
//                                                                      //
// This class is a factory for ROOT GUI components. It overrides        //
// the member functions of the ABS TGuiFactory.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRootGuiFactory.h"
#include "TRootApplication.h"
#include "TRootCanvas.h"
#include "TRootBrowser.h"
#include "TRootContextMenu.h"
#include "TRootControlBar.h"


ClassImp(TRootGuiFactory)

//______________________________________________________________________________
TRootGuiFactory::TRootGuiFactory(const char *name, const char *title)
   : TGuiFactory(name, title)
{
   // TRootGuiFactory ctor.
}

//______________________________________________________________________________
TApplicationImp *TRootGuiFactory::CreateApplicationImp(const char *classname,
                      Int_t *argc, char **argv, void *options, Int_t numOptions)
{
   // Create a ROOT native GUI version of TApplicationImp

   return new TRootApplication(classname, argc, argv, options, numOptions);
}

//______________________________________________________________________________
TCanvasImp *TRootGuiFactory::CreateCanvasImp(TCanvas *c, const char *title,
                                             UInt_t width, UInt_t height)
{
   // Create a ROOT native GUI version of TCanvasImp

   return new TRootCanvas(c, title, width, height);
}

//______________________________________________________________________________
TCanvasImp *TRootGuiFactory::CreateCanvasImp(TCanvas *c, const char *title,
                                  Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   // Create a ROOT native GUI version of TCanvasImp

   return new TRootCanvas(c, title, x, y, width, height);
}

//______________________________________________________________________________
TBrowserImp *TRootGuiFactory::CreateBrowserImp(TBrowser *b, const char *title,
                                               UInt_t width, UInt_t height)
{
   // Create a ROOT native GUI version of TBrowserImp

   return new TRootBrowser(b, title, width, height);
}

//______________________________________________________________________________
TBrowserImp *TRootGuiFactory::CreateBrowserImp(TBrowser *b, const char *title,
                                  Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   // Create a ROOT native GUI version of TBrowserImp

   return new TRootBrowser(b, title, x, y, width, height);
}

//______________________________________________________________________________
TContextMenuImp *TRootGuiFactory::CreateContextMenuImp(TContextMenu *c,
                                             const char *name, const char *)
{
   // Create a ROOT native GUI version of TContextMenuImp

   return new TRootContextMenu(c, name);
}

//______________________________________________________________________________
TControlBarImp *TRootGuiFactory::CreateControlBarImp(TControlBar *c, const char *title)
{
   // Create a ROOT native GUI version of TControlBarImp

   return new TRootControlBar(c, title);
}

//______________________________________________________________________________
TControlBarImp *TRootGuiFactory::CreateControlBarImp(TControlBar *c, const char *title,
                                                     Int_t x, Int_t y)
{
   // Create a ROOT native GUI version of TControlBarImp

   return new TRootControlBar(c, title, x, y);
}
