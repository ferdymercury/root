//*CMZ :  2.00/00 15/02/98  17.00.36  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  23.37.21  by  Fons Rademakers
//*-- Author :    Piotr Golonka   30/07/97

#ifndef ROOT_TToggle
#define ROOT_TToggle

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
// TToggle                                                              //
//                                                                      //
// This class defines toggling facility for both - object's method or   //
// variables.                                                           //
// Assume that user provides an object with a two-state field, and      //
// methods to Get/Set value of this field. This object enables to switch//
// values via this method when the only thing you know about the field  //
// is the name of the method (or method itself) which sets the field.   //
// This facility is required in context popup menu, when the only       //
// information about how to toggle a field is a name of method which    //
// sets it.                                                             //
// This Object may be also used for toggling an integer variable,       //
// which may be important while building universal objects...           //
// When user provides a "set-method" of name SetXXX this object tries   //
// automaticaly to find a matching "get-method" by looking for a method //
// with name GetXXX or IsXXX for given object.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TMethodCall
#include "TMethodCall.h"
#endif
#ifndef ROOT_TMethod
#include "TMethod.h"
#endif
#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TToggle: public TNamed {

private:
   Bool_t       fState;        //Object's state - "a local copy"
   Long_t       fOnValue;      //Value recognized as switched ON (Def=1)
   Long_t       fOffValue;     //Value recognized as switched OFF(Def=0)
   Long_t       fValue;        //Local copy of a value returned by called function

protected:
   Bool_t       fInitialized;  //True if either SetToggledObject or SetToggledVariable called - enables Toggle() method.
   TObject     *fObject;       //The object this Toggle belongs to
   TMethodCall *fGetter;       //Method to Get a value of fObject;
   TMethodCall *fSetter;       //Method to Set a value of fObject;

   Int_t       *fTglVariable;  //Alternatively: pointer to an integer value to be Toggled instead of TObjectl

public:
   TToggle();
   virtual void    SetToggledObject(TObject *obj, TMethod *anymethod);

   // you just provide any method which has got an initialized pointer
   // to TDataMember... The rest is done automatically...

   virtual void    SetToggledVariable(Int_t &var);

   virtual Bool_t  IsInitialized(){return fInitialized;};

   virtual Bool_t  GetState();
   virtual void    SetState(Bool_t state);
   virtual void    Toggle();

   virtual void    SetOnValue(Long_t lon){fOnValue=lon;};
   virtual Long_t  GetOnValue(){return fOnValue;};
   virtual void    SetOffValue(Long_t lof){fOffValue=lof;};
   virtual Long_t  GetOffValue(){return fOffValue;};

   virtual Int_t   GetValue(){return fValue;};
   virtual void    SetValue(Long_t val);

   ClassDef(TToggle,0)  //Facility for toggling datamembers on/off
};

#endif
