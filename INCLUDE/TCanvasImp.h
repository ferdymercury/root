//*CMZ :  2.23/12 26/01/2000  10.30.26  by  Rene Brun
//*CMZ :  2.00/13 29/10/98  15.14.01  by  Fons Rademakers
//*CMZ :  2.00/00 17/02/98  18.19.10  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  11.44.13  by  Fons Rademakers
//*-- Author :    Fons Rademakers   02/04/95

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

#ifndef ROOT_TCanvasImp
#define ROOT_TCanvasImp

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCanvasImp                                                           //
//                                                                      //
// ABC describing GUI independent main window (with menubar, scrollbars //
// and a drawing area).                                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TCanvas;


class TCanvasImp {

protected:
   TCanvas  *fCanvas;   //TCanvas associated with this implementation

public:
   TCanvasImp(TCanvas *c=0) : fCanvas(c) { }
   TCanvasImp(TCanvas *c, const char *name, UInt_t width, UInt_t height);
   TCanvasImp(TCanvas *c, const char *name, Int_t x, Int_t y, UInt_t width, UInt_t height);
   virtual ~TCanvasImp() { }

   TCanvas       *Canvas() const { return fCanvas; }
   virtual void   ForceUpdate() { }
   virtual void   GetWindowGeometry(Int_t &x, Int_t &y, UInt_t &w, UInt_t &h);
   virtual void   Iconify() { }
   virtual Int_t  InitWindow() { return 0; }
   virtual void   SetStatusText(const char *text = 0, Int_t partidx = 0);
   virtual void   SetWindowPosition(Int_t x, Int_t y);
   virtual void   SetWindowSize(UInt_t w, UInt_t h);
   virtual void   SetWindowTitle(const char *newTitle);
   virtual void   SetCanvasSize(UInt_t w, UInt_t h);
   virtual void   ShowMenuBar(Bool_t show = kTRUE);
   virtual void   ShowStatusBar(Bool_t show = kTRUE);
   virtual void   Show() { }

   ClassDef(TCanvasImp,0)  //ABC describing main window protocol
};

inline TCanvasImp::TCanvasImp(TCanvas *, const char *, UInt_t, UInt_t) { }
inline TCanvasImp::TCanvasImp(TCanvas *, const char *, Int_t, Int_t, UInt_t, UInt_t) { }
inline void TCanvasImp::GetWindowGeometry(Int_t &x, Int_t &y, UInt_t &w, UInt_t &h)
               { x = y = 0; w = h = 0; }
inline void TCanvasImp::SetStatusText(const char *, Int_t) { }
inline void TCanvasImp::SetWindowPosition(Int_t, Int_t) { }
inline void TCanvasImp::SetWindowSize(UInt_t, UInt_t) { }
inline void TCanvasImp::SetWindowTitle(const char *) { }
inline void TCanvasImp::SetCanvasSize(UInt_t, UInt_t) { }
inline void TCanvasImp::ShowMenuBar(Bool_t) { }
inline void TCanvasImp::ShowStatusBar(Bool_t) { }

#endif
