//*CMZ :  2.00/08 26/05/98  08.20.37  by  Fons Rademakers
//*CMZ :  2.00/04 06/04/98  18.38.30  by  Fons Rademakers
//*CMZ :  1.03/09 09/12/97  13.02.19  by  Fons Rademakers
//*-- Author :    Nenad Buncic   20/02/96

#ifndef ROOT_TControlBar
#define ROOT_TControlBar

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
   TControlBar(Text_t *orientation, Text_t *title="");
   TControlBar(Text_t *orientation, Text_t *title, Int_t x, Int_t y);
   virtual ~TControlBar();

   void           AddButton(TControlBarButton *button);
   void           AddButton(TControlBarButton &button);
   void           AddButton(Text_t *label, Text_t *action, Text_t *hint="", Text_t *type="button");
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
   void           SetOrientation(Text_t *o);
   void           SetOrientation(Int_t o);
   void           Show();

   ClassDef(TControlBar,0) //Control bar
};

#endif
