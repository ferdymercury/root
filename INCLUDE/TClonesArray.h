//*CMZ :  2.00/10 15/07/98  14.30.46  by  Fons Rademakers
//*CMZ :  2.00/00 01/01/98  13.56.47  by  Fons Rademakers
//*CMZ :  1.03/09 11/12/97  16.12.05  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

#ifndef ROOT_TClonesArray
#define ROOT_TClonesArray

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
// TClonesArray                                                         //
//                                                                      //
// An array of clone TObjects. The array expands automatically when     //
// adding elements (shrinking can be done by hand).                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObjArray
#include "TObjArray.h"
#endif

class TClass;


class TClonesArray : public TObjArray {

private:
   TClass       *fClass;       //Pointer to the class
   TObjArray    *fKeep;        //Saved copies of pointers to objects

public:
   TClonesArray();
   TClonesArray(Text_t *classname, Int_t size = 1000, Bool_t call_dtor = kFALSE);
   virtual       ~TClonesArray();
   void          Compress();
   void          Clear(Option_t *option="");
   void          Delete(Option_t *option="");
   void          Expand(Int_t newSize);
   void          ExpandCreate(Int_t n);
   TClass       *GetClass() { return fClass; }

   void          AddFirst(TObject *) { MayNotUse("AddFirst"); }
   void          AddLast(TObject *) { MayNotUse("AddLast"); }
   void          AddAt(TObject *, Int_t) { MayNotUse("AddAt"); }
   void          AddAtAndExpand(TObject *, Int_t) { MayNotUse("AddAtAndExpand"); }
   Int_t         AddAtFree(TObject *) { MayNotUse("AddAtFree"); return 0; }
   void          AddAfter(TObject *, TObject *) { MayNotUse("AddAfter"); }
   void          AddBefore(TObject *, TObject *) { MayNotUse("AddBefore"); }

   void          RemoveAt(Int_t idx);
   TObject      *Remove(TObject *obj);
   void          Sort(Int_t upto = kMaxInt);

   TObject      *AddrAt(Int_t i);
   TObject      *&operator[](Int_t i);

   ClassDef(TClonesArray,1)  //An array of clone objects
};

inline TObject *TClonesArray::AddrAt(Int_t i)
{
   return operator[](i);
}

#endif
