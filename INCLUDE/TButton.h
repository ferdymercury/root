//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.21/04 05/02/99  13.28.35  by  Fons Rademakers
//*CMZ :  2.20/05 12/12/98  18.09.50  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.26.12  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  20.56.48  by  Fons Rademakers
//*-- Author :    Rene Brun   01/07/96

#ifndef ROOT_TButton
#define ROOT_TButton

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
// TButton                                                              //
//                                                                      //
//  A TButton object is a specialized TPad including possible list
//  of primitives used to build selections and options menus in a canvas.
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPad
#include "TPad.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

class TButton : public TPad, public TAttText {

private:
   Bool_t fFocused;     // If cursor is in...
   Bool_t fFraming;     // True if you want a frame to be painted when pressed

   TButton(const TButton &org);            // no copy ctor, use TObject::Clone()
   TButton &operator=(const TButton &rhs); // idem

protected:
   TString      fMethod;      //Method to be executed by this button

public:
   TButton();
   TButton(const char *title, const char *method, Coord_t x1, Coord_t y1, Coord_t x2, Coord_t y2);
   virtual ~TButton();
   virtual void  Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0);
   virtual void  Draw(Option_t *option="");
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual const char *GetMethod() const { return fMethod.Data(); }
   virtual void  Paint(Option_t *option="");
   virtual void  PaintModified();
   virtual void  Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2);
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   virtual void  SetBorderMode(Short_t bordermode) { fBorderMode = bordermode; }
   virtual void  SetFraming(Bool_t f=1);
   virtual Bool_t GetFraming() { return fFraming; };
   virtual void  SetGrid(Int_t valuex = 1, Int_t valuey = 1);
   virtual void  SetLogx(Int_t value = 1);
   virtual void  SetLogy(Int_t value = 1);
   virtual void  SetMethod(char *method) { fMethod=method; } // *MENU*
   virtual void  SetName(const char *name) { fName = name; }
   virtual void  x3d(Option_t *option="");

   ClassDef(TButton,0)  //A user interface button.
};

inline void TButton::Divide(Int_t, Int_t, Float_t, Float_t, Int_t) { }
inline void TButton::SetGrid(Int_t, Int_t) { }
inline void TButton::SetLogx(Int_t) { }
inline void TButton::SetLogy(Int_t) { }
inline void TButton::x3d(Option_t *) { }

#endif

