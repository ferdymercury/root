//*CMZ :  1.03/09 09/12/97  20.57.38  by  Fons Rademakers
//*-- Author :    Rene Brun   23/11/96

#ifndef ROOT_TSliderBox
#define ROOT_TSliderBox

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
// TSliderBox                                                           //
//                                                                      //
// The moving box of a TSlider                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TWbox
#include "TWbox.h"
#endif

class TSlider;

class TSliderBox : public TWbox {

protected:
   TSlider   *fSlider;     //Pointer to slider

public:
   TSliderBox();
   TSliderBox(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
              Color_t color=18, Short_t bordersize=2 ,Short_t bordermode=-1);
   virtual ~TSliderBox();
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   void          SetSlider(TSlider*slider) {fSlider=slider;}

   ClassDef(TSliderBox,1)  //The moving box of a TSlider
};

#endif

