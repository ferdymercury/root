//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 08/08/98  22.27.14  by  Rene Brun
//*CMZ :  2.00/10 27/06/98  17.59.34  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  20.57.00  by  Fons Rademakers
//*-- Author :    Rene Brun   23/11/96

#ifndef ROOT_TSlider
#define ROOT_TSlider

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
   TSlider(const char *name, const char *title, Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Color_t color=16, Short_t bordersize=2, Short_t bordermode =-1);
   virtual ~TSlider();
   TObject       *GetObject() {return fObject;}
   Float_t       GetMinimum() {return fMinimum;}
   Float_t       GetMaximum() {return fMaximum;}
   virtual const char *GetMethod() const { return fMethod.Data(); }
   virtual void  Paint(Option_t *option="");
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   virtual void  SetMethod(const char *method) { fMethod=method; } // *MENU*
   void          SetObject(TObject *obj=0) {fObject=obj;}
   virtual void  SetMinimum(Float_t min=0) {fMinimum=min;}
   virtual void  SetMaximum(Float_t max=1) {fMaximum=max;}
   virtual void  SetRange(Float_t xmin=0, Float_t xmax=1);

   ClassDef(TSlider,0)  //A user interface slider.
};

#endif

