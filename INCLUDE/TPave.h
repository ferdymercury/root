//*CMZ :  2.20/04 09/12/98  15.46.57  by  Rene Brun
//*CMZ :  2.00/13 28/10/98  09.28.00  by  Rene Brun
//*CMZ :  2.00/11 17/08/98  15.14.16  by  Rene Brun
//*CMZ :  0.90/05 21/11/96  09.59.04  by  Rene Brun
//*-- Author :    Rene Brun   16/10/95

#ifndef ROOT_TPave
#define ROOT_TPave

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
// TPave                                                                //
//                                                                      //
// Pave class.                                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TBox
#include "TBox.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TPave : public TBox {

protected:
        Float_t      fX1NDC;         //X1 point in NDC coordinates
        Float_t      fY1NDC;         //Y1 point in NDC coordinates
        Float_t      fX2NDC;         //X2 point in NDC coordinates
        Float_t      fY2NDC;         //Y2 point in NDC coordinates
        Int_t        fBorderSize;    //window box bordersize in pixels
        Int_t        fInit;          //(=0 if transformation to NDC not yet done)
        Float_t      fCornerRadius;  //Corner radius in case of option arc
        TString      fOption;        //Pave style
        TString      fName;          //Pave name

public:
        TPave();
        TPave(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
              Int_t bordersize=4 ,Option_t *option="br");
        TPave(const TPave &pave);
        virtual ~TPave();
                void  Copy(TObject &pave);
        virtual void  ConvertNDCtoPad();
        virtual void  Draw(Option_t *option="");
        virtual void  DrawPave(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      Int_t bordersize=4 ,Option_t *option="br");
        virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
          Int_t       GetBorderSize() { return fBorderSize;}
          Float_t     GetCornerRadius() {return fCornerRadius;}
          Option_t   *GetName() const {return fName.Data();}
          Option_t   *GetOption() const {return fOption.Data();}
          Float_t     GetX1NDC() {return fX1NDC;}
          Float_t     GetX2NDC() {return fX2NDC;}
          Float_t     GetY1NDC() {return fY1NDC;}
          Float_t     GetY2NDC() {return fY2NDC;}
        virtual void  ls(Option_t *option="");
        virtual void  Paint(Option_t *option="");
        virtual void  PaintPave(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      Int_t bordersize=4 ,Option_t *option="br");
        virtual void  PaintPaveArc(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2,
                      Int_t bordersize=4 ,Option_t *option="br");
        virtual void  Print(Option_t *option="");
        virtual void  SavePrimitive(ofstream &out, Option_t *option);
        virtual void  SetBorderSize(Int_t bordersize=4) {fBorderSize = bordersize;} // *MENU*
        virtual void  SetCornerRadius(Float_t rad = 0.2) {fCornerRadius = rad;} // *MENU*
        virtual void  SetName(const Text_t *name="") {fName = name;} // *MENU*
        virtual void  SetOption(Option_t *option="br") {fOption = option;}
        virtual void  SetX1NDC(Coord_t x1) {fX1NDC=x1;}
        virtual void  SetX2NDC(Coord_t x2) {fX2NDC=x2;}
        virtual void  SetY1NDC(Coord_t y1) {fY1NDC=y1;}
        virtual void  SetY2NDC(Coord_t y2) {fY2NDC=y2;}

        ClassDef(TPave,1)  //Pave. A box with shadowing
};

#endif

