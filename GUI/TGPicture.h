//*CMZ :  2.00/07 18/05/98  21.06.58  by  Fons Rademakers
//*CMZ :  2.00/00 17/01/98  00.57.04  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/01/98

#ifndef ROOT_TGPicture
#define ROOT_TGPicture

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
// TGPicture, TGSelectdPicture & TGPicturePool                          //
//                                                                      //
// The TGPicture class implements pictures and icons used in the        //
// different GUI elements and widgets. The TGPicturePool class          //
// implements a TGPicture cache. TGPictures are created, managed and    //
// destroyed by the TGPicturePool.                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TRefCnt
#include "TRefCnt.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif
#ifndef ROOT_TGClient
#include "TGClient.h"
#endif

class THashTable;


class TGPicture : public TObject, public TRefCnt {

friend class TGPicturePool;

protected:
   TString             fName;       // name of picture
   Bool_t              fScaled;     // kTRUE if picture is scaled
   Pixmap_t            fPic;        // picture pixmap
   Pixmap_t            fMask;       // picture mask pixmap
   PictureAttributes_t fAttributes; // picture attributes

   TGPicture(const char *name, Bool_t scaled = kFALSE) {
      fName   = name;
      fScaled = scaled;
      fPic    = kNone;
      fMask   = kNone;
      fAttributes.fPixels = 0;
      SetRefCount(1);
   }

   // override default of TObject
   void Draw(Option_t * = "") { MayNotUse("Draw(Option_t*)"); }

   static const char *HashName(const char *name, Int_t width, Int_t height);

public:
   virtual ~TGPicture();

   const char *GetName() const { return fName.Data(); }
   UInt_t      GetWidth() const { return fAttributes.fWidth; }
   UInt_t      GetHeight() const { return fAttributes.fHeight; }
   Pixmap_t    GetPicture() const { return fPic; }
   Pixmap_t    GetMask() const { return fMask; }
   Bool_t      IsScaled() const { return fScaled; }
   ULong_t     Hash() { return fName.Hash(); }

   virtual void Draw(Handle_t id, GContext_t gc, Int_t x, Int_t y) const;

   ClassDef(TGPicture,0)  // Pictures and icons used by the GUI classes
};


class TGSelectedPicture : public TGPicture {

friend class TGClient;

protected:
   const TGClient *fClient;    // client to which selected picture belongs

   static GContext_t fgSelectedGC;

public:
   TGSelectedPicture(const TGClient *client, const TGPicture *p);
   virtual ~TGSelectedPicture();

   ClassDef(TGSelectedPicture,0)  // Selected looking picture
};


class TGPicturePool : public TObject {

friend class TGClient;

protected:
   const TGClient    *fClient;    // client for which we keep icon pool
   TString            fPath;      // icon search path
   THashTable        *fPicList;   // hash table containing the icons

   static Colormap_t  fgDefaultColormap;

public:
   TGPicturePool(const TGClient *client, const char *path) {
      fClient  = client;
      fPath    = path;
      fPicList = 0;
   }
   virtual ~TGPicturePool();

   const char      *GetPath() const { return fPath.Data(); }
   const TGPicture *GetPicture(const char *name);
   const TGPicture *GetPicture(const char *name, UInt_t new_width, UInt_t new_height);
   void             FreePicture(const TGPicture *pic);

   ClassDef(TGPicturePool,0)  // Picture and icon cache
};

#endif
