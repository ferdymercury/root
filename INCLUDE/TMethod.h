//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/09 04/12/97  13.49.52  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TMethod
#define ROOT_TMethod

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMethod                                                              //
//                                                                      //
// Dictionary of a member function (method).                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TFunction
#include "TFunction.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TList;
class TDataMember;
class TClass;
class G__MethodInfo;

enum EMenuItemKind {
   kMenuNoMenu = 0,
   kMenuDialog,
   kMenuToggle,
   kMenuSubMenu
};

class TMethod : public TFunction {

private:
   TClass                 *fClass;           //pointer to the class
   EMenuItemKind           fMenuItem;        //type of menuitem in context menu

   void                    CreateSignature();

public:
                           TMethod(G__MethodInfo *info = 0, TClass *cl = 0);
   virtual                ~TMethod() { }
   TClass                 *GetClass() const { return fClass; }
   EMenuItemKind           IsMenuItem() const { return fMenuItem; }
   virtual const char     *GetCommentString();
   virtual TDataMember    *FindDataMember();
   virtual TList          *GetListOfMethodArgs();

   ClassDef(TMethod,0)  //Dictionary for a class member function (method)
};

#endif
