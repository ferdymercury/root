//*CMZ :  1.00/05 20/03/97  15.34.59  by  Rene Brun
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
#ifndef ROOT_TContextMenuItem
#define ROOT_TContextMenuItem

#include "TVIRTUALMENUITEM.h"

class TMethod;
class TContextMenu;
class TCanvas;
class TGWin32WindowsObject;

class TContextMenuItem : public TVirtualMenuItem {

private:

  TMethod *fMethod;
  TObject *fObject;
  TContextMenu *fContextMenu;
  TCanvas  *fCanvas;

protected:
  virtual void Free(TWin32Menu *menu);  // Unlike TWin32MenuItem Free just deletes itself
   void ExecuteEventCB(TWin32Canvas *c){;}          //User click this item
   void ExecThreadCB(TWin32SendClass *command){;}   // It is empty for this class

public:
   TContextMenuItem();
   TContextMenuItem(TContextMenu *contextmenu,TObject *obj,TMethod *method,char *name="ContextMenuItem",
                    const char *title="MenuItem",UINT type=MF_STRING,UINT state=MF_ENABLED,Int_t id=-1);

   const char *ClassName();
   void ExecuteEvent(TWin32Canvas *c);          //User click this item
   void ExecCommandThread(TWin32SendClass *command){
     printf("TContextMenuItem must not call ExecCommandThread function !!! \n");}   // It is empty for this class

   ClassDef(TContextMenuItem,0)
};

#endif
