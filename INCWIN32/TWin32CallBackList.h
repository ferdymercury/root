//*CMZ :  2.24/03 29/04/2000  23.42.00  by  Rene Brun
//*CMZ :  1.00/05 20/03/97  15.14.53  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
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

#ifndef ROOT_TWin32CallBackList
#define ROOT_TWin32CallBackList

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TWin32CallBackList                                                   //
//                                                                      //
// This class is to define a list of CALLBACK functions for Win32 GUI   //
// to implement WIN32 components.                                       //
//                                                                      //
//   1. To set Window procedure on the particular "Event Message"       //
//                                                                      //
//      WindowEventsObject[uMsg] = (WNDPROC *) EventProc                //
//                                                                      //
//      where                                                           //
//         WindowEventsObject - is an object belonged                   //
//                              to "TWin32CallBackList" class           //
//         uMsg               - Event number                            //
//                                                                      //
//                                                                      //
//   2. To perforn the appropiated acrion on the "uMsg" event just type //
//                                                                      //
//      WindowEvent(hwnd, uMsg, wParam, lParam)                         //
//                                                                      //
//                                                                      //
//      This will call either EventProc or DefWindowProc if EventProc   //
//      does not exist for the present "uMsg"                           //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "WINDOWS4ROOT.h"
#include "TLIST.h"

typedef LRESULT (CALLBACK  *CallBack_t)();

class TCallBackObject;
class TGWin32Object;

class TWin32CallBackList : public TList {

private:

  UINT           fDefIdx;

public:

  TWin32CallBackList(UINT Idx=0,CallBack_t DefProc=(CallBack_t)DefWindowProc);
  LRESULT          operator()(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);   // Call Callback

//  TCallBackObject& operator[](UINT i);           // Left side
//  TCallBackObject& operator[](UINT i) const;     // Right side
  void AddCallBack(UINT uMsg, CallBack_t func, TGWin32Object *father); //This must be replace with [] operator

  // ClassDef(TWin32CallBackList,0)
};


class TCallBackObject : public TObject {

  friend class TWin32CallBackList;

private:

  UINT             fMessage;
  CallBack_t       fWinProc;
  TGWin32Object   *fFather; // Pointer to object where this list is refered to

  WPARAM           fDefaultWParam;
  LPARAM           fDefaultLParam;
  LRESULT          fDefaulLResult;


public:

//   TCallBackObject();
  TCallBackObject(UINT Msg = 0, CallBack_t WinProc = (CallBack_t)DefWindowProc, TGWin32Object *father = 0);
 //  TCallBackObject *&operator=(CallBack_t winproc){SetWindowProc(winproc); return NULL;} // Set new callback function
  void SetMessage(UINT message){ fMessage = message;}
  UINT TakeMessage(){return fMessage;}
  void SetWindowProc(CallBack_t winproc){ fWinProc = winproc; }
  CallBack_t TakeWindowProc(){return fWinProc;}
  TGWin32Object *GetFather(){return fFather;}
  void SetFather(TGWin32Object *father){fFather = father;}

  // ClassDef(TCallBackObject,0)

};

#endif
