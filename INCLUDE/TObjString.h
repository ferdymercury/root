//*CMZ :  1.03/09 04/12/97  14.24.46  by  Fons Rademakers
//*-- Author :    Fons Rademakers   12/11/95

#ifndef ROOT_TObjString
#define ROOT_TObjString

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

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


class TObjString : public TObject {

private:
   TString    fString;       // wrapped TString

public:
   TObjString(const char *s = "") : fString(s) { }
   TObjString(const TObjString &s) : fString(s.fString) { }
   ~TObjString() { }
   Int_t     Compare(TObject *obj);
   const Text_t *GetName() const { return fString.Data(); }
   ULong_t   Hash() { return fString.Hash(); }
   void      FillBuffer(char *&buffer) { fString.FillBuffer(buffer); }
   void      Print(Option_t *) { Printf("TObjString = %s", (const char*)fString); }
   Bool_t    IsSortable() const { return kTRUE; }
   Bool_t    IsEqual(TObject *obj);
   void      ReadBuffer(char *&buffer) { fString.ReadBuffer(buffer); }
   void      SetString(char *s) { fString = s; }
   TString   GetString() const { return fString; }
   Int_t     Sizeof() const { return fString.Sizeof(); }
   TString  &String() { return fString; }

   ClassDef(TObjString,1)  //Collectable string class
};

#endif

