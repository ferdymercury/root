//*CMZ :  2.20/04 10/12/98  15.31.16  by  Fons Rademakers
//*CMZ :  2.20/00 06/11/98  14.40.30  by  Rene Brun
//*CMZ :  2.00/13 29/10/98  08.32.37  by  Fons Rademakers
//*CMZ :  2.00/12 28/09/98  13.19.23  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  11.26.20  by  Rene Brun
//*CMZ :  2.00/09 26/06/98  10.21.08  by  Rene Brun
//*CMZ :  2.00/06 15/05/98  00.15.08  by  Rene Brun
//*CMZ :  2.00/00 05/03/98  17.46.05  by  Fons Rademakers
//*CMZ :  1.03/09 12/12/97  18.40.43  by  Fons Rademakers
//*-- Author :    Rene Brun   07/01/95

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
//  The ROOT global object gROOT contains a list of all defined         //
//  classes. This list is build when a reference to a class dictionary  //
//  is made. When this happens, the static "class"::Dictionary()        //
//  function is called to create a TClass object describing the         //
//  class. The Dictionary() function is defined in the ClassDef         //
//  macro and stored (at program startup or library load time) together //
//  with the class name in the TClassTable singleton object.            //
//  For a description of all dictionary classes see TDictionary.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

//*-*x7.5 macros/layout_class

#include <iostream.h>

#include "TROOT.h"
#include "TClass.h"
#include "TBaseClass.h"
#include "TBrowser.h"
#include "TDataMember.h"
#include "TMethod.h"
#include "TMethodArg.h"
#include "TDataType.h"
#include "TRealData.h"
#include "TVirtualPad.h"
#include "TInterpreter.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"
#include "Api.h"

#ifndef WIN32
extern long G__globalvarpointer;
#endif


class TBuildRealData : public TMemberInspector {

private:
   TObject *fRealDataObject;
   TClass  *fRealDataClass;

public:
   TBuildRealData(TObject *obj, TClass *cl)
      { fRealDataObject = obj; fRealDataClass = cl; }
   void Inspect(TClass *cl, char *parent, char *name, void *addr);
};

//______________________________________________________________________________
void TBuildRealData::Inspect(TClass *cl, char *pname, char *mname, void *add)
{
   // This method is called from ShowMembers() via BuildRealdata().

   TRealData   *rd;
   TDataMember *dm = cl->GetDataMember(mname);
   if (!dm || !dm->IsPersistent()) return;

   char rname[256];
   strcpy(rname,pname);
   strcat(rname,mname);
   Int_t offset = Int_t((Long_t)add - (Long_t)fRealDataObject);

   // Data Member is a pointer
   if (dm->IsaPointer()) {     // pointer to class object
      if (!dm->IsBasic()) {
         rd = new TRealData(rname,offset,dm);
         fRealDataClass->GetListOfRealData()->Add(rd);
      } else {                 // pointer to basic data type
         rd = new TRealData(rname,offset,dm);
         fRealDataClass->GetListOfRealData()->Add(rd);
      }
   } else {
     // Data Member is a basic data type
     rd = new TRealData(rname,offset,dm);
     fRealDataClass->GetListOfRealData()->Add(rd);
   }
}


ClassImp(TClass)

//______________________________________________________________________________
TClass::TClass() : TDictionary()
{
   // Default ctor.

   fBase         = 0;
   fData         = 0;
   fMethod       = 0;
   fRealData     = 0;
   fClassInfo    = 0;

   ResetInstanceCount();
}

//______________________________________________________________________________
TClass::TClass(const Text_t *name, Version_t cversion,
               const Text_t *dfil, const Text_t *ifil, Int_t dl, Int_t il)
        : TDictionary()
{
   // Create a TClass object. This object contains the full dictionary
   // of a class. It has list to baseclasses, datamembers and methods.

   if (!gROOT)
      ::Fatal("TClass::TClass", "ROOT system not initialized");

   fName           = name;
   fClassVersion   = cversion;
   fDeclFileName   = dfil;
   fImplFileName   = ifil;
   fDeclFileLine   = dl;
   fImplFileLine   = il;
   fBase           = 0;
   fData           = 0;
   fMethod         = 0;
   fRealData       = 0;
   fClassInfo      = 0;

   ResetInstanceCount();

   if (!fClassInfo) {
      if (!gInterpreter)
         ::Fatal("TClass::TClass", "gInterpreter not initialized");

      gInterpreter->SetClassInfo(this);   // sets fClassInfo pointer
      if (!fClassInfo)
         ::Warning("TClass::TClass", "no dictionary for class %s is available", name);
   }

   gROOT->GetListOfClasses()->Add(this);
}

//______________________________________________________________________________
TClass::~TClass()
{
   // TClass dtor. Deletes all list that might have been created.

   if (fBase)
      fBase->Delete();
   delete fBase;

   if (fData)
      fData->Delete();
   delete fData;

   if (fMethod)
      fMethod->Delete();
   delete fMethod;

   if (fRealData)
      fRealData->Delete();
   delete fRealData;

   gROOT->GetListOfClasses()->Remove(this);

   delete fClassInfo;
}

//______________________________________________________________________________
void TClass::Browse(TBrowser *b)
{
   // This method is called by a browser to get the class information.

   if (!fClassInfo) return;

   if (b) {
      if (!fRealData) BuildRealData();

      b->Add(GetListOfDataMembers(), "Data Members");
      b->Add(GetListOfRealData(), "Real Data Members");
      b->Add(GetListOfMethods(), "Methods");
      b->Add(GetListOfBases(), "Base Classes");
   }
}

//______________________________________________________________________________
void TClass::BuildRealData()
{
   // Build a full list of persistent data members.
   // Scans the list of all data members in the class itself and also
   // in all base classes. For each persistent data member, inserts a
   // TRealData object in the list fRealData.

   if (!fClassInfo) return;

   TObject *realDataObject;

   fRealData = new TList(this);

   // Create an instance of this class
   if (!strcmp(GetName(),"TROOT")) realDataObject = gROOT;
   else                            realDataObject = (TObject*)New();

   // The following statement will call recursively all the subclasses
   // of this class.
   if (realDataObject) {
      char parent[256];
      parent[0] = 0;
      TBuildRealData brd(realDataObject, this);
      if (InheritsFrom(TObject::Class())) {
         realDataObject->ShowMembers(brd, parent);
      } else {
         G__CallFunc func;
         void *address;
         long  offset;
         func.SetFunc(fClassInfo->GetMethod("ShowMembers",
                      "TMemberInspector&,char*", &offset).InterfaceMethod());
         func.SetArg((long)&brd);
         func.SetArg((long)parent);
         address = (void*)((long)realDataObject + offset);
         func.Exec(address);
      }
   }

   if (realDataObject != gROOT) {
      if (InheritsFrom(TObject::Class())) {
         realDataObject->SetBit(kZombie); //this info useful in object destructor
         delete realDataObject;
      } else {
         Destructor(realDataObject);
         //::operator delete(realDataObject);
      }
   }
}

//______________________________________________________________________________
Int_t TClass::Compare(TObject *obj)
{
   // Compare to other object. Returns 0<, 0 or >0 depending on
   // whether "this" is lexicographically less than, equal to, or
   // greater than obj.

   return strcmp(fName.Data(), obj->GetName());
}

//______________________________________________________________________________
void TClass::Draw(Option_t *option)
{
   // Draw detailed class inheritance structure.
   // If a class B inherits from a class A, the description of B is drawn
   // on the right side of the description of A.
   // Member functions overridden by B are shown in class A with a blue line
   // erasing the corresponding member function

   if (!fClassInfo) return;

   TVirtualPad *padsav = gPad;

   // Should we create a new canvas?
   TString opt=option;
   if (!padsav || !opt.Contains("same")) {
      TVirtualPad *padclass = (TVirtualPad*)(gROOT->GetListOfCanvases())->FindObject("class");
      if (!padclass) {
         if (gInterpreter) {
            char cline[100];
            sprintf(cline,"TCanvas *psCanvas = new TCanvas(\"class\",\"class\", 20, 20, 1000,750);");
            gInterpreter->ProcessLine(cline);
         }
      } else  padclass->cd();
   }

   if (gPad) gPad->DrawClassObject(this,option);

   if (padsav) padsav->cd();
}

//______________________________________________________________________________
Text_t *TClass::EscapeChars(Text_t *text)
{
   // Introduce an escape character (@) in front of a special chars.
   // You need to use the result immediately before it is being overwritten.

   static char name[128];
   Int_t nch = strlen(text);
   if (nch > 127) nch = 127;
   Int_t icur = -1;
   for (Int_t i=0;i<nch;i++) {
      icur++;
      if ( text[i] == '\"' || text[i] == '['
        || text[i] == ']'  || text[i] == '&'
        || text[i] == '#'  || text[i] == '!'
        || text[i] == '^'  || text[i] == '<'
        || text[i] == '?'  || text[i] == '>') { name[icur] = '@'; icur++; }
      name[icur] = text[i];
   }
   name[icur+1] = 0;
   return name;
}

//______________________________________________________________________________
TClass *TClass::GetBaseClass(const Text_t *classname)
{
   // Return pointer to the base class "classname". Returns 0 in case
   // "classname" is not a base class. Takes care of multiple inheritance.

   // check if class name itself is equal to classname
   if (strcmp(GetName(), classname) == 0) return this;

   if (!fClassInfo) return 0;

   TClass     *c, *c1;
   TBaseClass *inh;
   TIter      next(GetListOfBases());

   // otherwise look at inheritance tree
   while ((inh = (TBaseClass *) next())) {
      c = inh->GetClassPointer();
      if (c) {
         if (strcmp(c->GetName(), classname) == 0) return c;
         c1 = c->GetBaseClass(classname);
         if (c1) return c1;
      }
   }
   return 0;
}

//______________________________________________________________________________
TClass *TClass::GetBaseClass(const TClass *cl)
{
   // Return pointer to the base class "cl". Returns 0 in case "cl"
   // is not a base class. Takes care of multiple inheritance.

   // check if class name itself is equal to classname
   if (cl == this) return this;

   if (!fClassInfo) return 0;

   TClass     *c, *c1;
   TBaseClass *inh;
   TIter      next(GetListOfBases());

   // otherwise look at inheritance tree
   while ((inh = (TBaseClass *) next())) {
      c = inh->GetClassPointer();
      if (c) {
         if (cl == c) return c;
         c1 = c->GetBaseClass(cl);
         if (c1) return c1;
      }
   }
   return 0;
}

//______________________________________________________________________________
TClass *TClass::GetBaseDataMember(const Text_t *datamember)
{
   // Return pointer to (base) class that contains datamember.

   if (!fClassInfo) return 0;

   // Check if data member exists in class itself
   TDataMember *dm = GetDataMember((char*)datamember);
   if (dm) return this;

   // if datamember not found in class, search in next base classes
   TBaseClass *inh;
   TIter       next(GetListOfBases());
   while ((inh = (TBaseClass *) next())) {
      TClass *c = inh->GetClassPointer();
      if (c) {
         TClass *cdm = c->GetBaseDataMember(datamember);
         if (cdm) return cdm;
      }
   }

   return 0;
}

//______________________________________________________________________________
TDataMember *TClass::GetDataMember(Text_t *datamember)
{
   // Return pointer to datamember object with name "datamember".

   if (!fClassInfo) return 0;

   // Strip off leading *'s and trailing [
   char memb[64];
   char *s = datamember;
   while (*s == '*') s++;
   strcpy(memb, s);
   if ((s = strchr(memb, '['))) *s = 0;

   TDataMember *dm;
   TIter   next(GetListOfDataMembers());

   while ((dm = (TDataMember *) next()))
      if (strcmp(memb, dm->GetName()) == 0)
         return dm;
   return 0;
}

//______________________________________________________________________________
TList *TClass::GetListOfBases()
{
   // Return list containing the TBaseClass(es) of a class.

   if (!fClassInfo) return 0;

   if (!fBase) {
      if (!gInterpreter)
         Fatal("GetListOfBases", "gInterpreter not initialized");

      gInterpreter->CreateListOfBaseClasses(this);
   }
   return fBase;
}

//______________________________________________________________________________
TList *TClass::GetListOfDataMembers()
{
   // Return list containing the TDataMembers of a class.

   if (!fClassInfo) return 0;

   if (!fData) {
      if (!gInterpreter)
         Fatal("GetListOfDataMembers", "gInterpreter not initialized");

      gInterpreter->CreateListOfDataMembers(this);
   }
   return fData;
}

//______________________________________________________________________________
TList *TClass::GetListOfMethods()
{
   // Return list containing the TMethods of a class.

   if (!fClassInfo) return 0;

   if (!fMethod) {
      if (!gInterpreter)
         Fatal("GetListOfMethods", "gInterpreter not initialized");

      gInterpreter->CreateListOfMethods(this);
   }
   return fMethod;
}

//______________________________________________________________________________
void TClass::GetMenuItems(TList *list)
{
   // Returns list of methods accessible by context menu.

   if (!fClassInfo) return;

   // get the base class
   TIter nextBase(GetListOfBases(), kIterBackward);
   TBaseClass *baseClass;
   while ((baseClass = (TBaseClass *) nextBase()))
      baseClass->GetClassPointer()->GetMenuItems(list);

   // remove methods redefined in this class with no menu
   TMethod *method, *m;
   TIter next(GetListOfMethods(), kIterBackward);
   while ((method = (TMethod*)next())) {
      m = (TMethod*)list->FindObject(method->GetName());
      if (method->IsMenuItem()) {
         if (!m) list->AddFirst(method);
      } else {
         if (m) list->Remove(m);
      }
   }
}

//______________________________________________________________________________
TMethod *TClass::GetMethodAny(const Text_t *method)
{
   // Return pointer to method without looking at parameters.
   // Does not look in (possible) base classes.

   if (!fClassInfo) return 0;

   TMethod *m;
   TIter    next(GetListOfMethods());

   while ((m = (TMethod *) next())) {
      if (strcmp(method, m->GetName()) == 0) return m;
   }
   return 0;
}

//______________________________________________________________________________
TMethod *TClass::GetMethod(const Text_t *method, const Text_t *params)
{
   // Find the best method (if there is one) matching the parameters.
   // The params string must contain argument values, like "3189, \"aap\", 1.3".
   // The function invokes GetClassMethod to search for a possible method
   // in the class itself or in its base classes. Returns 0 in case method
   // is not found.

   if (!fClassInfo) return 0;

   if (!gInterpreter)
      Fatal("GetMethod", "gInterpreter not initialized");

   Long_t faddr = (Long_t)gInterpreter->GetInterfaceMethod(this, (char *)method,
                                                           (char *)params);
   if (!faddr) return 0;

   // loop over all methods in this class (and its baseclasses) till
   // we find a TMethod with the same faddr

   TMethod *m = GetClassMethod(faddr);
   if (m) return m;

   TBaseClass *base;
   TIter       next(GetListOfBases());
   while ((base = (TBaseClass *) next())) {
      TClass *c = base->GetClassPointer();
      if (c) {
         m = c->GetClassMethod(faddr);
         if (m) return m;
      }
   }
   Error("GetMethod",
       "\nDid not find matching TMethod <%s> with \"%s\" for %s",
       method,params,GetName());
   return 0;
}

//______________________________________________________________________________
TMethod *TClass::GetMethodWithPrototype(const Text_t *method, const Text_t *proto)
{
   // Find the method with a given prototype. The proto string must be of the
   // form: "char*,int,double". Returns 0 in case method is not found.

   if (!fClassInfo) return 0;

   if (!gInterpreter)
      Fatal("GetMethod", "gInterpreter not initialized");

   Long_t faddr = (Long_t)gInterpreter->GetInterfaceMethodWithPrototype(this,
                                                 (char *)method, (char *)proto);
   if (!faddr) return 0;

   // loop over all methods in this class (and its baseclasses) till
   // we find a TMethod with the same faddr

   TMethod *m = GetClassMethod(faddr);
   if (m) return m;

   TBaseClass *base;
   TIter       next(GetListOfBases());
   while ((base = (TBaseClass *) next())) {
      TClass *c = base->GetClassPointer();
      if (c) {
         m = c->GetClassMethod(faddr);
         if (m) return m;
      }
   }
   Error("GetMethod", "Did not find matching TMethod (should never happen)");
   return 0;
}

//______________________________________________________________________________
TMethod *TClass::GetClassMethod(Long_t faddr)
{
   // Look for a method in this class that has the interface function
   // address faddr.

   if (!fClassInfo) return 0;

   TMethod *m;
   TIter    next(GetListOfMethods());
   while ((m = (TMethod *) next())) {
      if (faddr == (Long_t)m->InterfaceMethod())
         return m;
   }
   return 0;
}

//______________________________________________________________________________
const char *TClass::GetTitle() const
{
   // Return the description of the class.

   if (!fClassInfo) return 0;
   return GetClassInfo()->Title();
}

//______________________________________________________________________________
Int_t TClass::GetNdata()
{
   // Return the number of data members of this class
   // Note that in case the list of data members is not yet created, it will be done
   // by GetListOfDataMembers().

   if (!fClassInfo) return 0;

   TList *lm = GetListOfDataMembers();
   if (lm)
      return lm->GetSize();
   else
      return 0;
}

//______________________________________________________________________________
Int_t TClass::GetNmethods()
{
   // Return the number of methods of this class
   // Note that in case the list of methods is not yet created, it will be done
   // by GetListOfMethods().

   if (!fClassInfo) return 0;

   TList *lm = GetListOfMethods();
   if (lm)
      return lm->GetSize();
   else
      return 0;
}

//______________________________________________________________________________
Bool_t TClass::InheritsFrom(const Text_t *classname)
{
   // Return kTRUE if this class inherits from a class with name "classname".

   if (strcmp(GetName(), classname) == 0) return kTRUE;

   if (!fClassInfo) return kFALSE;

   if (GetBaseClass(classname)) return kTRUE;
   return kFALSE;
}

//______________________________________________________________________________
Bool_t TClass::InheritsFrom(const TClass *cl)
{
   // Return kTRUE if this class inherits from class cl.

   if (cl == this) return kTRUE;

   if (!fClassInfo) return kFALSE;

   if (GetBaseClass(cl)) return kTRUE;
   return kFALSE;
}

//______________________________________________________________________________
void *TClass::New()
{
   // Return a pointer to a newly allocated object of this class.
   // The class must have a default constructor.

   if (!fClassInfo) return 0;

   void *p = GetClassInfo()->New();
   if (!p) Error("New", "no default ctor for class %s", GetName());

   return p;
}

//______________________________________________________________________________
void TClass::Destructor(void *obj, Bool_t dtorOnly)
{
   // Explicitely call destructor for object.

   if (!fClassInfo) return;

   G__CallFunc func;
   void *address;
   long  offset;
   char  dtor[64];
   sprintf(dtor, "~%s", GetName());
   func.SetFunc(fClassInfo->GetMethod(dtor, "", &offset).InterfaceMethod());
   address = (void*)((long)obj + offset);
   if (dtorOnly) {
#ifdef WIN32
      long saveglobalvar = G__getgvp();
      G__setgvp((long)address);
      func.Exec(address);
      G__setgvp(saveglobalvar);
#else
      long saveglobalvar = G__globalvarpointer;
      G__globalvarpointer = (long)address;
      func.Exec(address);
      G__globalvarpointer = saveglobalvar;
#endif
   } else
      func.Exec(address);
}

//______________________________________________________________________________
Int_t TClass::Size() const
{
   // Return size of object of this class.

   if (!fClassInfo) return 0;
   return GetClassInfo()->Size();
}

//______________________________________________________________________________
Long_t TClass::Property() const
{
   // Get property description word. For meaning of bits see EProperty.

   if (!fClassInfo) return 0;
   return GetClassInfo()->Property();
}

//______________________________________________________________________________
TClass *TClass::Load(TBuffer &b)
{
   // Load class description from I/O buffer and return class object.

   char s[80];

   b.ReadString(s, 80);
   return gROOT->GetClass(s, kTRUE);
}

//______________________________________________________________________________
void TClass::Store(TBuffer &b) const
{
   // Store class description on I/O buffer.

   b.WriteString(GetName());
}

//______________________________________________________________________________
TClass *CreateClass(const char *cname, Version_t id, const char *dfil,
                    const char *ifil, Int_t dl, Int_t il)
{
   // Global function called by a class' static Dictionary() method
   // (see the ClassDef macro).

   return new TClass(cname, id, dfil, ifil, dl, il);
}
