//*CMZ :  2.20/01 01/12/98  12.42.35  by  Rene Brun
//*CMZ :  2.20/00 05/11/98  15.09.28  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  17.18.17  by  Fons Rademakers
//*CMZ :  2.00/12 15/09/98  04.02.35  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  15.14.15  by  Rene Brun
//*CMZ :  2.00/10 16/07/98  14.26.15  by  Fons Rademakers
//*CMZ :  2.00/06 07/05/98  19.38.43  by  Fons Rademakers
//*CMZ :  2.00/00 17/02/98  18.39.09  by  Fons Rademakers
//*CMZ :  1.03/09 09/12/97  20.23.23  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TCanvas
#define ROOT_TCanvas

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
// TCanvas                                                              //
//                                                                      //
// Graphics canvas.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPad
#include "TPad.h"
#endif

#ifndef ROOT_TAttCanvas
#include "TAttCanvas.h"
#endif

#ifndef ROOT_TGXW
#include "TGXW.h"
#endif

#ifndef ROOT_TString
#include "TString.h"
#endif

#ifndef ROOT_TCanvasImp
#include "TCanvasImp.h"
#endif


enum ECanvasEditMode {
   kIsNotEditable,
   kIsEditable
};

class TContextMenu;
class TControlBar;

class TCanvas : public TPad {

friend class TCanvasImp;
+IF,THREAD.
friend class TThread;
+ENDIF

protected:
   TString      fDISPLAY;         //Name of destination screen
   Int_t        fDoubleBuffer;    //Double buffer flag (0=off, 1=on)
   Bool_t       fRetained;        //Retain structure flag
   Size_t       fXsizeUser;       //User specified size of canvas along X in CM
   Size_t       fYsizeUser;       //User specified size of canvas along Y in CM
   Size_t       fXsizeReal;       //Current size of canvas along X in CM
   Size_t       fYsizeReal;       //Current size of canvas along Y in CM
   Int_t        fCanvasID;        //Canvas identifier
   Int_t        fWindowTopX;      //Top X position of window (in pixels)
   Int_t        fWindowTopY;      //Top Y position of window (in pixels)
   UInt_t       fWindowWidth;     //Width of window (including borders, etc.)
   UInt_t       fWindowHeight;    //Height of window (including menubar, borders, etc.)
   UInt_t       fCw;              //Width of the canvas along X (pixels)
   UInt_t       fCh;              //Height of the canvas along Y (pixels)
   TAttCanvas   fCatt;            //Canvas attributes
   TObject     *fSelected;        //Currently selected object
   TString      fSelectedOpt;     //Drawing option of selected object
   TVirtualPad *fSelectedPad;     //Pad containing currently selected object
   TVirtualPad *fPadSave;         //Pointer to saved pad in HandleInput
   Int_t        fEvent;           //Type of current or last handled event
   Int_t        fEventX;          //Last X mouse position in canvas
   Int_t        fEventY;          //Last Y mouse position in canvas
   Bool_t       fShowEventStatus; //Show event status panel
   TControlBar *fEditorBar;       //Editor control bar
   TCanvasImp  *fCanvasImp;       //Window system specific canvas implementation
   Bool_t       fMoveOpaque;      //Move objects in opaque mode
   Bool_t       fResizeOpaque;    //Resize objects in opaque mode
   Color_t      fHighLightColor;  //Highlight color of active pad
   Bool_t       fBatch;           //True when in batchmode
   Bool_t       fMenuBar;         //False if no menubar is displayed
   ECanvasEditMode fIsEditable;   //True if canvas is editable
   TContextMenu   *fContextMenu;  //Context menu pointer

private:
   TCanvas(const TCanvas &canvas);  // cannot copy canvas, use TObject::Clone
   TCanvas &operator=(const TCanvas &rhs);  // idem
   void     Build();
   void     CopyPixmaps();
   void     DrawEventStatus(Int_t button, Int_t x, Int_t y, TObject *selected);

protected:
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);

public:
   TCanvas();
   TCanvas(const Text_t *name, const Text_t *title="", Int_t form=1);
   TCanvas(const Text_t *name, const Text_t *title, Int_t ww, Int_t wh);
   TCanvas(const Text_t *name, const Text_t *title, Int_t wtopx, Int_t wtopy,
           Int_t ww, Int_t wh);
   TCanvas(const Text_t *name, Int_t ww, Int_t wh, Int_t winid);
   virtual ~TCanvas();

   void              cd(Int_t subpadnumber=0);
   void              Clear(Option_t *option="");
   void              Close(Option_t *option="");
   virtual void      Draw(Option_t *option="");
   virtual void      EditorBar();
   void              FeedbackMode(Bool_t set);
   void              Flush();
   void              UseCurrentStyle(); // *MENU*
   void              ForceUpdate() { fCanvasImp->ForceUpdate(); }
   const Text_t     *GetDISPLAY() const {return fDISPLAY.Data();}
   TContextMenu     *GetContextMenu(){return fContextMenu;};
   Int_t             GetDoubleBuffer() {return fDoubleBuffer;}
   TControlBar      *GetEditorBar() {return fEditorBar;}
   Int_t             GetEvent() const { return fEvent; }
   Int_t             GetEventX() const { return fEventX; }
   Int_t             GetEventY() const { return fEventY; }
   Color_t           GetHighLightColor() const { return fHighLightColor; }
   virtual void     *GetPadDivision(Int_t xdivision=1, Int_t ydivision=1);
   TVirtualPad      *GetPadSave() const { return fPadSave; }
   TObject          *GetSelected() {return fSelected;}
   Option_t         *GetSelectedOpt() const {return fSelectedOpt.Data();}
   TVirtualPad      *GetSelectedPad() const { return fSelectedPad; }
   Bool_t            GetShowEventStatus() { return fShowEventStatus; }
   Size_t            GetXsizeUser() {return fXsizeUser;}
   Size_t            GetYsizeUser() {return fYsizeUser;}
   Size_t            GetXsizeReal() {return fXsizeReal;}
   Size_t            GetYsizeReal() {return fYsizeReal;}
   Int_t             GetCanvasID() {return fCanvasID;}
   TCanvasImp       *GetCanvasImp() {return fCanvasImp;}
   Int_t             GetWindowTopX();
   Int_t             GetWindowTopY();
   UInt_t            GetWindowWidth() const { return fWindowWidth; }
   UInt_t            GetWindowHeight() const { return fWindowHeight; }
   UInt_t            GetWw() { return fCw; }
   UInt_t            GetWh() { return fCh; }
   virtual void      GetCanvasPar(Int_t &wtopx, Int_t &wtopy, UInt_t &ww, UInt_t &wh)
                     {wtopx=GetWindowTopX(); wtopy=fWindowTopY; ww=fWindowWidth; wh=fWindowHeight;}
   virtual void      HandleInput(EEventType button, Int_t x, Int_t y);
   Bool_t            HasMenuBar() const { return fMenuBar; }
   void              Iconify() { fCanvasImp->Iconify(); }
   Bool_t            IsBatch() { return fBatch; }
   ECanvasEditMode   IsEditable() { return fIsEditable; }
   Bool_t            IsRetained() { return fRetained; }
   virtual void      ls(Option_t *option="");
   void              MoveOpaque(Int_t set=1);
   Bool_t            OpaqueMoving() const { return fMoveOpaque; }
   Bool_t            OpaqueResizing() const { return fResizeOpaque; }
   virtual void      Paint(Option_t *option="");
   virtual void      Resize(Option_t *option="");
   void              ResizeOpaque(Int_t set=1) { fResizeOpaque = set; }
   void              SaveSource(const Text_t *filename="", Option_t *option="");
   virtual void      SetCursor(ECursor cursor);
   virtual void      SetDoubleBuffer(Int_t mode=1);
   void              SetWindowPosition(Int_t x, Int_t y) { fCanvasImp->SetWindowPosition(x, y); }
   void              SetWindowSize(UInt_t ww, UInt_t wh) { fCanvasImp->SetWindowSize(ww, wh); }
   void              SetCanvasSize(UInt_t ww, UInt_t wh); // *MENU*
   virtual void      SetEditable(ECanvasEditMode mode=kIsEditable) {fIsEditable = mode;} // *TOGGLE*
   void              SetHighLightColor(Color_t col) { fHighLightColor = col; }
   void              SetSelected(TObject *obj) {fSelected = obj;}
   void              Show() { fCanvasImp->Show(); }
   virtual void      Size(Float_t xsizeuser=0, Float_t ysizeuser=0);
   void              SetBatch(Bool_t batch=kTRUE);
   void              SetRetained(Bool_t retained=kTRUE) { fRetained=retained;}
   void              SetTitle(const Text_t *title="");
   virtual void      ToggleEventStatus();
   virtual void      Update();

   static void       MakeDefCanvas();

   ClassDef(TCanvas,3)  //Graphics canvas
};

#endif

