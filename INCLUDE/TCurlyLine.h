//*CMZ :  2.23/12 30/01/2000  10.21.28  by  Rene Brun
//*CMZ :  2.23/10 10/12/99  19.18.35  by  Rene Brun
//*CMZ :  2.23/09 21/11/99  18.19.55  by  Rene Brun
//*-- Author :    Otto Schaile   20/11/99
#ifndef ROOT_TCurlyLine
#define ROOT_TCurlyLine

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
// This class implements a curly or wavy polyline typically
// used to draw Feynman diagrams.

#include "fstream.h"

#ifndef ROOT_TPolyLine
#include "TPolyLine.h"
#endif

class TCurlyLine : public TPolyLine {

protected:
   Float_t fX1;              // start x, center for arc
   Float_t fY1;              // start y, center for arc
   Float_t fX2;              // end x
   Float_t fY2;              // end y
   Float_t fWaveLength;      // wavelength of sinusoid in percent of pad height
   Float_t fAmplitude;       // amplitude of sinusoid in percent of pad height
   Int_t   fNsteps;          // used internally (controls precision)
   Bool_t  fIsCurly;         // true: Gluon, false: Gamma

public:
   // TCurlyLine status bits
   enum {
      kTooShort = BIT(11)
   };
   TCurlyLine(){;}
   TCurlyLine(Float_t x1, Float_t y1, Float_t x2, Float_t y2,
             Float_t tl = .05, Float_t rad = .02);
   virtual ~TCurlyLine(){;}
   virtual void Build();
   Int_t        DistancetoPrimitive(Int_t px, Int_t py);
   void         ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void SetCurly();                             // *MENU*
   virtual void SetWavy();                              // *MENU*
   virtual void SetWaveLength(Float_t WaveLength);      // *MENU* *ARGS={WaveLength=>fWaveLength}
   virtual void SetAmplitude(Float_t x);                // *MENU* *ARGS={x=>fAmplitude}
   virtual void SetStartPoint(Float_t x1, Float_t y1);
   virtual void SetEndPoint  (Float_t x2, Float_t y2);
   Bool_t       GetCurly()     {return fIsCurly;}
   Float_t      GetWaveLength(){return fWaveLength;}
   Float_t      GetAmplitude() {return fAmplitude;}
   Float_t      GetStartX()    {return fX1;}
   Float_t      GetEndX()      {return fX2;}
   Float_t      GetStartY()    {return fY1;}
   Float_t      GetEndY()      {return fY2;}
   virtual void SavePrimitive(ofstream &out, Option_t *);

   ClassDef(TCurlyLine,1) // A curly polyline
};

#endif
