//*CMZ :  2.23/12 31/01/2000  18.35.16  by  Fons Rademakers
//*CMZ :  1.03/03 05/09/97  15.57.31  by  Piotr Golonka
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TMethodArg
#define ROOT_TMethodArg

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
// TMethodArg                                                           //
//                                                                      //
// Dictionary interface for a method argument.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif

#include "TDataMember.h"

class TFunction;
class TMethod;
class G__MethodArgInfo;


class TMethodArg : public TDictionary {

friend class TMethod;

private:
   G__MethodArgInfo  *fInfo;         //pointer to CINT method argument info
   TFunction         *fMethod;       //pointer to the method or global function
   TDataMember       *fDataMember;   //TDataMember pointed by this arg,to get values and options from.

public:
   TMethodArg(G__MethodArgInfo *info = 0, TFunction *method = 0);
   virtual       ~TMethodArg();
   const char    *GetDefault() const;
   TFunction     *GetMethod() const { return fMethod; }
   const char    *GetName() const;
   const char    *GetTitle() const;
   const char    *GetTypeName() const;
   const char    *GetFullTypeName() const;
   Int_t          Compare(TObject *obj);
   ULong_t        Hash();
   Long_t         Property() const;

   TDataMember   *GetDataMember();
   TList         *GetOptions();

   ClassDef(TMethodArg,0)  //Dictionary for a method argument
};

#endif

