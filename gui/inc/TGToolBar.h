//*CMZ :  2.23/02 02/09/99  18.05.22  by  Rene Brun
//*CMZ :  2.00/00 27/02/98  16.22.22  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/02/98

#ifndef ROOT_TGToolBar
#define ROOT_TGToolBar

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
// TGToolBar + TGHorizontal3DLine                                       //
//                                                                      //
// A toolbar is a composite frame that contains TGPictureButtons.       //
// A horizontal 3D line is a line that typically separates a toolbar    //
// from the menubar.                                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TGButton;
class TList;


struct ToolBarData_t {
   const char *fPixmap;
   const char *fTipText;
   Bool_t      fStayDown;
   Int_t       fId;
   TGButton   *fButton;
};



class TGToolBar : public TGCompositeFrame {

private:
   TList   *fWidgets;     // list of buttons and layouthints to be deleted
   TList   *fPictures;    // list of pictures that should be freed

public:
   TGToolBar(const TGWindow *p, UInt_t w, UInt_t h,
             UInt_t options = kHorizontalFrame,
             ULong_t back = fgDefaultFrameBackground);
   virtual ~TGToolBar();

   void AddButton(const TGWindow *w, ToolBarData_t *button, Int_t spacing = 0);

   ClassDef(TGToolBar,0)  //A bar containing picture buttons
};



class TGHorizontal3DLine : public TGFrame {

public:
   TGHorizontal3DLine(const TGWindow *p, UInt_t w = 4, UInt_t h = 2,
                      UInt_t options = kChildFrame,
                      ULong_t back = fgDefaultFrameBackground) :
      TGFrame(p, w, h, options, back) { }

   virtual void DrawBorder() {
      gVirtualX->DrawLine(fId, fgShadowGC,  0, 0, fWidth-2, 0);
      gVirtualX->DrawLine(fId, fgHilightGC, 0, 1, fWidth-1, 1);
      gVirtualX->DrawLine(fId, fgHilightGC, fWidth-1, 0, fWidth-1, 1);
   }

   ClassDef(TGHorizontal3DLine,0)  //A horizontal 3D separator line
};

#endif
