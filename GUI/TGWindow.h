//*CMZ :  2.00/13 28/10/98  11.14.52  by  Fons Rademakers
//*CMZ :  2.00/00 12/02/98  16.34.19  by  Fons Rademakers
//*-- Author :    Fons Rademakers   27/12/97

#ifndef ROOT_TGWindow
#define ROOT_TGWindow

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
#ifndef ROOT_TGXW
#include "TGXW.h"
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

   void MapWindow() { gGXW->MapWindow(fId); }
   void MapSubwindows() { gGXW->MapSubwindows(fId); }
   void MapRaised() { gGXW->MapRaised(fId); }
   void UnmapWindow() { gGXW->UnmapWindow(fId); }
   void DestroyWindow() { gGXW->DestroyWindow(fId); }
   void RaiseWindow() { gGXW->RaiseWindow(fId); }
   void LowerWindow() { gGXW->LowerWindow(fId); }
   void SetBackgroundColor(ULong_t color)
        { gGXW->SetWindowBackground(fId, color); }
   void SetBackgroundPixmap(Pixmap_t pixmap)
        { gGXW->SetWindowBackgroundPixmap(fId, pixmap); }

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
