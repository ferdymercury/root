//*CMZ :  1.00/05 20/03/97  15.34.59  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
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

#ifndef ROOT_TWin32Menu
#define ROOT_TWin32Menu

#include "WINDOWS4ROOT.h"

#ifndef ROOT_TNamed
#include "TNAMED.h"
#endif

#ifndef ROOT_TObjArray
#include "TOBJARRAY.h"
#endif

#ifndef ROOT_TWin32MenuItem
#include "TWin32MenuItem.h"
#endif

typedef enum {kMenu, kPopUpMenu} EMenuType;

class TWin32Menu : public TNamed {

protected:

   friend  class      TVirtualMenuItem;

   HMENU         fMenu;          // The present Menu handle
   TList         fItemsList;     // List of the items
   int           fItemNumber;
   int           fBaseItemNumber;
//   TWin32CallBackList fMenuAction;

   void  DeleteTheItem(TVirtualMenuItem *item);
   void  DetachItems();

public:

   TWin32Menu();
   TWin32Menu(char *name, const char *title="Win32Menu", EMenuType issubmenu = kMenu);
   virtual ~TWin32Menu();

   void  Add(TVirtualMenuItem *item);
   void  Add(EMenuItemType custom);
   Int_t DefineItemPosition(TVirtualMenuItem *item);
   HMENU GetMenuHandle();
   void  InsertItemAtPoistion(TVirtualMenuItem *item, Int_t position);
   void  Modify(TVirtualMenuItem *item, UINT type);
   void  RemoveTheItem(TVirtualMenuItem *item);
   void  SetMethod();
   void  DisplayRootMenu();

   ClassDef(TWin32Menu,0)
};

#endif
