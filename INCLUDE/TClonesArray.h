//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/11 20/12/99  12.02.53  by  Rene Brun
//*CMZ :  2.23/09 25/11/99  09.53.03  by  Rene Brun
//*CMZ :  2.23/07 26/10/99  17.05.52  by  Fons Rademakers
//*CMZ :  2.23/01 26/08/99  12.41.34  by  Rene Brun
//*CMZ :  2.00/10 15/07/98  14.30.46  by  Fons Rademakers
//*CMZ :  2.00/00 01/01/98  13.56.47  by  Fons Rademakers
//*CMZ :  1.03/09 11/12/97  16.12.05  by  Rene Brun
//*-- Author :    Rene Brun   11/02/96

#ifndef ROOT_TClonesArray
#define ROOT_TClonesArray

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
   TClonesArray(const char *classname, Int_t size = 1000, Bool_t call_dtor = kFALSE);
   virtual       ~TClonesArray();
   void          Compress();
   void          Clear(Option_t *option="");
   void          Delete(Option_t *option="");
   void          Expand(Int_t newSize);
   void          ExpandCreate(Int_t n);
   void          ExpandCreateFast(Int_t n);
   TClass       *GetClass() { return fClass; }

   void          AddFirst(TObject *) { MayNotUse("AddFirst"); }
   void          AddLast(TObject *) { MayNotUse("AddLast"); }
   void          AddAt(TObject *, Int_t) { MayNotUse("AddAt"); }
   void          AddAtAndExpand(TObject *, Int_t) { MayNotUse("AddAtAndExpand"); }
   Int_t         AddAtFree(TObject *) { MayNotUse("AddAtFree"); return 0; }
   void          AddAfter(TObject *, TObject *) { MayNotUse("AddAfter"); }
   void          AddBefore(TObject *, TObject *) { MayNotUse("AddBefore"); }

   TObject      *RemoveAt(Int_t idx);
   TObject      *Remove(TObject *obj);
   void          Sort(Int_t upto = kMaxInt);

   TObject      *AddrAt(Int_t i);
   TObject      *&operator[](Int_t i);

   ClassDef(TClonesArray,2)  //An array of clone objects
};

inline TObject *TClonesArray::AddrAt(Int_t i)
{
   return operator[](i);
}

#endif
