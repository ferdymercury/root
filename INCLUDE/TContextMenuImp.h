//*CMZ :  2.00/00 12/02/98  19.14.47  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  11.45.53  by  Fons Rademakers
//*-- Author :    Nenad Buncic   08/02/96

#ifndef ROOT_TContextMenuImp
#define ROOT_TContextMenuImp

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

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// TContextMenuImp                                                            //
//                                                                            //
// This class provides an interface to GUI independent                        //
// context sensitive popup menus.                                             //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

class TContextMenu;
class TObject;
class TMethod;


class TContextMenuImp {

protected:
   TContextMenu *fContextMenu; //TContextMenu associated with this implementation

public:
   TContextMenuImp(TContextMenu *c=0) : fContextMenu(c) { }
   virtual ~TContextMenuImp() { }

   virtual TContextMenu *GetContextMenu() const { return fContextMenu; }

   virtual void Dialog(TObject *object, TMethod *method);
   virtual void DisplayPopup(Int_t x, Int_t y);

   ClassDef(TContextMenuImp,0) //Context sensitive popup menu implementation
};

inline void TContextMenuImp::Dialog(TObject *, TMethod *) { }
inline void TContextMenuImp::DisplayPopup(Int_t, Int_t) { }

#endif
