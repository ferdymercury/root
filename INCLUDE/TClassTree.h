//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/01 19/08/99  10.42.50  by  Rene Brun
//*CMZ :  2.23/00 18/08/99  17.36.04  by  Rene Brun
//*CMZ :  2.20/05 15/12/98  12.27.52  by  Rene Brun
//*CMZ :  2.20/02 03/12/98  08.59.31  by  Rene Brun
//*-- Author :    Rene Brun   01/12/98

#ifndef ROOT_TClassTree
#define ROOT_TClassTree

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
// TClassTree                                                           //
//                                                                      //
// Manager class to draw classes inheritance tree and relations         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TClass
#include "TClass.h"
#endif

class TObjString;

class TClassTree : public TNamed {

protected:
   TString   fClasses;    //List of classes to be drawn
   Float_t   fYoffset;    //offset at top of picture in per cent of pad
   Float_t   fLabelDx;    //width along x of TPaveLabels in per cent of pad
   Int_t     fNclasses;   //current number of classes
   Int_t     fShowCod;    //if 1 show classes referenced by implementation
   Int_t     fShowMul;    //if 1 show multiple inheritance
   Int_t     fShowHas;    //if 1 show "has a" relationship
   Int_t     fShowRef;    //if 1 show classes relationship other than inheritance
   Int_t    *fCstatus;    //classes status
   Int_t    *fNdata;      //Number of data members per class
   Int_t    *fParents;    //parent number of classes (permanent)
   Int_t    *fCparent;    //parent number of classes (temporary)
   char    **fDerived;    //table to indicate if i derives from j
   TClass  **fCpointer;   //pointers to the TClass objects
   TString **fCnames;     //class names
   TString **fCtitles;    //class titles
   TString **fOptions;    //List of options per class
   TString   fSourceDir;  //Concatenated source directories
   TList   **fLinks;      //for each class, the list of referenced(ing) classes

   virtual  void FindClassPosition(const char *classname, Float_t &x, Float_t &y);
   virtual  void FindClassesUsedBy(Int_t iclass);
   virtual  void FindClassesUsing(Int_t iclass);
   virtual  void Init();
   TObjString   *Mark(const char *classname, TList *los, Int_t abit);
   virtual  void PaintClass(Int_t iclass, Float_t xleft, Float_t y);
   virtual  void ScanClasses(Int_t iclass);
   virtual  void ShowCod();
   virtual  void ShowHas();
   virtual  void ShowMul();
   virtual  void ShowRef();

public:
   TClassTree();
   TClassTree(const char *name, const char *classes="");
   virtual      ~TClassTree();
   virtual  void Draw(const char *classes ="");
   virtual Int_t FindClass(const char *classname);
   const char   *GetClasses() const {return fClasses.Data();}
   virtual const char  *GetSourceDir() const {return fSourceDir.Data();}
   virtual  void ls(Option_t *option="");
   virtual  void Paint(Option_t *option="");
   virtual  void SaveAs(const char *filename="");
   virtual  void SetClasses(const char *classes, Option_t *option="ID");
   virtual  void SetSourceDir(const char *dir="src") {fSourceDir = dir;}
   virtual  void SetYoffset(Float_t offset=0);
   virtual  void SetLabelDx(Float_t labeldx=0.15);
   virtual  void ShowClassesUsedBy(const char *classes);
   virtual  void ShowClassesUsing(const char *classes);
   virtual  void ShowLinks(Option_t *option="HMR");

   ClassDef(TClassTree,1)  //Manager class to draw classes inheritance tree and relations
};

#endif

