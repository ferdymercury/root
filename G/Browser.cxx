//*CMZ :  2.21/07 01/03/99  09.06.46  by  Rene Brun
//*CMZ :  2.00/13 27/10/98  18.48.47  by  Fons Rademakers
//*CMZ :  2.00/12 01/10/98  12.09.26  by  Rene Brun
//*CMZ :  2.00/00 07/03/98  18.25.03  by  Fons Rademakers
//*CMZ :  1.00/06 23/03/97  11.17.19  by  Rene Brun
//*-- Author :    Fons Rademakers   25/10/95

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Using a TBrowser one can browse all ROOT objects. It shows in a list //
// on the left side of the window all browsable ROOT classes. Selecting //
// one of the classes displays, in the iconbox on the right side, all   //
// objects in the class. Selecting one of the objects in the iconbox,   //
// will place all browsable objects in a new list and draws the         //
// contents of the selected class in the iconbox. And so on....         //
//                                                                      //
//Begin_Html <img src="gif/browser.gif"> End_Html                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TBrowser.h"
#include "TGuiFactory.h"
#include "TContextMenu.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TStyle.h"
#include "TTimer.h"


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TBrowserTimer                                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TBrowserTimer : public TTimer {

protected:
   TBrowser *fBrowser;
   Bool_t    fActivate;

public:
   TBrowserTimer(TBrowser *b, Long_t ms = 1000)
      : TTimer(ms, kTRUE), fBrowser(b), fActivate(kFALSE) { }
   Bool_t Notify();
};



ClassImp(TBrowser)

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, const char *title)
   : TNamed(name, title)
{
   // Create a new browser with a name, title. Width and height are by
   // default set to 640x400 and (optionally) adjusted by the screen factor
   // (depending on Rint.Canvas.UseScreenFactor to be true or false, default
   // is true).

   Float_t cx = gStyle->GetScreenFactor();
   UInt_t w = UInt_t(cx*640);
   UInt_t h = UInt_t(cx*400);

   fImp = gGuiFactory->CreateBrowserImp(this, title, w, h);
   Create();
}

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, const char *title, UInt_t width, UInt_t height)
   : TNamed(name, title)
{
   // Create a new browser with a name, title, width and height.

   fImp = gGuiFactory->CreateBrowserImp(this, title, width, height);
   Create();
}

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
   : TNamed(name, title)
{
   // Create a new browser with a name, title, position, width and height.

   fImp = gGuiFactory->CreateBrowserImp(this, title, x, y, width, height);
   Create();
}

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, TObject *obj, const char *title)
   : TNamed(name, title)
{
   // Create a new browser with a name, title, width and height for TObject *obj.

   Float_t cx = gStyle->GetScreenFactor();
   UInt_t w = UInt_t(cx*640);
   UInt_t h = UInt_t(cx*400);

   fImp = gGuiFactory->CreateBrowserImp(this, title, w, h);
   Create(obj);
}

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, TObject *obj, const char *title, UInt_t width, UInt_t height)
   : TNamed(name, title)
{
   // Create a new browser with a name, title, width and height for TObject *obj.

   fImp = gGuiFactory->CreateBrowserImp(this, title, width, height);
   Create(obj);
}

//______________________________________________________________________________
TBrowser::TBrowser(const char *name, TObject *obj, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height)
   : TNamed(name, title)
{
   // Create a new browser with a name, title, width and height for TObject *obj.

   fImp = gGuiFactory->CreateBrowserImp(this, title, x, y, width, height);
   Create(obj);
}
//______________________________________________________________________________
TBrowser::~TBrowser()
{
   // Delete the browser.

   gROOT->GetListOfBrowsers()->Remove(this);
   if (fContextMenu) { delete fContextMenu; fContextMenu = 0; }
   if (fTimer) delete fTimer;
   delete fImp;
}

//______________________________________________________________________________
void TBrowser::Add(TObject *obj, const char *name)
{
   // Add object with name to browser. If name not set the objects GetName()
   // is used.

   if (obj && fImp) {
      fImp->Add(obj, name);
      obj->SetBit(kObjInCanvas);
   }
}

//______________________________________________________________________________
void TBrowser::Create(TObject *obj)
{
   // Create the browser, called by the ctors.

   fNeedRefresh = kFALSE;

   fTimer = new TBrowserTimer(this);
   if (fTimer) gSystem->AddTimer(fTimer);

   gROOT->GetListOfBrowsers()->Add(this);

   // Get the list of globals
   gROOT->GetListOfGlobals(kTRUE);
   gROOT->GetListOfGlobalFunctions(kTRUE);

   fContextMenu = new TContextMenu("BrowserContextMenu") ;

   // Fill the first list from the present TObject obj
   if (obj) {
      Add(obj);
#ifndef WIN32
      if (fImp) fImp->BrowseObj(obj);
#else
 //     obj->Browse(this);
#endif
   }
   // Fill the first list with all browsable classes from TROOT
#ifndef WIN32
   else if (fImp) fImp->BrowseObj(gROOT);
#else
   // The first list will be filled by TWin32BrowserImp ctor
   // with all browsable classes from TROOT
#endif
}

//______________________________________________________________________________
void TBrowser::ExecuteDefaultAction(TObject *obj)
{
   // Execute default action for selected object (action is specified
   // in the $HOME/.root.mimes or $ROOTSYS/icons/root.mimes file.

   if (obj && fImp)
      fImp->ExecuteDefaultAction(obj);
}


//______________________________________________________________________________
TObject *TBrowser::GetSelected()
{
 // return the last selected object
 return fLastSelectedObject;
}

//______________________________________________________________________________
void TBrowser::RecursiveRemove(TObject *obj)
{
   // Recursively remove obj from browser.

   if (fImp && obj) {
      fImp->RecursiveRemove(obj);
      fNeedRefresh = kTRUE;
   }
}

//______________________________________________________________________________
void TBrowser::Refresh()
{
   // Refresh browser contents.

   fNeedRefresh = kTRUE;
   if (fImp) fImp->Refresh();
   fNeedRefresh = kFALSE;
}

//______________________________________________________________________________
void TBrowser::SetSelected(TObject *clickedObject)
{
 // assign the last selected object
 fLastSelectedObject = clickedObject;
}

//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  TBrowserTimer                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
Bool_t TBrowserTimer::Notify()
{
   // Called whenever timer times out.

   if (fBrowser) {
      if (fBrowser->GetRefreshFlag()) {
         fBrowser->SetRefreshFlag(kFALSE);
         fActivate = kTRUE;
      } else if (fActivate) {
         fActivate = kFALSE;
         fBrowser->Refresh();
      }
   }
   Reset();

   return kFALSE;
}
