//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TAttFunc
#define ROOT_TAttFunc

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
// TAttFunc                                                             //
//                                                                      //
// Associated function attributes.                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TAttFunc {

protected:
   Color_t    fFuncColor;           //function color
   Style_t    fFuncStyle;           //function style
   Width_t    fFuncWidth;           //function width

public:
   TAttFunc();
   TAttFunc(Color_t fcolor,Style_t fstyle, Width_t fwidth);
   virtual   ~TAttFunc();
   void       Copy(TAttFunc &attfunc);
   Color_t    GetFuncColor() {return fFuncColor;}
   Style_t    GetFuncStyle() {return fFuncStyle;}
   Width_t    GetFuncWidth() {return fFuncWidth;}

   virtual void     Reset(Option_t *option="");
   virtual void     SetFuncColor(Color_t fcolor) { fFuncColor = fcolor;}
   virtual void     SetFuncStyle(Style_t fstyle) { fFuncStyle = fstyle;}
   virtual void     SetFuncWidth(Width_t fwidth) { fFuncWidth = fwidth;}

   ClassDef(TAttFunc,0)  //Associated function attributes
};

#endif

