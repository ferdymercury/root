//*CMZ :  2.00/06 05/05/98  11.07.04  by  Fons Rademakers
//*-- Author :    Fons Rademakers   26/04/98

#ifndef ROOT_TGText
#define ROOT_TGText

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
// TGText                                                               //
//                                                                      //
// A TGText is a multi line text buffer. It allows the text to be       //
// loaded from file, saved to file and edited. It is used in the        //
// TGTextEdit widget. Single line text is handled by TGTextBuffer.      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObjString
#include "TObjString.h"
#endif

#ifndef ROOT_TGDimension
#include "TGDimension.h"
#endif

class TList;


class TGText {

protected:
   Bool_t       fIsSaved;        // false if text needs to be saved
   TList       *fLines;          // list of lines
   TObjString  *fCurrent;        // current line
   Int_t        fCurrentRow;     // current row number
   Int_t        fRowCount;       // number of rows
   Int_t        fColCount;       // number of columns in current line
   Int_t        fLongestLine;    // length of longest line

   void     TGTextP();
   Bool_t   SetCurrentRow(Int_t row);
   void     LongestLine();
   Int_t    UpSearchBM(const TString &s, const char *searchPattern, Bool_t cs);
   Int_t    DownSearchBM(const TString &s, const char *searchPattern, Bool_t cs);

public:
   TGText();
   TGText(TGText *text);
   TGText(const char *string);
   virtual ~TGText();

   void    Clear();
   Bool_t  Load(const char *fn, Int_t startpos = 0, Int_t length = -1);
   Bool_t  Save(const char *fn);
   Bool_t  Append(const char *fn);
   Bool_t  IsSaved() const { return fIsSaved; }

   Bool_t  DelChar(TGPosition pos);
   Bool_t  InsChar(TGPosition pos, char c);
   char    GetChar(TGPosition pos);

   Bool_t  DelText(TGPosition start, TGPosition end);
   Bool_t  InsText(TGPosition ins_pos, TGText *src, TGPosition start_src, TGPosition end_src);

   Bool_t  DelLine(Int_t row);
   Bool_t  InsLine(TGPosition pos, const TString &str);
   Bool_t  GetLine(TGPosition pos, TString &str);
   Bool_t  BreakLine(TGPosition pos);

   Int_t   RowCount() const { return fRowCount; }
   Int_t   ColCount() const { return fColCount; }
   Int_t   GetLineLength(Int_t row);
   Int_t   GetLongestLine() const { return fLongestLine; }
   Bool_t  Search(TGPosition *foundPos, TGPosition start, const char *searchString,
                  Bool_t direction, Bool_t caseSensitive);
   Bool_t  Replace(TGPosition pos, const char *oldText, const char *newText,
                   Bool_t direction, Bool_t caseSensitive);

   ClassDef(TGText,0)  // Text used by TGTextEdit
};

#endif
