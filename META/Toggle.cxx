//*CMZ :  1.03/09 11/12/97  09.14.34  by  Rene Brun
//*-- Author :    Piotr Golonka   30/07/97

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
// Assume that user provides an object with a two-state field , and     //
// methods to Get/Set value of this field. This object enables to switch//
// values via this method when the only thing you know about the field  //
// is the name of the method (or method itself) which sets the field.   //
// This facility is required in context Pop-Up menu, when the only      //
// information about how to toggle a field is a name of methhod which   //
// sets it.                                                             //
// This Object may be also used for toggling an integer variable ,      //
// which may be important while building universal objects...           //
// When user provides a "set-method" of name SetXXX this object tries   //
// automaticaly find a matching "get-method" by lookin for a method     //
// with name GetXXX or IsXXXfor given object.                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TClass.h"
#include "TMethod.h"
#include "TToggle.h"
#include "TDataMember.h"


ClassImp(TToggle)

//______________________________________________________________________________
TToggle::TToggle()
{
// TToggle default constructor. You have to initialize it before using
// by making a call to SetToggledVariable() or SetToggledObject()
    fState      =  0;
    fValue      = -1;
    fOnValue    =  1;
    fOffValue   =  0;
    fInitialized=  0;
    fObject     =  0;
    fGetter     =  0;
    fSetter     =  0;
    fTglVariable=  0;
}

//______________________________________________________________________________
void TToggle::SetToggledVariable(Int_t &var)
{
   // Initializes object for use with a variable - you pass it via reference
   // so it will be modified by Toggle.

   fTglVariable=&var;
   fValue=var;
}

//______________________________________________________________________________
Bool_t  TToggle::GetState()
{
   // Returns the state of Toggle according to its current value and
   // fOnValue ; Returns true if they match.
   if (!fInitialized){
      Error("GetState", "object has not been initialized yet!");
      return 0;
   } else {
      fGetter->Execute(fObject,fValue);
      return (fState=(fValue==fOnValue));
   }
}

//______________________________________________________________________________
void TToggle::SetState(Bool_t state)
{
   // Sets the value of toggle to fOnValue or fOffValue according to passed
   // argument.

   if (!fInitialized)
      Error("SetState", "object has not been initialized yet!");
   else {
      Text_t stringon[7];
      Text_t stringoff[7];
      sprintf(stringon,"%li",fOnValue);
      sprintf(stringoff,"%li",fOffValue);

      fSetter->Execute(fObject, state ? stringon:stringoff);
      fState=state;
      fValue= ( state ? fOnValue : fOffValue);
   }
}

//______________________________________________________________________________
void TToggle::SetValue(Long_t val)
{
   // Sets the value of toggle and modifies its state according to whether
   // the value is equal to fOnValue.

   if (!fInitialized)
      Error("SetValue()", "object has not been initialized yet!");
   else {
      Text_t stringval[7];
      sprintf(stringval,"%li",val);
      fSetter->Execute(fObject, stringval);
      fState=(val==fOnValue);
      fValue= val;
   }
}

//______________________________________________________________________________
void TToggle::Toggle()
{
   // Toggles the Values and State of this object and connected data!

   if (fInitialized){
      if (fTglVariable){
         *fTglVariable = !(*fTglVariable);
         fValue=(*fTglVariable);
         fState=*fTglVariable;
      }
      if (fGetter && fSetter){
         fGetter->Execute(fObject,fValue);
         fValue=( (fValue==fOnValue) ? fOffValue:fOnValue);
         fState=(!(fValue!=fOnValue));
         Text_t stringon[7];
         sprintf(stringon,"%li",fValue);
         fSetter->Execute(fObject, stringon);
      }
   }
}

//______________________________________________________________________________
void TToggle::SetToggledObject(TObject *obj, TMethod *anymethod)
{
   // Initializes it to toggle an object's datamember using this object's method.

   fObject=obj;
   TDataMember *m=anymethod->FindDataMember();
   if (!m)
      Error("SetToggledObject", "cannot determine TDataMember!");
   else {
      fGetter=m->GetterMethod();
      fSetter=m->SetterMethod();
      fInitialized = 1;
   }
}
