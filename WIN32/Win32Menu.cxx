//*CMZ :  1.03/01 25/07/97  17.38.17  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine   23/02/96

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

#include "TWin32Menu.h"

//*-*

ClassImp(TWin32Menu)

//______________________________________________________________________________
TWin32Menu::TWin32Menu(){fBaseItemNumber = -1; }  //Default ctor


//______________________________________________________________________________
TWin32Menu::TWin32Menu(char *name, const char *title, EMenuType issubmenu)
                     : TNamed(name,title)
{
             if (issubmenu == kPopUpMenu)
               fMenu = CreatePopupMenu();
             else
               fMenu = CreateMenu();
             if (fMenu==NULL) {
               int ierrcode = GetLastError();
               printf(" **** Error: can not create menu %d \n", ierrcode);
             }

             fItemNumber = 1;

//*-*  Since a menu has no special "title" option we use the first line instead

//*-*
//*-*  There two possibilities MF_DISABLE and MF_GRAYED
//*-*  we would see which one is better for user to understand
//*-*
//     if (title)
//           AppendMenu(fMenu,MF_STRING | MF_DISABLED,0,title);
//           AppendMenu(fMenu,MF_STRING | MF_GRAYED,  0,title);

}
//______________________________________________________________________________
TWin32Menu::~TWin32Menu(){
 //*-*   Interaction with TVirtualMenuItem class
 //*-*   TWin32Menu               TVirtualMenuItem
 //*-*
 //*-*   DetachItems  --------->  (TWin32MenuItem)   Free  ---> Remove from the list
 //*-*                            (TContextMenuItem) Free  ---> delete thisItem
 //*-*
 //*-*       Free
 //*-*         |
 //*-*  (WIN32)DeleteMenu
 //*-*
 //*-*
//    cout << "TWin32Menu::~TWin32Menu() this=" << this << endl;
    DetachItems();
    DestroyMenu(fMenu);
    fMenu = 0;
}
//______________________________________________________________________________
void TWin32Menu::Add(TVirtualMenuItem *item){
    if (item) {
      UINT id = item->GetCommandId();
      if (id == -1) Error("Win32Menu","Item is not defined yet");
      else {
         item->Join(this);
         fItemsList.Add((TObject *)item);
//         AppendMenu(fMenu,item->GetType() | item->GetState(),id,item->GetItem());
      }
    }
}

//______________________________________________________________________________
void TWin32Menu::Add(EMenuItemType custom){
//*-*  This entry can add "Separator", "MenuBarBreak", "MenuBreak" into this menu
     if (custom == kSubMenu) Error("TWin32Menu::Add","This entry can't add the PopUp item");

     switch (custom) {
     case kMenuBreak:
         AppendMenu(fMenu,MF_MENUBREAK,0,"");
         break;
     case kMenuBarBreak:
         AppendMenu(fMenu,MF_MENUBARBREAK,0,"");
         break;
     case kSeparator:
         AppendMenu(fMenu,MF_SEPARATOR,0,"");
         break;
     default:
         break;
     }
}

//______________________________________________________________________________
Int_t TWin32Menu::DefineItemPosition(TVirtualMenuItem *item){
    return fItemsList.IndexOf(item);
}
//______________________________________________________________________________
void TWin32Menu::DeleteTheItem(TVirtualMenuItem *item){
    Int_t indx = fItemsList.IndexOf(item);
    fItemsList.Remove((TObject *)item);
    if (item->GetType() == kSubMenu)
     DeleteMenu(fMenu,indx,MF_BYPOSITION);
    else
     DeleteMenu(fMenu,item->GetCommandId(), MF_BYCOMMAND);
}
//______________________________________________________________________________
void TWin32Menu::DetachItems()
{
//*-*  Free  all items

   TIter next(&fItemsList);
   TVirtualMenuItem *item;

   while (item = (TVirtualMenuItem *) next() ) {
      RemoveTheItem(item);
      item->Free(this);
   }
}

//______________________________________________________________________________
void  TWin32Menu::InsertItemAtPoistion(TVirtualMenuItem *item, Int_t position)
{ ; }

//______________________________________________________________________________
void TWin32Menu::Modify(TVirtualMenuItem *item, UINT type)
{
      Error("TWin32Menu::Modify","Obsolete, must be deleted !!!");
       ModifyMenu(fMenu,item->GetCommandId(),MF_BYCOMMAND | item->GetType() | type,
                        item->GetCommandId(),item->GetItem());
}

//______________________________________________________________________________
void TWin32Menu::RemoveTheItem(TVirtualMenuItem *item){
//*-*
//*-*   RemoveTheItem   --------->  Remove
//*-*                                 |
//*-*   DeleteTheItem  <--------------/
//*-*         |
//*-*  (WIN32)DeleteMenu

    item->Remove(this);
}

//______________________________________________________________________________
void TWin32Menu::SetMethod(){;}

//______________________________________________________________________________
HMENU TWin32Menu::GetMenuHandle(){ return fMenu;}
//______________________________________________________________________________
void TWin32Menu::DisplayRootMenu(){ ; }




