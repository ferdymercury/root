//*CMZ :  2.24/03 29/04/2000  23.42.00  by  Rene Brun
//*CMZ :  2.24/01 18/02/2000  13.44.47  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.00/11 22/08/98  10.07.35  by  Rene Brun
//*CMZ :  1.03/07 07/11/97  10.45.45  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   04/11/96

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

#ifndef ROOT_TWin32ListViewCtrl
#define ROOT_TWin32ListViewCtrl

////////////////////////////////////////////////////////
//                                                    //
// TWin32Control - class to use WIN32 common controls //
//                 for TGWin32WindowsObject objects   //
//                                                    //
////////////////////////////////////////////////////////

#include "TWin32CommCtrl.h"
#include "TWin32HookViaThread.h"

enum EListFmt { kItemNotSpecified, kItemLeft, kItemCenter, kItemRight };  //Specifies the alignment of the column heading and the subitem text in the column

class TWin32ListViewCtrl : public TWin32CommCtrl {
private:
   Int_t           fiLastCreated;         // Index of the the last created ListView object
   LV_ITEM         fLVItem;               // List view item;
   LV_COLUMN       fLVColumn;             // List view column description
   TObject        *fObject;               // Pointer to the Inspected object

protected:
   virtual void Add();  // Add the fLVItem item
   virtual void AddColumn(Int_t index=-1); // Adds the 'index' column and fLVColumn member;
   virtual void ClearList();               // Clear list items
   Int_t   GetFormat(EListFmt fmt);        // Converts ROOT fmt type to the Win32 fmt type

   virtual void OnDeleteItem    (NM_LISTVIEW *lParam){;}
   virtual void OnDeleteAllItems(NM_LISTVIEW *lParam){;}
   virtual void OnItemChanged (NM_LISTVIEW *lParam);
   virtual void OnItemChanging(NM_LISTVIEW *lParam){; }
           void ExecThreadCB(TWin32SendClass *code);

public:
   TWin32ListViewCtrl(){fhwndWindow=0;} //default ctor
   TWin32ListViewCtrl(TGWin32WindowsObject *winobj,const Text_t *title, Float_t x=0,Float_t y=0, Float_t width=1, Float_t  height=1,
                          const Text_t *type= WC_LISTVIEW,
                          UInt_t style=(DWORD) WS_VISIBLE | LVS_SMALLICON | LVS_SINGLESEL | LVS_AUTOARRANGE );

  virtual void Add(TObject *obj, char const *name);
  virtual void Add(char const **row, Int_t cols=1, TObject *obj=0); // insert one row (multicolumn the list view)
  virtual void Add(char const *cell, Int_t row = 0, Int_t col=1);   // insert one element into the row,col cell

  virtual void AddColumns(char const **headers, Int_t cols=1, Int_t *width = 0, EListFmt *form = 0); // creates a header for all coumns
  virtual void AddColumn(char const *header, Int_t col=1, Int_t width = 0, EListFmt form = kItemLeft);    // set the header of the single column

  virtual void CreateAccessories();                    // Create some extra things depends of the type of the control.
  virtual void SetObject(TObject *obj);
  virtual TObject *GetObject(){ return fObject;};
  virtual LRESULT APIENTRY OnNotify(LPARAM lParam);    // CallBack function to manage the notify messages
  virtual UInt_t           GetItemObject(RECT *rpc);   // returns the selected TObject item (lParam) and its position
  void                     ResetIndex(){fiLastCreated = -1;} // Resetes the item index to open a new list
  void                     SetItemCount(Int_t count);        // prepares a list for adding a large number of items
  void                     Shift(UInt_t lParam = 0){ ClearList();}             // Shift items (this causes clearing the control area)
  // ClassDef(TWin32ListViewCtrl,0)  // ListView Class is used to build TBrowserImp for Win32

};

#endif
