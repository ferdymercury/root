//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Rene Brun   13/11/95

#ifndef ROOT_TGlobal
#define ROOT_TGlobal

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
// TGlobal                                                              //
//                                                                      //
// Global variables class (global variables are obtained from CINT).    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif

class G__DataMemberInfo;


class TGlobal : public TDictionary {

private:
   G__DataMemberInfo  *fInfo;      //pointer to CINT data member info

public:
   TGlobal(G__DataMemberInfo *info = 0);
   virtual       ~TGlobal();
   Int_t          GetArrayDim() const;
   Int_t          GetMaxIndex(Int_t dim) const;
   void          *GetAddress() const;
   const char    *GetTypeName() const;
   const char    *GetFullTypeName() const;
   const char    *GetName() const;
   const char    *GetTitle() const;
   Int_t          Compare(TObject *obj);
   ULong_t        Hash();
   Long_t         Property() const;

   ClassDef(TGlobal,0)  //Global variable class
};

#endif
