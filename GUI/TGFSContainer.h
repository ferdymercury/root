//*CMZ :  2.00/00 08/03/98  12.46.23  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/01/98

#ifndef ROOT_TGFSContainer
#define ROOT_TGFSContainer

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
// TGFileIcon, TGFileEntry, TGFSContainer                               //
//                                                                      //
// Utility classes used by the file selection dialog (TGFSDialog).      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGIcon
#include "TGIcon.h"
#endif
#ifndef ROOT_TTimer
#include "TTimer.h"
#endif


//----- file sort mode
enum EFSSortMode {
   kSortByName,
   kSortByType,
   kSortBySize,
   kSortByDate
};


class TRegexp;
class TGPicture;
class TGFileContainer;



class TViewUpdateTimer : public TTimer {

private:
   TGFileContainer   *fContainer;

public:
   TViewUpdateTimer(TGFileContainer *t, Long_t ms) : TTimer(ms, kTRUE) { fContainer = t; }
   Bool_t Notify();
};



class TGFileIcon : public TGIcon {

protected:
   const TGPicture *fLpic;

   virtual void DoRedraw();

public:
   TGFileIcon(const TGWindow *p, const TGPicture *pic, const TGPicture *lpic,
              UInt_t options = kChildFrame, ULong_t back = fgWhitePixel) :
      TGIcon(p, pic, 0, 0, options, back) { fLpic = lpic; }
};



class TGFileItem : public TGLVEntry {

protected:
   const TGPicture  *fBlpic;        // big icon
   const TGPicture  *fSlpic;        // small icon
   const TGPicture  *fLcurrent;     // current icon
   Int_t             fType;         // file type
   Int_t             fUid, fGid;    // file uid and gid
   Bool_t            fIsLink;       // true if symbolic link
   ULong_t           fSize;         // file size

   virtual void DoRedraw();

public:
   TGFileItem(const TGWindow *p,
              const TGPicture *bpic, const TGPicture *blpic,
              const TGPicture *spic, const TGPicture *slpic,
              TGString *name, Int_t type, ULong_t size, Int_t uid, Int_t gid,
              EListViewMode viewMode, UInt_t options = kVerticalFrame,
              ULong_t back = fgWhitePixel);

   virtual void SetViewMode(EListViewMode viewMode);

   Bool_t  IsActive() const { return fActive; }
   Bool_t  IsSymLink() const { return fIsLink; }
   Int_t   GetType() const { return fType; }
   ULong_t GetSize() const { return fSize; }
};



class TGFileContainer : public TGLVContainer {

friend class TGFSFrameElement;

protected:
   EFSSortMode       fSortType;       // sorting mode of contents
   TRegexp          *fFilter;         // file filter
   TViewUpdateTimer *fRefresh;        // refresh timer
   ULong_t           fMtime;          // directory modification time
   const TGPicture  *fFolder_t;       // small folder icon
   const TGPicture  *fFolder_s;       // big folder icon
   const TGPicture  *fApp_t;          // small application icon
   const TGPicture  *fApp_s;          // big application icon
   const TGPicture  *fDoc_t;          // small document icon
   const TGPicture  *fDoc_s;          // big document icon
   const TGPicture  *fSlink_t;        // small symbolic link icon
   const TGPicture  *fSlink_s;        // big symbolic link icon

   void CreateFileList();

public:
   TGFileContainer(const TGWindow *p, UInt_t w, UInt_t h,
                   UInt_t options = kSunkenFrame,
                   ULong_t back = fgDefaultFrameBackground);
   virtual ~TGFileContainer();

   virtual Bool_t HandleTimer(TTimer *t);

   TGFileItem *AddFile(const char *name);
   void AddFrame(TGFrame *f, TGLayoutHints *l = 0);
   void Sort(EFSSortMode sortType);
   void SetFilter(const char *filter);
   void ChangeDirectory(const char *path);
   void DisplayDirectory();

   void GetFilePictures(const TGPicture **pic, const TGPicture **lpic,
                        Int_t file_type, Bool_t is_link, const char *ext,
                        Bool_t small);

   ClassDef(TGFileContainer,0)  // Container containing file system objects
};

#endif
