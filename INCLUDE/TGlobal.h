//*CMZ :  0.80/00 30/07/96  14.01.10  by  Fons Rademakers
//*-- Author :    Rene Brun   13/11/95

#ifndef ROOT_TGlobal
#define ROOT_TGlobal

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
