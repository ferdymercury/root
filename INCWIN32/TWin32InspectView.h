//*CMZ :  0.90/11 02/01/97  15.08.41  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   09/12/96

#ifndef ROOT_TWin32InspectView
#define ROOT_TWin32InspectView

////////////////////////////////////////////////////////
//                                                    //
// TWin32InspectView                                  //
//                                                    //
// class been derived from TWin32ListViewCtrl         //
// To perform TObject::Inspect function under Win32   //
//                                                    //
//                                                    //
////////////////////////////////////////////////////////

#include "TWin32ListViewCtrl.h"

class TWin32InspectView : public TWin32ListViewCtrl {
private:
   Int_t           fiLastCreated;         // Index of the the last created ListView object
   LV_ITEM         fLVItem;               // List view item;
protected:
   virtual void OnDeleteItem    (NM_LISTVIEW *lParam){;}
   virtual void OnDeleteAllItems(NM_LISTVIEW *lParam){;}
   virtual void OnItemChanged (NM_LISTVIEW *lParam);
   virtual void OnItemChanging(NM_LISTVIEW *lParam){; }
 //          void ExecThreadCB(TWin32SendClass *code);

public:
   TWin32InspectView(){fhwndWindow=0;} //default ctor
   TWin32InspectView(TGWin32WindowsObject *winobj,Text_t *title, Float_t x=0,Float_t y=0, Float_t width=1, Float_t  height=1,
                          Text_t *type= WC_LISTVIEW,
                          UInt_t style=(DWORD) WS_VISIBLE | LVS_REPORT | LVS_SINGLESEL | LVS_AUTOARRANGE );

  virtual void Add(TObject *obj, char const *name);
  virtual void CreateAccessories();                     // Create some extra things depends of the type of the control.
  virtual LRESULT APIENTRY OnNotify(LPARAM lParam);     // CallBack function to manage the notify messages
  virtual UInt_t           GetItemObject(RECT *rpc);    // returns the selected TObject item (lParam) and its position
  void                     ResetIndex(){fiLastCreated = -1;} // Resset the item index to open a new list
  void                     Shift(UInt_t lParam = 0){ ResetIndex();}         // Shift items (this causes clearing the control area)
  ClassDef(TWin32InspectView,0)  // TWin32InspectView Class is used to build TWin32InspectImp for Win32

};

#endif
