//*CMZ :  1.00/07 22/03/97  01.56.04  by  Fons Rademakers
//*-- Author :    Rene Brun   08/02/95

#ifndef ROOT_TBaseClass
#define ROOT_TBaseClass

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
// TBaseClass                                                           //
//                                                                      //
// Description of a base class.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TDictionary
#include "TDictionary.h"
#endif

class TBrowser;
class TClass;
class G__BaseClassInfo;


class TBaseClass : public TDictionary {

private:
   G__BaseClassInfo  *fInfo;      //pointer to CINT base class info
   TClass            *fClassPtr;  //pointer to the base class TClass
   TClass            *fClass;     //pointer to class

public:
   TBaseClass(G__BaseClassInfo *info = 0, TClass *cl = 0);
   virtual     ~TBaseClass();
   virtual void Browse(TBrowser *b);
   const char  *GetName() const;
   const char  *GetTitle() const;
   TClass      *GetClassPointer();
   Int_t        GetDelta() const;
   Int_t        Compare(TObject *obj);
   ULong_t      Hash();
   Bool_t       IsFolder() {return kTRUE;}
   Long_t       Property() const;

   ClassDef(TBaseClass,0)  //Description of a base class
};

#endif
