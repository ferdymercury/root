//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.29.24  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  13.20.50  by  Fons Rademakers
//*-- Author :    Rene Brun   03/07/96

#ifndef ROOT_TDialogCanvas
#define ROOT_TDialogCanvas

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
// TDialogCanvas                                                        //
//                                                                      //
// A specialized canvas to set attributes.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

class TDialogCanvas : public TCanvas, public TAttText {

protected:
   TObject     *fRefObject;   //Pointer to object to set attributes
   TPad        *fRefPad;      //Pad containing object

public:
   TDialogCanvas();
   TDialogCanvas(const char *name, const char *title, UInt_t ww, UInt_t wh);
   virtual        ~TDialogCanvas();
   virtual void   Apply(const char *action="");
   virtual void   BuildStandardButtons();
   virtual void   Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0);
   TObject        *GetRefObject() { return fRefObject; }
   TPad           *GetRefPad() { return fRefPad; }
   virtual void   Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2);
   virtual void   RecursiveRemove(TObject *obj);
   virtual void   SetBorderMode(Short_t bordermode){ fBorderMode = bordermode; }
   virtual void   SetGrid(Int_t valuex = 1, Int_t valuey = 1);
   virtual void   SetLogx(Int_t value = 1);
   virtual void   SetLogy(Int_t value = 1);
   virtual void   SetName(const char *name) { fName = name; }
   virtual void   SetObject();
   virtual void   SetRefObject(TObject*obj) { fRefObject=obj; }
   virtual void   SetRefPad(TPad *pad) { fRefPad=pad; }
   virtual void   x3d(Option_t *option="");

   ClassDef(TDialogCanvas,0)  //A specialized canvas to set attributes.
};

inline void TDialogCanvas::Divide(Int_t, Int_t, Float_t, Float_t, Int_t) { }
inline void TDialogCanvas::SetGrid(Int_t, Int_t) { }
inline void TDialogCanvas::SetLogx(Int_t) { }
inline void TDialogCanvas::SetLogy(Int_t) { }
inline void TDialogCanvas::x3d(Option_t *) { }

#endif

