//*CMZ :  2.24/03 29/04/2000  23.42.00  by  Rene Brun
//*CMZ :  0.80/01 16/08/96  17.29.41  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TGWin32Pen
#define ROOT_TGWin32Pen

#ifndef ROOT_TObject
#include "TOBJECT.h"
#endif

#ifndef ROOT_Windows4Root
#include "WINDOWS4ROOT.h"
#endif

class TGWin32Pen : public TObject {

private:

   HPEN       fhdPen;
   LOGPEN     fPen;
   LOGBRUSH   fBrush;
   int        flUserDash;
   int       *fUserDash;

public:

   TGWin32Pen();
   ~TGWin32Pen();
   void Delete();
   HPEN CreatePen();
   COLORREF GetColor(){return fBrush.lbColor;}
   void SetWidth(Width_t width=1);
   void SetType(int n=0, int *dash = 0);
   void SetColor(COLORREF cindex=1);
   HGDIOBJ GetWin32Pen();

   // ClassDef(TGWin32Pen,0)  // Pen class for Win32 interface
};

#endif
