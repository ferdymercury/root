//*CMZ :  2.22/01 11/04/99  20.49.43  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/11 22/08/98  10.07.35  by  Rene Brun
//*CMZ :  0.90/11 05/01/97  21.18.15  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   01/11/96

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
   Int_t  fEditBufferLength;  // the length of the input buffer

protected:

public:
   TWin32SimpleEditCtrl(){fhwndWindow=0;} //default ctor
   TWin32SimpleEditCtrl(TGWin32WindowsObject *winobj,Text_t *title, Int_t lTitle, Float_t x,Float_t y, Float_t width, Float_t  height, Text_t *type="EDIT", UInt_t style= WS_VISIBLE | ES_LEFT);
   virtual ~TWin32SimpleEditCtrl();  // default dtor
   virtual void             Add(TObject *obj, const char *name){; }
   virtual void             CreateAccessories(){ }                      // Create some extra things depends of the type of the control.
   virtual void             MoveControl();                               // Set the control to the new position
   virtual LRESULT APIENTRY OnNotify(LPARAM lParam){return 0;}           // CallBack function to manage the notify messages
   virtual LRESULT APIENTRY OnSubClassCtrl(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

   virtual UInt_t           GetItemObject(RECT *rpc){return 0;}          // returns the selected item lParam value and its position
   virtual Char_t          *GetText(Text_t *receiveBuffer);

//   ClassDef(TWin32SimpleEditCtrl,0)   // Basic Windows WIN32 common control class
};

#endif
