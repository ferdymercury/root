//*CMZ :  1.03/09 06/12/97  18.58.01  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TDiamond
#define ROOT_TDiamond

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

