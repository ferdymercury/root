//*CMZ :  2.23/12 26/01/2000  11.59.55  by  Rene Brun
//*CMZ :  2.23/03 25/09/99  20.16.34  by  Fons Rademakers
//*CMZ :  2.21/08 10/03/99  19.27.23  by  Fons Rademakers
//*CMZ :  2.20/05 14/12/98  15.17.01  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  15.22.45  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/01/98

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

#ifndef ROOT_TRootCanvas
#define ROOT_TRootCanvas

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootCanvas                                                          //
//                                                                      //
// This class creates a main window with menubar, scrollbars and a      //
// drawing area. The widgets used are the new native ROOT GUI widgets.  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCanvasImp
#include "TCanvasImp.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TGCanvas;
class TGMenuBar;
class TGPopupMenu;
class TGLayoutHints;
class TGStatusBar;


class TRootCanvas : public TGMainFrame, public TCanvasImp {

friend class TRootContainer;

private:
   TGCanvas            *fCanvasWindow;       // canvas widget
   TRootContainer      *fCanvasContainer;    // container in canvas widget
   TGMenuBar           *fMenuBar;            // menubar
   TGPopupMenu         *fFileMenu;           // file menu
   TGPopupMenu         *fEditMenu;           // edit menu
   TGPopupMenu         *fViewMenu;           // view menu
   TGPopupMenu         *fOptionMenu;         // option menu
   TGPopupMenu         *fInspectMenu;        // inspect menu
   TGPopupMenu         *fClassesMenu;        // classes menu
   TGPopupMenu         *fHelpMenu;           // help menu
   TGLayoutHints       *fMenuBarLayout;      // menubar layout hints
   TGLayoutHints       *fMenuBarItemLayout;  // layout hints for menu in menubar
   TGLayoutHints       *fMenuBarHelpLayout;  // layout hint for help menu in menubar
   TGLayoutHints       *fCanvasLayout;       // layout for canvas widget
   TGStatusBar         *fStatusBar;          // statusbar widget
   TGLayoutHints       *fStatusBarLayout;    // layout hints for statusbar
   //TGToolBar           *fToolBar;            // icon button toolbar

   Int_t                fCanvasID;   // index in fWindows array of TGX11
   Bool_t               fAutoFit;    // when true canvas container keeps same size as canvas
   UInt_t               fCwidth;     // width of canvas container
   UInt_t               fCheight;    // height of canvas container
   Int_t                fButton;     // currently pressed button

   void     CreateCanvas(const char *name);

   Bool_t   HandleContainerButton(Event_t *ev);
   Bool_t   HandleContainerDoubleClick(Event_t *ev);
   Bool_t   HandleContainerConfigure(Event_t *ev);
   Bool_t   HandleContainerKey(Event_t *ev);
   Bool_t   HandleContainerMotion(Event_t *ev);
   Bool_t   HandleContainerExpose(Event_t *ev);
   Bool_t   HandleContainerCrossing(Event_t *ev);

public:
   TRootCanvas(TCanvas *c, const char *name, UInt_t width, UInt_t height);
   TRootCanvas(TCanvas *c, const char *name, Int_t x, Int_t y, UInt_t width, UInt_t height);
   virtual ~TRootCanvas();

   void     ForceUpdate() { Layout(); }
   void     FitCanvas();
   void     GetWindowGeometry(Int_t &x, Int_t &y, UInt_t &w, UInt_t &h);
   UInt_t   GetCwidth() const;
   UInt_t   GetCheight() const;
   void     Iconify() { IconifyWindow(); }
   Int_t    InitWindow();
   void     SetWindowPosition(Int_t x, Int_t y);
   void     SetWindowSize(UInt_t w, UInt_t h);
   void     SetWindowTitle(const char *newTitle);
   void     SetCanvasSize(UInt_t w, UInt_t h);
   void     SetStatusText(const char *txt = 0, Int_t partidx = 0);
   void     ShowMenuBar(Bool_t show = kTRUE);
   void     ShowStatusBar(Bool_t show = kTRUE);
   void     Show() { MapRaised(); }

   // overridden from TGMainFrame
   void     CloseWindow();
   Bool_t   ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   ClassDef(TRootCanvas,0)  //ROOT native GUI version of main window with menubar and drawing area
};

#endif
