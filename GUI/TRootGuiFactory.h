//*CMZ :  2.00/08 25/05/98  18.46.45  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  18.08.53  by  Fons Rademakers
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

#ifndef ROOT_TRootGuiFactory
#define ROOT_TRootGuiFactory

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootGuiFactory                                                      //
//                                                                      //
// This class is a factory for ROOT GUI components. It overrides        //
// the member functions of the ABS TGuiFactory.                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGuiFactory
#include "TGuiFactory.h"
#endif

class TApplicationImp;
class TCanvasImp;
class TBrowserImp;
class TContextMenuImp;
class TContextMenu;
class TControlBarImp;
class TControlBar;


class TRootGuiFactory : public TGuiFactory {

public:
   TRootGuiFactory(const char *name = "Root", const char *title = "ROOT GUI Factory");
   ~TRootGuiFactory() { }

   TApplicationImp *CreateApplicationImp(const char *classname, int *argc, char **argv, void *option, Int_t numOptions);

   TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, UInt_t width, UInt_t height);
   TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height);
   TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   TContextMenuImp *CreateContextMenuImp(TContextMenu *c, const char *name, const char *title);

   TControlBarImp *CreateControlBarImp(TControlBar *c, const char *title);
   TControlBarImp *CreateControlBarImp(TControlBar *c, const char *title, Int_t x, Int_t y);

   ClassDef(TRootGuiFactory,0)  //Factory for ROOT GUI components
};

#endif
