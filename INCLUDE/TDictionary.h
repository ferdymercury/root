//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/06/96

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

#ifndef ROOT_TDictionary
#define ROOT_TDictionary

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TDictionary                                                          //
//                                                                      //
// This class defines an abstract interface that must be implemented    //
// by all classes that contain dictionary information.                  //
//                                                                      //
// The dictionary is defined by the followling classes:                 //
// TDataType                              (typedef definitions)         //
// TGlobal                                (global variables)            //
// TGlobalFunc                            (global functions)            //
// TClass                                 (classes)                     //
//    TBaseClass                          (base classes)                //
//    TDataMember                         (class datamembers)           //
//    TMethod                             (class methods)               //
//       TMethodArg                       (method arguments)            //
//                                                                      //
// All the above classes implement the TDictionary abstract interface   //
// (note: the indentation shows aggregation not inheritance).           //
// The ROOT dictionary system provides a very extensive RTTI            //
// environment that facilitates a.o. object inspectors, object I/O,     //
// ROOT Trees, etc. Most of the type information is provided by the     //
// CINT C++ interpreter.                                                //
//                                                                      //
// TMethodCall                            (method call environment)     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

#include "Property.h"

enum EProperty {
   kIsClass       = G__BIT_ISCLASS,
   kIsStruct      = G__BIT_ISSTRUCT,
   kIsUnion       = G__BIT_ISUNION,
   kIsEnum        = G__BIT_ISENUM,
   kIsTypedef     = G__BIT_ISTYPEDEF,
   kIsFundamental = G__BIT_ISFUNDAMENTAL,
   kIsAbstract    = G__BIT_ISABSTRACT,
   kIsVirtual     = G__BIT_ISVIRTUAL,
   kIsPureVirtual = G__BIT_ISPUREVIRTUAL,
   kIsPublic      = G__BIT_ISPUBLIC,
   kIsProtected   = G__BIT_ISPROTECTED,
   kIsPrivate     = G__BIT_ISPRIVATE,
   kIsPointer     = G__BIT_ISPOINTER,
   kIsArray       = G__BIT_ISARRAY,
   kIsStatic      = G__BIT_ISSTATIC,
   kIsDefault     = G__BIT_ISDEFAULT,
   kIsReference   = G__BIT_ISREFERENCE,
   kIsConstant    = G__BIT_ISCONSTANT
};


class TDictionary : public TObject {

public:
   TDictionary() { }
   virtual ~TDictionary() { }

   virtual const char *GetName() const = 0;
   virtual const char *GetTitle() const = 0;
   virtual Long_t      Property() const = 0;

   virtual ULong_t     Hash() = 0;
   virtual Bool_t      IsSortable() const { return kTRUE; }
   virtual Int_t       Compare(TObject *obj) = 0;

   ClassDef(TDictionary,0)  //ABC defining interface to dictionary
};

#endif
