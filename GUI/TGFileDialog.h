//*CMZ :  2.00/00 21/01/98  13.24.44  by  Fons Rademakers
//*-- Author :    Fons Rademakers   20/01/98

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

#ifndef ROOT_TGFileDialog
#define ROOT_TGFileDialog

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGFileDialog                                                         //
//                                                                      //
// This class creates a file selection dialog. It contains a combo box  //
// to select the desired directory. A listview with the different       //
// files in the current directory and a combo box with which you can    //
// select the a filter (on file extensions).                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif


enum EFileDialogMode {
   kFDOpen,
   kFDSave
};


class TGLabel;
class TGTextBuffer;
class TGTextEntry;
class TGComboBox;
class TGPictureButton;
class TGTextButton;
class TGListView;
class TGFileContainer;
class TGFSComboBox;


class TGFileInfo {
public:
   char        *fFilename;
   char        *fIniDir;
   char       **fFileTypes;
};


class TGFileDialog : public TGTransientFrame {

protected:
   TGLabel           *fLookin;   // "Save in" or "Look in" label
   TGLabel           *fLfname;
   TGLabel           *fLftypes;
   TGTextBuffer      *fTbfname;
   TGTextEntry       *fName;
   TGComboBox        *fTypes;
   TGFSComboBox      *fTreeLB;
   TGPictureButton   *fCdup;     // top toolbar button
   TGPictureButton   *fNewf;     // top toolbar button
   TGPictureButton   *fList;     // top toolbar button
   TGPictureButton   *fDetails;  // top toolbar button
   const TGPicture   *fPcdup;    // picture for fCdup
   const TGPicture   *fPnewf;    // picture for fNewf
   const TGPicture   *fPlist;    // picture for fList
   const TGPicture   *fPdetails; // picture for fDetails
   TGTextButton      *fOk;       // ok button
   TGTextButton      *fCancel;   // cancel button
   TGListView        *fFv;       // file list view
   TGFileContainer   *fFc;       // file list view container (containing the files)
   TGHorizontalFrame *fHtop;     // main frame directly in popup
   TGHorizontalFrame *fHf;       // frame for file name and types
   TGHorizontalFrame *fHfname;
   TGHorizontalFrame *fHftype;
   TGVerticalFrame   *fVf;
   TGVerticalFrame   *fVbf;
   TGLayoutHints     *fLmain;
   TGLayoutHints     *fLhl;
   TGLayoutHints     *fLb1;
   TGLayoutHints     *fLb2;
   TGLayoutHints     *fLvf;
   TGLayoutHints     *fLvbf;
   TGLayoutHints     *fLb;
   TGLayoutHints     *fLht;
   TGLayoutHints     *fLht1;
   TGFileInfo        *fFileInfo;

public:
   TGFileDialog(const TGWindow *p, const TGWindow *main,
                EFileDialogMode dlg_type, TGFileInfo *file_info);
   virtual ~TGFileDialog();

   virtual Bool_t ProcessMessage(Long_t msg, Long_t parm1, Long_t parm2);
   virtual void CloseWindow();

   ClassDef(TGFileDialog,0)  //File selection dialog
};

#endif
