//*CMZ :  2.00/06 05/05/98  11.05.30  by  Fons Rademakers
//*CMZ :  2.00/00 08/01/98  22.12.43  by  Fons Rademakers
//*-- Author :    Fons Rademakers   08/01/98

#ifndef ROOT_TGTextBuffer
#define ROOT_TGTextBuffer

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
// TGTextBuffer                                                         //
//                                                                      //
// A text buffer is used in several widgets, like TGTextEntry,          //
// TGFileDialog, etc. It is a little wrapper around the powerful        //
// TString class and used for sinlge line texts. For multi line texts   //
// use TGText.                                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TString
#include "TString.h"
#endif


class TGTextBuffer {

private:
   TString    *fBuffer;

public:
   TGTextBuffer() { fBuffer = new TString; }
   TGTextBuffer(Int_t length) { fBuffer = new TString(length); }
   virtual ~TGTextBuffer() { delete fBuffer; }

   UInt_t GetTextLength() const { return fBuffer->Length(); }
   UInt_t GetBufferLength() const { return fBuffer->Capacity(); }
   const char *GetString() const { return fBuffer->Data(); }

   void AddText(Int_t pos, const char *text) { fBuffer->Insert(pos, text); }
   void AddText(Int_t pos, const char *text, Int_t length) { fBuffer->Insert(pos, text, length); }
   void RemoveText(Int_t pos, Int_t length) { fBuffer->Remove(pos, length); }
   void Clear() { fBuffer->Remove(0, fBuffer->Length()); }

   ClassDef(TGTextBuffer,0)  // Text buffer used by widgets like TGTextEntry, etc.
};

#endif
