//*CMZ :  2.24/05 07/05/2000  16.41.13  by  Fons Rademakers
//*CMZ :  2.00/08 26/05/98  08.20.37  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  20.16.15  by  Fons Rademakers
//*CMZ :  1.01/05 06/06/97  10.40.57  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/11/95

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

#ifndef ROOT_TGuiFactory
#define ROOT_TGuiFactory

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

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TApplicationImp;
class TCanvasImp;
class TCanvas;
class TBrowserImp;
class TBrowser;
class TContextMenuImp;
class TContextMenu;
class TControlBarImp;
class TControlBar;
class TInspectorImp;


class TGuiFactory : public TNamed {

public:
   TGuiFactory(const char *name = "Batch", const char *title = "Batch GUI Factory");
   virtual ~TGuiFactory() { }

   virtual TApplicationImp *CreateApplicationImp(const char *classname, int *argc, char **argv, void *option, Int_t numOptions);

   virtual TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, UInt_t width, UInt_t height);
   virtual TCanvasImp *CreateCanvasImp(TCanvas *c, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   virtual TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height);
   virtual TBrowserImp *CreateBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   virtual TContextMenuImp *CreateContextMenuImp(TContextMenu *c, const char *name, const char *title);

   virtual TControlBarImp *CreateControlBarImp(TControlBar *c, const char *title);
   virtual TControlBarImp *CreateControlBarImp(TControlBar *c, const char *title, Int_t x, Int_t y);

   virtual TInspectorImp *CreateInspectorImp(const TObject *obj, UInt_t width, UInt_t height);

   ClassDef(TGuiFactory,0)  //Abstract factory for GUI components
};

R__EXTERN TGuiFactory *gGuiFactory;
R__EXTERN TGuiFactory *gBatchGuiFactory;

#endif
