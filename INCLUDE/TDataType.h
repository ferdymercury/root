//*CMZ :  1.03/09 08/12/97  21.46.07  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TDataType
#define ROOT_TDataType

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
// TDataType                                                            //
//                                                                      //
// Basic data type descriptor (datatype information is obtained from    //
// CINT).                                                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


enum EDataType {
   kChar_t  = 1, kUChar_t  = 11, kShort_t = 2,  kUShort_t = 12,
   kInt_t   = 3, kUInt_t   = 13, kLong_t  = 4,  kULong_t  = 14,
   kFloat_t = 5, kDouble_t = 8,  kText_t  = 10, kOther_t  = -1
};

class G__TypedefInfo;


class TDataType : public TDictionary {

private:
   G__TypedefInfo   *fInfo;     //pointer to CINT typedef info
   TString           fName;     //name of basic type (in case fInfo==0)
   Int_t             fSize;     //size of basic type (in case fInfo==0)
   EDataType         fType;     //type id

   void SetType(const char *name);

public:
   TDataType(G__TypedefInfo *info = 0);
   TDataType(const char *typenam);
   virtual       ~TDataType();
   Int_t          Size() const;
   Int_t          GetType() const { return (Int_t)fType; }
   const char    *GetTypeName() const;
   const char    *GetFullTypeName() const;
   const char    *GetName() const;
   const char    *GetTitle() const;
   Int_t          Compare(TObject *obj);
   ULong_t        Hash();
   const char    *AsString(void *buf) const;
   Long_t         Property() const;

   ClassDef(TDataType,0)  //Basic data type descriptor
};

#endif

