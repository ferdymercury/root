//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/03 17/09/99  11.48.50  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  11.50.18  by  Rene Brun
//*CMZ :  2.00/13 21/10/98  12.50.44  by  Rene Brun
//*CMZ :  2.00/11 18/08/98  21.32.39  by  Rene Brun
//*-- Author :    Rene Brun   20/10/95

#ifndef ROOT_TPaveText
#define ROOT_TPaveText

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
        TString    fLabel;          //Label written at the top of the pavetext
        Int_t      fLongest;        //Length of the longest line
        Float_t    fMargin;         //Text margin
        TList      *fLines;         //List of labels

public:
        TPaveText();
        TPaveText(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, Option_t *option="br");
        TPaveText(const TPaveText &pavetext);
        virtual ~TPaveText();
        virtual TBox    *AddBox(Float_t x1, Float_t y1, Float_t x2, Float_t y2);
        virtual TLine   *AddLine(Float_t x1=0, Float_t y1=0, Float_t x2=0, Float_t y2=0);
        virtual TText   *AddText(Float_t x1, Float_t y1, const char *label);
        virtual TText   *AddText(const char *label);
        virtual void     Clear(Option_t *option="");  // *MENU*
                void     Copy(TObject &pavetext);
        virtual void     DeleteText(); // *MENU*
        virtual void     Draw(Option_t *option="");
        virtual void     DrawFile(const char *filename, Option_t *option="");
        virtual void     EditText(); // *MENU*
        const  char     *GetLabel() const {return fLabel.Data();}
        virtual TText   *GetLine(Int_t number);
        virtual TText   *GetLineWith(const char *text);
        virtual TList   *GetListOfLines() {return fLines;}
              Float_t    GetMargin() {return fMargin;}
        virtual TObject *GetObject(Float_t &ymouse, Float_t &yobj);
        virtual Int_t    GetSize();
        virtual void     InsertLine(); // *MENU*
        virtual void     InsertText(const char *label); // *MENU*
        virtual void     Paint(Option_t *option="");
        virtual void     PaintPrimitives(Int_t mode);
        virtual void     Print(Option_t *option="");
        virtual void     ReadFile(const char *filename, Option_t *option="", Int_t nlines=50, Int_t fromline=0); // *MENU*
        virtual void     SaveLines(ofstream &out, const char *name);
        virtual void     SavePrimitive(ofstream &out, Option_t *option);
        virtual void     SetAllWith(const char *text, Option_t *option, Float_t value); // *MENU*
        virtual void     SetLabel(const char *label) {fLabel = label;} // *MENU*
        virtual void     SetMargin(Float_t margin=0.05) {fMargin=margin;} // *MENU*

        ClassDef(TPaveText,2)  //PaveText. A Pave with several lines of text.
};

#endif

