*CMZ :  2.00/11 18/07/98  21.26.50  by  Valery Fine(fine@mail.cern.ch)
*CMZ :  1.03/09 16/12/97  17.10.55  by  Rene Brun
*-- Author :
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

#include "TWin32InspectView.h"
#include "TWin32InspectImp.h"

#ifndef ROOT_TWin32Application
#include "TWin32Application.h"
#endif

#ifndef ROOT_TROOT
#include "TROOT.h"
#endif

#ifndef ROOT_TApplication
#include "TApplication.h"
#endif

ClassImp(TWin32InspectView)

//______________________________________________________________________________
TWin32InspectView::TWin32InspectView(TGWin32WindowsObject *winobj,Text_t *title, Float_t x,Float_t y, Float_t width, Float_t  height,
                          Text_t *type,UInt_t style) :
                          TWin32ListViewCtrl(winobj,title,x,y,width,height,type,style )
{
  ResetIndex();

//*-* Initialize LV_ITEM members that are common to all items.

  fLVItem.mask =  LVIF_TEXT | LVIF_PARAM | LVIF_STATE ;

  if (((TWin32InspectImp *)fMasterWindow)->GetNormalIconList())
  {
         ListView_SetImageList(fhwndWindow,((TWin32InspectImp *)fMasterWindow)->GetNormalIconList(),LVSIL_NORMAL);
//     fLVItem.mask |= LVIF_IMAGE ;
  }
  if (((TWin32InspectImp *)fMasterWindow)->GetSmallIconList())
  {
         ListView_SetImageList(fhwndWindow,((TWin32InspectImp *)fMasterWindow)->GetSmallIconList(),LVSIL_SMALL);
//     fLVItem.mask |= LVIF_IMAGE ;
  }

}

//______________________________________________________________________________
void TWin32InspectView::Add(char const **row, Int_t cols)
{
//*-*  TWin32InspectView::Add inserts one item to the listview
//*-*
//*-*  row  - one row to be isnerted in the this list view (charater array)
//*-*  cols - the number of the coluemnt cvame with row (the length of the row, in fact)
//*-*
//*-*  List View Item States
//*-*  ----------------------
//*-*  An item's state determines its appearance and functionality.
//*-*  The state can be zero, or one or more of the following values:

//*-*     LVIS_CUT          The item is marked for a cut and paste operation.
//*-*     LVIS_DROPHILITED  The item is highlighted as a drag-and-drop target.
//*-*     LVIS_FOCUSED      The item has the focus, so it is surrounded by a standard
//*-*                       focus rectangle. Although more than one item may be
//*-*                       selected, only one item can have the focus.
//*-*     LVIS_SELECTED     The item is selected. The appearance of a selected item
//*-*                       depends on whether it has the focus
//*-*

 fLVItem.state = 0;
 fLVItem.stateMask = 0;

 //if (obj->IsFolder())
 //        fLVItem.iImage = kClosedFolderIcon;                   // image list index
 //else
 //    fLVItem.iImage = kDocumentIcon;

 // fLVItem.lParam = (LPARAM) obj;
  fLVItem.lParam = 0;

//*-* Specifies the zero-based index of the item to which this structure refers.
 fLVItem.iItem = ++fiLastCreated;

//*-*  First Clean the list
 if (!fLVItem.iItem) ListView_DeleteAllItems(fhwndWindow);


 Int_t i;
 for (i=0;i<cols;i++)
 {
    //*-*  Specifies the one-based index of the subitem to which this structure refers,
    //*-*  or zero if this structure refers to an item rather than a subitem.
    fLVItem.iSubItem = i+1;
    fLVItem.pszText = row[i] ? (char *)row[i]: " ";
    fLVItem.cchTextMax = lstrlen(fLVItem.pszText);

//*-* Add the sub item
    Int_t j = ListView_InsertItem(fhwndWindow, &fLVItem);
//  printf(" add %s %d as %d \n", name,fiLastCreated, i );
 }

}

//______________________________________________________________________________
void TWin32InspectView::CreateAccessories()
{
           // Create some extra things depends of the type of the control.
}

//______________________________________________________________________________
UInt_t TWin32InspectView::GetItemObject(RECT *prc)
{
 //*-*  returns the selected TObject item and its position or ZERO;
        LV_ITEM lvi;
        lvi.iItem =  ListView_GetNextItem(fhwndWindow,-1,LVNI_FOCUSED);
        if (lvi.iItem >= 0)
        {
                lvi.mask = LVIF_PARAM;
                if (ListView_GetItem(fhwndWindow,&lvi))
                        if (ListView_GetItemRect(fhwndWindow, lvi.iItem,prc,LVIR_SELECTBOUNDS))
                                return lvi.lParam;
        }
        return 0;
}

//______________________________________________________________________________
LRESULT APIENTRY TWin32InspectView::OnNotify(LPARAM lParam)
{
 // CallBack function to manage the notify messages
UINT code     =  ((LPNMHDR) lParam)->code;
NM_LISTVIEW *List = (NM_LISTVIEW *)lParam;

switch (code) {

     case NM_RCLICK:
            return -1; // means mouse event has been detected
                break;
     case LVN_KEYDOWN:
                 {
                   DWORD wVKey = ((LV_KEYDOWN *)lParam)->wVKey;
                 }
     case NM_CLICK:
                 break;
     case LVN_ITEMCHANGED:
                  OnItemChanged(List);
                  break;
     case LVN_ITEMCHANGING:
                  OnItemChanging(List);
                  break;
     case LVN_DELETEITEM:
                  OnDeleteItem(List);
                                  break;
     case LVN_DELETEALLITEMS:
                  OnDeleteAllItems(List);
                  break;
     default:
                 break;
    }

 return 0;
}

//______________________________________________________________________________
void TWin32InspectView::OnItemChanged(NM_LISTVIEW *lParam)
{
  int item      = lParam->iItem;
  int subItem   = lParam->iSubItem;
  UINT newstate = lParam->uNewState;
  UINT oldstate = lParam->uOldState;
  UINT changed  = lParam->uChanged;
  TObject  *obj  = (TObject *)(lParam->lParam);

//*-*  LVIS_SELECTED     The item is selected
//*-*  LVIS_DROPHILITED  The item is highlighted as a drag-and-drop target.
//*-*  LVIS_FOCUSED      The item has the focus. Only one item can have the focus
//*-*  LVIS_CUT          The item is marked for a cut and paste operation.
  if (changed & LVIF_STATE && newstate & LVIS_SELECTED)
  {
  }
//
}
