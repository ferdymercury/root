//*CMZ :  2.00/08 25/05/98  18.37.34  by  Fons Rademakers
//*CMZ :  2.00/00 23/02/98  00.05.19  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/02/98

#ifndef ROOT_TRootControlBar
#define ROOT_TRootControlBar

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

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TRootControlBar                                                      //
//                                                                      //
// This class provides an interface to the GUI dependent functions of   //
// the TControlBar class. A control bar is a horizontal or vertical bar //
// with a number of buttons (text or picture buttons).                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TControlBarImp
#include "TControlBarImp.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TControlBar;
class TList;


class TRootControlBar : public TGMainFrame, public TControlBarImp {

private:
   TList          *fWidgets; // list of TGTextButton or TGPictureButtons
   TGLayoutHints  *fL1;      // button layout hints

public:
   TRootControlBar(TControlBar *c, const char *title, Int_t x = -999, Int_t y = -999);
   virtual ~TRootControlBar();

   void Create();
   void Hide();
   void Show();

   Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);
   void   CloseWindow();

   ClassDef(TRootControlBar,0)  //ROOT native GUI implementation of TControlBar
};

#endif
