//*CMZ :  2.00/11 18/08/98  21.28.58  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  10.48.37  by  Rene Brun
//*-- Author :    Rene Brun   17/10/95

#ifndef ROOT_TPaveLabel
#define ROOT_TPaveLabel

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
// TPaveLabel                                                           //
//                                                                      //
// PaveLabel  A Pave with a label.                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPave
#include "TPave.h"
#endif
#ifndef ROOT_TAttText
#include "TAttText.h"
#endif


class TPaveLabel : public TPave, public TAttText {

protected:
        TString      fLabel;         //Label written at the center of Pave

public:
        TPaveLabel();
        TPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const Text_t *label, Option_t *option="br");
        TPaveLabel(const TPaveLabel &pavelabel);
        virtual ~TPaveLabel();
                void  Copy(TObject &pavelabel);
        virtual void  Draw(Option_t *option="");
        virtual void  DrawPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      const Text_t *label, Option_t *option="");
        const  Text_t *GetLabel() const {return fLabel.Data();}
        const  Text_t *GetTitle() const {return fLabel.Data();}
        virtual void  Paint(Option_t *option="");
        virtual void  PaintPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      const Text_t *label, Option_t *option="");
        virtual void  Print(Option_t *option="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetLabel(const Text_t *label) {fLabel = label;} // *MENU*

        ClassDef(TPaveLabel,1)  //PaveLabel. A Pave with a label
};

#endif

