//*CMZ :  2.00/11 17/08/98  15.14.52  by  Rene Brun
//*CMZ :  2.00/06 09/05/98  18.55.36  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  17.47.48  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  16.55.19  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_Rtypes
#define ROOT_Rtypes

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
// Rtypes                                                               //
//                                                                      //
// Basic types used by ROOT.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_RConfig
#include "RConfig.h"
#endif

#include <stdio.h>

#include "DllImport.h"

//---- types -------------------------------------------------------------------

typedef char           Char_t;      //Signed Character 1 byte
typedef unsigned char  UChar_t;     //Unsigned Character 1 byte
typedef short          Short_t;     //Signed Short integer 2 bytes
typedef unsigned short UShort_t;    //Unsigned Short integer 2 bytes
#ifdef R__INT16
typedef long           Int_t;       //Signed integer 4 bytes
typedef unsigned long  UInt_t;      //Unsigned integer 4 bytes
#else
typedef int            Int_t;       //Signed integer 4 bytes
typedef unsigned int   UInt_t;      //Unsigned integer 4 bytes
#endif
#ifdef R__B64
typedef int            Seek_t;      //File pointer
typedef long           Long_t;      //Signed long integer 4 bytes
typedef unsigned long  ULong_t;     //Unsigned long integer 4 bytes
#else
typedef int            Seek_t;      //File pointer
typedef long           Long_t;      //Signed long integer 8 bytes
typedef unsigned long  ULong_t;     //Unsigned long integer 8 bytes
#endif
typedef float          Float_t;     //Float 4 bytes
typedef double         Double_t;    //Float 8 bytes
typedef char           Text_t;      //General string
typedef unsigned char  Bool_t;      //Boolean (0=false, 1=true)
typedef unsigned char  Byte_t;      //Byte (8 bits)
typedef short          Version_t;   //Class version identifier
typedef const char     Option_t;    //Option string
typedef int            Ssiz_t;      //String size
typedef float          Real_t;      //TVector and TMatrix element type

typedef void         (*VoidFuncPtr_t)();  //pointer to void function


//---- constants ---------------------------------------------------------------

#ifndef NULL
#define NULL 0
#endif

const Bool_t kTRUE   = 1;
const Bool_t kFALSE  = 0;

const Int_t  kMaxInt      = 2147483647;
const Int_t  kMaxShort    = 32767;
const size_t kBitsPerByte = 8;
const Ssiz_t kNPOS        = ~(Ssiz_t)0;


//--- bit manipulation ---------------------------------------------------------

#define BIT(n)       (1 << (n))
#define SETBIT(n,i)  ((n) |= BIT(i))
#define CLRBIT(n,i)  ((n) &= ~BIT(i))
#define TESTBIT(n,i) ((Bool_t)(((n) & BIT(i)) != 0))


//---- debug global ------------------------------------------------------------

R__EXTERN Int_t gDebug;


//---- ClassDef macros ---------------------------------------------------------

class TClass;
class TBuffer;
class TMemberInspector;

extern TClass *CreateClass(const char *cname, Version_t id,
                           const char *dfil, const char *ifil,
                           Int_t dl, Int_t il);

#define ClassDef(name,id) \
private: \
  static TClass *fgIsA; \
public: \
  static const char *DeclFileName() { return __FILE__; } \
  static int DeclFileLine() { return __LINE__; } \
  static const char *ImplFileName(); \
  static int ImplFileLine(); \
  static Version_t Class_Version() { return id; } \
  static TClass *Class(); \
  static void Dictionary(); \
  virtual TClass *IsA() const { return name::Class(); } \
  virtual void ShowMembers(TMemberInspector &insp, char *parent); \
  virtual void Streamer(TBuffer &b); \
  friend TBuffer &operator>>(TBuffer &buf, name *&obj);

#define _ClassInit_(name) \
   extern void AddClass(const char *cname, Version_t id, VoidFuncPtr_t dict); \
   extern void RemoveClass(const char *cname); \
   class _NAME3_(__,name,Init__) { \
      public: \
         _NAME3_(__,name,Init__)() { \
            AddClass(_QUOTE_(name), name::Class_Version(), \
                     &name::Dictionary); \
         } \
         ~_NAME3_(__,name,Init__)() { \
            RemoveClass(_QUOTE_(name)); \
         } \
   }; \
   static _NAME3_(__,name,Init__) _NAME3_(__g,name,Init__);

#define _ClassImp_(name) \
   TClass *name::Class() \
          { if (!fgIsA) name::Dictionary(); return fgIsA; } \
   const char *name::ImplFileName() { return __FILE__; } \
   int name::ImplFileLine() { return __LINE__; } \
   TClass *name::fgIsA = 0; \
   _ClassInit_(name)

#define ClassImp(name) \
   void name::Dictionary() \
   { \
      TClass *c = CreateClass(_QUOTE_(name), Class_Version(), \
                              DeclFileName(), ImplFileName(), \
                              DeclFileLine(), ImplFileLine()); \
      fgIsA = c; \
   } \
   _ClassImp_(name)

#endif

