//*CMZ :  2.23/09 20/11/99  11.13.25  by  Fons Rademakers
//*CMZ :  0.80/00 25/06/96  12.15.42  by  Fons Rademakers
//*-- Author :    Rene Brun   15/11/95

#ifndef ROOT_TStringLong
#define ROOT_TStringLong

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
// TStringLong                                                          //
//                                                                      //
// ATTENTION: this class is obsolete. It's functionality has been taken //
// over by TString.                                                     //
//                                                                      //
// The long string class (unlimited number of chars in I/O).            //
// Class TString can contain long strings, but it can read/write only   //
// 255 characters.                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TString
#include "TString.h"
#endif

class TStringLong : public TString {

public:
   TStringLong();                       // Null string
   TStringLong(Ssiz_t ic);              // Suggested capacity
   TStringLong(const TString& s);       // Copy constructor

   TStringLong(const char *s);              // Copy to embedded null
   TStringLong(const char *s, Ssiz_t n);    // Copy past any embedded nulls
   TStringLong(char c);

   TStringLong(char c, Ssiz_t s);

   TStringLong(const TSubString& sub);
   virtual ~TStringLong();

   // ROOT I/O interface
   virtual void     FillBuffer(char *&buffer);
   virtual void     ReadBuffer(char *&buffer);
   virtual Int_t    Sizeof() const;

   ClassDef(TStringLong,1)  //Long string class (more than 255 chars)
};

#endif
