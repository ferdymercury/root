//*CMZ :  2.23/03 25/09/99  20.12.52  by  Fons Rademakers
//*CMZ :  2.23/02 02/09/99  15.54.27  by  Rene Brun
//*CMZ :  2.00/13 28/10/98  11.14.52  by  Fons Rademakers
//*CMZ :  2.00/00 12/02/98  16.34.19  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97

#ifndef ROOT_TGWindow
#define ROOT_TGWindow

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGWindow                                                             //
//                                                                      //
// ROOT GUI Window base class.                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGObject
#include "TGObject.h"
#endif
#ifndef ROOT_TGClient
#include "TGClient.h"
#endif
#ifndef ROOT_TVirtualX
#include "TVirtualX.h"
#endif


class TGWindow : public TGObject {

friend class TGClient;
friend class TTimer;

protected:
   const TGWindow   *fParent;         // Parent window
   Bool_t            fNeedRedraw;     // kTRUE if window needs to be redrawn

   TGWindow(Window_t id) : fNeedRedraw(kFALSE) { fClient = 0; fId = id; }

   virtual void DoRedraw() { }
   virtual const TGWindow *GetMainFrame() const
      { return (fParent == fClient->GetRoot()) ? this : fParent->GetMainFrame(); }

public:
   TGWindow(const TGWindow *p, Int_t x, Int_t y,
            UInt_t w, UInt_t h, UInt_t border = 0,
            Int_t depth = 0,
            UInt_t clss = 0,
            void *visual = 0,
            SetWindowAttributes_t *attr = 0);
   TGWindow(TGClient *c, Window_t id, const TGWindow *parent = 0);

   virtual ~TGWindow();

   const TGWindow *GetParent() const { return fParent; }

   void MapWindow() { gVirtualX->MapWindow(fId); }
   void MapSubwindows() { gVirtualX->MapSubwindows(fId); }
   void MapRaised() { gVirtualX->MapRaised(fId); }
   void UnmapWindow() { gVirtualX->UnmapWindow(fId); }
   void DestroyWindow() { gVirtualX->DestroyWindow(fId); }
   void RaiseWindow() { gVirtualX->RaiseWindow(fId); }
   void LowerWindow() { gVirtualX->LowerWindow(fId); }
   void IconifyWindow() { gVirtualX->IconifyWindow(fId); }
   void SetBackgroundColor(ULong_t color)
        { gVirtualX->SetWindowBackground(fId, color); }
   void SetBackgroundPixmap(Pixmap_t pixmap)
        { gVirtualX->SetWindowBackgroundPixmap(fId, pixmap); }

   virtual Bool_t HandleExpose(Event_t *event)
        { if (event->fCount == 0) fClient->NeedRedraw(this); return kTRUE; }
   virtual Bool_t HandleEvent(Event_t *) { return kFALSE; }
   virtual Bool_t HandleTimer(TTimer *) { return kFALSE; }
   virtual void   Move(Int_t x, Int_t y);
   virtual void   Resize(UInt_t w, UInt_t h);
   virtual void   MoveResize(Int_t x, Int_t y, UInt_t w, UInt_t h);
   virtual Bool_t IsMapped();

   ClassDef(TGWindow,0)  // GUI Window base class
};

#endif
