//*CMZ :  2.00/08 04/06/98  00.22.32  by  Fons Rademakers
//*CMZ :  0.80/00 25/06/96  12.14.56  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/08/95

#ifndef ROOT_TRegexp
#define ROOT_TRegexp

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
//  TRegexp                                                             //
//                                                                      //
//  Declarations for regular expression class.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

#ifndef ROOT_Match
#include "Match.h"
#endif

class TString;


class TRegexp {

public:
   enum EStatVal { kOK = 0, kIllegal, kNomem, kToolong };

private:
   Pattern_t            *fPattern;       // Compiled pattern
   EStatVal              fStat;          // Status
   static const unsigned fgMaxpat;       // Max length of compiled pattern

   void                  CopyPattern(const TRegexp& re);
   void                  GenPattern(const char *re);
   const char           *MakeWildcard(const char *re);

public:
   TRegexp(const char *re, Bool_t wildcard = kFALSE);
   TRegexp(const TString& re);
   TRegexp(const TRegexp& re);
   virtual ~TRegexp();

   TRegexp&              operator=(const TRegexp& re);
   TRegexp&              operator=(const TString& re);   // Recompiles pattern
   TRegexp&              operator=(const char *re);      // Recompiles pattern
   Ssiz_t                Index(const TString& str, Ssiz_t *len, Ssiz_t start=0) const;
   EStatVal              Status();                       // Return & clear status

   ClassDef(TRegexp,0)  // Regular expression class
};

#endif
