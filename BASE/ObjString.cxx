//*CMZ :  1.01/04 29/05/97  13.03.03  by  Fons Rademakers
//*-- Author :    Fons Rademakers   12/11/95

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
// TObjString                                                           //
//                                                                      //
// Collectable string class. This is a TObject containing a TString.    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TObjString.h"

ClassImp(TObjString)

//______________________________________________________________________________
Int_t TObjString::Compare(TObject *obj)
{
   if (this == obj) return 0;
   if (TObjString::Class() != obj->IsA()) return -1;
   return fString.CompareTo(((TObjString*)obj)->fString);
}

//______________________________________________________________________________
Bool_t TObjString::IsEqual(TObject *obj)
{
   if (this == obj) return kTRUE;
   if (TObjString::Class() != obj->IsA()) return kFALSE;
   return fString == ((TObjString*)obj)->fString;
}
