//*CMZ :  0.80/01 16/08/96  17.29.41  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TWin32WindowABC
#define ROOT_TWin32WindowABC

#ifndef ROOT_Windows4Root
#include "WINDOWS4ROOT.h"
#endif

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//    TWin32WindowABC  is an abstract class to derive those need the Win32  //
//                     Windows objects (ControlBar, Canvas, Pad etc )       //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////


class TWin32WindowABC {

private:

  HWND fHwndWindow;   // Win32 Window HANDLE

public:

  TWin32WindowABC(): fHwndWindow(0){ ; }
  virtual ~TWin32WindowABC();
  virtual void CreateWin32Window() = 0;

  HWND GetWindowHandle(){ return fHwndWindow;}

};

#endif
