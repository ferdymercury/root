//*CMZ :  2.22/01 27/04/99  11.02.14  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  17.46.06  by  Fons Rademakers
//*CMZ :  1.02/00 23/07/97  00.48.52  by  Fons Rademakers
//*-- Author :    Rene Brun   07/01/95

#ifndef ROOT_TClass
#define ROOT_TClass

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
// TClass                                                               //
//                                                                      //
// Dictionary of a class.                                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TBaseClass;
class TBrowser;
class TDataMember;
class TMethod;
class TRealData;
class TCint;
class TBuffer;
class G__ClassInfo;


class TClass : public TDictionary {

friend class TCint;

private:
   TString           fName;            //name of class
   TList            *fRealData;        //linked list for persistent members including base classes
   TList            *fBase;            //linked list for base classes
   TList            *fData;            //linked list for data members
   TList            *fMethod;          //linked list for methods
   TList            *fAllPubData;      //all public data members (including from base classes)
   TList            *fAllPubMethod;    //all public methods (including from base classes)
   const char       *fDeclFileName;    //name of class declaration file
   const char       *fImplFileName;    //name of class implementation file
   Short_t           fDeclFileLine;    //line of class declaration
   Short_t           fImplFileLine;    //line of class implementation
   UInt_t            fInstanceCount;   //number of instances of this class
   UInt_t            fOnHeap;          //number of instances on heap
   Version_t         fClassVersion;    //Class version Identifier
   G__ClassInfo     *fClassInfo;       //pointer to CINT class info class

   TMethod          *GetClassMethod(Long_t faddr);

public:
   TClass();
   TClass(const Text_t *name, Version_t cversion,
          const Text_t *dfil = 0, const Text_t *ifil = 0,
          Int_t dl = 0, Int_t il = 0);
   virtual      ~TClass();
   void          AddInstance(Bool_t heap = kFALSE) { fInstanceCount++; if (heap) fOnHeap++; }
   virtual void  Browse(TBrowser *b);
   void          BuildRealData();
   void          Draw(Option_t *option="");
   Text_t       *EscapeChars(Text_t * text);
   Version_t     GetClassVersion() const { return fClassVersion; }
   TDataMember  *GetDataMember(Text_t *datamember);
   const char   *GetDeclFileName() const { return fDeclFileName; }
   Short_t       GetDeclFileLine() const { return fDeclFileLine; }
   G__ClassInfo *GetClassInfo() const { return fClassInfo; }
   TList        *GetListOfDataMembers();
   TList        *GetListOfBases();
   TList        *GetListOfMethods();
   TList        *GetListOfRealData() { return fRealData; }
   TList        *GetListOfAllPublicMethods();
   TList        *GetListOfAllPublicDataMembers();
   const char   *GetName() const { return fName.Data(); }
   const char   *GetTitle() const;
   const char   *GetImplFileName() const { return fImplFileName; }
   Short_t       GetImplFileLine() const { return fImplFileLine; }
   TClass       *GetBaseClass(const Text_t *classname);
   TClass       *GetBaseClass(const TClass *cl);
   TClass       *GetBaseDataMember(const Text_t *datamember);
   UInt_t        GetInstanceCount() { return fInstanceCount; }
   UInt_t        GetHeapInstanceCount() { return fOnHeap; }
   void          GetMenuItems(TList *listitems);
   TMethod      *GetMethod(const Text_t *method, const Text_t *params);
   TMethod      *GetMethodWithPrototype(const Text_t *method, const Text_t *proto);
   TMethod      *GetMethodAny(const Text_t *method);
   Int_t         GetNdata();
   Int_t         GetNmethods();
   Int_t         Compare(TObject *obj);
   ULong_t       Hash() { return fName.Hash(); }
   Bool_t        InheritsFrom(const Text_t *cl);
   Bool_t        InheritsFrom(const TClass *cl);
   Bool_t        IsFolder() {return kTRUE;}
   void         *New();
   void          Destructor(void *obj, Bool_t dtorOnly = kFALSE);
   void          ResetInstanceCount() { fInstanceCount = fOnHeap = 0; }
   Int_t         Size() const;
   Long_t        Property() const;

   static TClass *Load(TBuffer &b);
   void           Store(TBuffer &b) const;

   ClassDef(TClass,0)  //Dictionary containing class information
};

extern TClass *CreateClass(const char *cname, Version_t id,
                           const char *dfil, const char *ifil,
                           Int_t dl, Int_t il);

#endif
