//*CMZ :  2.00/00 11/01/98  12.57.43  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

#ifndef ROOT_TGIcon
#define ROOT_TGIcon

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
// TGIcon                                                               //
//                                                                      //
// This class handles GUI icons.                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGDimension
#include "TGDimension.h"
#endif

class TGPicture;


class TGIcon : public TGFrame {

protected:
   const TGPicture  *fPic;     // icon picture

   virtual void DoRedraw();

public:
   TGIcon(const TGWindow *p, const TGPicture *pic, UInt_t w, UInt_t h,
      UInt_t options = kChildFrame, ULong_t back = fgDefaultFrameBackground) :
      TGFrame(p, w, h, options, back) { fPic = pic; }
   ~TGIcon();

   const TGPicture *GetPicture() const { return fPic; }
   virtual void SetPicture(const TGPicture *pic);

   virtual TGDimension GetDefaultSize() const;

   ClassDef(TGIcon,0)  // Icon GUI class
};

#endif
