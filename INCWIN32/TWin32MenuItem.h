//*CMZ :  2.24/03 29/04/2000  23.42.00  by  Rene Brun
//*CMZ :  1.00/05 20/03/97  15.34.59  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TWin32MenuItem
#define ROOT_TWin32MenuItem

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
// TWin32MenuItem                                                       //
//                                                                      //
// This class defines the menu items.                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "RTYPES.h"
#endif

#include "TVIRTUALMENUITEM.h"

class TWin32SendClass;

class TWin32MenuItem : public TVirtualMenuItem {

protected:

   virtual void Free(TWin32Menu *menu);          // It is like Remove(TWin32Menu) but without feed back, so it is faster
   virtual void ExecuteEventCB(TWin32Canvas *c){;} //User click this item
   virtual void ExecThreadCB(TWin32SendClass *command);


public:

   TWin32MenuItem();
   TWin32MenuItem(EMenuItemType custom);
   TWin32MenuItem(char *name,const char *title,UINT type=MF_STRING,UINT state=MF_ENABLED,Int_t id=-1);
   TWin32MenuItem(char *name,const char *title,Win32CanvasCB callback,UINT type=MF_STRING,UINT state=MF_ENABLED,Int_t id=-1);
   TWin32MenuItem(char *name,const char *title,Win32BrowserImpCB callback,UINT type=MF_STRING,UINT state=MF_ENABLED,Int_t id=-1);


   virtual const char *ClassName();

   virtual void ExecuteEvent(TWin32Canvas *c);            //User click this item


   // ClassDef(TWin32MenuItem,0);
};

#endif





