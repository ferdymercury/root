//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.56.38  by  Rene Brun
//*CMZ :  2.00/08 26/05/98  08.20.37  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  18.38.30  by  Fons Rademakers
//*CMZ :  1.03/09 09/12/97  13.02.19  by  Fons Rademakers
//*-- Author :    Nenad Buncic   20/02/96

#ifndef ROOT_TControlBar
#define ROOT_TControlBar

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

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// TControlBar                                                         //
//                                                                     //
//   ControlBar is fully user configurable tool which provides fast    //
// access to frequently used operations. User can choose between       //
// buttons and drawnbuttons (let's say icons) and assign to them his   //
// own actions (let's say ROOT or C++ commands).                       //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TControlBarButton
#include "TControlBarButton.h"
#endif

#ifndef ROOT_TControlBarImp
#include "TControlBarImp.h"
#endif

class TList;

class TControlBar : public TControlBarButton {

friend class  TControlBarImp;

private:
   virtual void   Create();
   void           Initialize(Int_t x, Int_t y);

protected:

   TControlBarImp *fControlBarImp;  //system specific implementation
   Int_t           fOrientation;    //orientation
   TList          *fButtons;        //list of buttons
   Int_t           fNoroc;          //number of rows or columns

public:
   enum { kVertical = 1, kHorizontal = 2 };

   TControlBar();
   TControlBar(const char *orientation, const char *title="");
   TControlBar(const char *orientation, const char *title, Int_t x, Int_t y);
   virtual ~TControlBar();

   void           AddButton(TControlBarButton *button);
   void           AddButton(TControlBarButton &button);
   void           AddButton(const char *label, const char *action, const char *hint="", const char *type="button");
   void           AddControlBar(TControlBar *controlBar);
   void           AddControlBar(TControlBar &controlBar);
   void           AddSeparator();
   TControlBarImp *GetControlBarImp() { return fControlBarImp; }
   TList          *GetListOfButtons() { return fButtons; }
   Int_t          GetNumberOfColumns() { return fNoroc; }
   Int_t          GetNumberOfRows() { return fNoroc; }
   Int_t          GetOrientation() { return fOrientation; }
   void           Hide();
   void           SetNumberOfColumns(Int_t n) { fNoroc = n; }
   void           SetNumberOfRows(Int_t n) { fNoroc = n; }
   void           SetOrientation(const char *o);
   void           SetOrientation(Int_t o);
   void           Show();

   ClassDef(TControlBar,0) //Control bar
};

#endif
