//*CMZ :  2.00/00 21/02/98  17.24.24  by  Fons Rademakers
//*-- Author :    Fons Rademakers   12/02/98

#ifndef ROOT_TRootContextMenu
#define ROOT_TRootContextMenu

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
// TRootContextMenu                                                     //
//                                                                      //
// This class provides an interface to context sensitive popup menus.   //
// These menus pop up when the user hits the right mouse button, and    //
// are destroyed when the menu pops downs.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TContextMenuImp
#include "TContextMenuImp.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif

class TRootDialog;


class TRootContextMenu : public TGPopupMenu, public TContextMenuImp {

private:
   TRootDialog *fDialog;    // dialog prompting for command line arguments
   TList       *fCleanup;   // list of objects to be deleted before refilling menu

   void CreateMenu(TObject *object);

public:
   TRootContextMenu(TContextMenu *c, const char *name);
   virtual ~TRootContextMenu();

   virtual void DisplayPopup(Int_t x, Int_t y);
   virtual void Dialog(TObject *object, TMethod *method);
   TRootDialog *GetDialog() const { return fDialog; };

   Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);

   ClassDef(TRootContextMenu,0)  //ROOT native GUI context sensitive popup menu
};

#endif
