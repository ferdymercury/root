//*CMZ :  2.22/05 10/06/99  09.00.07  by  Rene Brun
//*CMZ :  2.20/04 09/12/98  19.11.39  by  Rene Brun
//*CMZ :  2.00/12 14/09/98  13.40.08  by  Fons Rademakers
//*CMZ :  2.00/11 17/08/98  15.14.16  by  Rene Brun
//*CMZ :  2.00/10 27/07/98  18.35.33  by  Fons Rademakers
//*CMZ :  2.00/08 26/05/98  16.39.16  by  Fons Rademakers
//*CMZ :  2.00/00 11/02/98  12.53.12  by  Rene Brun
//*CMZ :  1.03/08 17/11/97  16.15.42  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TObject
#define ROOT_TObject

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
// TObject                                                              //
//                                                                      //
// Mother of all ROOT objects.                                          //
//                                                                      //
// The TObject class provides default behaviour and protocol for all    //
// objects in the ROOT system. It provides protocol for object I/O,     //
// error handling, sorting, inspection, printing, drawing, etc.         //
// Every object which inherits from TObject can be stored in the        //
// ROOT collection classes.                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif
#ifndef ROOT_Varargs
#include "Varargs.h"
#endif
#ifndef ROOT_TStorage
#include "TStorage.h"
#endif

#ifdef WIN32
#undef RemoveDirectory
#endif

#if defined(R__ANSISTREAM)
#include <iosfwd>
using namespace std;
#elif R__MWERKS
template <class charT> class ios_traits;
template <class charT, class traits> class basic_ofstream;
typedef basic_ofstream<char, ios_traits<char> > ofstream;
#else
class ofstream;
#endif

class TList;
class TBrowser;
class TBuffer;
class TObjArray;
class TMethod;
class TTimer;

//----- client flags
enum EObjBits {
   kCanDelete        = BIT(0),   // if object in a list can be deleted
   kObjIsPersistent  = BIT(2),   // if datamember is persistent (TDataMember)
   kObjIsParent      = BIT(1),   // if hyperlink is parent of linked list (TLink)
   kObjInCanvas      = BIT(3),   // if object has been inserted in a pad/canvas
   kModified         = BIT(4),   // if object has been modified
   kDoneByView       = BIT(5),   // if object was created by the TObjectView
   kCannotPick       = BIT(6)    // if object in a pad cannot be picked
};


class TObject {

private:
   UInt_t         fUniqueID;   //object unique identifier
   UInt_t         fBits;       //bit field status word

   static Long_t  fgDtorOnly;    //object for which to call dtor only (i.e. no delete)
   static Int_t   fgDirLevel;    //indentation level for ls()
   static Bool_t  fgObjectStat;  //if true keep track of objects in TObjectTable

protected:
   void MakeZombie() { fBits |= kZombie; }
#ifndef __CINT__
   void DoError(int level, const char *location, const char *fmt, va_list va) const;
#endif

public:
   //----- private flags, clients can only test but not change them
   enum {
      kIsOnHeap      = 0x01000000,    // object is on heap
      kNotDeleted    = 0x02000000,    // object has not been deleted
      kZombie        = 0x04000000,    // object ctor failed
      kBitMask       = 0x00ffffff
   };

   //----- Write() options
   enum {
      kSingleKey     = BIT(0),        // write collection with single key
      kOverwrite     = BIT(1)         // overwrite existing object with same name
   };

   TObject();
   TObject(const TObject &object);
   TObject &operator=(const TObject &rhs);
   virtual ~TObject();

   void              AppendPad(Option_t *option="");
   virtual void      Browse(TBrowser *b);
   virtual const Text_t *ClassName() const;
   virtual void      Clear(Option_t * /*option*/ ="") { }
   virtual TObject  *Clone();
   virtual void      Close(Option_t *option="");
   virtual Int_t     Compare(TObject *obj);
   virtual void      Copy(TObject &object);
   virtual void      Delete(Option_t *option=""); // *MENU*
   virtual Int_t     DistancetoPrimitive(Int_t px, Int_t py);
   virtual void      Draw(Option_t *option="");
   virtual void      DrawClass(); // *MENU*
   virtual void      DrawClone(Option_t *option=""); // *MENU*
   virtual void      Dump(); // *MENU*
   virtual void      Execute(Text_t *method,  Text_t *params);
   virtual void      Execute(TMethod *method, TObjArray *params);
   virtual void      ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual Option_t *GetDrawOption() const;
   virtual UInt_t    GetUniqueID() const;
   virtual const Text_t *GetName() const;
   virtual const Text_t *GetIconName() const;
   virtual Option_t     *GetOption() const { return ""; }
   virtual Text_t       *GetObjectInfo(Int_t px, Int_t py);
   virtual const Text_t *GetTitle() const;
   virtual Bool_t    HandleTimer(TTimer *timer);
   virtual ULong_t   Hash();
   virtual Bool_t    InheritsFrom(const Text_t *classname);
   virtual Bool_t    InheritsFrom(const TClass *cl);
   virtual void      Inspect(); // *MENU*
   virtual Bool_t    IsFolder();
   virtual Bool_t    IsEqual(TObject *obj);
   virtual Bool_t    IsSortable() const { return kFALSE; }
   virtual Bool_t    IsModified() { return TestBit(kModified); }
           Bool_t    IsOnHeap() const { return TestBit(kIsOnHeap); }
           Bool_t    IsZombie() const { return TestBit(kZombie); }
   virtual Bool_t    Is3D();
   virtual void      ls(Option_t *option="");
   virtual void      Modified(Bool_t flag=kTRUE) { if (flag) SetBit(kModified,flag); }
   virtual void      Paint(Option_t *option="");
   virtual void      Pop();
   virtual void      Print(Option_t *option="");
   virtual void      Read(const Text_t *name);
   virtual void      RecursiveRemove(TObject *obj);
   virtual void      SavePrimitive(ofstream &out, Option_t *option);
   virtual void      SetDrawOption(Option_t *option="");  // *MENU*
   virtual void      SetUniqueID(UInt_t uid);
   virtual void      Sizeof3D() const;
   virtual void      UseCurrentStyle();
   virtual void      Write(const Text_t *name=0, Int_t option=0, Int_t bufsize=0);

   //----- operators
   void    *operator new(size_t sz) { return TStorage::ObjectAlloc(sz); }
   void    *operator new(size_t sz, void *vp) { return TStorage::ObjectAlloc(sz, vp); }
   void     operator delete(void *ptr);
#ifndef __CINT__
#ifdef R__PLACEMENTDELETE
   void     operator delete(void *ptr, void *vp);
#endif
#endif

   //----- bit manipulation
   void     SetBit(UInt_t f, Bool_t set);
   void     SetBit(UInt_t f) { fBits |= f & kBitMask; }
   void     ResetBit(UInt_t f) { fBits &= ~(f & kBitMask); }
   Bool_t   TestBit(UInt_t f) const { return (Bool_t) ((fBits & f) != 0); }
   void     InvertBit(UInt_t f) { fBits ^= f & kBitMask; }

   //---- error handling
   void     Warning(const char *method, const char *msgfmt, ...) const;
   void     Error(const char *method, const char *msgfmt, ...) const;
   void     SysError(const char *method, const char *msgfmt, ...) const;
   void     Fatal(const char *method, const char *msgfmt, ...) const;

   void     AbstractMethod(const char *method) const;
   void     MayNotUse(const char *method) const;

   //---- static functions
   static Int_t     DecreaseDirLevel();
   static Long_t    GetDtorOnly();
   static void      SetDtorOnly(void *obj);
   static Int_t     GetDirLevel();
   static void      SetDirLevel(Int_t level=0);
   static Bool_t    GetObjectStat();
   static void      SetObjectStat(Bool_t stat);
   static Int_t     IncreaseDirLevel();
   static void      IndentLevel();

   ClassDef(TObject,1)  //Basic ROOT object
};

#ifndef ROOT_TBuffer
#include "TBuffer.h"
#endif

#endif
