//*CMZ :  2.23/10 15/12/99  13.18.07  by  Fons Rademakers
//*CMZ :  2.00/00 21/01/98  15.36.49  by  Fons Rademakers
//*-- Author :    Fons Rademakers   19/01/98

#ifndef ROOT_TGFSComboBox
#define ROOT_TGFSComboBox

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
// TGFSComboBox, TGTreeLBEntry                                          //
//                                                                      //
// This is a combo box that is used in the File Selection dialog box.   //
// It will allow the file path selection.                               //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif



class TGPicture;
class TGSelectedPicture;


class TGTreeLBEntry : public TGLBEntry {

friend class TGClient;

protected:
   TGString           *fText;        // entry description
   TGString           *fPath;        // entry path
   const TGPicture    *fPic;         // entry picture
   TGSelectedPicture  *fSelPic;      // selected picture
   UInt_t              fTWidth;      // width of entry text
   UInt_t              fTHeight;     // height of entry text
   Bool_t              fActive;      // true if active
   GContext_t          fNormGC;      // entry drawing context
   FontStruct_t        fFontStruct;  // font

   static ULong_t        fgSelPixel;
   static FontStruct_t   fgDefaultFontStruct;
   static GContext_t     fgDefaultGC;

   virtual void DoRedraw();

public:
   TGTreeLBEntry(const TGWindow *p, TGString *text, const TGPicture *pic,
                 Int_t id, TGString *path = 0, GContext_t norm = fgDefaultGC,
                 FontStruct_t font = fgDefaultFontStruct,
                 UInt_t options = kHorizontalFrame, ULong_t back = fgWhitePixel);
   virtual ~TGTreeLBEntry();

   const TGString  *GetText() const { return fText; }
   const TGPicture *GetPicture() const { return fPic; }
   const TGString  *GetPath() const { return fPath; }

   virtual TGDimension GetDefaultSize() const;

   virtual void Activate(Bool_t a);
   virtual void Update(TGLBEntry *e);
};


class TGFSComboBox : public TGComboBox {

public:
   TGFSComboBox(const TGWindow *p, Int_t id,
                UInt_t options = kHorizontalFrame | kSunkenFrame |
                kDoubleBorder, ULong_t back = fgWhitePixel);

   virtual void Update(const char *path);
};

#endif
