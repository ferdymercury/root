//*CMZ :  2.21/03 22/01/99  16.25.57  by  Fons Rademakers
//*CMZ :  2.20/05 15/12/98  09.19.59  by  Rene Brun
//*CMZ :  2.20/00 11/11/98  16.29.54  by  Rene Brun
//*CMZ :  2.00/12 02/10/98  11.55.00  by  Fons Rademakers
//*CMZ :  2.00/11 28/08/98  10.56.05  by  Rene Brun
//*CMZ :  2.00/09 19/06/98  11.07.53  by  Rene Brun
//*CMZ :  2.00/06 12/05/98  17.09.49  by  Rene Brun
//*CMZ :  2.00/05 20/04/98  13.06.24  by  Fons Rademakers
//*CMZ :  2.00/04 07/04/98  11.58.24  by  Rene Brun
//*CMZ :  2.00/00 07/03/98  18.07.10  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  16.42.20  by  Rene Brun
//*-- Author :    Rene Brun   08/12/94

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

////////////////////////////////////////////////////////////////////////////////
//                R O O T top level object description
//
//    The TROOT object is the entry point to the ROOT system.
//    The single instance of TROOT is accessible via the global gROOT.
//    Using the gROOT pointer one has access to basically every object
//    created in a ROOT based program. The TROOT object is essentially a
//    container of several lists pointing to the main ROOT objects.
//
//    The following lists are accessible from gROOT object:
//       gROOT->GetListOfClasses
//       gROOT->GetListOfColors
//       gROOT->GetListOfTypes
//       gROOT->GetListOfGlobals
//       gROOT->GetListOfGlobalFunctions
//       gROOT->GetListOfFiles
//       gROOT->GetListOfMappedFiles
//       gROOT->GetListOfSockets
//       gROOT->GetListOfCanvases
//       gROOT->GetListOfStyles
//       gROOT->GetListOfFunctions
//       gROOT->GetListOfSpecials (for example graphical cuts)
//       gROOT->GetListOfGeometries
//       gROOT->GetListOfBrowsers
//
//   The TROOT class provides also many useful services:
//     - Get pointer to an object in any of the lists above
//     - Time utilities TROOT::Time
//
//   The ROOT object must be created as a static object. An example
//   of a main program creating an interactive version is shown below:
//
//---------------------Example of a main program--------------------------------
//
//       #include "TROOT.h"
//       #include "TRint.h"
//
//       extern void  InitGui();
//
//       VoidFuncPtr_t initfuncs[] = { InitGui, 0 };
//
//       TROOT root("Rint", "The ROOT Interactive Interface", initfuncs);
//
//       int main(int argc, char **argv)
//       {
//          TRint *theApp = new TRint("ROOT example", &argc, argv);
//
//          // Init Intrinsics, build all windows, and enter event loop
//          theApp->Run();
//
//          return(0);
//       }
//-----------------------End of Main program--------------------------------
////////////////////////////////////////////////////////////////////////////////


#include <string.h>
#include <iostream.h>

#include "Gtypes.h"
#include "TROOT.h"
#include "TClass.h"
#include "TDataType.h"
#include "TFile.h"
#include "TMapFile.h"
#include "TDataMember.h"
#include "TRealData.h"
#include "TMethod.h"
#include "TMethodArg.h"
#include "TBaseClass.h"
#include "TFree.h"
#include "TKey.h"
#include "TDatime.h"
#include "TStyle.h"
#include "TF1.h"
#include "TLink.h"
#include "TObjectTable.h"
#include "TClassTable.h"
#include "TSystem.h"
#include "THashList.h"
#include "TGeometry.h"
#include "TEnv.h"
#include "TColor.h"
#include "TGlobal.h"
#include "TFunction.h"
#include "TVirtualPad.h"
#include "TNode.h"
#include "TBrowser.h"
#include "TSystemDirectory.h"
#include "TMinuit.h"
#include "TApplication.h"
#include "TCint.h"
#include "TGuiFactory.h"
#include "TRandom.h"
#include "TGLKernelABC.h"
#include "TPRoof.h"

#if defined(R__UNIX)
#include "TUnixSystem.h"
#elif defined(R__MAC)
#include "TMacSystem.h"
#elif defined(WIN32)
#include "TWinNTSystem.h"
#elif defined(R__VMS)
#include "TVmsSystem.h"
#endif


//*-*x18.6 macros/layout_root


TROOT      *gROOT;         // The ROOT of EVERYTHING
TRandom    *gRandom;       // Global pointer to random generator

// Global debug flag (set to != 0 to get debug output).
// Can be set either via interpreter (gDebug is exported to CINT),
// or via debugger. If set to > 4 X11 graphics will be in synchronous mode.
Int_t       gDebug;


Bool_t        TROOT::fgRootInit = kFALSE;
VoidFuncPtr_t TROOT::fgMakeDefCanvas = 0;



ClassImp(TROOT)

//______________________________________________________________________________
TROOT::TROOT() : TDirectory()
{
   // Default ctor.
}

//______________________________________________________________________________
TROOT::TROOT(const Text_t *name, const Text_t *title, VoidFuncPtr_t *initfunc)
           : TDirectory()
{
   // Initialize the ROOT system. The creation of the TROOT object initializes
   // the ROOT system. It must be the first ROOT related action that is
   // performed by a program. The TROOT object must be created on the stack
   // (can not be called via new since "operator new" is protected). The
   // TROOT object is either created as a global object (outside the main()
   // program), or it is one of the first objects created in main().
   // Make sure that the TROOT object stays in scope for as long as ROOT
   // related actions are performed. TROOT is a so called singleton so
   // only one instance of it can be created. The single TROOT object can
   // always be accessed via the global pointer gROOT.
   // The name and title arguments can be used to identify the running
   // application. The initfunc argument can contain an array of
   // function pointers (last element must be 0). These functions are
   // executed at the end of the constructor. This way one can easily
   // extend the ROOT system without adding permanent dependencies
   // (e.g. the graphics system is initialized via such a function).

#include "versqq.h"
#include "dateqq.h"
#include "timeqq.h"

   if (fgRootInit)
      Fatal("TROOT", "only one instance of TROOT allowed");

   gROOT      = this;
   gDirectory = 0;
   SetName(name);
   SetTitle(title);
   TDirectory::Build();

   // will be used by global "operator delete" so make sure it is set
   // before anything is deleted
   fMappedFiles = 0;

   // Initialize Operating System interface
   InitSystem();

   // Initialize interface to CINT C++ interpreter
   fVersionInt  = 0;  // check in TROOT dtor in case TCint fails
   fInterpreter = new TCint("C/C++", "CINT C/C++ Interpreter");

   TSystemDirectory *workdir = new TSystemDirectory("workdir",gSystem->WorkingDirectory());

   fVersion     = VERSQQ;
   fVersionInt  = Int_t(IVERSQ);
   fVersionDate = Int_t(IDATQQ);
   fVersionTime = Int_t(ITIMQQ);
   fApplication = 0;
   fClasses     = new THashList(this,300,2);
   fColors      = new TList(this);
   fTypes       = 0;
   fGlobals     = 0;
   fGlobalFunctions = 0;
   fFiles       = new TList(this);
   fMappedFiles = new TList(this);
   fSockets     = new TList(this);
   fCanvases    = new TList(this);
   fStyles      = new TList(this);
   fFunctions   = new TList(this);
   fProcesses   = new TList(this);
   fGeometries  = new TList(this);
   fBrowsers    = new TList(this);
   fSpecials    = new TList(this);
   fBrowsables  = new TList(this);
   fForceStyle    = kFALSE;
   fFromPopUp     = kFALSE;
   fReadingBasket = kFALSE;
   fMustClean     = kTRUE;
   fPrimitive     = 0;
   fSelectPad     = 0;
   fEditorMode    = 0;
   fDefCanvasName = "c1";
   fEditHistograms= kFALSE;
   fLineIsProcessing  = 1;   // This prevents WIN32 "Windows" thread to pick ROOT objects with mouse

   gDirectory = this;
   gMinuit    = 0;
   gPad       = 0;
   gRandom    = new TRandom;

   // Create some styles
   TStyle *plain      = new TStyle("Plain","Plain Style (no colors/fill areas)");
   plain->SetCanvasBorderMode(0);
   plain->SetPadBorderMode(0);
   plain->SetPadColor(0);
   plain->SetCanvasColor(0);
   plain->SetTitleColor(0);
   plain->SetStatColor(0);

   new TStyle("Default","Default Style");
   new TGeometry("Geometry","Default ROOT Geometry");

   // By default ROOT runs in batch (i.e. non graphics) mode. Calling
   // InitGui() will put the system in graphics mode.
   fBatch           = kTRUE;
   gBatchGuiFactory = new TGuiFactory;
   gGuiFactory      = gBatchGuiFactory;
   gGXBatch         = new TGXW("Batch", "ROOT Interface to batch graphics");
   gGXW             = gGXBatch;
   gGLKernel        = new TGLKernelABC();

   int i = 0;
   while (initfunc && initfunc[i]) {
      (initfunc[i])();
      i++;
   }

   // Set initial/default list of browsable objects
   fBrowsables->Add(fClasses, "Classes");
   fBrowsables->Add(GetListOfGlobals(), "Global Variables");
// fBrowsables->Add(GetListOfGlobalFunctions(), "Global Functions");
   fBrowsables->Add(fCanvases, "Canvases");
   fBrowsables->Add(fGeometries, "Geometries");
   fBrowsables->Add(fColors, "Colors");
   fBrowsables->Add(fStyles, "Styles");
   fBrowsables->Add(fFunctions, "Functions");
   fBrowsables->Add(fSockets, "Network Connections");
   fBrowsables->Add(fMappedFiles, "Memory Mapped Files");
   fBrowsables->Add(workdir, gSystem->WorkingDirectory());
   fBrowsables->Add(fFiles, "ROOT Files");

   fgRootInit = kTRUE;
}

//______________________________________________________________________________
TROOT::~TROOT()
{
   // Clean up and free resources used by ROOT (files, network sockets,
   // shared memory segments, etc.).

   if (gROOT == this) {

      fgRootInit = kFALSE;

      // Return when error occured in TCint, i.e. when setup file(s) are
      // out of date
      if (!fVersionInt) return;

      // ATTENTION!!! Order is important!

//      fSpecials->Delete();   SafeDelete(fSpecials);    // delete special objects : PostScript, Minuit, Html
#ifdef WIN32
//  Under Windows, one has to restore the color palettes created by individual canvases
      fCanvases->Delete();    SafeDelete(fCanvases);    // first close canvases
#endif
      fFiles->Delete();       SafeDelete(fFiles);       // and files
      fSockets->Delete();     SafeDelete(fSockets);     // and sockets
      fMappedFiles->Delete();                           // and mapped files
      TSeqCollection *tl = fMappedFiles; fMappedFiles = 0; delete tl;

//      fProcesses->Delete();  SafeDelete(fProcesses);   // then terminate processes
//      fFunctions->Delete();  SafeDelete(fFunctions);   // etc..
//      fListHead->Delete();   SafeDelete(fListHead);    // delete objects in current directory
//      fColors->Delete();     SafeDelete(fColors);
//      fStyles->Delete();     SafeDelete(fStyles);
//      fGeometries->Delete(); SafeDelete(fGeometries);
//      fBrowsers->Delete();   SafeDelete(fBrowsers);
//      fBrowsables->Delete(); SafeDelete(fBrowsables);
//      if (fTypes) fTypes->Delete();
//      SafeDelete(fTypes);
//      if (fGlobals) fGlobals->Delete();
//      SafeDelete(fGlobals);
//      if (fGlobalFunctions) fGlobalFunctions->Delete();
//      SafeDelete(fGlobalFunctions);
//      fClasses->Delete();    SafeDelete(fClasses);     // TClass'es must be deleted last

      // Problem deleting the interpreter. Want's to delete objects already
      // deleted in the dtor's above. Crash.
      //SafeDelete(fInterpreter);

      // Prints memory stats

      TStorage::PrintStatistics();

      gROOT = 0;
   }
}

//______________________________________________________________________________
void TROOT::Browse(TBrowser *b)
{
   TObject *obj;
   TIter next(fBrowsables);

   while ((obj = (TObject *) next()))
      b->Add( obj, (char *) next.GetOption() );
}

//______________________________________________________________________________
Bool_t TROOT::ClassSaved(TClass *cl)
{
// return class status bit kClassSaved for class cl
// This function is called by the SavePrimitive functions writing
// the C++ code for an object.

   const Int_t kClassSaved = BIT(12);

   if (cl == 0) return kFALSE;
   if (cl->TestBit(kClassSaved)) return kTRUE;
   cl->SetBit(kClassSaved);
   return kFALSE;
}

//______________________________________________________________________________
void TROOT::DisplayColorTable()
{
//*-*-*-*-*-*-*-*-*-*-*Display Color Table in the pad*-*-*-*-*-*-*-*-*-*-*-*
//*-*                  ==============================
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TColor::DisplayColorTable();
}

//______________________________________________________________________________
TObject *TROOT::FindObject(const Text_t *name, void *&where)
{
//*-*-*-*-*Returns address of a ROOT object if it exists*-*-*-*-*-*-*-*-*-*
//*-*      =============================================
//*-*
//*-*  This function looks in the following order in the ROOT lists:
//*-*     - List of files
//*-*     - List of memory mapped files
//*-*     - List of functions
//*-*     - List of geometries
//*-*     - List of canvases
//*-*     - List of styles
//*-*     - List of specials
//*-*     - List of materials in current geometry
//*-*     - List of shapes in current geometry
//*-*     - List of matrices in current geometry
//*-*     - List of Nodes in current geometry
//*-*     - Current Directory in memory
//*-*     - Current Directory on file
//*-*-
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TObject *temp = 0;
   where = 0;

   if (!temp) {
      temp  = fFiles->FindObject(name);
      where = fFiles;
   }
   if (!temp) {
      temp  = fMappedFiles->FindObject(name);
      where = fMappedFiles;
   }
   if (!temp) {
      temp  = fFunctions->FindObject(name);
      where = fFunctions;
   }
   if (!temp) {
      temp  = fGeometries->FindObject(name);
      where = fGeometries;
   }
   if (!temp) {
      temp  = fCanvases->FindObject(name);
      where = fCanvases;
   }
   if (!temp) {
      temp  = fStyles->FindObject(name);
      where = fStyles;
   }
   if (!temp) {
      temp  = fSpecials->FindObject(name);
      where = fSpecials;
   }
   if (gGeometry) {
      if (!temp) {
         temp  = gGeometry->GetListOfMaterials()->FindObject(name);
         where = gGeometry->GetListOfMaterials();
      }
      if (!temp) {
         temp  = gGeometry->GetListOfShapes()->FindObject(name);
         where = gGeometry->GetListOfShapes();
      }
      if (!temp) {
         temp  = gGeometry->GetListOfMatrices()->FindObject(name);
         where = gGeometry->GetListOfMatrices();
      }
      if (!temp) {
         temp  = gGeometry->GetNode(name);
         where = gGeometry;
      }
   }
   if (!temp && gDirectory) {
      temp  = gDirectory->Get(name);
      where = gDirectory;
   }
   if (!temp && gPad) {
      TVirtualPad *canvas = gPad->GetVirtCanvas();
      if (fCanvases->FindObject(canvas)) {  //this check in case call from TCanvas ctor
         temp  = canvas->GetPrimitive(name);
         where = canvas;
         if (!temp && canvas != gPad) {
            temp  = gPad->GetPrimitive(name);
            where = gPad;
         }
      }
   }
   if (!temp) return 0;
   if (temp->TestBit(kNotDeleted)) return temp;
   return 0;
}

//______________________________________________________________________________
const Text_t *TROOT::FindObjectClassName(const Text_t *name) const
{
//*-*-*-*-*Returns class name of a ROOT object including CINT globals*-*
//*-*      ==========================================================

//*-* Search first in the list of "standard" objects
   TObject *obj = gROOT->FindObject(name);
   if (obj) return obj->ClassName();

//*-* Is it a global variable?
   TGlobal *g = gROOT->GetGlobal(name);
   if (g) return g->GetTypeName();

   return 0;
}

//______________________________________________________________________________
TClass *TROOT::GetClass(const Text_t *name1, Bool_t load)
{
//*-*-*-*-*Return pointer to class with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      =================================
   char name[64];

   char *t = Strip(name1);
   if (strlen (t) > 64) strncpy(name, t, 63);
   else strcpy(name, t);
   delete [] t;

   TClass *cl = (TClass*)GetListOfClasses()->FindObject(name);

   if (cl) return cl;

   if (!load) return 0;

   VoidFuncPtr_t dict = TClassTable::GetDict(name);
   if (dict) {
      (dict)();
      return GetClass(name);
   }
   return 0;
}

//______________________________________________________________________________
TColor *TROOT::GetColor(Int_t color)
{
//*-*-*-*-*-*-*-*Return address of color with index color*-*-*-*-*-*-*-*-*
//*-*            ========================================
   TColor *col;
   TIter   next(gROOT->GetListOfColors());
   while ((col = (TColor *) next()))
      if (col->GetNumber() == color) return col;

   return 0;
}

//______________________________________________________________________________
VoidFuncPtr_t TROOT::GetMakeDefCanvas()
{
//*-*-*-*-*-*-*-*Return default canvas function*-*-*-*-*-*-*-*-*
//*-*            ==============================

   return fgMakeDefCanvas;
}


//______________________________________________________________________________
TDataType *TROOT::GetType(const Text_t *name)
{
//*-*-*-*-*Return pointer to type with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      =================================

   const char *tname = name + strspn(name," ");
   if (!strncmp(tname,"virtual",7)) {
      tname += 7; tname += strspn(tname," ");
   }
   if (!strncmp(tname,"const",5)) {
      tname += 5; tname += strspn(tname," ");
   }
   size_t nch = strlen(tname);
   while (tname[nch-1] == ' ') nch--;

   TDataType *idcur;
   TIter      next(GetListOfTypes());
   while ((idcur = (TDataType *) next())) {
     if (strlen(idcur->GetName()) != nch) continue;
     if (strstr(tname, idcur->GetName()) == tname) {
        return idcur;
     }
   }

   return 0;
}

//______________________________________________________________________________
TFile *TROOT::GetFile(const Text_t *name)
{
//*-*-*-*-*Return pointer to file with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      ================================

   return (TFile*)GetListOfFiles()->FindObject(name);
}

//______________________________________________________________________________
TStyle *TROOT::GetStyle(const Text_t *name)
{
//*-*-*-*-*Return pointer to style with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      =================================

   return (TStyle*)GetListOfStyles()->FindObject(name);
}

//______________________________________________________________________________
TF1 *TROOT::GetFunction(const Text_t *name)
{
//*-*-*-*-*Return pointer to function with name*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      ===================================

   TF1 *f1 = (TF1*)fFunctions->FindObject(name);
   if (f1) return f1;
   if (!fFunctions->FindObject("gaus")) {
      f1 = new TF1("gaus","gaus",-1,1); f1->SetParameters(1,0,1);
      f1 = new TF1("landau","landau",-1,1); f1->SetParameters(1,0,1);
      f1 = new TF1("expo","expo",-1,1); f1->SetParameters(1,1);
      for (Int_t i=0;i<10;i++) {
         f1 = new TF1(Form("pol%d",i),Form("pol%d",i),-1,1);
         f1->SetParameters(1,1,1,1,1,1,1,1,1);
      }
   }
   return (TF1*)fFunctions->FindObject(name);
}

//______________________________________________________________________________
TGlobal *TROOT::GetGlobal(const Text_t *name, Bool_t load)
{
   // Return pointer to global variable by name. If load is true force
   // reading of all currently defined globals from CINT (more expensive).

   return (TGlobal *)GetListOfGlobals(load)->FindObject(name);
}

//______________________________________________________________________________
TGlobal *TROOT::GetGlobal(TObject *addr, Bool_t load)
{
   // Return pointer to global variable with address addr. If load is true
   // force reading of all currently defined globals from CINT (more
   // expensive).

   TIter next(gROOT->GetListOfGlobals(load));

   TGlobal *g;
   while ((g = (TGlobal*) next())) {
      const char *t = g->GetFullTypeName();
      if (!strncmp(t, "class", 5) || !strncmp(t, "struct", 6)) {
         int ptr = 0;
         if (t[strlen(t)-1] == '*') ptr = 1;
         if (ptr) {
            if (*(long *)g->GetAddress() == (long)addr) return g;
         } else {
            if (g->GetAddress() == addr) return g;
         }
      }
   }
   return 0;
}

//______________________________________________________________________________
TFunction *TROOT::GetGlobalFunction(const Text_t *function, const Text_t *params,
                                    Bool_t load)
{
   // Return pointer to global function by name. If params != 0
   // it will also resolve overloading. If load is true force reading
   // of all currently defined global functions from CINT (more expensive).
   // The param string must be of the form: "3189,\"aap\",1.3".

   if (!params)
      return (TFunction *)GetListOfGlobalFunctions(load)->FindObject(function);
   else {
      if (!fInterpreter)
         Fatal("GetGlobalFunction", "fInterpreter not initialized");

      Long_t faddr = (Long_t)fInterpreter->GetInterfaceMethod(0, (char *)function,
                                                              (char *)params);
      if (!faddr) return 0;

      TFunction *f;
      TIter      next(GetListOfGlobalFunctions(load));

      while ((f = (TFunction *) next())) {
         if (faddr == (Long_t) f->InterfaceMethod());
            return f;
      }
      return 0;
   }
}

//______________________________________________________________________________
TFunction *TROOT::GetGlobalFunctionWithPrototype(const Text_t *function,
                                               const Text_t *proto, Bool_t load)
{
   // Return pointer to global function by name. If proto != 0
   // it will also resolve overloading. If load is true force reading
   // of all currently defined global functions from CINT (more expensive).
   // The proto string must be of the form: "int, char*, float".

   if (!proto)
      return (TFunction *)GetListOfGlobalFunctions(load)->FindObject(function);
   else {
      if (!fInterpreter)
         Fatal("GetGlobalFunctionWithPrototype", "fInterpreter not initialized");

      Long_t faddr = (Long_t)fInterpreter->GetInterfaceMethodWithPrototype(0,
                                         (char *)function, (char *)proto);
      if (!faddr) return 0;

      TFunction *f;
      TIter      next(GetListOfGlobalFunctions(load));

      while ((f = (TFunction *) next())) {
         if (faddr == (Long_t) f->InterfaceMethod());
            return f;
      }
      return 0;
   }
}

//______________________________________________________________________________
TGeometry *TROOT::GetGeometry(const Text_t *name)
{
//*-*-*-*-*Return pointer to Geometry with name*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*      ===================================

   return (TGeometry*)GetListOfGeometries()->FindObject(name);
}

//______________________________________________________________________________
TSeqCollection *TROOT::GetListOfGlobals(Bool_t load)
{
   // Return list containing the TGlobals currently defined.
   // Since globals are created and deleted during execution of the
   // program, we need to update the list of globals every time we
   // execute this method. However, when calling this function in
   // a (tight) loop where no interpreter symbols will be created
   // you can set load=kFALSE (default).

   if (!fGlobals)
      fGlobals = new THashList(this, 100, 3);

   if (!fInterpreter)
      Fatal("GetListOfGlobals", "fInterpreter not initialized");

   if (load)
      fInterpreter->UpdateListOfGlobals();

   return fGlobals;
}

//______________________________________________________________________________
TSeqCollection *TROOT::GetListOfGlobalFunctions(Bool_t load)
{
   // Return list containing the TFunctions currently defined.
   // Since functions are created and deleted during execution of the
   // program, we need to update the list of functions every time we
   // execute this method. However, when calling this function in
   // a (tight) loop where no interpreter symbols will be created
   // you can set load=kFALSE (default).

   if (!fGlobalFunctions)
      fGlobalFunctions = new THashList(this, 100, 3);

   if (!fInterpreter)
      Fatal("GetListOfGlobalFunctions", "fInterpreter not initialized");

   if (load)
      fInterpreter->UpdateListOfGlobalFunctions();

   return fGlobalFunctions;
}

//______________________________________________________________________________
TSeqCollection *TROOT::GetListOfTypes()
{
   // Return list containing all TDataTypes (typedefs) currently defined.

   if (!fTypes) {
      if (!fInterpreter)
         Fatal("GetListOfTypes", "fInterpreter not initialized");

      fInterpreter->CreateListOfTypes();

      // Add also basic types (like a identity typedef "typedef int int"
      fTypes->Add(new TDataType("char"));
      fTypes->Add(new TDataType("unsigned char"));
      fTypes->Add(new TDataType("short"));
      fTypes->Add(new TDataType("unsigned short"));
      fTypes->Add(new TDataType("int"));
      fTypes->Add(new TDataType("unsigned int"));
      fTypes->Add(new TDataType("long"));
      fTypes->Add(new TDataType("unsigned long"));
      fTypes->Add(new TDataType("float"));
      fTypes->Add(new TDataType("double"));
      fTypes->Add(new TDataType("void"));
   }
   return fTypes;
}

//______________________________________________________________________________
void TROOT::Idle(UInt_t idleTimeInSec, const Text_t *command)
{
   // Execute command when system has been idle for idleTimeInSec seconds.

   if (!fApplication)
      TApplication::CreateApplication();

   if (idleTimeInSec <= 0)
      fApplication->RemoveIdleTimer();
   else {
      if (command && strlen(command))
         fApplication->SetIdleTimer(idleTimeInSec, command);
      else
         Warning("Idle", "must specify non null idle command");
   }
}

//______________________________________________________________________________
void TROOT::InitSystem()
{
   if (gSystem == 0) {
#if defined(R__UNIX)
      gSystem = new TUnixSystem;
#elif defined(R__MAC)
      gSystem = new TMacSystem;
#elif defined(WIN32)
      gSystem = new TWinNTSystem;
#elif defined(R__VMS)
      gSystem = new TVmsSystem;
#else
      gSystem = new TSystem;
#endif

      if (gSystem->Init())
         Fatal("InitSystem", "can't init operating system layer");

      // read default files
      gEnv = new TEnv(".rootrc");

      gDebug = gEnv->GetValue("Root.Debug", 0);

      if (gEnv->GetValue("Root.MemStat", 0))
         TStorage::EnableStatistics();
      int msize = gEnv->GetValue("Root.MemStat.size", -1);
      int mcnt  = gEnv->GetValue("Root.MemStat.cnt", -1);
      if (msize != -1 || mcnt != -1)
         TStorage::EnableStatistics(msize, mcnt);

      TObject::SetObjectStat( gEnv->GetValue("Root.ObjectStat", 0) );
   }
}

//______________________________________________________________________________
void TROOT::ls(Option_t *option)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*To list all objects of the application*-*-*-*-*-*
//*-*                      ======================================
//*-*  Loop on all objects created in the ROOT linked lists
//*-*  objects may be files and windows or any other object directly
//*-*  attached to the ROOT linked list.
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

   TObject::SetDirLevel();
   GetList()->ForEach(TObject,ls)(option);
}

//______________________________________________________________________________
void TROOT::LoadMacro(const Text_t *filename)
{
   // Load a macro in the interpreter's memory. Equivalent to the command line
   // command ".L filename".

   if (fInterpreter) {
      char *fn  = Strip(filename);
      char *mac = gSystem->Which(GetMacroPath(), fn, kReadPermission);
      if (!mac)
         Error("LoadMacro", "macro %s not found in path %s", fn, GetMacroPath());
      else
         fInterpreter->LoadMacro(mac);
      delete [] fn;
      delete [] mac;
   }
}

//______________________________________________________________________________
Int_t TROOT::Macro(const Text_t *filename)
{
   // Execute a macro in the interpreter. Equivalent to the command line
   // command ".x filename".

   Int_t result = 0;

   if (fInterpreter) {
      char *fn  = Strip(filename);
      char *mac = gSystem->Which(GetMacroPath(), fn, kReadPermission);
      if (!mac)
         Error("Macro", "macro %s not found in path %s", fn, GetMacroPath());
      else
         result = fInterpreter->ExecuteMacro(mac);
      delete [] fn;
      delete [] mac;

      if (gPad) gPad->Update();
   }

   return result;
}

//______________________________________________________________________________
void TROOT::ProcessLine(const Text_t *line)
{
   // Process interpreter command via TApplication::ProcessLine().

   if (!fApplication)
      TApplication::CreateApplication();

   fApplication->ProcessLine(line);
}

//______________________________________________________________________________
Long_t TROOT::ProcessLineFast(const Text_t *line)
{
   // Process interpreter command directly via CINT interpreter.
   // Only executable statements are allowed (no variable declarations),
   // In all other cases use TROOT::ProcessLine().

   Long_t result = 0;

   if (fInterpreter)
      result = fInterpreter->Calc(line);

   return result;
}

//______________________________________________________________________________
void TROOT::Proof(const Text_t *cluster)
{
   // Start PROOF session on a specific cluster (default is "proof").
   // The cluster configuration is defined either in the file ."cluster".conf,
   // or $HOME/."cluster".conf or /usr/proof/etc/"cluster".conf.
   // The TProof object can be accessed via the gProof global. Creating a
   // new TProof object will delete the current one.

   new TProof(cluster);
}

//______________________________________________________________________________
void TROOT::Reset(Option_t *)
{
   // Delete all global interpreter objects created since the last call to Reset
   //
   // If option="a" is set reset to startup context (i.e. unload also
   // all loaded files, classes, structs, typedefs, etc.).
   //
   // This function is typically used at the beginning (or end) of a macro
   // to clean the environment.

   if (fInterpreter) {
     // if (!strncmp(option, "a", 1)) {
     //    fInterpreter->Reset();
     //    fInterpreter->SaveContext();
     // } else
         fInterpreter->ResetGlobals();

      if (fGlobals) fGlobals->Delete();
      if (fGlobalFunctions) fGlobalFunctions->Delete();

      SaveContext();
   }
}

//______________________________________________________________________________
void TROOT::SaveContext()
{
   // Save the current interpreter context.

   if (fInterpreter)
      fInterpreter->SaveGlobalsContext();
}

//______________________________________________________________________________
void TROOT::SetEditorMode(const Text_t *mode)
{
   // Set editor mode

   const Int_t kButton = 101;
   const Int_t kCutG   = 100;
   fEditorMode = 0;
   if (strlen(mode) == 0) return;
   if (!strcmp(mode,"Arc"))      {fEditorMode = kArc;        return;}
   if (!strcmp(mode,"Arrow"))    {fEditorMode = kArrow;      return;}
   if (!strcmp(mode,"Button"))   {fEditorMode = kButton;     return;}
   if (!strcmp(mode,"Diamond"))  {fEditorMode = kDiamond;    return;}
   if (!strcmp(mode,"Ellipse"))  {fEditorMode = kEllipse;    return;}
   if (!strcmp(mode,"Pad"))      {fEditorMode = kPad;        return;}
   if (!strcmp(mode,"Pave"))     {fEditorMode = kPave;       return;}
   if (!strcmp(mode,"PaveLabel")){fEditorMode = kPaveLabel;  return;}
   if (!strcmp(mode,"PaveText")) {fEditorMode = kPaveText;   return;}
   if (!strcmp(mode,"PavesText")){fEditorMode = kPavesText;  return;}
   if (!strcmp(mode,"PolyLine")) {fEditorMode = kPolyLine;   return;}
   if (!strcmp(mode,"Text"))     {fEditorMode = kText;       return;}
   if (!strcmp(mode,"CutG"))     {fEditorMode = kCutG;       return;}
}

//______________________________________________________________________________
void TROOT::SetMakeDefCanvas(VoidFuncPtr_t makecanvas)
{
   // Static function used to set the address of the default make canvas method.
   // This address is by default initialized to 0.
   // It is set as soon as the library containing the TCanvas class is loaded.

   fgMakeDefCanvas = makecanvas;
}

//______________________________________________________________________________
void TROOT::SetStyle(const Text_t *stylename)
{
   // Change current style to style with name stylename

   TStyle *style = GetStyle(stylename);
   if (style) style->cd();
   else       Error("SetStyle","Unknown style:%s",stylename);
}


//-------- Static Member Functions ---------------------------------------------

//______________________________________________________________________________
Bool_t  TROOT::Initialized()
{
   return fgRootInit;
}

//______________________________________________________________________________
const char *TROOT::GetMacroPath() {
   // Get macro search path. Static utility function.

   static const char *macropath = 0;

   if (macropath == 0) {
      macropath = gEnv->GetValue("Root.MacroPath", (char*)0);
      if (macropath == 0)
        #if !defined (__VMS ) && !defined(WIN32)
          macropath = StrDup(Form(".:%s/macros", gRootDir));
        #elif !defined(__VMS)
          macropath = StrDup(Form(".;%s/macros", gRootDir));
        #else
/*        if (strrchr(gRootDir,']'))
             *strrchr(gRootDir,']') = '.'; */
          macropath = StrDup(Form("%sTUTORIALS]",gRootDir));
        #endif
   }
   return macropath;
}

