//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/07 25/10/99  18.08.50  by  Fons Rademakers
//*CMZ :  1.03/09 08/12/97  21.46.07  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TDataType
#define ROOT_TDataType

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
   kFloat_t = 5, kDouble_t = 8,  kchar  = 10, kOther_t  = -1
};

class G__TypedefInfo;


class TDataType : public TDictionary {

private:
   G__TypedefInfo   *fInfo;     //pointer to CINT typedef info
   TString           fName;     //name of basic type
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

