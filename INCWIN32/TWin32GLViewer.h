//*CMZ :  1.03/09 16/12/97  11.54.18  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   29/12/96

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

#ifndef ROOT_TWin32GLViewer
#define ROOT_TWin32GLViewer

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWin32GLViewer                                                       //
//                                                                      //
// This class creates a toplevel window with menubar, and an openGL     //
// drawing area and context.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef GL_RootGLU
#include "TGLViewer.h"
#endif

#ifndef GL_RootWGL
#include "TROOTWGL.h"
#endif

#ifndef GL_RootGLU
#include "TROOTGLU.h"
#endif

#ifndef ROOT_TGWin32WindowsObject
#include "TGWin32WindowsObject.h"
#endif

#ifndef ROOT_TWin32HookViaThread
#include "TWin32HookViaThread.h"
#endif

#ifndef ROOT_TContextMenu
#include "TContextMenu.h"
#endif

class TWin32GLViewer : public TGWin32WindowsObject, public TGLViewer {

private:
   HGLRC     fhObjectGLRC;             // Handle of the OpenGL rendering context;

protected:
   TWin32GLViewer() { };            // used by Dictionary()
   void CreateViewer();                // Create an OpenGL Viewer
   void MakeMenu();                    // Make the viewer menu
   void MakeStatusBar();
   void MakeToolBar();



public:
   TWin32GLViewer(const char *title, UInt_t width = 600, UInt_t height = 600);
   TWin32GLViewer(const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);

   virtual ~TWin32GLViewer();

   virtual void         MakeCurrent();
   virtual void         SwapBuffers();

   const char  *ClassName() const { return "TWin32GLViewer"; }

   virtual void         Iconify();
   virtual void         Show();


   LRESULT APIENTRY OnClose(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
   LRESULT APIENTRY OnCreate(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
   LRESULT APIENTRY OnMouseButton(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
   LRESULT APIENTRY OnPaint      (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
   LRESULT APIENTRY OnSysCommand(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
   LRESULT APIENTRY OnSize     (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

   void RootExec(const char *cmd);
   void NewCB(TWin32GLViewer *obj, TVirtualMenuItem *item);
   void SaveCB(TWin32GLViewer *obj, TVirtualMenuItem *item);
   void SaveAsCB(TWin32GLViewer *obj, TVirtualMenuItem *item);
   void PrintCB(TWin32GLViewer *obj, TVirtualMenuItem *item);
   void CloseCB(TWin32GLViewer *obj, TVirtualMenuItem *item);

//   ClassDef(TWin32GLViewer,0)  //Win32 version of the ROOT GLViewer

};

#endif
