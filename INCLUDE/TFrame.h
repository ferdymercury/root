//*CMZ :  0.90/06 21/11/96  16.31.39  by  Rene Brun
//*-- Author :    Rene Brun   31/10/96

#ifndef ROOT_TFrame
#define ROOT_TFrame

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

