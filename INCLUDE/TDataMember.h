//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.10.11  by  Rene Brun
//*CMZ :  2.00/00 14/02/98  20.36.03  by  Fons Rademakers
//*CMZ :  1.03/03 05/09/97  15.00.25  by  Piotr Golonka
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TDataMember
#define ROOT_TDataMember

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
// TDataMember                                                          //
//                                                                      //
// Dictionary interface for a class data member.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif

class TList;
class TClass;
class TDataType;
class G__DataMemberInfo;
class TMethodCall;

class TDataMember : public TDictionary {

private:
   G__DataMemberInfo  *fInfo;        //pointer to CINT data member info
   TClass             *fClass;       //pointer to the class
   TDataType          *fDataType;    //pointer to data basic type descriptor

   // The following fields allows to access all (even private) datamembers and
   // provide a possibility of having options with names and strings.
   // These options are defined in a comment to a field!
   TMethodCall        *fValueGetter; //method that returns a value;
   TMethodCall        *fValueSetter; //method which sets value;
   TList              *fOptions;     //list of possible values 0=no restrictions

public:
   TDataMember(G__DataMemberInfo *info = 0, TClass *cl = 0);
   virtual       ~TDataMember();
   Int_t          GetArrayDim() const;
   Int_t          GetMaxIndex(Int_t dim) const;
   TClass        *GetClass() const { return fClass; }
   TDataType     *GetDataType() const { return fDataType; } //only for basic type
   const char    *GetName() const;
   Int_t          GetOffset() const;
   const char    *GetTitle() const;
   const char    *GetTypeName() const;
   const char    *GetFullTypeName() const;

   TList         *GetOptions();
   TMethodCall   *SetterMethod();
   TMethodCall   *GetterMethod();

   Int_t          Compare(TObject *obj);
   ULong_t        Hash();
   Bool_t         IsBasic() const;
   Bool_t         IsEnum() const;
   Bool_t         IsaPointer() const;
   Bool_t         IsPersistent() const { return TestBit(kObjIsPersistent); }
   Long_t         Property() const;

   ClassDef(TDataMember,0)  //Dictionary for a class data member
};


// This class implements one option in options list. All Data members are public
// for cenvenience reasons.

class TOptionListItem : public TObject {

public:
   TDataMember     *fDataMember;     //Data member to which this option belongs
   Long_t           fValue;          //Numerical value assigned to option
   Long_t           fValueMaskBit;   //Not used yet: bitmask used when option is a toggle group
   Long_t           fToggleMaskBit;  //Not used yet: bitmask used when toggling value
   char            *fOptName;        //Text assigned to option which appears in option menu
   char            *fOptLabel;       //Text (or enum) value assigned to option.

   TOptionListItem(TDataMember *m,Long_t val, Long_t valmask, Long_t tglmask,
                   const char *name, const char *label);
  ~TOptionListItem();
};

#endif
