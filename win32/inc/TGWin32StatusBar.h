//*CMZ :  2.23/07 24/10/99  18.27.34  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/01 31/07/97  11.45.02  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   26/08/96

// This class generates an object to draw the status bar for Win32WindowsObject

#ifndef ROOT_TGWin32StatusBar
#define ROOT_TGWin32StatusBar

#include "RTypes.h"
#include "Windows4Root.h"

#include <commctrl.h>

class TGWin32WindowsObject;

class TGWin32StatusBar {
private:
        TGWin32WindowsObject *fParent;       // pointer to the parent object
        HWND                  fhwndWindow;   // The handle of the status bar window
        Int_t                 fnParts;       // The number of the status bar parts
        Int_t                *fParts;        // Array to hold the size of the status bar parts
        Bool_t                fIsVisible;    // Flag whether this control is visible
protected:
        void  DoCreateStatusWindow();

public:

TGWin32StatusBar(){ fnParts = -1; fParts = 0;InitCommonControls();}  // Default ctor
TGWin32StatusBar(TGWin32WindowsObject *win, Int_t nParts =1 );
TGWin32StatusBar(TGWin32WindowsObject *win, Int_t *Parts, Int_t nParts=1);
virtual ~TGWin32StatusBar();

 void  Draw();
 HWND  GetWindow(){return fhwndWindow;};
 Int_t GetHeight();
 void  Hide(){ if (fhwndWindow) ShowWindow(fhwndWindow,SW_HIDE); fIsVisible = kFALSE;}
 Bool_t IsVisible(){return fIsVisible;}
 void  OnSize();
 void  SetFont();
 void  SetHeight(Int_t h);                // Set the height of the status bar
 void  SetStatusParts(TGWin32WindowsObject *win, Int_t nParts =1 );
 void  SetStatusParts(TGWin32WindowsObject *win, Int_t *Parts, Int_t nParts=1);
 void  SetText(const Text_t *text, Int_t npart = 0, Int_t stype = 0);  // Draw the text into the 'npart' part of the status bar
 void  Show(){if (fhwndWindow)ShowWindow(fhwndWindow,SW_SHOW); fIsVisible = kTRUE;}

};
#endif

