//*CMZ :  0.90/06 21/11/96  16.31.39  by  Rene Brun
//*-- Author :    Rene Brun   31/10/96

#ifndef ROOT_TFrame
#define ROOT_TFrame

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
// TFrame                                                               //
//                                                                      //
// TFrame   A TWbox for drawing histogram frames.                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TWbox
#include "TWbox.h"
#endif


class TFrame : public TWbox {


public:
        TFrame();
        TFrame(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2);
        TFrame(const TFrame &frame);
        virtual ~TFrame();
                void  Copy(TObject &frame);
        virtual void  Draw(Option_t *option="");
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
        virtual void  Paint(Option_t *option="");
        virtual void  Pop();
        virtual void  SavePrimitive(ofstream &out, Option_t *option);

        ClassDef(TFrame,1)  //Pad graphics frame
};

#endif

