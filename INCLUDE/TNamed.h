//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.03/09 07/12/97  13.13.33  by  Fons Rademakers
//*-- Author :    Rene Brun   04/12/94

#ifndef ROOT_TNamed
#define ROOT_TNamed

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
   TNamed(const char *name, const char *title) : fName(name), fTitle(title) { }
   TNamed(const TString &name, const TString &title) : fName(name), fTitle(title) { }
   TNamed(const TNamed &named);
   TNamed& operator=(const TNamed& rhs);
   virtual ~TNamed() { }
   virtual Int_t    Compare(TObject *obj);
   virtual void     Copy(TObject &named);
   virtual void     FillBuffer(char *&buffer);
   virtual const char  *GetName() const {return fName.Data();}
   virtual const char  *GetTitle() const {return fTitle.Data();}
   virtual ULong_t  Hash() { return fName.Hash(); }
   virtual Bool_t   IsSortable() const { return kTRUE; }
   virtual void     SetName(const char *name); // *MENU*
   virtual void     SetObject(const char *name, const char *title);
   virtual void     SetTitle(const char *title=""); // *MENU*
   virtual void     ls(Option_t *option="");
   virtual void     Print(Option_t *option="");
   virtual Int_t    Sizeof() const;

   ClassDef(TNamed,1)  //The basis for a named object (name, title)
};

#endif
