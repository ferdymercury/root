//*CMZ :  2.00/11 08/08/98  22.27.14  by  Rene Brun
//*CMZ :  2.00/10 27/06/98  17.59.34  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  20.57.00  by  Fons Rademakers
//*-- Author :    Rene Brun   23/11/96

#ifndef ROOT_TSlider
#define ROOT_TSlider

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
// TSlider                                                              //
//                                                                      //
//  A TSlider object is a specialized TPad including a TSliderBox object//
//  The TSliderBox can be moved in the pad.                             //
//  Slider drawing options include the possibility to change the slider //
//  starting and ending positions or only one of them.                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPad
#include "TPad.h"
#endif

class TSlider : public TPad {

protected:
   Float_t       fMinimum;       //Slider minimum value in [0,1]
   Float_t       fMaximum;       //Slider maximum value in [0,1]
   TObject       *fObject;       //Pointer to associated object
   TString       fMethod;        //command to be executed when slider is changed

private:
   TSlider(const TSlider &org);             // no copy, use TObject::Clone()
   TSlider &operator=(const TSlider &rhs);  // idem

public:
   TSlider();
   TSlider(const Text_t *name, const Text_t *title, Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Color_t color=16, Short_t bordersize=2, Short_t bordermode =-1);
   virtual ~TSlider();
   TObject       *GetObject() {return fObject;}
   Float_t       GetMinimum() {return fMinimum;}
   Float_t       GetMaximum() {return fMaximum;}
   virtual const Text_t *GetMethod() const { return fMethod.Data(); }
   virtual void  Paint(Option_t *option="");
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   virtual void  SetMethod(const Text_t *method) { fMethod=method; } // *MENU*
   void          SetObject(TObject *obj=0) {fObject=obj;}
   virtual void  SetMinimum(Float_t min=0) {fMinimum=min;}
   virtual void  SetMaximum(Float_t max=1) {fMaximum=max;}
   virtual void  SetRange(Float_t xmin=0, Float_t xmax=1);

   ClassDef(TSlider,0)  //A user interface slider.
};

#endif

