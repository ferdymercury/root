//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Rene Brun   12/12/94

#ifndef ROOT_TAttHist
#define ROOT_TAttHist

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
// TAttHist                                                             //
//                                                                      //
// Histogram attributes.                                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TAttHist {

protected:
   Color_t    fHistColor;           //line color
   Style_t    fHistStyle;           //line style
   Width_t    fHistWidth;           //line width

public:
   TAttHist();
   TAttHist(Color_t lcolor,Style_t lstyle, Width_t lwidth);
   virtual         ~TAttHist();
   void             Copy(TAttHist &atthist);
   Color_t          GetHistColor() {return fHistColor;}
   Style_t          GetHistStyle() {return fHistStyle;}
   Width_t          GetHistWidth() {return fHistWidth;}

   virtual void     Print(Option_t *option="");
   virtual void     Reset(Option_t *option="");
   virtual void     SetHistColor(Color_t hcolor) { fHistColor = hcolor;}
   virtual void     SetHistStyle(Style_t hstyle) { fHistStyle = hstyle;}
   virtual void     SetHistWidth(Width_t hwidth) { fHistWidth = hwidth;}

   ClassDef(TAttHist,0)  //Histogram attributes
};

#endif
