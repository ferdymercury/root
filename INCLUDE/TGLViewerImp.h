//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.58.44  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  15.17.53  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   29/12/96

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TGLViewerImp
#define ROOT_TGLViewerImp

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGLViewerImp                                                         //
//                                                                      //
// Second ABC TGLViewerImp specifies Window system independent openGL   //
// interface. This class uses the GL includes and isn't passed to CINT  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "RTypes.h"
#endif
#ifndef ROOT_Buttons
#include "Buttons.h"
#endif

class TPadOpenGLView;

class TGLViewerImp  {

protected:

   UInt_t               fDrawList;      // GL list used to redraw the contents
   TPadOpenGLView      *fGLView;        // Pointer to Pad GL View object
   Bool_t               fPaint;         // Allows "Refresh" OpenGL window

public:
   enum {kStatusPopIn, kStatusNoBorders, kStatusOwn, kStatusPopOut};
   TGLViewerImp();
   TGLViewerImp(TPadOpenGLView *padview, const char *title="OpenGL Viewer", UInt_t width=400, UInt_t height=300);
   TGLViewerImp(TPadOpenGLView *padview, const char *title, Int_t x, Int_t y,UInt_t width, UInt_t height);

   virtual ~TGLViewerImp();

   virtual void   CreateContext() { }
   virtual void   CreateStatusBar(Int_t nparts=1);
   virtual void   CreateStatusBar(Int_t *parts, Int_t nparts=1);
   virtual void   DeleteContext() { }
   virtual void   DeleteView();
   virtual void   HandleInput(EEventType button, Int_t x, Int_t y);
   virtual void   MakeCurrent() { };
   virtual void   Paint(Option_t *opt="");

   virtual void   SetStatusText(const char *text, Int_t partidx=0,Int_t stype=0);
   virtual void   ShowStatusBar(Bool_t show = kTRUE);

   virtual void   SwapBuffers() { };

   virtual UInt_t GetDrawList() { return fDrawList; }
   virtual void   SetDrawList(UInt_t list) { fDrawList = list; }

   virtual void   Iconify() { };
   virtual void   Show() { };
   virtual void   Update() { fPaint = kTRUE; }

   // ClassDef(TGLViewerImp,0)  //ROOT OpenGL viewer implementation
};

inline void TGLViewerImp::CreateStatusBar(Int_t) { }
inline void TGLViewerImp::CreateStatusBar(Int_t *, Int_t) { }
inline void TGLViewerImp::SetStatusText(const char *, Int_t, Int_t) { }
inline void TGLViewerImp::ShowStatusBar(Bool_t) { }

#endif
