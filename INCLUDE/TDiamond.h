//*CMZ :  1.03/09 06/12/97  18.58.01  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TDiamond
#define ROOT_TDiamond

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
// TDiamond                                                             //
//                                                                      //
// Diamond class.                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPaveText
#include "TPaveText.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif


class TDiamond :  public TPaveText {

public:
   TDiamond();
   TDiamond(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2);
   TDiamond(const TDiamond &diamond);
   virtual ~TDiamond();
           void  Copy(TObject &diamond);
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual void  Draw(Option_t *option="");
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void  Paint(Option_t *option="");
   virtual void  SavePrimitive(ofstream &out, Option_t *option);

   ClassDef(TDiamond,1)  //Diamond class
};

#endif

