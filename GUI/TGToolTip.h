//*CMZ :  2.21/05 08/02/99  10.40.15  by  Fons Rademakers
//*CMZ :  2.00/01 13/03/98  11.39.22  by  Fons Rademakers
//*CMZ :  2.00/00 22/02/98  20.04.03  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/02/98

#ifndef ROOT_TGToolTip
#define ROOT_TGToolTip

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGToolTip                                                            //
//                                                                      //
// A tooltip is a one line help text that is displayed in a window      //
// when the cursor rests over a widget. For an example of usage see     //
// the TGButton class.                                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif

class TGLabel;
class TTimer;
class TVirtualPad;
class TBox;


class TGToolTip : public TGCompositeFrame {

friend class TGClient;

private:
   TGLabel           *fLabel;   // help text
   TGLayoutHints     *fL1;      // layout used to place text in frame
   TTimer            *fDelay;   // popup delay timer
   const TGFrame     *fWindow;  // frame to which tool tip is associated
   const TVirtualPad *fPad;     // pad to which tooltip is associated
   const TBox        *fBox;     // box in pad to which tooltip is associated

   static ULong_t fgLightYellowPixel;

public:
   TGToolTip(const TGWindow *p, const TGFrame *f, const char *text, Long_t delayms);
   TGToolTip(const TGWindow *p, const TBox *b, const char *text, Long_t delayms);
   virtual ~TGToolTip();

   virtual void DrawBorder();

   Bool_t HandleTimer(TTimer *t);
   void   Show(Int_t x, Int_t y);
   void   Hide();
   void   Reset();
   void   Reset(const TVirtualPad *parent);

   ClassDef(TGToolTip,0)  //One line help text
};

#endif
