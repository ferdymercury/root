//*CMZ :  2.00/13 21/10/98  12.50.44  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  21.32.39  by  Rene Brun
//*CMZ :  1.00/05 18/03/97  11.58.16  by  Fons Rademakers
//*-- Author :    Rene Brun   20/10/95

#ifndef ROOT_TPaveText
#define ROOT_TPaveText

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
// TPaveText                                                            //
//                                                                      //
// PaveText   A Pave with several lines of text.                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TPave
#include "TPave.h"
#endif
#ifndef ROOT_TText
#include "TText.h"
#endif
#ifndef ROOT_TLine
#include "TLine.h"
#endif


class TPaveText : public TPave, public TAttText {

protected:
        Int_t      fLongest;        //Length of the longest line
        Float_t    fMargin;         //Text margin
        TList      *fLines;         //List of labels

public:
        TPaveText();
        TPaveText(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Option_t *option="br");
        TPaveText(const TPaveText &pavetext);
        virtual ~TPaveText();
        virtual TBox    *AddBox(Float_t x1, Float_t y1, Float_t x2, Float_t y2); // *MENU*
        virtual TLine   *AddLine(Float_t x1=0, Float_t y1=0, Float_t x2=0, Float_t y2=0); // *MENU*
        virtual TText   *AddText(Float_t x1, Float_t y1, const Text_t *label);
        virtual TText   *AddText(const Text_t *label);
        virtual void     Clear(Option_t *option="");  // *MENU*
                void     Copy(TObject &pavetext);
        virtual void     DeleteText(); // *MENU*
        virtual void     Draw(Option_t *option="");
        virtual void     DrawFile(const Text_t *filename, Option_t *option="");
        virtual void     EditText(); // *MENU*
        virtual TText   *GetLine(Int_t number);
        virtual TText   *GetLineWith(const Text_t *text);
        virtual TList   *GetListOfLines() {return fLines;}
              Float_t    GetMargin() {return fMargin;}
        virtual TObject *GetObject();
        virtual void     InsertText(const Text_t *label); // *MENU*
        virtual void     Paint(Option_t *option="");
        virtual void     PaintPrimitives(Int_t mode);
        virtual void     Print(Option_t *option="");
        virtual void     ReadFile(const Text_t *filename, Option_t *option="", Int_t nlines=50, Int_t fromline=0); // *MENU*
        virtual void     SaveLines(ofstream &out, char *name);
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetAllWith(const Text_t *text, Option_t *option, Float_t value); // *MENU*
        virtual void     SetMargin(Float_t margin=0.05) {fMargin=margin;} // *MENU*

        ClassDef(TPaveText,1)  //PaveText. A Pave with several lines of text.
};

#endif

