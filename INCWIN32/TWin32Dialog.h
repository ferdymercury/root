//*CMZ :  1.00/05 20/03/97  15.21.18  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

#ifndef ROOT_TWin32Dialog
#define ROOT_TWin32Dialog

#ifndef ROOT_TNamed
#include "TNAMED.h"
#endif

#include "TWin32CALLBACKLIST.h"

typedef struct {
       LPDLGTEMPLATE lpdt;
       LPWORD  lpw;
       LPDLGITEMTEMPLATE lpdit;
 } Dialog_t;

//*-* Following are the class atom values for predefined controls:

typedef enum {
    kWButton = 0x0080, kWEdit, kWStatic, kWList_box, kWScroll_bar, kWCombo_box
} EWinDialogControls;

BOOL CALLBACK OnInitDialog(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK DlgROOT(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class TWin32Dialog : public TNamed {

 private:

//*-*   Variable to establish the Dialog Box */

    Int_t   fLeftMargin;
    Int_t   fVertStep;
    Int_t   fyDefSize;

    UINT    fDialogResult;

//*-*  Work bariable to create a dialog template and dialog items

    LPWORD   fHgbl;
    Dialog_t fDlgPointers;

//*-*  The mother window

    HWND     fWindow;
    Int_t    fFirstItemID;


 TWin32CallBackList  fDialogCallBackList;



 public:

  TWin32Dialog();
  TWin32Dialog(HWND hwnd, char *name="ContextDialog", const char *title="Dialog", Int_t itemID=1000);
 ~TWin32Dialog();
  void AttachControlItem(LPPOINT lpPoint,LPSIZE lpSize,
                           DWORD lStyle,  DWORD lExtStyle,
                           char *lpszTitle,
                           WORD IdControl, EWinDialogControls wType);

  BOOL   CallCallback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
  void   Draw();
  Int_t  GetLeftMargin(){ return fLeftMargin;}
  Int_t  GetVertStep(){ return fVertStep;}
  Int_t  GetyDefSize(){ return fyDefSize;}
  Int_t  GetHeight(){return fDlgPointers.lpdt->cy;}
  Int_t  GetFirstID(){ return fFirstItemID;}
  Int_t  GetWidth(){return fDlgPointers.lpdt->cx;}
  HGLOBAL GetDlgTemplate(){ return fHgbl; }

  BOOL CALLBACK OnInitDialog(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
  BOOL CALLBACK OnCommand(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

  void   SetNumberOfControls(Int_t n){fDlgPointers.lpdt->cdit = n;}
  void   SetHeight(Int_t y){fDlgPointers.lpdt->cy = y;}
  void   SetWidth(Int_t x){fDlgPointers.lpdt->cx = x;}
  void   Win32CreateCallbacks();
  UINT   GetDialogResult(){return fDialogResult;}

  ClassDef(TWin32Dialog,0)
};
#endif
