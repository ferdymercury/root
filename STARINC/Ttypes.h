//*CMZ :  2.24/05 16/05/2000  08.24.46  by  Rene Brun
//*CMZ :  2.24/03 01/05/2000  13.28.28  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.24/02 06/04/2000  16.44.55  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valeri Fine  08/12/94 begin_html mailto://fine@bnl.gov  end_html

#ifndef ROOT_Ttypes
#define ROOT_Ttypes

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Stypes                                                               //
// $Id: Ttypes.h,v 1.10 2000/04/27 23:20:43 fine Exp $
// Basic types used by STAF - ROOT interface.                           //
//                                                                      //
// This header file contains the set of the macro definitions           //
// to generate a ROOT dictionary for "pure" C-strucutre the way ROOT    //
// does it for the "normal" C++ classes                                 //
//                                                                      //
// This header file should be included into the all STAF table wrapper  //
// classes (by stic compiler)                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "Rtypes.h"

#ifdef ANSICPP
#   define _QUOTE2_(name1,name2) _QUOTE_(name1##name2)
#else
#   define _QUOTE2_(name1,name2) _QUOTE_(_NAME1_(name1)name2)
#endif

//___________________________________________________________________
#define _TableClassInit_(className,structName)                      \
   extern void AddClass(const char *cname, Version_t id, VoidFuncPtr_t dict); \
   extern void RemoveClass(const char *cname);                      \
   class _NAME2_(R__Init,className) {                               \
      public:                                                       \
         _NAME2_(R__Init,className)() {                             \
            AddClass(_QUOTE_(className), className::Class_Version(),\
                     &className::Dictionary);                       \
         }                                                          \
         ~_NAME2_(R__Init,className)() {                            \
            RemoveClass(_QUOTE_(className));                        \
            RemoveClass(_QUOTE_(structName));                       \
         }                                                          \
   };

//___________________________________________________________________
#define _TableClassImp_(className,structName)                       \
   TClass *className::Class()                                       \
          { if (!fgIsA) className::Dictionary(); return fgIsA; }    \
   const char *className::ImplFileName() { return __FILE__; }       \
   int className::ImplFileLine() { return __LINE__; }               \
   TClass *className::fgIsA = 0;                                    \
   _TableClassInit_(className,structName)

//___________________________________________________________________
#define TableClassStreamerImp(className)                            \
void className::Streamer(TBuffer &R__b) {                           \
   TTable::Streamer(R__b); }

//___________________________________________________________________
#define TableClassImp(className,structName)                         \
   void className::Dictionary()                                     \
   {                                                                \
      TClass *c = CreateClass(_QUOTE_(className), Class_Version(),  \
                              DeclFileName(), ImplFileName(),       \
                              DeclFileLine(), ImplFileLine());      \
                                                                    \
      char *structBuf = new char[strlen(_QUOTE2_(structName,.h))+2];\
      strcpy(structBuf,_QUOTE2_(structName,.h));                    \
      char *s = strstr(structBuf,"_st.h");                          \
      if (s) { *s = 0;  strcat(structBuf,".h"); }                   \
      TClass *r = CreateClass(_QUOTE_(structName), Class_Version(), \
                              structBuf, structBuf, 1,  1 );        \
      fgIsA = c;                                                    \
      fgColDescriptors = new TTableDescriptor(r);                   \
   }                                                                \
   _TableClassImp_(className,structName)
//___________________________________________________________________
#define TableClassImpl(className,structName)                        \
  TTableDescriptor *className::fgColDescriptors = 0;                \
  TableClassImp(className,structName)                               \
  TableClassStreamerImp(className)


#define TableImpl(name)                                            \
  TTableDescriptor *_NAME2_(St_,name)::fgColDescriptors = 0;       \
  TableClassImp(_NAME2_(St_,name), _NAME2_(name,_st))              \
  TableClassStreamerImp(_NAME2_(St_,name))

#define TableImp(name)  TableClassImp(_NAME2_(St_,name),_QUOTE2_(St_,name))

#define ClassDefTable(className,structName)         \
  protected:                                        \
     static TTableDescriptor *fgColDescriptors;     \
     virtual TTableDescriptor *GetDescriptorPointer() const { return fgColDescriptors;}                \
     virtual void SetDescriptorPointer(TTableDescriptor *list) const { fgColDescriptors = list;}       \
  public:                                           \
    className() : TTable(_QUOTE_(stem),sizeof(structName))    {SetType(_QUOTE_(stem));}                \
    className(Text_t *name) : TTable(name,sizeof(structName)) {SetType(_QUOTE_(stem));}                \
    className(Int_t n) : TTable(_QUOTE_(stem),n,sizeof(structName)) {SetType(_QUOTE_(stem));}          \
    className(Text_t *name,Int_t n) : TTable(name,n,sizeof(structName)) {SetType(_QUOTE_(stem));}      \
    structName *GetTable(Int_t i=0) const { return ((structName *)GetArray())+i;}                      \
    structName &operator[](Int_t i){ assert(i>=0 && i < GetNRows()); return *GetTable(i); }            \
    const structName &operator[](Int_t i) const { assert(i>=0 && i < GetNRows()); return *((const structName *)(GetTable(i))); }
#endif

//  ClassDef(className,0)
