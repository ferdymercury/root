//*CMZ :  2.23/02 02/09/99  15.54.29  by  Rene Brun
//*CMZ :  1.00/07 27/03/97  18.20.38  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   29/12/96

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWin32GLViewer                                                       //
//                                                                      //
// This class creates a main window with menubar, scrollbars and an     //
// openGL capable drawing area.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include "TWin32GLViewer.h"
#include "TROOT.h"
#include "TSeqCollection.h"
#include "TMap.h"
#include "TObjString.h"
#include "TError.h"



// TWin32GLViewer* TWin32GLViewer::fgCurrent = 0;

// ClassImp(TWin32GLViewer)

//______________________________________________________________________________
TWin32GLViewer::TWin32GLViewer( const char *title, UInt_t width, UInt_t height)
{
   // Create browser with a specified width and height.

   CreateViewer();

   CreateWindowsObject((TGWin32 *)gVirtualX,0,0,width,height);
//   W32_SetTitle(title && strlen(title) ? title : GetName());
   W32_SetTitle(title && strlen(title) ? title :"OpenGl Viewer");

   fMenu = new TWin32Menu("GLViewerMenu",title);

   MakeMenu();

   setDrawList(0);
}

//______________________________________________________________________________
TWin32GLViewer::TWin32GLViewer( const char *title, Int_t x, Int_t y,
                             UInt_t width, UInt_t height)
{
   // Create browser with a specified width and height and at position x, y.

   CreateViewer();

   CreateWindowsObject((TGWin32 *)gVirtualX,x,y,width,height);
//   W32_SetTitle(title && strlen(title) ? title : b->GetName());
   W32_SetTitle(title && strlen(title) ? title : "OpenGl Viewer");

   fMenu = new TWin32Menu("BrowserMenu",title);

   MakeMenu();

   setDrawList(0);
}

//______________________________________________________________________________
TWin32GLViewer::~TWin32GLViewer()
{
   // Win32 GLViewer destructor.


//*-* make the rendering context not current
   fgCurrent = 0;
   wglMakeCurrent (NULL, NULL) ;

//*-* delete the rendering context
   if (fhObjectGLRC) wglDeleteContext (fhObjectGLRC);


}

//______________________________________________________________________________
void TWin32GLViewer::CreateViewer()
{
   // Create the actual browser window.


//   static int dblBuf[] = {
//       GLX_DOUBLEBUFFER, GLX_RGBA, GLX_DEPTH_SIZE, 16,
//       GLX_RED_SIZE, 1, GLX_GREEN_SIZE, 1, GLX_BLUE_SIZE, 1,
//       None
//   };
//   static int *snglBuf = &dblBuf[1];

   Show();
   cout << "End of CreateWindow" << endl;
}


//______________________________________________________________________________
void TWin32GLViewer::MakeCurrent()
{
   cout << "MakeCurrent" << endl;

   fgCurrent = this;
   wglMakeCurrent(fObjectDC,fhObjectGLRC);
}


//______________________________________________________________________________
void TWin32GLViewer::SwapBuffers()
{
    ::SwapBuffers( fObjectDC );
//*-*   if ( ! glXIsDirect( fDpy, fCtx ) )   What is glXIsDirect for WIN32 ?
   {
       glFinish();
   }

/* for help debugging, report any OpenGL errors that occur per frame */
   GLenum error;
   while((error = glGetError()) != GL_NO_ERROR) {
       cout << "GL error: " << (char *) gluErrorString(error) << endl;
   }
}


//______________________________________________________________________________
void TWin32GLViewer::MakeMenu(){

#ifdef draft
Int_t iMenuLength = sizeof(fStaticMenuItems) / sizeof(fStaticMenuItems[0]);
Int_t i = 0;
TWin32Menu *PopUpMenu;

//*-*   Static data member to create menus for all canvases

 fStaticMenuItems  =  new TMenuItem *[kEndOfMenu+2];

 //*-*  simple  separator
 fStaticMenuItems[i++] = new                     TMenuItem(kSeparator);
 //*-*  Some other type of separators
 fStaticMenuItems[i++] = new                     TMenuItem(kMenuBreak);
 fStaticMenuItems[i++] = new                     TMenuItem(kMenuBarBreak);


//*-*  Main Canvas menu items
 Int_t iMainMenuStart = i;
 fStaticMenuItems[i++] = new TMenuItem("File","&File",MF_POPUP);
 fStaticMenuItems[i++] = new TMenuItem("Edit","&Edit",MF_POPUP);
 fStaticMenuItems[i++] = new TMenuItem("View","&View",MF_POPUP);
 Int_t iMainMenuEnd = i-1;


//*-*   Items for the File Menu

 Int_t iFileMenuStart = i;
 fStaticMenuItems[i++] = new TMenuItem("New","&New",NewCB);
 fStaticMenuItems[i++] = new TMenuItem("Open","&Open",OpenCB);
 fStaticMenuItems[i++] = new                     TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("Save","&Save",SaveCB);
 fStaticMenuItems[i++] = new TMenuItem("SaveAs","Save &As",SaveAsCB);
 fStaticMenuItems[i++] = new                                  TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("Print","&Print",PrintCB);
 fStaticMenuItems[i++] = new                                  TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("Close","&Close",CloseCB);
 Int_t iFileMenuEnd = i-1;


//*-*   Items for the Edit Menu

 Int_t iEditMenuStart = i;
 fStaticMenuItems[i++] = new TMenuItem("Cut","Cu&t",CutCB);
 fStaticMenuItems[i++] = new TMenuItem("Copy","&Copy",CopyCB);
 fStaticMenuItems[i++] = new TMenuItem("Paste","&Paste",PasteCB);
 fStaticMenuItems[i++] = new                                   TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("SelectAll","Select &All",SelectAllCB);
 fStaticMenuItems[i++] = new TMenuItem("InvertSelection","&Invert Selection",InvertSelectionCB);
 Int_t iEditMenuEnd = i-1;

//*-*   Items for the View

 Int_t iViewMenuStart = i;
 fStaticMenuItems[i++] = new TMenuItem("ToolBar","&Tool Bar",ToolBarCB);
 fStaticMenuItems[i++] = new TMenuItem("StatusBar","&Status Bar", StatusBarCB);
 fStaticMenuItems[i++] = new                                   TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("LargeIcons","&Large Icons",LargeIconsCB);
 fStaticMenuItems[i++] = new TMenuItem("SmallIcons","&Small Icons",SmallIconsCB);
 fStaticMenuItems[i++] = new TMenuItem("Details","&Details",DetailsCB);
 fStaticMenuItems[i++] = new                                   TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("ArrangeIcons","&Arrange Icons",MF_POPUP);
 fStaticMenuItems[i++] = new                                   TMenuItem(kSeparator);
 fStaticMenuItems[i++] = new TMenuItem("Refresh","&Refresh",RefreshCB);
 fStaticMenuItems[i++] = new TMenuItem("Options","&Options",MF_POPUP);
 Int_t iViewMenuEnd = i-1;

 Int_t iEndOfMenu =  i-1;

 iMenuLength = i;
//*-* Create full list of the items

 for (i=0;i<=iEndOfMenu;i++)
    RegisterMenuItem(fStaticMenuItems[i]);

//*-*  Create static menues (one times for all Canvas ctor)


//*-* File
   PopUpMenu = fStaticMenuItems[kMFile]->GetPopUpItem();
      for (i=iFileMenuStart;i<=iFileMenuEnd; i++)
        PopUpMenu->Add(fStaticMenuItems[i]);

//*-* Edit
   PopUpMenu = fStaticMenuItems[kMEdit]->GetPopUpItem();
     for (i=iEditMenuStart;i<=iEditMenuEnd; i++)
       PopUpMenu->Add(fStaticMenuItems[i]);

//*-* View
   PopUpMenu = fStaticMenuItems[kMView]->GetPopUpItem();
     for (i=iViewMenuStart;i<=iViewMenuEnd; i++)
       PopUpMenu->Add(fStaticMenuItems[i]);

//*-*  Create main menu
     for (i=iMainMenuStart;i<=iMainMenuEnd; i++)
       fMenu->Add(fStaticMenuItems[i]);

//*-*  Glue this menu onto the canvas window

   // W32_SetMenu(fMenu->GetMenuHandle());

#endif
}



//______________________________________________________________________________
void TWin32GLViewer::MakeStatusBar()
{
  // fStatusBar = new TGWin32StatusBar(this);
}

//______________________________________________________________________________
void TWin32GLViewer::MakeToolBar()
{
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnClose(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
//*-*    Message ID: WM_CLOSE
//                   ========
    CloseCB(this,NULL);
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnMouseButton(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  //    Message ID: WM_LBUTTONDOWN(UP) WM_MBUTTONDOWN(UP) WM_RBUTTONDOWN(UP)
  //                ================== ================== ==================
  //                WM_MOUSEMOVE
  //                ============
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnCreate(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
//*-* Create TreeView control child window;

//*-*  Create a toolbar that the user can customize and that has a tooltip
//*-*  associated with it.
//*-*  Check system error

    Float_t w = 1;
    SetWindow(hwnd);

//*-* create a rendering context

    fhObjectGLRC = wglCreateContext (fObjectDC);
    MakeCurrent();
    return 0;
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnPaint      (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
//    Message ID: WM_PAINT
//                ========
   PAINTSTRUCT Paint;
   HDC hdc = BeginPaint(hwnd, &Paint);
   TGLViewer::Draw();
   EndPaint(hwnd, &Paint);
   return 0;

//   return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnSysCommand(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_DESTROY
  //                =============
   printf(" TWin32Browser::OnSysCommand \n");
   return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


//______________________________________________________________________________
LRESULT APIENTRY TWin32GLViewer::OnSize     (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
//    Message ID: WM_SIZE
//                =======
//    cout <<" TWin32ControlBarImp::OnSize" << endl;
   Int_t nWidth  = LOWORD(lParam);  // width of client area
   Int_t nHeight = HIWORD(lParam);  // height of client area


   cout << "Resize" << endl;
   cout << "width " <<  nWidth << " height " <<  nHeight << endl;
   glViewport( 0, 0, (GLint) nWidth, (GLint)  nHeight );
   return 0;
}

//______________________________________________________________________________
void TWin32GLViewer::Iconify()
{
   // Iconify the browser.

   // TMenuWindow::Iconify();
}

//______________________________________________________________________________
void TWin32GLViewer::RootExec(const char *cmd)
{
   // Process ROOT commands.

   cout << "RootExec: " << cmd << endl;
}

//______________________________________________________________________________
void TWin32GLViewer::NewCB(TWin32GLViewer *obj, TVirtualMenuItem *item)
{
   // Static callback for menu item: New.

//   TWin32GLViewer *b = new TWin32GLViewer( "ROOT GLViewer" );
}

//______________________________________________________________________________
void TWin32GLViewer::SaveCB(TWin32GLViewer *obj, TVirtualMenuItem *item)
{
   // Static callback for menu item: Save.

   obj->RootExec("Exec Save");
}

//______________________________________________________________________________
void TWin32GLViewer::SaveAsCB(TWin32GLViewer *obj, TVirtualMenuItem *item)
{
   // Static callback for menu item: SaveAs.

   obj->RootExec("Exec Save As...");
}

//______________________________________________________________________________
void TWin32GLViewer::Show()
{
   // Show (i.e. popup) the browser.
}


//______________________________________________________________________________
void TWin32GLViewer::PrintCB(TWin32GLViewer *obj, TVirtualMenuItem *item)
{
   // Static callback for menu item: Print.

   obj->RootExec("Exec Print...");
}

//______________________________________________________________________________
void TWin32GLViewer::CloseCB(TWin32GLViewer *obj, TVirtualMenuItem *item)
{
   // Static callback for menu item: Close.


   // delete the TGLViewer
//   delete obj;
}
