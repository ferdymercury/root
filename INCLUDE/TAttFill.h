//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/04 08/10/99  23.04.46  by  Rene Brun
//*CMZ :  2.20/00 01/11/98  16.35.35  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  17.56.19  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttFill
#define ROOT_TAttFill

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
// TAttFill                                                             //
//                                                                      //
// Fill area attributes.                                                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Gtypes
#include "Gtypes.h"
#endif


class TAttFill {

protected:
   Color_t    fFillColor;           //fill area color
   Style_t    fFillStyle;           //fill area style

public:
   TAttFill();
   TAttFill(Color_t fcolor,Style_t fstyle);
   virtual ~TAttFill();
   void             Copy(TAttFill &attfill);
   Color_t          GetFillColor() { return fFillColor; }
   Style_t          GetFillStyle() { return fFillStyle; }
   Bool_t           IsTransparent() const;
   virtual void     Modify();
   virtual void     ResetAttFill(Option_t *option="");
   virtual void     SaveFillAttributes(ofstream &out, const char *name, Int_t coldef=1, Int_t stydef=1001);
   virtual void     SetFillAttributes(); // *MENU*
   virtual void     SetFillColor(Color_t fcolor) { fFillColor = fcolor; }
   virtual void     SetFillStyle(Style_t fstyle) { fFillStyle = fstyle; }

   ClassDef(TAttFill,1)  //Fill area attributes
};

inline Bool_t TAttFill::IsTransparent() const
{ return fFillStyle >= 4000 && fFillStyle <= 4100 ? kTRUE : kFALSE; }

#endif

