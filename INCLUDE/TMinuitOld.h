//*CMZ :  0.05/02 16/01/96  08.30.07  by  Rene Brun
//*-- Author :    Rene Brun   17/08/95
// ---------------------------------- minuitold.h

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
// TMinuitOld                                                           //
//                                                                      //
// The MINUIT minimisation package (obsolete functions)                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TMinuitOld
#define ROOT_TMinuitOld

#ifndef ROOT_TMinuit
#include "TMinuit.h"
#endif

class TMinuitOld : public TMinuit {

// methods performed on TMinuitOld class
public:
           TMinuitOld();
           TMinuitOld(Int_t maxpar);
 virtual   ~TMinuitOld();
 void      MinuitMAIN();
 void      SetIO(Int_t i1, Int_t i2, Int_t i3);
 void      mninpu(Int_t iunit, Int_t &ierr);
 void      mnintr();
 void      mnread(Int_t iflgin, Int_t &iflgut);
 void      mnsave();
 void      mnseti(TString tit);
 void      mnstin(TString &crdbuf, Int_t &ierr);
 void      mnvers(TString &cv);

 ClassDef(TMinuitOld,1)  //The MINUIT minimisation package (Obsolete functions)

};

#endif

