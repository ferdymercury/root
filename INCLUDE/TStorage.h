//*CMZ :  2.23/03 18/09/99  19.59.06  by  Fons Rademakers
//*CMZ :  2.20/00 03/11/98  12.47.33  by  Fons Rademakers
//*CMZ :  2.00/01 14/03/98  05.57.52  by  Fons Rademakers
//*CMZ :  1.03/08 19/11/97  15.24.27  by  Fons Rademakers
//*-- Author :    Fons Rademakers   29/07/95

#ifndef ROOT_TStorage
#define ROOT_TStorage

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
// TStorage                                                             //
//                                                                      //
// Storage manager.                                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

typedef void (*FreeHookFun_t)(void*, void *addr, size_t);
typedef void *(*ReAllocFun_t)(void*, size_t);
typedef void *(*ReAllocCFun_t)(void*, size_t, size_t);


class TStorage {

private:
   static ULong_t        fgHeapBegin;      // begin address of heap
   static ULong_t        fgHeapEnd;        // end address of heap
   static size_t         fgMaxBlockSize;   // largest block allocated
   static FreeHookFun_t  fgFreeHook;       // function called on free
   static void          *fgFreeHookData;   // data used by this function
   static ReAllocFun_t   fgReAllocHook;    // custom ReAlloc
   static ReAllocCFun_t  fgReAllocCHook;   // custom ReAlloc with length check
   static Bool_t         fgHasCustomNewDelete; // true if using ROOT's new/delete

public:
   static ULong_t       GetHeapBegin();
   static ULong_t       GetHeapEnd();
   static FreeHookFun_t GetFreeHook();
   static void         *GetFreeHookData();
   static size_t        GetMaxBlockSize();
   static void         *ReAlloc(void *vp, size_t size);
   static void         *ReAlloc(void *vp, size_t size, size_t oldsize);
   static void         *ObjectAlloc(size_t size);
   static void         *ObjectAlloc(size_t size, void *vp);

   static void EnterStat(size_t size, void *p);
   static void RemoveStat(void *p);
   static void PrintStatistics();
   static void SetMaxBlockSize(size_t size);
   static void SetFreeHook(FreeHookFun_t func, void *data);
   static void SetReAllocHooks(ReAllocFun_t func1, ReAllocCFun_t func2);
   static void SetCustomNewDelete();
   static void EnableStatistics(int size= -1, int ix= -1);

   static Bool_t HasCustomNewDelete();

   // only valid after call to a TStorage allocating method
   static void   AddToHeap(ULong_t begin, ULong_t end);
   static Bool_t IsOnHeap(void *p);

   ClassDef(TStorage,0)  //Storage manager class
};

inline void   TStorage::AddToHeap(ULong_t begin, ULong_t end)
   { if (begin < fgHeapBegin) fgHeapBegin = begin;
     if (end   > fgHeapEnd)   fgHeapEnd   = end; }

inline Bool_t TStorage::IsOnHeap(void *p)
   { return (ULong_t)p >= fgHeapBegin && (ULong_t)p < fgHeapEnd; }

#ifndef WIN32
inline size_t TStorage::GetMaxBlockSize() { return fgMaxBlockSize; }

inline void TStorage::SetMaxBlockSize(size_t size) { fgMaxBlockSize = size; }

inline FreeHookFun_t TStorage::GetFreeHook() { return fgFreeHook; }
#endif

#endif
