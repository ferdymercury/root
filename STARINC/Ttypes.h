//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valeri Fine  08/12/94 begin_html mailto://fine@bnl.gov  end_html

#ifndef ROOT_Stypes
#define ROOT_Stypes

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Stypes                                                               //
// $Id: Stypes.h,v 1.10 2000/01/12 18:07:24 fine Exp $
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

enum EReturnCodes {
  kStOK=0,      // OK
  kStOk=0,      // OK
  kStWarn,      // Warning, something wrong but work can be continued
  kStEOF,       // End Of File
  kStErr,       // Error, drop this and go to the next event
  kStFatal      // Fatal error, processing impossible
};
#ifdef ANSICPP
#   define _QUOTE2_(name1,name2) _QUOTE_(name1##name2)
#else
#   define _QUOTE2_(name1,name2) _QUOTE_(_NAME1_(name1)name2)
#endif

#define _TableInit_(name) \
   extern void AddClass(const char *cname, Version_t id, VoidFuncPtr_t dict); \
   extern void RemoveClass(const char *cname); \
   class _NAME3_(__T,name,Init__) { \
      public: \
         _NAME3_(__T,name,Init__)() { \
            AddClass(_QUOTE2_(T,name), _NAME2_(T,name)::Class_Version(), \
                     &_NAME2_(T,name)::Dictionary); \
         } \
         ~_NAME3_(__T,name,Init__)() { \
            RemoveClass(_QUOTE2_(T,name)); \
            RemoveClass(_QUOTE2_(name,_st)); \
         } \
   }; \
   static _NAME3_(__T,name,Init__) _NAME3_(__gT,name,Init__);

#define _TableImp_(name) \
   TClass *_NAME2_(T,name)::Class() \
          { if (!fgIsA) _NAME2_(T,name)::Dictionary(); return fgIsA; } \
   const char *_NAME2_(T,name)::ImplFileName() { return __FILE__; } \
   int _NAME2_(T,name)::ImplFileLine() { return __LINE__; } \
   TClass *_NAME2_(T,name)::fgIsA = 0; \
   _TableInit_(name)

#define TableStreamerImp(name)                                           \
void _NAME2_(T,name)::Streamer(TBuffer &R__b) {                        \
   if (!R__b.IsReading()) R__b.WriteVersion(_NAME2_(T,name)::IsA());   \
   TTable::Streamer(R__b); }

#define TableImp(name)                                             \
   void _NAME2_(T,name)::Dictionary()                            \
   {                                                               \
      TClass *c = CreateClass(_QUOTE2_(T,name), Class_Version(), \
                              DeclFileName(), ImplFileName(),      \
                              DeclFileLine(), ImplFileLine());     \
                  CreateClass(_QUOTE2_(name,_st), Class_Version(), \
                              _QUOTE2_(name,.h), _QUOTE2_(name,.h),\
                               1,               1 );               \
      fgIsA = c;                                                   \
   }                                                               \
   _TableImp_(name)

#define TableImpl(name)                                            \
  TTableDescriptor *_NAME2_(T,name)::fgColDescriptors = 0;     \
  TableImp(name)                                                   \
  TableStreamerImp(name)

// $Log: Stypes.h,v $
// Revision 1.10  2000/01/12 18:07:24  fine
//  cvs symbols have been added and copyright class introduced
//
#endif


#define ClassDefTable(stem)                       \
  class _NAME2_(T,stem) : public TTable       \
  {                                               \
   protected:                                     \
     static TTableDescriptor *fgColDescriptors; \
     virtual TTableDescriptor *GetDescriptorPointer() const { return fgColDescriptors;}                \
     virtual void SetDescriptorPointer(TTableDescriptor *list) const { fgColDescriptors = list;}       \
  public:                                         \
    _NAME2_(T,stem)() : TTable(_QUOTE_(stem),sizeof(_NAME2_(stem,_st))) {SetType(_QUOTE_(stem));}    \
    _NAME2_(T,stem)(Text_t *name) : TTable(name,sizeof(_NAME2_(stem,_st))) {SetType(_QUOTE_(stem));} \
    _NAME2_(T,stem)(Int_t n) : TTable(_QUOTE_(stem),n,sizeof(_NAME2_(stem,_st))) {SetType(_QUOTE_(stem));}     \
    _NAME2_(T,stem)(Text_t *name,Int_t n) : TTable(name,n,sizeof(_NAME2_(stem,_st))) {SetType(_QUOTE_(stem));} \
    _NAME2_(stem,_st) *GetTable(Int_t i=0) const { return ((_NAME2_(stem,_st) *)s_Table)+i;}                       \
    _NAME2_(stem,_st) &operator[](Int_t i){ assert(i>=0 && i < GetNRows()); return *GetTable(i); }                 \
    const _NAME2_(stem,_st) &operator[](Int_t i) const { assert(i>=0 && i < GetNRows()); return *((const _NAME2_(stem,_st) *)(GetTable(i))); } \
    ClassDef(_NAME2_(T,stem),0); /*C++ wrapper for <stem> StAF table */                                   \
  };

