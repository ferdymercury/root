//*CMZ :  2.00/00 07/03/98  18.18.23  by  Fons Rademakers
//*CMZ :  1.03/09 03/12/97  01.46.03  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/10/95

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

#ifndef ROOT_TBrowserImp
#define ROOT_TBrowserImp

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TBrowserImp                                                          //
//                                                                      //
// ABC describing GUI independent browser implementation protocol.      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif

class TBrowser;


class TBrowserImp {

protected:
   TBrowser  *fBrowser;     //TBrowser associated with this implementation
   Bool_t     fShowCycles;  //Show object cycle numbers in browser

public:
   TBrowserImp(TBrowser *b=0) : fBrowser(b), fShowCycles(kFALSE) { }
   TBrowserImp(TBrowser *b, const char *title, UInt_t width, UInt_t height);
   TBrowserImp(TBrowser *b, const char *title, Int_t x, Int_t y, UInt_t width, UInt_t height);
   virtual ~TBrowserImp() { }

   virtual void  Add(TObject *, const char *) { }
   virtual void  BrowseObj(TObject *) { }
   TBrowser     *Browser() const { return fBrowser; }
   virtual void  ExecuteDefaultAction(TObject *) { }
   virtual void  Iconify() { }
   virtual void  RecursiveRemove(TObject *) { }
   virtual void  Refresh(Bool_t = kFALSE) { }
   virtual void  Show() { }

   ClassDef(TBrowserImp,0)  //ABC describing browser implementation protocol
};

inline TBrowserImp::TBrowserImp(TBrowser *, const char *, UInt_t, UInt_t) { }
inline TBrowserImp::TBrowserImp(TBrowser *, const char *, Int_t, Int_t, UInt_t, UInt_t) { }

#endif
