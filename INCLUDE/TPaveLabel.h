//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  21.28.58  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  10.48.37  by  Rene Brun
//*-- Author :    Rene Brun   17/10/95

#ifndef ROOT_TPaveLabel
#define ROOT_TPaveLabel

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
        TPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const char *label, Option_t *option="br");
        TPaveLabel(const TPaveLabel &pavelabel);
        virtual ~TPaveLabel();
                void  Copy(TObject &pavelabel);
        virtual void  Draw(Option_t *option="");
        virtual void  DrawPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      const char *label, Option_t *option="");
        const  char  *GetLabel() const {return fLabel.Data();}
        const  char  *GetTitle() const {return fLabel.Data();}
        virtual void  Paint(Option_t *option="");
        virtual void  PaintPaveLabel(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      const char *label, Option_t *option="");
        virtual void  Print(Option_t *option="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetLabel(const char *label) {fLabel = label;} // *MENU*

        ClassDef(TPaveLabel,1)  //PaveLabel. A Pave with a label
};

#endif

