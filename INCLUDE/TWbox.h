//*CMZ :  0.90/05 21/11/96  10.28.08  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TWbox
#define ROOT_TWbox

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
// TWbox                                                                //
//                                                                      //
// A window box (box with 3-D effects).                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TBox
#include "TBox.h"
#endif


class TWbox : public TBox {

protected:
        Short_t      fBorderSize;    //window box bordersize in pixels
        Short_t      fBorderMode;    //Bordermode (-1=down, 0 = no border, 1=up)

public:
        TWbox();
        TWbox(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
              Color_t color=18, Short_t bordersize=5 ,Short_t bordermode=1);
        TWbox(const TWbox &wbox);
        virtual ~TWbox();
                void  Copy(TObject &wbox);
        virtual void  Draw(Option_t *option="");
        virtual void  DrawWbox(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      Color_t color=33 ,Short_t bordersize=5 ,Short_t bordermode=-1);
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        Short_t       GetBorderMode() { return fBorderMode;}
        Short_t       GetBorderSize() { return fBorderSize;}
        Int_t         GetDarkColor()  {return GetFillColor() + 100;}
        Int_t         GetLightColor() {return GetFillColor() + 150;}
        virtual void  Paint(Option_t *option="");
        virtual void  PaintFrame(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                                 Color_t color, Short_t bordersize, Short_t bordermode,
                                 Bool_t tops);
        virtual void  PaintWbox(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      Color_t color=33, Short_t bordersize=5, Short_t bordermode=-1);
        virtual void  Print(Option_t *option="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetBorderMode(Short_t bordermode) {fBorderMode = bordermode;} // *MENU*
        virtual void  SetBorderSize(Short_t bordersize) {fBorderSize = bordersize;} // *MENU*

        ClassDef(TWbox,1)  //A window box (box with 3-D effects)
};

#endif

