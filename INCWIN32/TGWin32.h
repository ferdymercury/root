//*CMZ :  2.20/00 08/11/98  17.36.46  by  Fons Rademakers
//*CMZ :  2.00/12 02/10/98  21.14.37  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  2.00/00 20/02/98  16.27.57  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.03/09 08/12/97  15.44.10  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TGWin32
#define ROOT_TGWin32

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
// TGWin32                                                              //
//                                                                      //
// Interface to low level Windows32. This class gives access to basic   //
// Win32 graphics, pixmap, text and font handling routines.             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#ifndef ROOT_TGXW
#include "TGXW.h"
#endif

#include "TOBJARRAY.h"
#include "TOBJECT.h"
#include "TWin32CALLBACKLIST.h"
#include "TGWIN32MARKER.h"
#include "TWin32GLKernel.h"


class TGWin32Pen;
class TGWin32Switch;
class TGWin32Brush;
class TGWin32Command;

class TGWin32  :  public TGXW  {

protected:

   friend class TGWin32Object;
   friend class TGWin32WindowsObject;
   friend class TGWin32PixmapObject;
   friend class TWin32GLViewerImp;
   friend class TPadOpenGLView;

   TGLKernelABC *fGLKernel;        // Pointer to OpenGL interface implementation
   TList        fWindows;          // List of "windows" - pixmap, Window ...
   TGWin32Switch *fSelectedWindow; // Pointer to the current "Window"
   TGWin32Switch *fPrevWindow;     // Pointer to the previous "Window"
   Int_t        fDisplayOpened;

   LPCRITICAL_SECTION  flpCriticalSection; // pointer to critical section object
   Int_t        fSectionCount;             // flag to mark whether we are witin the section
   HANDLE       fhEvent;                   // The event object to synch threads
   HANDLE       fWriteLock;                // Event object to synch thread

   HCURSOR      fCursors[kNumCursors];  //List of cursors
   ECursor      fCursor;         // Current cursor number;

   HINSTANCE    fHInstance;      // A handle of the current instance
   WNDCLASS     fRoot_Display;   // Desription of the specile Window class for ROOT graphics
   DWORD        fIDThread;       // ID of the separate Thread to work out event loop


   Style_t      fMarkerStyle;

   Int_t     fTextAlignH;         //Text Alignment Horizontal
   Int_t     fTextAlignV;         //Text Alignment Vertical
   Float_t   fCharacterUpX;       //Character Up vector along X
   Float_t   fCharacterUpY;       //Character Up vector along Y
   Int_t     fTextFontModified;   // Mark whether the text font has been modified
   Float_t   fTextMagnitude;      //Text Magnitude

//
// Members to draw a ROOT locator
//

   HPEN         fhdCursorPen;   // Pen to draw HIGZ locator
   HBRUSH       fhdCursorBrush; // Brush to draw HIGZ locator 3 or 5

//   Common HANDLES of the graphics attributes for all HIGZ windows

   HPALETTE      fhdCommonPalette;

   TGWin32Brush  *fWin32Brush;
   TGWin32Pen    *fWin32Pen;
   TGWin32Marker *fWin32Marker;
//   TGWin32Font  *fWin32Font;

//   HPEN          fhdCommonPen;
   HFONT         fhdCommonFont;
   Int_t         fMaxCol;            // Max number of screen colors

//
//*-*-  Colors staff
//

//  PALETTEENTRY        fROOTcolors[MAXCOL];
  NPLOGPALETTE  flpPalette; // =  {0x300, MAXCOL, HIGZcolors};
//
//*-*- Text management
//

   LOGFONT      fROOTFont;
   Int_t        fdwCommonTextAlign;

   const Text_t *fROOTCLASS; // = "ROOT";


   RECT     fCommonClipRectangle;

   void  SetTextFont(char *fontname, Int_t italic, Int_t bold);
   void  SetWin32Font();
   Int_t CreatROOTThread();
   void  DeleteSelectedObj();

public:

    TGWin32();
    TGWin32(Text_t *name, Text_t *title);
    virtual ~TGWin32();

    Bool_t    Init(void *display=0);
    void      ClearWindow();
    void      ClosePixmap();
    void      CloseWindow();
    void      CopyPixmap(Int_t wid, Int_t xpos, Int_t ypos);
    void      CreateOpenGLContext(Int_t wid=0);    // Create OpenGL context for win windows (for "selected" Window by default)
    void      DeleteOpenGLContext(Int_t wid=0);    // Create OpenGL context for win windows (for "selected" Window by default)
    void      DrawBox(Int_t x1, Int_t y1, Int_t x2, Int_t y2, TGXW::EBoxMode mode);
    void      DrawCellArray(Int_t x1, Int_t y1, Int_t x2, Int_t y2, Int_t nx, Int_t ny, Int_t *ic);
    void      DrawFillArea(Int_t n, TPoint *xy);
    void      DrawLine(Int_t x1, Int_t y1, Int_t x2, Int_t y2);
    void      DrawPolyLine(Int_t n, TPoint *xy);
    void      DrawPolyMarker(Int_t n, TPoint *xy);
    void      DrawText(Int_t x, Int_t y, Float_t angle, Float_t mgn, const char *text, TGXW::ETextMode mode);
    COLORREF  ColorIndex(Color_t indx);
    void      GetCharacterUp(Float_t &chupx, Float_t &chupy);
    Int_t     GetDoubleBuffer(Int_t wid);
    void      GetGeometry(Int_t wid, Int_t &x, Int_t &y, UInt_t &w, UInt_t &h);
    const char *DisplayName(const char *dpyName = 0);
    void      GetPixel(Int_t y, Int_t width, Byte_t *scline);
    void      GetPlanes(Int_t &nplanes);
    TGWin32Switch *GetSelectedWindow(){ return fSelectedWindow; }
    TGWin32Switch *GetSwitchObjectbyId(Int_t ID);
    TGWin32Object *GetMasterObjectbyId(Int_t ID);
    void      GetRGB(Int_t index, Float_t &r, Float_t &g, Float_t &b);
    void      GetTextExtent(UInt_t &w, UInt_t &h, char *mess);
    Float_t   GetTextMagnitude() {return fTextMagnitude;}
    Bool_t    HasTTFonts() const { return kTRUE; }
    Int_t     InitWindow(ULong_t window=0);
    void      MoveWindow(Int_t wid, Int_t x, Int_t y);
    Int_t     OpenPixmap(UInt_t w, UInt_t h);
    void      PutByte(Byte_t b);
    void      QueryPointer(Int_t &ix, Int_t &iy);
    void      ReadGIF(Int_t x0, Int_t y0, const char *file) { }
    Int_t     RequestLocator(Int_t mode, Int_t ctyp, Int_t &x, Int_t &y);
    Int_t     RequestString(Int_t x, Int_t y, char *text);
    void      RemoveWindow(TGWin32Switch *win){if (win) fWindows.Remove((TObject *)win);} // Remove the 'window' pointer
    void      RescaleWindow(Int_t wid, UInt_t w, UInt_t h);
    Int_t     ResizePixmap(Int_t wid, UInt_t w, UInt_t h);
    void      ResizeWindow(Int_t wid);
    void      SelectWindow(Int_t wid);                        // And make its OpenGL context the current one if any
    void      SetCharacterUp(Float_t chupx, Float_t chupy);
    void      SetClipOFF(Int_t wid);
    void      SetClipRegion(Int_t wid, Int_t x, Int_t y, UInt_t w, UInt_t h);
    void      SetCursor(Int_t win, ECursor cursor);
    void      SetDoubleBuffer(Int_t wid, Int_t mode);
    void      SetDoubleBufferOFF();
    void      SetDoubleBufferON();
    void      SetDrawMode(TGXW::EDrawMode mode);
    void      SetFillColor(Color_t cindex);
    void      SetFillStyle(Style_t style);
    void      SetFillStyleIndex( Int_t style, Int_t fasi);
    void      SetLineColor(Color_t cindex);
    void      SetLineType(Int_t n, Int_t *dash);
    void      SetLineStyle(Style_t linestyle);
    void      SetLineWidth(Width_t width);
    void      SetMarkerColor( Color_t cindex);
    void      SetMarkerSize(Float_t markersize);
    void      SetMarkerStyle(Style_t markerstyle);
    void      SetMarkerType( Int_t type, Int_t n, TPoint *xy );
    void      SetRGB(Int_t cindex, Float_t r, Float_t g, Float_t b);
    void      SetTextAlign(Short_t talign);
    void      SetTextColor(Color_t cindex);
    Int_t     SetTextFont(char *fontname, TGXW::ETextSetMode mode);
    void      SetTextFont(Font_t fontnumber);
    void      SetTextMagnitude(Float_t mgn=1) { fTextMagnitude = mgn;}
    void      SetTextSize(Float_t textsize);
    void      SetTitle(const char *title);
    void      UpdateWindow(Int_t mode);
    void      Warp(Int_t ix, Int_t iy);
    void      WriteGIF(char *name);
    void      WritePixmap(Int_t wid, UInt_t w, UInt_t h, char *pxname);

    UInt_t    ExecCommand(TGWin32Command *command);
    Bool_t    IsCmdThread();      // returns whether the current thread a window thread
    void      EnterCrSection();
    void      LeaveCrSection();

    void      write_lock ();
    void      release_write_lock();
    void      read_lock();
    void      release_read_lock();

    void      SetMsgThreadID(DWORD id){ fIDThread = id; }
    DWORD     GetMsgThreadID(){ return fIDThread;}
    HINSTANCE GetWin32Instance(){ return  fHInstance;}  // return a handle of the current instance

    void      XW_OpenSemaphore();
    void      XW_CloseSemaphore();
    void      XW_WaitSemaphore();
    void      XW_CreateSemaphore();

    void      MakePallete(HDC objectDC=0);

    ClassDef(TGWin32,0)  //Interface to Win32

 };

#endif
