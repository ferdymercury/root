//*CMZ :  2.23/12 31/01/2000  10.19.29  by  Rene Brun
//*CMZ :  2.23/02 05/09/99  17.07.57  by  Rene Brun
//*CMZ :  2.21/05 08/02/99  10.37.14  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  18.30.03  by  Fons Rademakers
//*-- Author :    Rene Brun   08/12/94

#ifndef ROOT_TBox
#define ROOT_TBox

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TBox                                                                 //
//                                                                      //
// Box class.                                                           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TAttLine
#include "TAttLine.h"
#endif
#ifndef ROOT_TAttFill
#include "TAttFill.h"
#endif

class TBox : public TObject, public TAttLine, public TAttFill {

private:
   TObject     *fTip;          //!tool tip associated with box

protected:
   Coord_t      fX1;           //X of 1st point
   Coord_t      fY1;           //Y of 1st point
   Coord_t      fX2;           //X of 2nd point
   Coord_t      fY2;           //Y of 2nd point
   Bool_t       fResizing;     //!True if box is being resized

public:
   TBox();
   TBox(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t  y2);
   TBox(const TBox &box);
   virtual ~TBox();
           void  Copy(TObject &box);
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual void  Draw(Option_t *option="");
   virtual void  DrawBox(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t  y2);
   virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
   Bool_t        IsBeingResized() const { return fResizing; }
   Coord_t       GetX1() const { return fX1; }
   Coord_t       GetX2() const { return fX2; }
   Coord_t       GetY1() const { return fY1; }
   Coord_t       GetY2() const { return fY2; }
   virtual void  HideToolTip(Int_t event);
   virtual void  ls(Option_t *option="");
   virtual void  Paint(Option_t *option="");
   virtual void  PaintBox(Coord_t x1, Coord_t y1, Coord_t x2, Coord_t y2, Option_t *option="");
   virtual void  Print(Option_t *option="");
   virtual void  SavePrimitive(ofstream &out, Option_t *option);
   virtual void  SetX1(Coord_t x1) {fX1=x1;}
   virtual void  SetX2(Coord_t x2) {fX2=x2;}
   virtual void  SetY1(Coord_t y1) {fY1=y1;}
   virtual void  SetY2(Coord_t y2) {fY2=y2;}
   virtual void  SetToolTipText(const char *text, Long_t delayms = 1000);

   ClassDef(TBox,1)  //Box class
};

#endif

