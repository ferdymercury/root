//*CMZ :  2.23/04 11/10/99  03.01.16  by  Fons Rademakers
//*CMZ :  2.00/08 25/05/98  18.38.45  by  Fons Rademakers
//*CMZ :  1.03/01 06/06/97  11.51.34  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Rene Brun   11/12/95

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

//________________________________________________________________________
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWin32GuiFactory                                                     //
//                                                                      //
// This class is a factory for Win32 GUI components. It overrides       //
// the member functions of the ABS TGuiFactory.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TWin32GuiFactory.h"
#include "TWin32Canvas.h"
#include "TWin32Application.h"
#include "TWin32ContextMenuImp.h"
#include "TWin32ControlBarImp.h"
#include "TWin32BrowserImp.h"
#include "TWin32GLViewerImp.h"

ClassImp(TWin32GuiFactory)

//______________________________________________________________________________
TWin32GuiFactory::TWin32GuiFactory(const char *name, const char *title)
   : TGuiFactory(name, title)
{
   // TWin32GuiFactory ctor.
}

//______________________________________________________________________________
   TApplicationImp *TWin32GuiFactory::CreateApplicationImp(const char *classname, int *argc, char **argv, void *option, Int_t numOptions)
{
   return new TWin32Application(classname,argc,argv, option, numOptions);
}

//______________________________________________________________________________
TCanvasImp *TWin32GuiFactory::CreateCanvasImp(TCanvas *c, const char *title, UInt_t width, UInt_t height)
{
   // Create a Win32 version of TCanvasImp

   return new TWin32Canvas(c, title, width, height);
}

//______________________________________________________________________________
TCanvasImp *TWin32GuiFactory::CreateCanvasImp(TCanvas *c, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   // Create a Win32 version of TCanvasImp

   return new TWin32Canvas(c, title, x, y, width, height);
}

//______________________________________________________________________________
TBrowserImp *TWin32GuiFactory::CreateBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height)
{
   return new TWin32BrowserImp(b,title,width, height);
}

//______________________________________________________________________________
TBrowserImp *TWin32GuiFactory::CreateBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
{
   return new TWin32BrowserImp(b,title,x,y,width, height);
}

//______________________________________________________________________________
TContextMenuImp *TWin32GuiFactory::CreateContextMenuImp( TContextMenu *c, const char *name, const char *title )
{
   return new TWin32ContextMenuImp(c);
}

//______________________________________________________________________________
TControlBarImp *TWin32GuiFactory::CreateControlBarImp( TControlBar *c, const char *title )
{
  return new TWin32ControlBarImp(c);
}

//______________________________________________________________________________
TControlBarImp *TWin32GuiFactory::CreateControlBarImp( TControlBar *c, const char *title, Int_t x, Int_t y )
{
   return new TWin32ControlBarImp(c, x, y);
}

