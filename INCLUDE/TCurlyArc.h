//*CMZ :  2.23/12 30/01/2000  10.21.51  by  Rene Brun
//*CMZ :  2.23/10 04/12/99  18.29.03  by  Rene Brun
//*CMZ :  2.23/09 21/11/99  18.19.54  by  Rene Brun
//*-- Author :    Otto Schaile   20/11/99
#ifndef ROOT_TCurlyArc
#define ROOT_TCurlyArc

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
//
// This class implements a curly or wavy arc typically used
// to draw Feynman diagrams.

#include "TCurlyLine.h"

class TCurlyArc : public TCurlyLine {

private:
   Float_t fR1;                  //  Radius of arc
   Float_t fPhimin;              //  start phi (degrees)
   Float_t fPhimax;              //  end phi (degrees)
   Float_t fTheta;               //  used internally

public:
   TCurlyArc(){;}
   TCurlyArc(Float_t x1, Float_t y1, Float_t rad,
            Float_t phimin, Float_t phimax,
            Float_t tl = .05, Float_t trad = .02);
   virtual     ~TCurlyArc(){;}
   virtual void Build();
   Int_t        DistancetoPrimitive(Int_t px, Int_t py);
   void         ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void SetCenter(Float_t x1, Float_t y1);  // *MENU* *ARGS={x1=>fX1,y1=>fY1}
   virtual void SetRadius(Float_t radius);          // *MENU* *ARGS={radius=>fR1}
   virtual void SetPhimin(Float_t phimin);          // *MENU* *ARGS={phimin=>fPhimin}
   virtual void SetPhimax(Float_t phimax);          // *MENU* *ARGS={phimax=>fPhimax}
   Float_t      GetRadius() {return fR1;}
   Float_t      GetPhimin() {return fPhimin;}
   Float_t      GetPhimax() {return fPhimax;}
   virtual void SavePrimitive(ofstream &out, Option_t *);

   ClassDef(TCurlyArc,1) // a curly arc
};

#endif

