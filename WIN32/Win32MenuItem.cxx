//*CMZ :  1.00/06 23/03/97  11.52.02  by  Rene Brun
//*-- Author :    Valery Fine   03/03/96

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
// TWin32MenuItem                                                       //
//                                                                      //
// This class defines the menu items.                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TWin32MenuItem
#include "TWin32MenuItem.h"
#endif

#ifndef ROOT_TWin32Menu
#include "TWin32Menu.h"
#endif

#ifndef ROOT_TGWin32Command
#include "TGWin32Command.h"
#endif

#ifndef ROOT_TWin32BrowserImp
#include "TWin32BrowserImp.h"
#endif

ClassImp(TWin32MenuItem)

//______________________________________________________________________________
TWin32MenuItem::TWin32MenuItem() : TVirtualMenuItem(){ ; }
//______________________________________________________________________________
TWin32MenuItem::TWin32MenuItem(EMenuItemType custom) : TVirtualMenuItem(custom){ ; }
//______________________________________________________________________________
TWin32MenuItem::TWin32MenuItem(char *name,const char *title,UINT type,UINT state,Int_t id) :
             TVirtualMenuItem(name,title,type,state,id) {;}
//______________________________________________________________________________
TWin32MenuItem::TWin32MenuItem(char *name,const char *title,Win32CanvasCB callback,UINT type,UINT state,Int_t id) :
             TVirtualMenuItem(name,title,callback,type,state,id) {;}

//______________________________________________________________________________
TWin32MenuItem::TWin32MenuItem(char *name,const char *title,Win32BrowserImpCB callback,UINT type,UINT state,Int_t id) :
             TVirtualMenuItem(name,title,callback,type,state,id) {;}

//______________________________________________________________________________
const char *TWin32MenuItem::ClassName()
{
   return "MenuItem";
}

//______________________________________________________________________________
void TWin32MenuItem::ExecuteEvent(TWin32Canvas *canvas)
{
//  We have to pass this pointer to another thread to synch threads.
//  But we have to check object since it could be destroyed by mean time !!!
// fCanvasCB(canvas,this);====? check this

   TWin32SendClass *code = new TWin32SendClass(this,(UInt_t)canvas,0,0,0);
   ExecCommandThread(code);
}

//______________________________________________________________________________
void TWin32MenuItem::ExecThreadCB(TWin32SendClass *command)
{
//  This function must be called from the "Command tread only"
    if (fCanvasCB){
         TWin32Canvas *canvas = (TWin32Canvas *)(command->GetData(0));
         fCanvasCB(canvas,(TVirtualMenuItem *)this);
    }
    else if (fBrowserCB) {
        TWin32BrowserImp *browser = (TWin32BrowserImp *)(command->GetData(0));
        fBrowserCB(browser,(TVirtualMenuItem *)this);
    }
    delete command;
}

//______________________________________________________________________________
void TWin32MenuItem::Free(TWin32Menu *menu)
{
//*-*  It is like Remove(TWin32Menu) but without feed back, so it is faster
    if(menu) {
        fMenuList.Remove((TObject *)menu);
    }
}
