//*CMZ :  2.23/02 01/09/99  19.54.24  by  Fons Rademakers
//*CMZ :  2.00/00 18/01/98  21.07.38  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/01/98

#ifndef ROOT_TGMimeTypes
#define ROOT_TGMimeTypes

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
// TGMimeTypes and TGMime                                               //
//                                                                      //
// This class handles mime types, used by browsers to map file types    //
// to applications and icons. TGMime is internally used by TGMimeTypes. //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGClient
#include "TGClient.h"
#endif
#ifndef ROOT_TGPicture
#include "TGPicture.h"
#endif

class TOrdCollection;
class TRegexp;


class TGMime : public TObject {

friend class TGMimeTypes;

private:
   TString   fType;       // mime type
   TString   fPattern;    // filename pattern
   TString   fAction;     // associated action
   TString   fIcon;       // associated icon (32x32)
   TString   fSIcon;      // associated small icon (16x16)
   TRegexp  *fReg;        // pattern regular expression

public:
   ~TGMime();
};


class TGMimeTypes : public TObject {

protected:
   TGClient        *fClient;     // client to which mime types belong (display server)
   TString          fFilename;   // file name of mime type file
   Bool_t           fChanged;    // true if file has changed
   TOrdCollection  *fList;       // list of mime types

   TGMime    *Find(const char *filename);

public:
   TGMimeTypes(TGClient *client, const char *file);
   virtual ~TGMimeTypes();

   void   SaveMimes();
   Bool_t HasChanged() const { return fChanged; }
   void   AddType(const char *type, const char *pat, const char *icon, const char *sicon, const char *action);
   void   Print(Option_t *option="");
   Bool_t GetAction(const char *filename, char *action);
   Bool_t GetType(const char *filename, char *type);
   const TGPicture *GetIcon(const char *filename, Bool_t small_icon);

   ClassDef(TGMimeTypes,0)  // Pool of mime type objects
};

#endif
