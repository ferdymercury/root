//*CMZ :  2.21/07 01/03/99  09.06.46  by  Rene Brun
//*CMZ :  2.00/00 07/03/98  18.27.46  by  Fons Rademakers
//*CMZ :  1.00/02 10/03/97  15.24.48  by  Nenad Buncic
//*-- Author :    Fons Rademakers   25/10/95

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

#ifndef ROOT_TBrowser
#define ROOT_TBrowser

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TBrowser                                                             //
//                                                                      //
// Using a TBrowser on can browse all ROOT objects. It shows in a list  //
// on the left side of the window all browsable ROOT classes. Selecting //
// one of the classes displays, in the iconbox on the right side, all   //
// objects in the class. Selecting one of the objects in the iconbox,   //
// will place all browsable objects in a new list and draws the         //
// contents of the selected class in the iconbox. And so on....         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif
#ifndef ROOT_TBrowserImp
#include "TBrowserImp.h"
#endif


class TContextMenu;
class TBrowserTimer;


class TBrowser : public TNamed {

private:
   TBrowserImp   *fImp;                //Window system specific browser implementation
   TBrowserTimer *fTimer;              //Browser's timer
   TObject       *fLastSelectedObject; //The last TObject selected by user

protected:
   TContextMenu  *fContextMenu;    //Context menu pointer
   Bool_t         fNeedRefresh;    //True if the browser needs refresh

public:
   TBrowser(const char *name="Browser", const char *title="ROOT Object Browser");
   TBrowser(const char *name, const char *title, UInt_t width, UInt_t height);
   TBrowser(const char *name, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);
   TBrowser(const char *name, TObject *obj, const char *title="ROOT Object Browser");
   TBrowser(const char *name, TObject *obj, const char *title, UInt_t width, UInt_t height);
   TBrowser(const char *name, TObject *obj, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);
   virtual ~TBrowser();

   void          Add(TObject *obj, const char *name = 0);
   void          Create(TObject *obj = 0);      // Create this Browser
   void          ExecuteDefaultAction(TObject *obj);
   TBrowserImp  *GetBrowserImp() const         { return fImp; }
   TContextMenu *GetContextMenu()              { return fContextMenu;}
   Bool_t        GetRefreshFlag()              { return fNeedRefresh; }
   TObject      *GetSelected();
   void          SetRefreshFlag(Bool_t flag)   { fNeedRefresh = flag; }
   void          Iconify()                     { fImp->Iconify(); }
   virtual void  RecursiveRemove(TObject *obj);
   void          Refresh();
   void          SetSelected(TObject *clickedObject);
   void          Show()                        { fImp->Show(); }

   ClassDef(TBrowser,0)  //ROOT Object Browser
};

#endif
