//*CMZ :  2.21/00 04/01/99  07.39.17  by  Rene Brun
//*CMZ :  2.00/11 24/08/98  16.53.34  by  Rene Brun
//*CMZ :  2.00/10 13/07/98  19.38.06  by  Fons Rademakers
//*CMZ :  2.00/08 26/05/98  17.05.07  by  Fons Rademakers
//*CMZ :  2.00/03 26/03/98  11.04.17  by  Rene Brun
//*CMZ :  2.00/00 11/02/98  12.55.37  by  Rene Brun
//*CMZ :  1.03/09 09/12/97  21.18.14  by  Fons Rademakers
//*-- Author :    Nenad Buncic   18/10/95

#ifndef ROOT_THtml
#define ROOT_THtml

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

////////////////////////////////////////////////////////////////////////////
//                                                                        //
// THtml                                                                  //
//                                                                        //
// Html makes a documentation for all ROOT classes                        //
// using Hypertext Markup Language 2.0                                    //
//                                                                        //
////////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif


class TClass;
class TVirtualPad;


class THtml : public TObject {

private:
    TString      fXwho;            // by default http://xwho.cern.ch/WHO/people?
  const Char_t  *fSourceDir;       // source path
  const Char_t  *fOutputDir;       // output directory
        Char_t  *fLine;            // current line
        Int_t    fLen;             // maximum line length
        Char_t  *fCounter;         // counter string
        Bool_t   fEscFlag;         // Flag to mark the symbol must be written "as is"
        Char_t   fEsc;             // The special symbol ("backslash" by default) to mark "the next symbol should not be converted

        void    Class2Html          (TClass *classPtr, Bool_t force=kFALSE);
        void    ClassDescription    (ofstream &out, TClass *classPtr, Bool_t &flag);
        void    ClassTree           (TVirtualPad *canvas, TClass *classPtr, Bool_t force=kFALSE);
        Bool_t  CopyHtmlFile        (const Char_t *sourceName, const Char_t *destName="");
        void    CreateIndex         (const Char_t **classNames, Int_t numberOfClasses);
        void    CreateIndexByTopic  (Char_t **filenames, Int_t numberOfNames, Int_t maxLen);
        void    CreateListOfTypes   ();
        void    DerivedClasses      (ofstream &out, TClass *classPtr);
        void    ExpandKeywords      (ofstream &out, Char_t *text, TClass *ptr2class, Bool_t &flag, Char_t *dir="");
        void    ExpandPpLine        (ofstream &out, Char_t *line);
  const Char_t *GetFileName         (const Char_t *filename);
        Char_t *GetHtmlFileName     (TClass *classPtr);
        Bool_t  IsModified          (TClass *classPtr, const Int_t type);
        Bool_t  IsName              (Int_t c);
        Bool_t  IsWord              (Int_t c);
        void    ReplaceSpecialChars (ofstream &out, const Char_t c);
        void    ReplaceSpecialChars (ofstream &out, const Char_t *string);
        void    SortNames           (const Char_t **strings, Int_t num, Bool_t type=0);
        Char_t *StrDup              (const Char_t *s1, Int_t n = 1);

   friend Int_t CaseSensitiveSort   (const void *name1, const void *name2);
   friend Int_t CaseInsensitiveSort (const void *name1, const void *name2);

public:
                 THtml();
       virtual   ~THtml();
          void   Convert      ( Text_t *filename, Text_t *title, Text_t *dirname = "" );
    const Char_t *GetSourceDir()  { return fSourceDir; }
    const Char_t *GetOutputDir()  { return fOutputDir; }
    const Char_t *GetXwho() const { return fXwho.Data(); }
          void   MakeAll      ( Bool_t force=kFALSE );
          void   MakeClass    ( Text_t *className, Bool_t force=kFALSE );
          void   MakeIndex    ();
          void   MakeTree     ( Text_t *className, Bool_t force=kFALSE  );
          void   SetEscape(Char_t esc='\\') {fEsc = esc;}
          void   SetSourceDir ( const Char_t *dir ) { fSourceDir = dir; }
          void   SetOutputDir ( const Char_t *dir ) { fOutputDir = dir; }
          void   SetXwho(const char *xwho) {fXwho = xwho;}
          Bool_t IsModified() { return TObject::IsModified(); }
   virtual void  WriteHtmlHeader(ofstream &out, const Char_t *title);
   virtual void  WriteHtmlFooter(ofstream &out, Char_t *dir="", const Char_t *lastUpdate="",
                                 Char_t *author="", Char_t *copyright="");

   ClassDef(THtml,0)  //Convert class(es) into HTML file(s)
};

R__EXTERN THtml *gHtml;

#endif
