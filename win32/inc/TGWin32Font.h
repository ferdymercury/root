//*CMZ :  0.80/01 16/08/96  17.29.40  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TGWin32Font
#define ROOT_TGWin32Font

#include "WINDOWS4ROOT.h"

class GWin32Font {

private:

   HFONT     fhdFont;   Handle of the current font
   LOGFONT   fLFont;    Description of the current Win32 font

public:
  HFONT  GetFont(){return fhFont;}
};

#endif
