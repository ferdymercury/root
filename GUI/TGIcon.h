//*CMZ :  2.00/00 11/01/98  12.57.43  by  Fons Rademakers
//*-- Author :    Fons Rademakers   05/01/98

#ifndef ROOT_TGIcon
#define ROOT_TGIcon

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
