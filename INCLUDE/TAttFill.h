//*CMZ :  2.20/00 01/11/98  16.35.35  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  17.56.19  by  Fons Rademakers
//*-- Author :    Rene Brun   11/12/94

#ifndef ROOT_TAttFill
#define ROOT_TAttFill

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
   virtual void     Reset(Option_t *option="");
   virtual void     SaveFillAttributes(ofstream &out, const Text_t *name, Int_t coldef=1, Int_t stydef=1001);
   virtual void     SetFillAttributes(); // *MENU*
   virtual void     SetFillColor(Color_t fcolor) { fFillColor = fcolor; }
   virtual void     SetFillStyle(Style_t fstyle) { fFillStyle = fstyle; }

   ClassDef(TAttFill,1)  //Fill area attributes
};

inline Bool_t TAttFill::IsTransparent() const
{ return fFillStyle >= 4000 && fFillStyle <= 4100 ? kTRUE : kFALSE; }

#endif

