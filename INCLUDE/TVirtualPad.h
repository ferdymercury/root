//*CMZ :  2.22/07 05/07/99  16.51.12  by  Rene Brun
//*CMZ :  2.22/06 21/06/99  18.34.56  by  Rene Brun
//*CMZ :  2.21/08 11/03/99  08.15.07  by  Rene Brun
//*CMZ :  2.21/05 09/02/99  01.03.04  by  Fons Rademakers
//*CMZ :  2.21/04 05/02/99  13.03.01  by  Fons Rademakers
//*CMZ :  2.20/00 02/11/98  17.11.17  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  15.08.17  by  Fons Rademakers
//*CMZ :  2.00/12 28/09/98  10.56.07  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  16.27.31  by  Rene Brun
//*CMZ :  2.00/08 30/05/98  18.56.23  by  Rene Brun
//*CMZ :  1.03/09 05/12/97  18.14.28  by  Fons Rademakers
//*-- Author :    Rene Brun   05/12/95

#ifndef ROOT_TVirtualPad
#define ROOT_TVirtualPad

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
// TVirtualPad                                                          //
//                                                                      //
// Abstract base class for Pads and Canvases                            //
//                                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TAttPad
#include "TAttPad.h"
#endif

#ifndef ROOT_TFrame
#include "TFrame.h"
#endif

#ifndef ROOT_TGXW
#include "TGXW.h"
#endif

#ifndef ROOT_TString
#include "TString.h"
#endif

#ifndef ROOT_Buttons
#include "Buttons.h"
#endif

// forward declarations
class TObject;
class TObjLink;
class TView;
class TCanvas;
class TPadView3D;
class TGToolTip;
class TH1F;

class TVirtualPad : public TWbox, public TAttPad {

public:
   TVirtualPad();
   TVirtualPad(const Text_t *name, const Text_t *title, Float_t xlow,
               Float_t ylow, Float_t xup, Float_t yup,
               Color_t color=19, Short_t bordersize=4, Short_t bordermode=1);
   virtual ~TVirtualPad();
   virtual void     AbsCoordinates(Bool_t set) = 0;
   virtual Float_t  AbsPixeltoX(Int_t px) = 0;
   virtual Float_t  AbsPixeltoY(Int_t py) = 0;
   virtual void     cd(Int_t subpadnumber=0) = 0;
   virtual void     Clear(Option_t *option="") = 0;
   virtual void     Close(Option_t *option="") = 0;
   virtual void     CopyPixmap() = 0;
   virtual void     CopyPixmaps() = 0;
   virtual void     Divide(Int_t nx=1, Int_t ny=1, Float_t xmargin=0.01, Float_t ymargin=0.01, Int_t color=0) = 0;
   virtual void     Draw(Option_t *option="") = 0;
   virtual void     DrawClassObject(TObject *obj, Option_t *option="") = 0;
   virtual TH1F    *DrawFrame(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax, Text_t *title="") = 0;
   virtual void     DrawLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2) = 0;
   virtual void     DrawLineNDC(Float_t u1, Float_t v1, Float_t u2, Float_t v2) = 0;
   virtual void     DrawText(Float_t x, Float_t y, const Text_t *text) = 0;
   virtual void     DrawTextNDC(Float_t u, Float_t v, const Text_t *text) = 0;
   virtual void     ExecuteEvent(Int_t event, Int_t px, Int_t py) = 0;
   virtual Int_t    GetCanvasID() const = 0;
   virtual TCanvas  *GetCanvas() = 0;
   virtual TVirtualPad *GetVirtCanvas() = 0;
   virtual Int_t    GetEvent() const  = 0;
   virtual Int_t    GetEventX() const = 0;
   virtual Int_t    GetEventY() const = 0;
   virtual TFrame   *GetFrame() = 0;
   virtual Color_t  GetHighLightColor() const = 0;
   virtual void     GetRange(Float_t &x1, Float_t &y1, Float_t &x2, Float_t &y2) = 0;
   virtual void     GetRangeAxis(Axis_t &xmin, Axis_t &ymin, Axis_t &xmax, Axis_t &ymax) = 0;
   virtual void     GetPadPar(Float_t &xlow, Float_t &ylow, Float_t &xup, Float_t &yup) = 0;
   virtual Float_t  GetXlowNDC() = 0;
   virtual Float_t  GetYlowNDC() = 0;
   virtual Float_t  GetWNDC() = 0;
   virtual Float_t  GetHNDC() = 0;
   virtual UInt_t   GetWw() = 0;
   virtual UInt_t   GetWh() = 0;
   virtual Float_t  GetAbsXlowNDC() = 0;
   virtual Float_t  GetAbsYlowNDC() = 0;
   virtual Float_t  GetAbsWNDC() = 0;
   virtual Float_t  GetAbsHNDC() = 0;
   virtual Float_t  GetPhi() = 0;
   virtual Float_t  GetTheta() = 0;
   virtual Float_t  GetUxmin() = 0;
   virtual Float_t  GetUymin() = 0;
   virtual Float_t  GetUxmax() = 0;
   virtual Float_t  GetUymax() = 0;
   virtual Bool_t   GetGridx() = 0;
   virtual Bool_t   GetGridy() = 0;
   virtual Int_t    GetTickx() = 0;
   virtual Int_t    GetTicky() = 0;
   virtual TList    *GetListOfPrimitives() = 0;
   virtual TObject  *GetPrimitive(const Text_t *name) = 0;
   virtual TObject  *GetSelected() = 0;
   virtual TObject  *GetPadPointer() = 0;
   virtual TVirtualPad  *GetPadSave() const = 0;
   virtual TVirtualPad  *GetSelectedPad() const = 0;
   virtual TView    *GetView() = 0;
   virtual Int_t    GetLogx() = 0;
   virtual Int_t    GetLogy() = 0;
   virtual Int_t    GetLogz() = 0;
   virtual TVirtualPad  *GetMother() = 0;
   virtual const Text_t *GetName() const = 0;
   virtual const Text_t *GetTitle() const = 0;
   virtual Int_t    GetPadPaint() = 0;
   virtual Int_t    GetPixmapID() = 0;
   virtual TPadView3D *GetView3D() = 0;
   virtual void     HighLight(Color_t col=kRed, Bool_t set=kTRUE) = 0;
   virtual void     InspectObject(TObject *obj) = 0;
   virtual Bool_t   IsBatch() = 0;
   virtual Bool_t   IsModified() = 0;
   virtual Bool_t   IsRetained() = 0;
   virtual void     ls(Option_t *option="") = 0;
   virtual void     Modified(Bool_t flag=1) = 0;
   virtual Bool_t   OpaqueMoving() const = 0;
   virtual Bool_t   OpaqueResizing() const = 0;
   virtual Float_t  PadtoX(Axis_t x) const = 0;
   virtual Float_t  PadtoY(Axis_t y) const = 0;
   virtual void     Paint(Option_t *option="") = 0;
   virtual void     PaintBox(Float_t x1, Float_t y1, Float_t x2, Float_t y2, Option_t *option="") = 0;
   virtual void     PaintFillArea(Int_t n, Float_t *x, Float_t *y, Option_t *option="") = 0;
   virtual void     PaintPadFrame(Float_t xmin, Float_t ymin, Float_t xmax, Float_t ymax) = 0;
   virtual void     PaintLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2) = 0;
   virtual void     PaintLineNDC(Coord_t u1, Coord_t v1,Coord_t u2, Coord_t v2) = 0;
   virtual void     PaintLine3D(Float_t *p1, Float_t *p2) = 0;
   virtual void     PaintPolyLine(Int_t n, Float_t *x, Float_t *y, Option_t *option="") = 0;
   virtual void     PaintPolyLine3D(Int_t n, Float_t *p) = 0;
   virtual void     PaintPolyLineNDC(Int_t n, Float_t *x, Float_t *y, Option_t *option="") = 0;
   virtual void     PaintPolyMarker(Int_t n, Float_t *x, Float_t *y, Option_t *option="") = 0;
   virtual void     PaintModified() = 0;
   virtual void     PaintText(Float_t x, Float_t y, const Text_t *text) = 0;
   virtual void     PaintTextNDC(Float_t u, Float_t v, const Text_t *text) = 0;
   virtual Float_t  PixeltoX(Int_t px) = 0;
   virtual Float_t  PixeltoY(Int_t py) = 0;
   virtual void     Pop() = 0;
   virtual void     Print(const Text_t *filename="") = 0;
   virtual void     Print(const Text_t *filename, Option_t *option) = 0;
   virtual void     Range(Float_t x1, Float_t y1, Float_t x2, Float_t y2) = 0;
   virtual void     RangeAxis(Axis_t xmin, Axis_t ymin, Axis_t xmax, Axis_t ymax) = 0;
   virtual void     RecursiveRemove(TObject *obj) = 0;
   virtual void     RedrawAxis() = 0;
   virtual void     ResetView3D(TPadView3D *view=0) = 0;
   virtual void     ResizePad(Option_t *option="") = 0;
   virtual void     SaveAs(const Text_t *filename="") = 0;
   virtual void     SetBorderMode(Short_t bordermode) = 0;
   virtual void     SetBorderSize(Short_t bordersize) = 0;
   virtual void     SetCanvasSize(UInt_t ww, UInt_t wh) = 0;
   virtual void     SetCursor(ECursor cursor) = 0;
   virtual void     SetDoubleBuffer(Int_t mode=1) = 0;
   virtual void     SetGrid(Int_t valuex = 1, Int_t valuey = 1) = 0;
   virtual void     SetGridx(Int_t value = 1) = 0;
   virtual void     SetGridy(Int_t value = 1) = 0;
   virtual void     SetFillStyle(Style_t fstyle) = 0;
   virtual void     SetLogx(Int_t value = 1) = 0;
   virtual void     SetLogy(Int_t value = 1) = 0;
   virtual void     SetLogz(Int_t value = 1) = 0;
   virtual void     SetPad(const Text_t *name, const Text_t *title,
                           Float_t xlow, Float_t ylow, Float_t xup,
                           Float_t yup, Color_t color=35,
                           Short_t bordersize=5, Short_t bordermode=-1) = 0;
   virtual void     SetPad(Float_t xlow, Float_t ylow, Float_t xup, Float_t yup) = 0;
   virtual void     SetName(const Text_t *name) = 0;
   virtual void     SetSelected(TObject *obj) = 0;
   virtual void     SetTicks(Int_t valuex = 1, Int_t valuey = 1) = 0;
   virtual void     SetTickx(Int_t value = 1) = 0;
   virtual void     SetTicky(Int_t value = 1) = 0;
   virtual void     SetTitle(const Text_t *title="") = 0;
   virtual void     SetTheta(Float_t theta=30) = 0;
   virtual void     SetPhi(Float_t phi=30) = 0;
   virtual void     SetView(TView *view) = 0;
   virtual void     Update() = 0;
   virtual Int_t    UtoAbsPixel(Float_t u) const = 0;
   virtual Int_t    VtoAbsPixel(Float_t v) const = 0;
   virtual Int_t    UtoPixel(Float_t u) const = 0;
   virtual Int_t    VtoPixel(Float_t v) const = 0;
   virtual Int_t    XtoAbsPixel(Axis_t x) const = 0;
   virtual Int_t    YtoAbsPixel(Axis_t y) const = 0;
   virtual Float_t  XtoPad(Axis_t x) const = 0;
   virtual Float_t  YtoPad(Axis_t y) const = 0;
   virtual Int_t    XtoPixel(Axis_t x) const = 0;
   virtual Int_t    YtoPixel(Axis_t y) const = 0;

   virtual TGToolTip *CreateToolTip(const TBox *b, const char *text, Long_t delayms) = 0;
   virtual void       DeleteToolTip(TGToolTip *tip) = 0;
   virtual void       ResetToolTip(TGToolTip *tip) = 0;
   virtual void       CloseToolTip(TGToolTip *tip) = 0;

   virtual void     x3d(Option_t *option="") = 0;

   ClassDef(TVirtualPad,1)  //Abstract base class for Pads and Canvases
};

#ifdef R__THREAD

R__EXTERN TVirtualPad *gPadMain;
#ifndef __CINT__
R__EXTERN void **(*gThreadTsd)(void*,Int_t);
#endif
R__EXTERN int (*gThreadXAR)(char *xact, Int_t nb, void **ar, Int_t *iret);
#define gPad (*((!gThreadTsd)? &gPadMain:(TVirtualPad**)(*gThreadTsd)(&gPadMain,0)))

#else
R__EXTERN TVirtualPad *gPad;
#endif

#endif


