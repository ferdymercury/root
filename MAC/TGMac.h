//*CMZ :  2.23/02 02/09/99  15.39.27  by  Rene Brun
//*CMZ :  2.00/00 29/12/97  14.32.32  by  Fons Rademakers
//*CMZ :  0.80/00 11/08/96  21.43.43  by  Fons Rademakers
//*-- Author :    Fons Rademakers   14/12/95

#ifndef ROOT_TGMac
#define ROOT_TGMac

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
// TGMac                                                                //
//                                                                      //
// Class defining the interface to MacOS basic graphics primitives.     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TVirtualX
#include "TVirtualX.h"
#endif


class TGMac : public TVirtualX {

public:

   TGMac() { }
   TGMac(Text_t *name, Text_t *title);
   ~TGMac() { }

   void      ClearWindow();
   void      ClosePixmap();
   void      CloseWindow();
   void      CopyPixmap(int wid, int xpos, int ypos);
   void      DrawBox(int x1, int y1, int x2, int y2, EBoxMode mode);
   void      DrawCellArray(int x1, int y1, int x2, int y2, int nx, int ny, int *ic);
   void      DrawFillArea(int n, TPoint *xy);
   void      DrawLine(int x1, int y1, int x2, int y2);
   void      DrawPolyLine(int n, TPoint *xy);
   void      DrawPolyMarker(int n, TPoint *xy);
   void      DrawText(int x, int y, float angle, float mgn, const char *text, ETextMode mode);
   void      GetCharacterUp(Float_t &chupx, Float_t &chupy);
   Int_t     GetDoubleBuffer(int wid);
   void      GetGeometry(int wid, int &x, int &y, unsigned int &w, unsigned int &h);
   const char *DisplayName(const char * = "") { return "localhost"; }
   void      GetPixel(int y, int width, Byte_t *scline);
   void      GetPlanes(int &nplanes);
   void      GetRGB(int index, float &r, float &g, float &b);
   void      GetTextExtent(int &w, int &h, char *mess);
   Float_t   GetTextMagnitude();
   Int_t     InitWindow(ULong_t window);
   void      MoveWindow(int wid, int x, int y);
   Int_t     OpenPixmap(int w, int h);
   void      PutByte(Byte_t b);
   void      QueryPointer(int &ix, int &iy);
   Int_t     RequestLocator(int mode, int ctyp, int &x, int &y);
   Int_t     RequestString(int x, int y, char *text);
   void      RescaleWindow(int wid, int w, int h);
   Int_t     ResizePixmap(int wid, int w, int h);
   void      ResizeWindow(int wid);
   void      SelectWindow(int wid);
   void      SetCharacterUp(Float_t chupx, Float_t chupy);
   void      SetClipOFF(int wid);
   void      SetClipRegion(int wid, int x, int y, int w, int h);
   void      SetCursor(int win, ECursor cursor);
   void      SetDoubleBuffer(int wid, int mode);
   void      SetDoubleBufferOFF();
   void      SetDoubleBufferON();
   void      SetDrawMode(EDrawMode mode);
   void      SetFillColor(Color_t cindex);
   void      SetFillStyle(Style_t style);
   void      SetLineColor(Color_t cindex);
   void      SetLineType(int n, int *dash);
   void      SetLineStyle(Style_t linestyle);
   void      SetLineWidth(Width_t width);
   void      SetMarkerColor( Color_t cindex);
   void      SetMarkerSize(Float_t markersize);
   void      SetMarkerStyle(Style_t markerstyle);
   void      SetRGB(int cindex, float r, float g, float b);
   void      SetTextAlign(Short_t talign=11);
   void      SetTextColor(Color_t cindex);
   Int_t     SetTextFont(char *fontname, ETextSetMode mode);
   void      SetTextFont(Int_t fontnumber);
   void      SetTextMagnitude(Float_t mgn);
   void      SetTextSize(Float_t textsize);
   void      UpdateWindow(int mode);
   void      Warp(int ix, int iy);
   void      WriteGIF(char *name);
   void      WritePixmap(int wid, int w, int h, char *pxname);

   ClassDef(TGMac,0)  //Interface to MacOS basic graphics primitives
};

#endif

