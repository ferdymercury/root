//*CMZ :  1.00/05 20/03/97  15.30.08  by  Rene Brun
//*-- Author :    Valery Fine   23/02/96


#include "TVirtualMenu.h"


//______________________________________________________________________________
TWin32Menu::TWin32Menu(){fBaseItemNumber = -1; }  //Default ctor


//______________________________________________________________________________
TWin32Menu::TWin32Menu(char *name, const char *title, EMenuType issubmenu) : TNamed(name,title) {
             if (issubmenu == kPopUpMenu)
               fMenu = CreatePopupMenu();
             else
               fMenu = CreateMenu();

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

    DetachItems();
    DestroyMenu(fMenu);
    fMenu = 0;
}
//______________________________________________________________________________
void TWin32Menu::Add(TWin32MenuItem *item){
    if (item) {
      UINT id = item->GetCommandId();
      if (id == -1) Error("Win32Menu","Item is not defined yet");
      else {
         item->Join(this);
         fItemsList.Add((TObject *)item);
         AppendMenu(fMenu,item->GetType(),id,item->GetItem());
      }
    }
}

//______________________________________________________________________________
void TWin32Menu::Add(EMenuItemType custom){
//*-*  This entry can add "Separator", "MenuBarBreak", "MenuBreak" into this menu
     if (custom == MF_POPUP) Error("TWin32Menu::Add","This entry can't add the PopUp item");
     AppendMenu(fMenu,custom,0,"");
}

//______________________________________________________________________________
void TWin32Menu::DeleteTheItem(TWin32MenuItem *item){
    DeleteMenu(fMenu,item->GetCommandId(), MF_BYCOMMAND );
}
//______________________________________________________________________________
void TWin32Menu::DetachItems()
{
//*-*  Free  all items

   TIter next(&fItemsList);
   TWin32MenuItem *item;

   while (item = (TWin32MenuItem *) next() )
      item->Free(this);
}


//______________________________________________________________________________
void TWin32Menu::Modify(TWin32MenuItem *item, UINT type){
    if (type == MF_CHECKED  ||
        type == MF_UNCHECKED )
       CheckMenuItem(fMenu, item->GetCommandId(), MF_BYCOMMAND | type );
    else if (type == MF_ENABLED  ||
             type == MF_DISABLED ||
             type == MF_GRAYED )
       EnableMenuItem(fMenu,item->GetCommandId(), MF_BYCOMMAND | type );
    else
       ModifyMenu(fMenu,item->GetCommandId(),MF_BYCOMMAND | type,
                        item->GetCommandId(),item->GetItem());
}
//______________________________________________________________________________
void TWin32Menu::RemoveTheItem(TWin32MenuItem *item){
    item->Remove(this);
}

//______________________________________________________________________________
inline void TWin32Menu::SetMethod();

//______________________________________________________________________________
HMENU TWin32Menu::GetMenuHandle(){ return fMenu;}
