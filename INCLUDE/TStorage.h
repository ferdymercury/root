//*CMZ :  2.20/00 03/11/98  12.47.33  by  Fons Rademakers
//*CMZ :  2.00/01 14/03/98  05.57.52  by  Fons Rademakers
//*CMZ :  1.03/08 19/11/97  15.24.27  by  Fons Rademakers
//*-- Author :    Fons Rademakers   29/07/95

#ifndef ROOT_TStorage
#define ROOT_TStorage

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
   static ULong_t        fgLastObject;     // begin address of last allocated obj
   static ULong_t        fgLastObjectEnd;  // end address of last allocated obj
   static size_t         fgMaxBlockSize;   // largest block allocated
   static FreeHookFun_t  fgFreeHook;       // function called on free
   static void          *fgFreeHookData;   // data used by this function
   static ReAllocFun_t   fgReAllocHook;    // custom ReAlloc
   static ReAllocCFun_t  fgReAllocCHook;   // custom ReAlloc with length check
   static Bool_t         fgHasCustomNewDelete; // true if using ROOT's new/delete

public:
   static ULong_t       GetLastObject();
   static ULong_t       GetLastObjectEnd();
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
   static void SetLastObject(ULong_t obj);
   static void SetLastObjectEnd(ULong_t obj);
   static void SetMaxBlockSize(size_t size);
   static void SetFreeHook(FreeHookFun_t func, void *data);
   static void SetReAllocHooks(ReAllocFun_t func1, ReAllocCFun_t func2);
   static void SetCustomNewDelete();
   static void EnableStatistics(int size= -1, int ix= -1);

   static Bool_t HasCustomNewDelete();

   // only valid after call to a TStorage allocating method
   static Bool_t IsOnHeap(void *p);

   ClassDef(TStorage,0)  //Storage manager class
};

inline Bool_t TStorage::IsOnHeap(void *p)
   { return (ULong_t)p >= fgLastObject && (ULong_t)p < fgLastObjectEnd; }

#ifndef WIN32
inline size_t TStorage::GetMaxBlockSize() { return fgMaxBlockSize; }

inline void TStorage::SetMaxBlockSize(size_t size) { fgMaxBlockSize = size; }

inline FreeHookFun_t TStorage::GetFreeHook() { return fgFreeHook; }

inline void TStorage::SetLastObject(ULong_t obj) { fgLastObject = obj; }

inline void TStorage::SetLastObjectEnd(ULong_t obj) { fgLastObjectEnd = obj; }
#endif

#endif
