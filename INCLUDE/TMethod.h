//*CMZ :  1.03/09 04/12/97  13.49.52  by  Fons Rademakers
//*-- Author :    Rene Brun   03/02/95

#ifndef ROOT_TMethod
#define ROOT_TMethod

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
   virtual const Text_t   *GetCommentString();
   virtual TDataMember    *FindDataMember();
   virtual TList          *GetListOfMethodArgs();

   ClassDef(TMethod,0)  //Dictionary for a class member function (method)
};

#endif
