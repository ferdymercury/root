//*CMZ :  2.23/12 26/01/2000  10.08.58  by  Rene Brun
//*CMZ :  2.23/02 02/09/99  15.39.27  by  Rene Brun
//*CMZ :  2.22/01 11/04/99  20.53.25  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/00 22/02/98  18.01.40  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.00/06 23/03/97  11.52.02  by  Rene Brun
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

#include "TWin32SimpleEditCtrl.h"

///////////////////////////////////////////////////////////////
//                                                           //
// TWin32SimpleEditCtrl                                      //
//                                                           //
// Performs TVirtualX::RequestString  function under Win32        //
//                                                           //
//                                                           //
///////////////////////////////////////////////////////////////


// ClassImp(TWin32SimpleEditCtrl)


//______________________________________________________________________________
TWin32SimpleEditCtrl::TWin32SimpleEditCtrl(TGWin32WindowsObject *winobj, char *text,Int_t lTitle, Float_t x,Float_t y, Float_t width, Float_t height, char *type, UInt_t style)
{
//  Create a control object for the winobj object.
        // The postion and the size of the control are defined in the relative units in the 0-1 range
        // For example width =1 means the the size of the control is equal of the width
        // of the client area of the master windows object.

//*-*  Ensure that the common control DLL is loaded
  InitCommonControls();
  fEditBufferLength = lTitle;
  fhwndWindow  = 0;
  fWindowType  = type;
  fWindowStyle = style;
  fMasterWindow= winobj;

  if (fMasterWindow) {
//*-* define the size of the control
          SetXCtrl(x);
          SetYCtrl(y);
          SetWCtrl(width);
          SetHCtrl(height);

      Int_t xpos, ypos, h, w;
      MapToMasterWindow(&xpos, &ypos, &h, &w);

      fWindowStyle |=  WS_CHILD;
//*-*  Register this control with parent
      winobj->RegisterControlItem(this);
      if (!(fhwndWindow =
          CreateWindowEx(WS_EX_LEFT,
                       (LPCTSTR) fWindowType, // predefined class
                                        NULL, // no window title
                                fWindowStyle,
                            xpos, ypos, w, h,
                  fMasterWindow->GetWindow(), // parent window
                      (HMENU) GetCommandId(), // edit control ID
                (fMasterWindow->GetWin32ObjectMother())->GetWin32Instance(),
                NULL)))
          {
                int err = GetLastError();
                printf(" Last error was %d \n", err);
                Error("OnCreate","Can't create the WIN32 common control object");
                winobj->UnRegisterControlItem(this);
          }
          else
                  SetSubClass();

  }
}

//______________________________________________________________________________
TWin32SimpleEditCtrl::~TWin32SimpleEditCtrl()
{
  if (fhwndWindow) {DestroyWindow(fhwndWindow); fhwndWindow = 0;}
}

//______________________________________________________________________________
void   TWin32SimpleEditCtrl::MoveControl()
{
//*-*  Set the control to the new position
        Int_t xpos,ypos, h, w;
        MapToMasterWindow(&xpos, &ypos, &h, &w);
        MoveWindow(fhwndWindow,  // handle of window
                   xpos,         // horizontal position
                   ypos,         // vertical position
                   w,            // width
                   h,            // height
                   TRUE          // repaint flag
        );
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32SimpleEditCtrl::OnSubClassCtrl(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
        switch (uMsg)
        {
         case WM_CHAR:
             switch(wParam)
             {
                case 0x0A: // line feed
                case 0x0D: // carriage return
                case 0x1B: // escape
//*-*  Notify the parent window about these events too
                    SendMessage(fMasterWindow->GetWindow(),uMsg,wParam,lParam);
                    return 0;
                default:
                    break;
             }
        default:
                break;
        }
        return 0;
}

//______________________________________________________________________________
Char_t  *TWin32SimpleEditCtrl::GetText(char *receiveBuffer)
{
	if (!(fEditBufferLength && receiveBuffer) ) return 0;
	SendMessage(GetWindow(),WM_GETTEXT,(WPARAM)fEditBufferLength,
		                    (LPARAM)receiveBuffer);
	return receiveBuffer;
}
