//*CMZ :  2.23/12 12/01/2000  12.36.13  by  Rene Brun
//*CMZ :  2.23/11 08/01/2000  17.30.32  by  Rene Brun
//*-- Author :    Rene Brun   08/01/2000

#ifndef ROOT_TInspectCanvas
#define ROOT_TInspectCanvas

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TInspectCanvas                                                       //
//                                                                      //
// This class is a specialized canvas to inspect Root objects.          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif

class TButton;

class TInspectCanvas : public TCanvas, public TAttText {

protected:

   TButton     *fBackward;      //Pointer to the Backward button
   TButton     *fForward;       //Pointer to the Forward button
   TList       *fObjects;       //List of objects inspected
   TObject     *fCurObject;     //Pointer to object being inspected

public:
   TInspectCanvas();
   TInspectCanvas(UInt_t ww, UInt_t wh);
   virtual        ~TInspectCanvas();
   TButton       *GetBackward()   {return fBackward;}
   TButton       *GetForward()    {return fForward;}
   TObject       *GetCurObject()  {return fCurObject;}
   TList         *GetObjects()    {return fObjects;}
   static  void   GoBackward();
   static  void   GoForward();
   static  void   Inspector(TObject *obj);
   virtual void   InspectObject(TObject *obj);
   virtual void   RecursiveRemove(TObject *obj);

   //dummies
   virtual void   Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0);
   virtual void   SetGrid(Int_t valuex = 1, Int_t valuey = 1);
   virtual void   SetGridx(Int_t value = 1);
   virtual void   SetGridy(Int_t value = 1);
   virtual void   SetLogx(Int_t value = 1);
   virtual void   SetLogy(Int_t value = 1);
   virtual void   SetLogz(Int_t value = 1);
   virtual void   SetTickx(Int_t value = 1);
   virtual void   SetTicky(Int_t value = 1);
   virtual void   x3d(Option_t *option="");

   ClassDef(TInspectCanvas,1)  //The canvas Inspector
};

inline void TInspectCanvas::Divide(Int_t, Int_t, Float_t, Float_t, Int_t) { }
inline void TInspectCanvas::SetGrid(Int_t, Int_t) { }
inline void TInspectCanvas::SetGridx(Int_t) { }
inline void TInspectCanvas::SetGridy(Int_t) { }
inline void TInspectCanvas::SetLogx(Int_t) { }
inline void TInspectCanvas::SetLogy(Int_t) { }
inline void TInspectCanvas::SetLogz(Int_t) { }
inline void TInspectCanvas::SetTickx(Int_t) { }
inline void TInspectCanvas::SetTicky(Int_t) { }
inline void TInspectCanvas::x3d(Option_t *) { }

#endif

