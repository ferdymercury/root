//*CMZ :  1.03/09 07/12/97  13.13.33  by  Fons Rademakers
//*-- Author :    Rene Brun   04/12/94

#ifndef ROOT_TNamed
#define ROOT_TNamed

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
// TNamed                                                               //
//                                                                      //
// The basis for a named object (name, title).                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TList
#include "TList.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif


class TNamed : public TObject {

protected:
   TString   fName;            //object identifier
   TString   fTitle;           //object title

public:
   TNamed() { }
   TNamed(const Text_t *name, const Text_t *title) : fName(name), fTitle(title) { }
   TNamed(const TString &name, const TString &title) : fName(name), fTitle(title) { }
   TNamed(const TNamed &named);
   TNamed& operator=(const TNamed& rhs);
   virtual ~TNamed() { }
   virtual Int_t    Compare(TObject *obj);
   virtual void     Copy(TObject &named);
   virtual void     FillBuffer(char *&buffer);
   virtual const Text_t  *GetName() const {return fName.Data();}
   virtual const Text_t  *GetTitle() const {return fTitle.Data();}
   virtual ULong_t  Hash() { return fName.Hash(); }
   virtual Bool_t   IsSortable() const { return kTRUE; }
   virtual void     SetName(const Text_t *name); // *MENU*
   virtual void     SetObject(const Text_t *name, const Text_t *title);
   virtual void     SetTitle(const Text_t *title=""); // *MENU*
   virtual void     ls(Option_t *option="");
   virtual void     Print(Option_t *option="");
   virtual Int_t    Sizeof() const;

   ClassDef(TNamed,1)  //The basis for a named object (name, title)
};

#endif
