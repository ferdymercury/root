//*CMZ :  2.24/03 29/04/2000  23.42.00  by  Rene Brun
//*CMZ :  0.80/01 16/08/96  17.29.40  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TGWin32DoubleBufferObject
#define ROOT_TGWin32DoubleBufferObject

#include "TGWIN32PIXMAPOBJECT.h"

class TGWin32DoubleBufferObject : public TGWin32PixmapObject  {

////////////////////////////////////////////////////////////////////
//                                                                //
//  TGWin32DoubleBufferObject                                     //
//                                                                //
//  It defines behaviour of the double buffer objects of WIN32 GDI//
//  For instance, double buffer of the "real" window              //
//                                                                //
////////////////////////////////////////////////////////////////////

public:

    TGWin32DoubleBufferObject() : TGWin32PixmapObject();                      // To implement OpenPixmap
    TGWin32DoubleBufferObject(TGWin32 *lpTGWin32, Int_t w, Int_t h) : TGWin32PixmapObject(lpTGWin32,w,h); // To implement OpenPixmap

    // ClassDef(TGWin32DoubleBufferObject, 0)  // Pixmap GDI objects for Win32
};

#endif
