//*CMZ :  2.00/08 26/05/98  10.27.16  by  Rene Brun
//*CMZ :  2.00/00 22/02/98  23.32.45  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  11.51.12  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine   26/02/96


#include "TWin32ControlBarImp.h"
#include "TControlBar.h"
#include "TControlBarButton.h"
#include "TGWin32Object.h"
#include "TApplication.h"
#include "TWin32Application.h"
#include "TROOT.h"

#include <commctrl.h>


ClassImp(TWin32ControlBarImp)


//______________________________________________________________________________
TWin32ControlBarImp::TWin32ControlBarImp(TControlBar *c, Int_t x, Int_t y) :
 TControlBarImp( c ){
//    fDialogFrame = 0;
   fXpos    = x;
   fYpos    = y;
   fHwndTB  = 0;
   fCreated = 0;
}

//______________________________________________________________________________
TWin32ControlBarImp::~TWin32ControlBarImp() {;}

//______________________________________________________________________________
void TWin32ControlBarImp::Create(){

//*-*  Launch DialogFrame thread

//  if (!fDialogFrame)
//        fDialogFrame = new TDialogFrame();

//*-* Create the parent window;
//    CreateWindowsObject((TGWin32 *)gGXW,x,y,w,h);
    if (fXpos == -999)
       CreateWindowsObject((TGWin32 *)gGXW,0,0,400,500);
    else
       CreateWindowsObject((TGWin32 *)gGXW,fXpos,fYpos,400,500);
    fCreated = 1;

}


//______________________________________________________________________________
void TWin32ControlBarImp::ExecThreadCB(TWin32SendClass *command){
   HWND msghwnd     = (HWND)  (command->GetData(0));
   UINT msguMsg     = (UINT)  (command->GetData(1));
   WPARAM msgwParam = (WPARAM)(command->GetData(2));
   LPARAM msglParam = (LPARAM)(command->GetData(3));
   delete (TWin32SendClass *)command;

//*-*  define the button instance
   Int_t wID = LOWORD(msgwParam);
   TControlBarButton *button = GetButton(wID);

//*-*  Define the current tiltle of the parent window
//*-*             and save  it
   HWND parentwindow =  GetWindow();
   Int_t buflen = GetWindowTextLength(parentwindow);
   LPTSTR lbuf = 0;
   if (buflen) {
      lbuf = (LPTSTR) malloc((buflen+2)*sizeof(PTSTR));
      GetWindowText(parentwindow,lbuf,buflen+1);
   }

//*-*  Set a new title according the new action
   SetWindowText(parentwindow,button->GetAction());

//*-*  Implement the desired action
   button->Action();

//*-*  Change the toolbar buttom state to show "Action has been done"
   if (SendMessage((HWND)msglParam, TB_ISBUTTONCHECKED, (WPARAM) wID, 0))
                PostMessage((HWND) msglParam, TB_CHECKBUTTON, (WPARAM) wID,
                (LPARAM) MAKELONG(FALSE, 0));
   if (buflen) {
       SetWindowText(parentwindow,lbuf);
       free(lbuf);
   }
   MessageBeep(MB_OK);
  // FlashWindow(parentwindow,TRUE):

}

//______________________________________________________________________________
TControlBarButton *TWin32ControlBarImp::GetButton(Int_t id){
//*-*-*-*-*-*-*-*-*-*-*-*-* GetButton *-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*  Looking for the button with the present id
//*-*  returns the pointer to the found TControlBarButton
//*-*    otherwise
//*-*  returns 0
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*  if (id <= 0) return 0;
  TIter next(fControlBar->GetListOfButtons());
  TControlBarButton *button =0;
  Int_t buttoncounter = 0;
  //*-* Looking for the button with the present "Id"
   while(button = (TControlBarButton *)next()) {
     if (button->GetType() == TControlBarButton::kButton)
        if (++buttoncounter == id)
              return button;
   }
   return 0;
}

//______________________________________________________________________________
void TWin32ControlBarImp::Hide(){ ; }

//______________________________________________________________________________
void TWin32ControlBarImp::Show(){
   if (!fCreated) Create();
   if(fHwndTB) ShowWindow(fHwndTB, SW_SHOW); }

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnClose(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //*-*    Message ID: WM_CLOSE
  //                =============
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnCommand(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_COMMAND
  //                =============
//    cout <<" TWin32ControlBarImp::OnCommand" << endl;
    Int_t wID = LOWORD(wParam);         // item, control, or accelerator identifier

//*-*  Check whether this button is still pressed
//*-*  The TB_GETSTATE message retrieves information about the state
//*-*  of the specified button in a toolbar
//*-*
//*-* Returns the button state information if successful or  - 1 otherwise

    if (SendMessage((HWND) lParam, TB_ISBUTTONCHECKED, (WPARAM) wID, 0))
    {

      TWin32SendClass *CodeOp = new TWin32SendClass(this,
              (UInt_t)hwnd,(UInt_t)uMsg,(UInt_t)wParam,(UInt_t)lParam);
      ExecCommandThread(CodeOp);
//      CodeOp.WaitClass();
//*-*  Change the toolbar buttom state
//      if (SendMessage((HWND) lParam, TB_ISBUTTONCHECKED, (WPARAM) wID, 0))
//                    PostMessage((HWND) lParam, TB_PRESSBUTTON, (WPARAM) wID, 0);
      return 0;
    }
    else
      return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnMouseButton(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_LBUTTONDOWN(UP) WM_MBUTTONDOWN(UP) WM_RBUTTONDOWN(UP)
  //                ================== ================== ==================
  //                WM_MOUSEMOVE
  //                ============
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnCreate(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
//*-* Create ToolBar control child window;

//*-*  Ensure that the common control DLL is loaed
    InitCommonControls();

//*-*  Create a toolbar that the user can customize and that has a tooltip
//*-*  associated with it.

    Int_t ID_TOOLBAR = 1;

    if (fHwndTB = CreateWindowEx(0,TOOLBARCLASSNAME, (LPSTR) NULL,
              WS_CHILD | TBSTYLE_TOOLTIPS | TBSTYLE_WRAPABLE | CCS_ADJUSTABLE ,
              CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, hwnd, (HMENU) ID_TOOLBAR,
              fWin32Mother->GetWin32Instance(),
              this)){


      SendMessage(fHwndTB, TB_BUTTONSTRUCTSIZE, (WPARAM) sizeof(TBBUTTON), 0);

//*-*  Add the bitmap containing button image to the toolbar.

      TBADDBITMAP tbab;
      tbab.hInst = HINST_COMMCTRL;
      tbab.nID   = IDB_STD_LARGE_COLOR;
      Int_t NUM_BUTTON_BITMAPS = 1;
      Int_t Bmp_Image_Idx = SendMessage(fHwndTB, TB_ADDBITMAP, (WPARAM) NUM_BUTTON_BITMAPS,
                                       (LPARAM) &tbab);

//*-*   Filling Windos NT toolbar datastructure

      TIter next(fControlBar->GetListOfButtons());
      TControlBarButton *button = 0;
      Int_t button_counter = 0;
      TBBUTTON tbb;
      Int_t NUM_BUTTONS = 1;

//      Int_t groupflag = TBSTYLE_CHECKGROUP;

      while(button = (TControlBarButton *)next()) {
        Int_t istridx;  // Index of the button string

    //*-* Add button string to the toolbar

        istridx = SendMessage(fHwndTB,TB_ADDSTRING, (WPARAM) 0, (LPARAM) (LPSTR) button->GetName());

    //*-*  Fill the TBBUTON array with button information, and add the buttons to the
    //*-*  toolbar

        tbb.iBitmap    = STD_PROPERTIES; // Bmp_Image_Idx;
        tbb.idCommand = ++button_counter;
        tbb.fsState = TBSTATE_ENABLED | TBSTATE_WRAP;
        tbb.fsStyle = TBSTYLE_CHECK;
        tbb.dwData = 0;
        tbb.iString = istridx;

//        groupflag = 0;

        SendMessage(fHwndTB,TB_ADDBUTTONS, (WPARAM) NUM_BUTTONS,
                                           (LPARAM) (LPTBBUTTON) &tbb);

#ifdef draft
   //*-*  Create separator. Separator allows adjust the size of the ToolBar

        tbb.iBitmap   = 0;
        tbb.idCommand = 0;
        tbb.fsState   = 0;
        tbb.fsStyle   = TBSTYLE_SEP;
        tbb.dwData    = 0;
        tbb.iString   = 0;

        SendMessage(fHwndTB,TB_ADDBUTTONS, (WPARAM) NUM_BUTTONS,
                                           (LPARAM) (LPTBBUTTON) &tbb);
#endif
     }

//*-*   Now we can determinate the initial size of the parent window

//*-*   Take number of buttons

     if (button_counter != fControlBar->GetListOfButtons()->GetSize())
            Error(" TWin32ControlBarImp::OnCreate","The number of the buttons is wrong");

//*-*   Take the number of columns


//*-*   Define the size of a button in the ToolBar

     SendMessage(fHwndTB,TB_GETITEMRECT,0,(WPARAM)&fButtonSize);

//*-*  Set the button size (It is supposed all buttons have the same size)

     fButtonSize.right  -= fButtonSize.left;
     fButtonSize.left    = 0;
     fButtonSize.bottom -= fButtonSize.top;
     fButtonSize.top     = 0;

#ifndef draft
 //*-*   Define the size of a button-separator in the ToolBar

     RECT separatorsize;
     SendMessage(fHwndTB,TB_GETITEMRECT,0,(WPARAM)&separatorsize);
#endif

  //*-*   Calculate the size of the window
     if (fControlBar->GetOrientation() == 1){
      fNumCol = fControlBar->GetNumberOfColumns();
      fNumRow = TMath::Max(1,TMath::Min(button_counter,(button_counter + fNumCol-1)/fNumCol));
     }
     else {
      fNumRow = fControlBar->GetNumberOfRows();
      fNumCol = TMath::Max(1,TMath::Min(button_counter,(button_counter + fNumRow-1)/fNumRow));
     }
//*-*  Re-size of the parent window
     fWin32WindowSize.left  = fNumCol*fButtonSize.right;
     fWin32WindowSize.bottom=fNumRow*fButtonSize.bottom+3;
     OnSize(hwnd,WM_SIZE,0,MAKELPARAM(fWin32WindowSize.left,fWin32WindowSize.bottom));

//*-*
//*-* Define the total size of the non-client area of the parent window
//*-*
     RECT windowsize;
     GetWindowRect(hwnd,&windowsize);

     fTotalXNCCDiff = windowsize.right  - windowsize.left;
     fTotalYNCCDiff = windowsize.bottom - windowsize.top;

     AdjustWindowRectEx(&windowsize,
                        GetWindowLong(hwnd,GWL_STYLE),
                        FALSE,
                        GetWindowLong(hwnd,GWL_EXSTYLE));

     fTotalXNCCDiff -= windowsize.right  - windowsize.left; // total size of the non-client area of the window
     fTotalXNCCDiff = -fTotalXNCCDiff;

     fTotalYNCCDiff -= windowsize.bottom - windowsize.top;
     fTotalYNCCDiff = -fTotalYNCCDiff;

//*-*  set window it its place

     OnExitSizeMove(hwnd,WM_EXITSIZEMOVE,0,0);  // Immitate ExitSizeMove event to set the right number of rows

     return 0;
    }   //  Create toolbar loop
    else {
      int err = GetLastError() ;
      Error(" TWin32ControlBarImp::OnCreate()", "Failed to Create Toolbar");
//      cout << "*** Last error code: " << err << endl;
     return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

}
//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnGetMinMaxInfo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
//*-*    Message ID: WM_GETMINMAXINFO
//*-*                ================
//*-* The WM_GETMINMAXINFO message is sent to a window when the size or position
//*-* of the window is about to change. An application can use this message to
//*-* override the window's default maximized size and position, or its default
//*-* minimum or maximum tracking size.
  LPMINMAXINFO lpmmi = (LPMINMAXINFO) lParam; // address of structure

//*-* Set minimum size of tne window to be equal to the simgle buttom size
  lpmmi->ptMinTrackSize.x = fButtonSize.right + fTotalXNCCDiff-1;
  return 0;
}
//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnNotify(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_NOTIFY
  //                =========
    switch (((LPNMHDR) lParam)->code){
        case TTN_NEEDTEXT:
          {
            LPTOOLTIPTEXT lpttt = (LPTOOLTIPTEXT) lParam;
            lpttt->hinst     = NULL;
            Int_t idButton  = lpttt->hdr.idFrom;
            lpttt->lpszText = "This is a hint";


            TIter next(fControlBar->GetListOfButtons());
            TControlBarButton *button = GetButton(idButton);
            if (button)
                   lpttt->lpszText = (char *) button->GetTitle();
            break;
          }
        default:
          return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
        return 0;
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnPaint      (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_PAINT
  //                =======
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnSize     (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
//    Message ID: WM_SIZE
//                =======
//    cout <<" TWin32ControlBarImp::OnSize" << endl;

    if (!fHwndTB) return DefWindowProc(hwnd, uMsg, wParam, lParam);

//*-* Adjust the size of the Control bar

    Int_t nWidth  = LOWORD(lParam);  // width of client area
    Int_t nHeight = HIWORD(lParam);  // height of client area

    Int_t ixdir = 0; // flag whether windows is being changing along x-direction
    if (nWidth > fWin32WindowSize.right)      ixdir = +1;
    else if (nWidth < fWin32WindowSize.right) ixdir = -1;

    Int_t iydir = 0; // flag whether windows is being changing along y-direction
    if (nHeight > fWin32WindowSize.bottom)      iydir = +1;
    else if (nHeight < fWin32WindowSize.bottom) iydir = -1;

//*-*  If both the size is being changed both directions
    if (ixdir*iydir != 0) //*-*  follows the "controlbar orientation"

    {
      if (fControlBar->GetOrientation() == 1) ixdir = 0;
      else iydir = 0;
    }
//*-* Define direction
    Int_t button_counter = fControlBar->GetListOfButtons()->GetSize();
    Int_t row = 0;
    Int_t col = 0;

    if (ixdir != 0) {
//*-* Change windows size in this direction
        nWidth = fWin32WindowSize.right + ixdir*fButtonSize.right;
        col = nWidth/fButtonSize.right;
        col = TMath::Max(1,TMath::Min(button_counter,col));
        row = TMath::Max(1,TMath::Min(button_counter,(button_counter + col-1)/col));
//*-* Check whether the number of the rows was affected and asjust the number of the cols
        if (row-fNumRow)
        {
            col = TMath::Max(1,TMath::Min(button_counter,(button_counter + row - 1)/row));
            fNumRow = row; fNumCol = col;
        }
    }
    else if (iydir != 0){
        nHeight = fWin32WindowSize.bottom + iydir*fButtonSize.bottom;
        row = nHeight/fButtonSize.bottom;
        row = TMath::Max(1,TMath::Min(button_counter,row));
        col = TMath::Max(1,TMath::Min(button_counter,(button_counter + row - 1)/row));
//*-* Check whether the number of the columns was affected and adjust the number of the  rows
        if (col-fNumCol)
        {
            row = TMath::Max(1,TMath::Min(button_counter,(button_counter + col-1)/col));
            fNumRow = row;
            fNumCol = col;
        }
    }

    fWin32WindowSize.right  = nWidth  = fNumCol*fButtonSize.right;
    fWin32WindowSize.bottom = nHeight = fNumRow*fButtonSize.bottom+3;
    fResizeFlag = kTRUE;

    return 0;
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnEraseBkgnd(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
//*-*    Message ID: WM_ERASEBKGND
//*-*                =============
    HDC hdc = (HDC) wParam; // handle of device context
    RECT rect;
    GetClientRect(hwnd,&rect);
    FillRect(hdc, &rect, (HBRUSH) (COLOR_BACKGROUND+1));
    return 1;
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnExitSizeMove(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
//*-*    Message ID: WM_EXITSIZEMOVE
//*-*                ===============
//    SetControlSize();
//    return 0;
//}

//______________________________________________________________________________/
//void TWin32ControlBarImp::SetControlSize()
//{
    if (!fResizeFlag)     return DefWindowProc(hwnd, uMsg, wParam, lParam);

    fResizeFlag = kFALSE;
//    SetWindowPos(hwnd,NULL, 0,0,
//                 fWin32WindowSize.right  +fTotalXNCCDiff,
//                 fWin32WindowSize.bottom+fTotalYNCCDiff,SWP_NOMOVE | SWP_NOZORDER );

    RECT rect;
    GetWindowRect(hwnd,&rect);

    MoveWindow(hwnd,rect.left,rect.top,
               fWin32WindowSize.right  +fTotalXNCCDiff,
               fWin32WindowSize.bottom+fTotalYNCCDiff,
               TRUE);

    SendMessage(fHwndTB,TB_SETROWS,MAKEWPARAM(fNumRow, TRUE),(LPARAM)&rect);
    return 0;
}


//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnSizing     (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
//*-*    Message ID: WM_SIZING
//*-*                =========
//*-* The WM_SIZING message is sent to a window that the user is resizing.
//*-* By processing this message, an application can monitor the size and
//*-* position of the drag rectangle and, if needed, change its size or
//*-* position.
//*-*
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnSysCommand(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_SYSCOMMAND
  //                =============
//    printf(" TWin32ControlBarImp::OnSysCommand \n");
    delete this;
    return 0;
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

//__________ ____________________________________________________________________
LRESULT APIENTRY TWin32ControlBarImp::OnRootInput(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
  //    Message ID: WM_USER+10 OnRootInput
  //                ==========
    printf(" TWin32ControlBarImp::OnRootInput \n");
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

