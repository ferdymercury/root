//*CMZ :  0.80/00 11/08/96  21.37.52  by  Fons Rademakers
//*-- Author :    Fons Rademakers   17/02/96

#ifndef ROOT_TMacGuiFactory
#define ROOT_TMacGuiFactory

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
// TMacGuiFactory                                                       //
//                                                                      //
// Factory for Macintosh GUI components.                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGuiFactory
#include "TGuiFactory.h"
#endif


class TMacGuiFactory : public TGuiFactory {

public:
   TMacGuiFactory() : TGuiFactory("MacOS", "MacOS GUI Factory") { }
   ~TMacGuiFactory() { }

   TApplicationImp *CreateApplicationImp(const char *classname, int *argc, char **argv, void *option, Int_t numOptions);

   TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, UInt_t width, UInt_t height);
   TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height);
   TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   TContextMenuImp *CreateContextMenuImp(TContextMenu *c, const char *name, const char *title);

   TControlBarImp *CreateControlBarImp(TControlBar *c, const char *name="", const char *title="");

   ClassDef(TMacGuiFactory,0)  //Factory for Macintosh GUI components
};

#endif
