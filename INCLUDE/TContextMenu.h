//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  11.55.29  by  Rene Brun
//*CMZ :  2.22/09 13/07/99  11.06.33  by  Fons Rademakers
//*CMZ :  2.00/00 12/02/98  16.54.31  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  00.17.48  by  Fons Rademakers
//*-- Author :    Nenad Buncic   08/02/96

#ifndef ROOT_TContextMenu
#define ROOT_TContextMenu

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// TContextMenu                                                               //
//                                                                            //
// This class provides an interface to  context sensitive popup menus.        //
// These menus pop up when the user hits  the right mouse button,  and        //
// are destroyed when the menu pops downs.                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TContextMenuImp
#include "TContextMenuImp.h"
#endif

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TMethod;
class TMethodArg;
class TVirtualPad;
class TObjArray;
class TBrowser;
class TToggle;


class TContextMenu : public TNamed {

friend class  TContextMenuImp;

protected:
   TContextMenuImp *fContextMenuImp;      //Context menu system specific implementation
   TMethod         *fSelectedMethod;      //selected method
   TObject         *fSelectedObject;      //selected object
   TVirtualPad     *fSelectedCanvas;      //selected canvas (if exist)
   TVirtualPad     *fSelectedPad;         //selected pad (if exist)
   TBrowser        *fBrowser;             //selected browser (if exist)

   virtual void DisplayPopUp(Int_t x, Int_t y)
      { if (fContextMenuImp) fContextMenuImp->DisplayPopup(x, y); }

private:
   TContextMenu();

public:
   TContextMenu(const char *name, const char *title = "Context sensitive popup menu");
   virtual ~TContextMenu();

   virtual void Action(TObject *object, TMethod *method);
   virtual void Action(TObject *object, TToggle *toggle);
   void Action(TMethod *method) { Action(fSelectedObject, method); }
   void Action(TToggle *toggle) { Action(fSelectedObject, toggle); }
   virtual Char_t *CreateArgumentTitle(TMethodArg *argument);
   virtual Char_t *CreateDialogTitle(TObject *object, TMethod *method);
   virtual Char_t *CreatePopupTitle(TObject *object );
   virtual void Execute(const char *method,  const char *params) { TObject::Execute(method, params); }
   virtual void Execute(TMethod *method, TObjArray *params) { TObject::Execute(method, params); }
   virtual void Execute(TObject *object, TMethod *method, const Char_t *params);
   virtual void Execute(TObject *object, TMethod *method, TObjArray *params);
   void Execute(const Char_t *params) { Execute(fSelectedObject, fSelectedMethod, params); }
   void Execute(TObjArray *params) { Execute(fSelectedObject, fSelectedMethod, params); }
   virtual TBrowser *GetBrowser() { return fBrowser; }
   virtual TContextMenuImp *GetContextMenuImp() { return fContextMenuImp; }
   virtual TVirtualPad *GetSelectedCanvas() { return fSelectedCanvas; }
   virtual TMethod *GetSelectedMethod() { return fSelectedMethod; }
   virtual TObject *GetSelectedObject() { return fSelectedObject; }
   virtual TVirtualPad *GetSelectedPad() { return fSelectedPad; }
   virtual void Popup(Int_t x, Int_t y, TObject *obj, TVirtualPad *c=0, TVirtualPad *p=0); // Create menu from canvas
   virtual void Popup(Int_t x, Int_t y, TObject *obj, TBrowser *b);  // Create menu from Browser
   virtual void SetCanvas(TVirtualPad *c) { fSelectedCanvas = c; }
   virtual void SetBrowser(TBrowser *b) { fBrowser = b; }
   virtual void SetMethod(TMethod *m) { fSelectedMethod = m; }
   virtual void SetObject(const char *name, const char *title) { TNamed::SetObject(name, title); }
   virtual void SetObject(TObject *o) { fSelectedObject = o; }
   virtual void SetPad(TVirtualPad *p) { fSelectedPad = p; }

   ClassDef(TContextMenu,0)  //Context sensitive popup menu
};

#endif
