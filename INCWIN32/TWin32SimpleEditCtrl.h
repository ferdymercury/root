//*CMZ :  2.00/11 22/08/98  10.07.35  by  Rene Brun
//*CMZ :  0.90/11 05/01/97  21.18.15  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   01/11/96

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

#ifndef ROOT_TWin32SimpleEditCtrl
#define ROOT_TWin32SimpleEditCtrl

////////////////////////////////////////////////////////
//                                                    //
// TWin32SimpleEditCtrl                               //
//                                                    //
// class to use WIN32 common controls                 //
//                 for TGWin32WindowsObject objects   //
//                                                    //
//                                                    //
////////////////////////////////////////////////////////

#include "TWin32CommCtrl.h"

class TWin32SimpleEditCtrl : public TWin32CommCtrl {

private:


protected:

public:
   TWin32SimpleEditCtrl(){fhwndWindow=0;} //default ctor
   TWin32SimpleEditCtrl(TGWin32WindowsObject *winobj,Text_t *title, Float_t x,Float_t y, Float_t width, Float_t  height, Text_t *type="EDIT", UInt_t style= WS_VISIBLE | ES_LEFT);
   virtual ~TWin32SimpleEditCtrl();  // default dtor
   virtual void             Add(TObject *obj, const char *name){; }
   virtual void             CreateAccessories(){ }                      // Create some extra things depends of the type of the control.
   virtual void             MoveControl();                               // Set the control to the new position
   virtual LRESULT APIENTRY OnNotify(LPARAM lParam){return 0;}           // CallBack function to manage the notify messages
   virtual LRESULT APIENTRY OnSubClassCtrl(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

   virtual UInt_t           GetItemObject(RECT *rpc){return 0;}          // returns the selected item lParam value and its position

//   ClassDef(TWin32SimpleEditCtrl,0)   // Basic Windows WIN32 common control class
};

#endif
