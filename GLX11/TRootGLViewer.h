//*CMZ :  2.00/00 08/02/99  14.42.15  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/03/98

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

#ifndef ROOT_TRootGLViewer
#define ROOT_TRootGLViewer

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootGLViewer                                                        //
//                                                                      //
// This class creates a toplevel window with menubar, and an OpenGL     //
// drawing area and context using the ROOT native GUI.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGLViewerImp
#include "TGLViewerImp.h"
#endif
#ifndef GL_RootGLU
#include "TRootGLU.h"
#endif
#ifndef GL_RootGLX
#include "TRootGLX.h"
#endif

class TGCanvas;
class TGMenuBar;
class TGPopupMenu;
class TGLayoutHints;


class TRootGLViewer : public TGMainFrame, public TGLViewerImp {

friend class TGLContainer;

private:
   TGCanvas       *fCanvasWindow;       // canvas widget
   TGLContainer   *fCanvasContainer;    // container in canvas widget
   TGMenuBar      *fMenuBar;            // menubar
   TGPopupMenu    *fFileMenu;           // file menu
   TGPopupMenu    *fHelpMenu;           // help menu
   TGLayoutHints  *fMenuBarLayout;      // menubar layout hints
   TGLayoutHints  *fMenuBarItemLayout;  // layout hints for menu in menubar
   TGLayoutHints  *fMenuBarHelpLayout;  // layout hint for help menu in menubar
   TGLayoutHints  *fCanvasLayout;       // layout for canvas widget

   Display        *fDpy;        // X Display
   XVisualInfo    *fVisInfo;    // X visual info
   GLXContext      fCtx;        // GLx context
   Window          fGLWin;      // GLx window
   Int_t           fButton;     // Currently pressed button

   void     CreateViewer(const char *name);
   void     InitGLWindow();
   void     DeleteGLWindow();

   Bool_t   HandleContainerButton(Event_t *ev);
   Bool_t   HandleContainerConfigure(Event_t *ev);
   Bool_t   HandleContainerKey(Event_t *ev);
   Bool_t   HandleContainerMotion(Event_t *ev);
   Bool_t   HandleContainerExpose(Event_t *ev);

public:
   TRootGLViewer(TPadOpenGLView *pad, const char *title="OpenGL Viewer", UInt_t width = 600, UInt_t height = 600);
   TRootGLViewer(TPadOpenGLView *pad, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);
   virtual ~TRootGLViewer();

   void  CreateContext();
   void  DeleteContext();

   void  MakeCurrent();
   void  SwapBuffers();

   void  Iconify() { }
   void  Show() { MapRaised(); }
   void  Update() { TGLViewerImp::Paint(); }

   // overridden from TGMainFrame
   void     CloseWindow();
   Bool_t   ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   //ClassDef(TRootGLViewer,0)  //ROOT native GUI version of the GLViewer
};

#endif
