//*CMZ :  2.22/10 28/07/99  10.25.01  by  Rene Brun
//*CMZ :  2.22/09 13/07/99  19.08.41  by  Rene Brun
//*CMZ :  2.22/08 07/07/99  18.53.14  by  Rene Brun
//*CMZ :  2.22/07 06/07/99  09.04.33  by  Rene Brun
//*CMZ :  2.22/06 23/06/99  08.36.20  by  Rene Brun
//*CMZ :  2.22/05 15/06/99  17.34.57  by  Rene Brun
//*CMZ :  2.22/04 03/06/99  19.13.54  by  Rene Brun
//*CMZ :  2.22/03 31/05/99  19.12.56  by  Rene Brun
//*CMZ :  2.22/02 28/05/99  18.55.03  by  Rene Brun
//*CMZ :  2.22/01 20/05/99  16.53.54  by  Rene Brun
//*CMZ :  2.22/00 09/04/99  18.10.52  by  Rene Brun
//*-- Author :    Rene Brun   09/04/99
//________________________________________________________________________
//
//::>          VERSION  2.22/10   28/07/99 10.25.01
//
//
// 28/07/1999  10.16.26  by  Rene Brun
//
- Solve a rounding problem in TGraph::PaintGrapHist. Sometimes, the last
  bin of an histogram was not completly drawn. Thanks Philippe Canal
  and Christian Lacunza for reporting.

- The TF1, TF2 and TF3 constructors set the member fNdim in case
  TFormula is not invoked. (Thanks Eddy Offermann for reporting).

- Improvements in TPostScript for fill areas with special patterns
   (fillstyle >3000). Many thanks to Olivier Couet for implementing
   this new logic.

- Minor changes in stress to cope with the new TPostScript changes.

- Modify MakeDepend (opengl -->ttf) Thanks to Damir Buskulic.
//
// 23/07/1999  14.42.49  by  Fons Rademakers
//
- TRFIOFile: correct handling of symbolic links to RFIO files.
  Also added missing dtor which correctly calls Close().

- GIFDecode: fixed some typo's.

- TClass: make sure in CreateClass() that the dictionary is always
  created on the heap and not in a mapped file.

- TMapFile: removed special dictionary allocation case (now in TClass).

- TF1: use Error() instead of Printf().

- New CINT 5.14.10 by Masa Goto:
  1140, virtual base class instantiation in ctor
  1141, typedef long long int __quad_t; bug fix
//
// 19/07/1999  11.48.23  by  Fons Rademakers
//
- Make-macros: added libstrm case for alphaegcs.
  Updated compiledata.h (by Philippe).

- Makelib: added the missing $EXTRA field for several platforms.

- TSystem: script compiler knows now about object extension (by Philippe).

- TMath: inline Atan2 implemented without multiple returns for old
  HP CC compiler.

- New CINT 5.14.9 by Masa Goto:
  Fixes some serious defect in resolving overloaded member functions with
  default arguments.
  -   , G__VARIABLEFPOS, linenum added
  1138, #pragma link, undefined symbol warning
  -   , disable 1083, class A{const char *str; const int N=5;};
  1139, G__type2string, invalid tagnum protection
  -   , 1137 fixed
  G__PTR2MEMFUNC, t195.cxx, pointer to member function support
//________________________________________________________________________
//
//::>          VERSION  2.22/09   13/07/99 19.08.41
//
//
// 13/07/1999  18.38.25  by  Fons Rademakers
//
- TContextMenu: new member functions to also handle TToggle actions.
  For example, toggling log scale in the pad will now result in
  an instant refresh of the screen.

- TRootContextMenu: calls the new TContextMenu methods.
//
// 13/07/1999  18.49.08  by  Rene Brun
//
- Minor format change in TTree::Show when printing TLeafC or TLeafB values.

- Modify logic in TH1::PaintInit and TH1::TableInit in case one draws
  an histogram/table in log scale and the origine is negative.

- in TPave constructor, set the option to "brNDC" in case it is given
  as "NDC" only.

- Update Makelib and Makefile.alphaegcs. Makefile.alphaegcs was the old
  makefile for gcc.
//
// 12/07/1999  22.03.04  by  Rene Brun
//
- New code in TTreeFormula::PrintValue. This function is called by TTree::Scan.
  In case of leaves of type TLeafB, print value of leave as an array
  of chars as it was already the case for leaves of type TLeafC.

- Minor change of logic in class TH1 when invoking TH1::PaintStat.
  The test on the kNoStats bit is now done in the calling function instead
  of TH1::PaintStat. This solves a problem when this function is called
  by the TGraph class. With this change, fit parameters appear again
  when a TGraph object is drawn and gStyle->SetOptFit is active.
  Thanks Nick van Eijndhoven for reporting the problem.

- Thanks to Philippe Canal for a nice suggestion. Add "canvas->Show()"
  to the interpreted command to show/edit attributes and also
  the Fitpanel and Drawpanel. With this change, when the attribute canvas
  is selected (eg, attline), the attribute canvas is automatically popped
  in case it was hidden by some window. The corresponding functions have been
  modified accordingly:
     TAttLine::SetLineAttributes()
     TAttFill::SetLineAttributes()
     TAttMarker::SetLineAttributes()
     TAttText::SetLineAttributes()
     TGraph::FitPanel()
     TH1::DrawPanel()
     TH1::FitPanel()

- Modify TPad::PaintModified. In case the canvas/pad fill style is 0,
  TPad::PaintModified should not be called when in Postscript mode.
  The result was OK but the Postscript file generated was bigger.
  Thanks Mathieu de Naurois for reporting.

- Some changes in constants in TDatabasePDG (Thanks Danielle Picard).

- in TColor::SetRGB, the dark & light colors are set for systems
  with more than 8 color planes. For 8 color planes display, the dark
  and light rgb are set to 0.3 and 0.8 respectively.
  This simple change helps a bit on old displays when running Root
  together with Netscape.
//
// 11/07/1999  12.27.54  by  Fons Rademakers
//
- New CINT 5.14.8 by Masa Goto:
  5.14.8 4 Jul 1999
  1132, cout << c*1./d << endl; bug fix
  PHIL2, inode checking in #pragma defined_in
  1133, -u [undeffile] improved with #pragma link off
  1134, int const a; bug fix
  1135, static var access in include file, static func is still not implemented
  1136, script compiler shl.c modification 2
  1137, function parameter match improvement for default constructor
//
// 11/07/1999  08.58.15  by  Rene Brun
//
- Protection added in TPad::DrawClassObject in case the dictionary
  for a base class is not available.
//
// 10/07/1999  21.42.51  by  Rene Brun
//
- In several functions where the canvas attribute panels or Fitpanel are called
  via the interpreter, declare the type of object being instantiated.
  eg,  attfill = new TAttFillCanvas(..
  is changed to:
      TAttFillCanvas *attfill = new TAttFillCanvas(..
  because with CINT's new feature " set automatic variable allocation mode '0' "
  errors are reported.
  Classes modified are TH1, TF1, TGraph, TAttText, TAttFill, TAttLine, TAttMarker.
  Thanks Christian Lacunza for reporting this problem.

- in TApplication::InitializeColors, rename color 12 to be "grey12"
  instead of "grey13". Thanks Christian Lacunza.

- A few changes in the Physics vector classes to implement the decisions
  taken at the CERN/FNAL video-conference between the CLHEP/ZOOM and ROOT
  development teams(new code from Peter Malzacher). Thanks to all involved:
  Mark Fishler, Peter Malzacher, Pasha Murat, Philippe Canal.

- Protection added to TBranch::GetBasket. When a Root file is corrupted
  (disk quota, AFS quota/buffer problem, overwrite), the new code
  detects this case and reports a message indicating the address
  of the possible overwritten area.

- Fix a bug in TPolyMarker3D::SetPolyMarker and TPolyLine3D::SetPolyLine.
  The maximum of the loop index must be fN instead of 3*fN
  Thanks Federico Carminati for reporting.
//
// 09/07/1999  10.47.43  by  Rene Brun
//
- The axis "UnZoom" interactive facility now works in case of a pad
  containing several histograms.

- in class TLorentzVector, change name of embedded class HepLorentzRotation_row
  to TLorentzRotationRow to be conform to the Root naming scheme.

- Change default compiler optimisation level from -g or -g1 to -O
  in the makefiles for hp-ux.

- in Makedepend file, replace all hardwired pathnames for ttf and opengl
  by $ROOTSYS/opengl and $ROOTSYS/ttf.
  Thanks Dmitri  Litvintsev for reporting.

- Protect TPad::PaintModified in case gPad=0 at the entry of the function.
  This case may happen in the following situation:
     TCancas xxx;
     xxx.Update();
  Thanks to John Zweizig for reporting the problem.
//
// 08/07/1999  18.48.48  by  Rene Brun
//
- Add a protection in TPad::RecursiveRemove. When the object being deleted
  is the object currently selected, the fSelected member in the Canvas
  must be reset. The situation may happen in very complex situations
  when clicking very rapidly and repetitively on a pad being dynamically
  updated (histograms filled in a loop + timer).
  Thanks Patrick Decowski for reporting.

- New feature in TPad::Print. A canvas saved into a root file can be
  printed on Postscript directly without drawing on the screen. eg,
     Root > TFile f("c1.root");
     Root > c1.Print("c1.ps");

- Remove an inconsistent line in TVector3.h (extern TVector3..)
  generating a clash when Root and CLHEP were used together.
  Thanks Pasha Murat for reporting.
//________________________________________________________________________
//
//::>          VERSION  2.22/08   07/07/99 18.53.13
//
//
// 07/07/1999  18.36.37  by  Rene Brun
//
- Modify prototype for TParticle::GetPolarisation.
      void  GetPolarisation(TVector3 &v);

- Fix a minor problem in TRootCanvas::HandleContainerCrossing
  affecting TPaveText::InsertText. With this fix, the TPaveText context menu
  item "InsertText" can be used again to insert a text at the mouse position
  in a TPaveText object.

- Modify TH1::PaintStat2 to not draw the stats box when the kNoStats bit
  is set. This bit is automatically set in TTree::Draw when drawing
  the default TH2F created to set the frame range.

- Modify tutorial hsum.C to invoke c1->RedrawAxis at the end of the macro.

- Modify tutorial zdemo to invoke TPad::DrawFrame instead of creating
  an empty TH2F (2 places).

- Protection in TTree destructor when the Tree is deleted from a TFile
  close or destructor.

- New functions in TMath to return the index of the maximum or minimum
  of an array.
    Int_t  LocMin(Int_t n, Short_t *a);
    Int_t  LocMin(Int_t n, Int_t *a);
    Int_t  LocMin(Int_t n, Float_t *a);
    Int_t  LocMin(Int_t n, Double_t *a);
    Int_t  LocMax(Int_t n, Short_t *a);
    Int_t  LocMax(Int_t n, Int_t *a);
    Int_t  LocMax(Int_t n, Float_t *a);
    Int_t  LocMax(Int_t n, Double_t *a);
//
// 07/07/1999  11.56.40  by  Fons Rademakers
//
- TBuffer: use TExMap when writing instead of TMap. Use hash based on
  object's memory address to determine uniqueness (TObject::Hash()). In
  previous versions the uniqueness was determined by the derived class'
  Hash() method, which, for example, for TNamed's was the hash of the
  name.

- Make-macro: fixed name of RFIO dictionary file.

- TGX11: declared XPoint as struct to CINT.
//________________________________________________________________________
//
//::>          VERSION  2.22/07   06/07/99 09.04.33
//
//
// 05/07/1999  17.44.39  by  Fons Rademakers
//
- All container iterators: have now copy ctor and assigment operators.

- TIter: has now copy ctor and assignment operator.
  Both the copy ctor and assignment operator use the assigment operator
  of the container iterators (see above).
//
// 05/07/1999  17.08.22  by  Rene Brun
//
- Modify TH1::PaintStat and TH1::PaintStat2 to draw the statistics box
  even in the case where nentries=0.
  Because TGraph objects are drawn via TH1::Paint, the temporary histogram
  created in TGraph::PaintGraph has its bit kNoStats set to not draw
  the stats box.

- Several corrections in class TAttParticle.

- Modify signature for TVirtualPad::DrawFrame and TPad::DrawFrame.
  The new function returns a TH1F* instead of being void.

- Modify tutorial gerrors2 to use TPad::DrawFrame instead of a TH2F.

- Add new dictionary G__Graf3 including TStyle TView, TF1,2,3
  This minimizes the size of the Graf1 dictionary.
  Create new script cint_g3 and G3_LinkDef.
  Modify cint_all, cint_g1, cint_g2, G1_LinkDef, G2_Linkdef and makemacros.

- New version of TPythia::ImportParticles (TClonesArray *particles).
  The new version fill the array particles with TParticle objects
  instead of TMCParticle. (Thanks Federico Carminati).

- Modify script makecompiledata (windowsNT case).

- Fix a problem in TGraphAsymErrors destructor. Due to a typo, the array
  fElow was deleted twice.

- A few changes in TPostScript::DefineFillPatterns necessary to handle
  fill patterns 3000 and above. (Thanks Jorg Rieling for reporting).

- Introduce new versions of classes TThread, TPosixCondition
  (from Marc ).
  //
// 02/07/1999  14.13.30  by  Rene Brun
//
- In TPad::Print, automatically update current canvas before generating
  a gif file.

- Merge with latest Philippe Canal versions of the following classes;
   TCint, TInterpreter, TSystem.

- Implement a few changes by Peter Malzacher in the physics vector classes.

- A few changes in TAttParticle.

//
// 02/07/1999  13.07.07  by  Fons Rademakers
//
- TObjArray: fix in BinarySearch() in case array contains empty slots.

- TParticle: fix GetPDG() (by Christian Lacunza).

- New CINT 5.14.7 by Masa Goto:
  5.14.7 26 Jun 1999
  1126, undefined type in function argument. Warning message
  1127, B b(new A(123,3.14)); bug fix
  1128, float(x); type conversion operator bug fix
  1129, cout << x; type conversion operator with operator overloading bug fix
        Still having problem with t182.cxx with bytecode. Need to fix this.
  1130, print(float f); print(x); implicit type conv
  -   , floating accuracy expression %.17g -> %.17e, integral literal bug fix
  1131, cout << this << endl; bug fix
//
// 01/07/1999  16.56.44  by  Rene Brun
//
- New versions of TDatabasePDG and TParticlePDG from Federico Carminati.

- a few changes in the comments in TCanvas (with #ifdefs for R__THREAD)
  to generate a better html documentation.

- Protection introduced in TGraph::ExecuteEvent in case multiple double clicks
  on the same point.

- Fix a problem in TH1::Rebin. Last bin was not correctly taken into account.
  (Thanks Chris Jillings for reporting).
//
// 30/06/1999  10.36.53  by  Fons Rademakers
//
- TROOT, TTree, TBasket: fix some uninitialized variables
  (found thanks to Purify).

- WidgetMessageTypes.h: new include containing enum with
  all "official" widget messages. Formerly part of TGWidget.h.

- TDatime: new ctor taking UInt_t. Default TKey ctor uses this
  ctor to avoid calling the TDatime::Set() in the default TDatime
  ctor. Default TKey ctor is only called when reading a TKey and
  in that case the TDatime is read from file and there is no
  need to first have it set (which may be potentially expensive
  since it call localtime()).

- TRFIOFile: call rfio_unlink() instead of gSystem->Unlink() to
  delete an RFIO file. Option "RECREATE" should work now.
//
// 30/06/1999  17.50.46  by  Rene Brun
//
- Modify TBranch constructor and TBranch::Reset to always preset to 0
  the internal tables fBasketEntry and fBasketSeek.

- Modify TTree::MakeClass to generate code that can be compiled
  by the normal compiler as well as interpreted by CINT.
  Add comments in the generated implementation file to explain how
  to use the genearted code.

- Add a new function TBasket::ReadBasketBuffers(char *buf).
  This function is called by TBranch::GetBasket in case the length
  of the corresponding buffer is less than the temporary space (1000 bytes)
  used to read the TBasket header. This avoids reading twice the buffer
  in case of very small buffers.

- Fix a problem in TGraph::PaintGraph. In case of a logy scale
  and option "bar", the graph was not correctly clipped along y.
  (Thanks Rainer Cee for reporting).
//
// 28/06/1999  00.32.19  by  Rene Brun
//
- Add a new set of colors (51->100) in class TApplication.
  These new colors fill a spectrum ranging from violet to red.

- In TStyle::SetPalette(int ncolors, int *colors=0)
  support a new option.
  When calling SetPalette(0), the default palette is set.
  When calling SetPalette(1), a new color palette is defined
  using the 50 colors 51->100.
  This palette 1 should be used to produce contour, lego, surface plots.
  Thanks to Thomas Ulrich and Jon Gans from the STAR collaboration.

- Modify TH1::PaintSurface and TH1::PaintLego to take into account
  the new color palette 1.

- In the TColor constructor, do not create the associate dark/light
  colors when the color number is > 50.

- Protect TH1::PaintScatterPlot in case of logz scale. (thanks Otto Schaile)

- Correct un unfortunate typo in the description of the TF1 doc.
  (thanks Mark Fishler).

- In TPad::GetFrame, add a protection in case a user has deleted an existing
  TFrame with the mouse (Thans Philippe Canal).

//________________________________________________________________________
//
//::>          VERSION  2.22/06   23/06/99 08.36.20
//
//
// 23/06/1999  08.34.13  by  Rene Brun
//
- Modifications in new class TParticle (thanks Federico Carminati).
  Corresponding changes in TGenerator.

- Note that this new class TParticle uses the new set of PDG classes
  in patch EG. These PDG classes are still under development.
//
// 23/06/1999  08.31.08  by  Peter Malzacher <malzache@fnal.gov>
//
- some improvements in the new CLHEP imported class TLorentzVector
//
// 22/06/1999  19.15.42  by  Fons Rademakers
//
- TUrl: fixed illegal changing of const char*.

- TSystem: exposed enum EAccessMode to CINT.

- TSystem, TROOT, TCint: applied mods of Philippe Canal for the
  script compiler.
//
// 22/06/1999  10.18.25  by  Philippe Canal (pcanal@fnal.gov)
//
- Script Compiler
  ===============
  This new ROOT facility facilitates the use of an external compiler to
  'interpret' a C++ root macro (script).  The external compiler will
  be called to create a shared library that is automatically loaded.

  The interface is simple and extend the use of the .X, .x and .L cint commands.
  For any of this command if '++' is appended to the name of the script file,
  the script compiler is invoked.  For example:

        .X myFunc.C++(arg1,arg2)

  will compile the file myFunc.C, load the resulting shared library and
  invoke the function myFunc(arg1,arg2).  (As as reminder if the ++ is
  dropped, the cint interpreter is used to parse and execute the script).

  The script compiler cannot currently digest any C++ code that does contain
  a 'main' function or the redefinition of any ROOT global variables (like
  TROOT).  For the script to be both understandable by cint (via .X myFunc.C )
  and by the script compiler (via .X myFunc.C++ ) follow the following
  rules (some of these made be relaxed at a latter date):

    - contain all needed include files surronded by #ifndef __CINT__
    - contain forward declaration for all classes used in function declaration
          (this need to be visible by cint)
    - If the script has a supporting header file, for example defining some
          extra classes, the header has to be in the same directory as the
          script in order for its content to be available directly from
          the command prompt.

  For example:

  // This is a ROOT Script myScript.C
  // that just draw and fit and histogram

  #ifndef __CINT__
  #include "TH1.h"
  #endif

  class TH1;

  void myScript( TH1* h, const char * formula ) {
    h->Draw();
    h->Fit(formula);
  }


  The script compiler is set to use the same compiler and compiler flags
  as ROOT.  This can be modified using the following new methods in the
  TSystem class: Get/SetIncludePath, Get/SetMakeSharedLib and
  Get/SetMakeExe.  Typically only the include should need to be modified.
  For example:

    gSystem->SetIncludePath("-I$ROOTSYS/include -I$HOME/mypackage/include");

  For more details refer to the documentation of TSystem::CompileMacro and
  TSystem::SetMakeSharedLib.
//
// 21/06/1999  12.44.18  by  Rene Brun
//
- New version of class TParticle from Federico Carminati.
  (see header file for new definition).

- Optimisation of TTree::MakeClass. The maximum dimension of arrays
  is now defined via const Int kMaxxxx variables intead of constants.

- Give more digits when printing in TF2::GetObjectInfo.
//
// 19/06/1999  10.49.06  by  Rene Brun
//
- Integrate the new Physics vectors classes adapted to Root
  by Peter Malzacher.
  In particular, the existing classes TParticle and TGenerator
  had to be slightly modified to cope with the new interface
  of TLorentzVector.

- Modify scripts cint_physics, Physics_linkDef, Makemacros and
  MakeDepend to add the new CLHEP classes.
//
// 19/06/1999  10.31.45  by  Peter Malzacher
//
- Import CLHEP Physics vectors classes into ROOT
  ==============================================
  The following classes have been imported from CLHEP.
   - TVector3
   - TLorentzVector
   - TRotation
   - TLorentzRotation

   Note that the classes TVector3 and TLorentVector have a few
   backward incompatibilities with the previous clases with the same name.

   Add a new test program in $ROOTSYS/test/TestVectors.cxx
   To run it, one can use the new feature of Root to invoke
   the compiler and linker dynamically.
   Root > .X TestVectors.cxx++  // with the compiler
   Root > .X TestVectors.cxx    // with the interpreter

//
// 18/06/1999  16.09.49  by  Rene Brun
//
- New functionality added to class TTree
  ======================================
  void TTree::BuildIndex(const char *majorname, const char *minorname)
    Build an index table using the leaves with name: major & minor name
    The index is built in the following way:
       A pass on all entries is made using TTree::Draw
       var1 = majorname
       var2 = minorname
       sel  = majorname +minorname*1e-9
       The standard result from TTree::Draw is stored in fV1, fV2 and fW
       Thew array fW is sorted into fIndex
     Once the index is computed, one can retrieve one entry via
       TTree:GetEntryWithIndex(majornumber, minornumber)
    Example:
     tree.BuildIndex("Run","Event"); //creates an index using leaves Run and Event
     tree.GetEntryWithIndex(1234,56789); //reads entry corresponding to
                                           Run=1234 and Event=56789

    Note that once the index is built, it can be saved with the TTree object
    with tree.Write(); //if the file has been open in "update" mode.
    The most convenient place to create the index is at the end of
    the filling process just before saving the Tree header.

    Note that this function can also be applied to a TChain.

   Int_t TTree::GetEntryWithIndex(Int_t major, Int_t minor)
    Return entry  corresponding to major and minor number
    For example:
        Int_t run   = 1234;
        Int_t event = 345;
        Int_t serial= tree.GetEntryNumberWithIndex(run,event);
       now the variable serial is in the range [0,nentries] and one can do
       tree.GetEntry(serial);

    Int_t TTree::GetEntryNumberWithIndex(Int_t major, Int_t minor)
     Return entry number corresponding to major and minor number
//
// 18/06/1999  09.15.35  by  Rene Brun
//
- Minor changes in TH1 class to replace objects TAxis xaxis,yaxis,xaxis
  by pointers.

- Modify default constructor for class TDatabasePDG to support I/O.
  With the old form, one could not read this object from a file.

- Fix problem in the TMath::Sort functions. The convention for the
  index values start at 0 instead of 1. The result was Ok when sorting
  in decreasing order, but not when sorting in increasing order.

- No more optional parameters in one TF1 constructor.
   TF1(const char *name, void *fcn, Float_t xmin, Float_t xmax, Int_t npar);

- Fix a problem in TBasket::Streamer. In case a TTree was created and
  saved in a file with 0 entries, it was not possible to continue
  to fill the Tree in a subsequent job when one of the branches contained
  variable length data per entry.
  Thanks Alexander Inyakin for reporting the problem).

- In CINT_Physics chnage the name G__PHYSICS to G__Physics.

- minor changes in test programs stress, hsimple and stress such that
  these programs can be executed:
    - in batch with the standard Makefile & compiler
    - via the interpreter (eg .x hsimple.cxx)
    - via the interpreter calling the compiler (eg .x hsimple.cxx++)

- Add new functionality in TH1::GetMean, TH1::GetRMS. In case these
  functions are called on a histogram never filled via TH1::Fill
  the statistics quantities are computed using the bin contents.
//________________________________________________________________________
//
//::>          VERSION  2.22/05   15/06/99 17.34.57
//
//
// 15/06/1999  17.29.26  by  Rene Brun
//
- Improvement in TGraph::PaintGraph when drawing a graph in log scale
  and the dynamic range in x or/and y is > 10000.

- Modify TF1::Streamer to invoke TF1::Save in case of interpreted/compiled
  functions (fType > 0). Take into account the possibility for this
  object to be written/read/written in multiple cycles.
//
// 15/06/1999  15.35.58  by  Fons Rademakers
//
- AA_CREDITS: new file containing list of people who contributed to ROOT.
  List is still being assembled (we should have started sooner), so if you
  are not yet on don't worry yet.

- GLOBALS: make sure the the CXXOPT '-c' is the last in the string. The
  macro makecompiledata depends on it.

- New macro makecompiledata: this macro generated the compiledata.h file
  which provides sensible default compiler options. compiledata.h is used
  by the new interface to the native compiler for automatic script compilation.
  Outside of CMZ compiledata.h is generated by the Makefile.

- TTabCom: provide a private copy ctor. Also initialized fpFiles and
  fpSysIncFiles in ctor.

- TCint: fix in TypeName() to correctly handle function pointer type names.
  This fixes the bug: Error in <TDataMember::TDataMember>: basic data
  type (*)(Double_t*, Double_t*) not found in list of basic types

- rootcint: prevent __MAKECINT__ to be defined as macro in the dictionaries.

- TGListBox: new method GetSelectedEntries(TList *entries). Thanks R.Rohlfs.
//
// 14/06/1999  17.24.17  by  Rene Brun
//
- Include changes from Philippe Canal in the following decks.
     TSystem, TApplication, TCint.
  The new code from Philippe together with the new version of CINT 5.14.6
  adds a very interesting new feature to ROOT/CINT.
  The purpose of this addition is to allow the user to use an external
  compiler to create a shared library from its C++ macro (scripts).
  Currently in order to execute a script, a user has to type at the root prompt
   .X myfunc.C(arg1,arg2)

  We propose to allow him to type:

   .X myfunc.C++(arg1,arg2)

  In which case an external compiler will be called to create a shared
  library.  This shared library will then be loaded and the function
  myfunc will be called with the two arguments. Of course the ++ notation
  will also be supported in similar way for .x and .L.
  The current implementation is still a prototype. It requires a special
  setup macro to be executed before using this service.
  For more details, see comments in TSystem::CompileMacro.

- Changes in TTree::MakeClass to compute the pointer to the top level branch
  in case of a TBranchObject and to set its dummy address.

- Changes in TBranchObject::SetAddress. In case add contains the invalid
  adress=-1, the special bit kWarn is set. This bit is used to inform
  TBranchObject::GetEntry that this branch address is not set and let
  GetEntry invoke the GetEntry function of its sub branches.
  This case happens in case of a class generated by TTree::MakeClass.

- Minor changes in headers of the following classes:
  TLeafB, TLeafC, TLeafD, TLeafF, TLeafI, TLeafS, TSpectrum
  Declare several data members non persistent (! as first character
  in comment field).

- Minor change in GlKernel by Valery fine (Win32 version only).
//
// 10/06/1999  18.46.21  by  Fons Rademakers
//
- TMessage: take care of byte length offset when reading, by moving
  fBuffer 4 bytes backward, in this way the recorded offsets match again.

- TGTab: take width of all tabs into account in DefaultSize() (by R.v.d.Eijk).

- TGListTreeItem: new member SetPictures(), to change the icons used for the
  tree item in open and closed state (by L. Aphecetche).
//
// 09/06/1999  14.49.50  by  Rene Brun
//
- New function TH1::GetStats(Stat_t *stats).
  This new function returns or/and compute the following quantities.
    stats[0] = sumw
    stats[1] = sumw2
    stats[2] = sumwx
    stats[3] = sumwx2
    stats[4] = sumwy   if 2-d or 3-d
    stats[5] = sumwy2
    stats[6] = sumwz   if 3-d
    stats[7] = sumwz2
    The array stats must be correctly dimensionned in the calling program.
  If no axis-subrange is specified (via TAxis::SetRange), the array stats
  is simply a copy of the statistics quantities computed at filling time.
  If a sub-range is specified, the function recomputes these quantities
  from the bin contents in the current axis range.

- New functionality added to TH1::GetMean and TH1::GetRMS.
  The new implementation invokes TH1::GetStats.

- TH1::PainStat and TH1::PaintStat2 modified to take into account
  the new functionality from TH1::GetMean and GetRMS.
  When a subset of an histogram is drawn, the statistics box
  reports the mean/rms for the current bin range only. These values are
  recomputed from the actual bin contents. If the full range is displayed,
  the mean and rms values are obtained from the precise values computed
  at filling time.
//
// 08/06/1999  17.56.19  by  Fons Rademakers
//
- rootcint: cast to TObject* when writing array of TH* (was already done
  for simple TH*'s).

- root-config: new utility in $ROOTSYS/bin/root-config. This little script
  returns the set of ROOT libs and ROOT compile flags. Instead of hard coding
  in Makefiles the long list of ROOT libs, just use root-config. For example
  see $ROOTSYS/test/Makefile, where it is used like:
     ROOTCFLAGS    = $(shell root-config --cflags)
     ROOTLIBS      = $(shell root-config --libs)
     ROOTGLIBS     = $(shell root-config --glibs)
  Using this utility you are protected in case the name, number, location
  of the ROOT libs changes. Idea of root-config came from gtk-config.

- TGTab: fixed RemoveTab(). Should work fine now without memory leaks.
  Added also new member GetNumberOfTabs(). See $ROOTSYS/test/guitest.cxx
  on how this is used.
//
// 07/06/1999  16.04.25  by  Rene Brun
//
 New feature in TF1.
 In case of precompiled TF1 functions, Root, by definition, cannot save the
 precompiled function on the file. However, it is possible to tabulate
 the function and save the table together with the function.
 This table was already automatically computed/filled during a TF1::Fit.
 TF1::Streamer has been modified to save the tabulated function as soon as
 one writes such a function on a file.

- Correction in TGraph::PaintGraph affecting the following case.
  A TGraph is created with positive y values. The user calls
  graph->SetMinimum(negativeValue). The minimum was set to 0
  instead of the specified user minimum.
  Thanks Henry Sutter for reporting.

- Add gStyle->DetFrameBorderMode(0) in the definition of "Plain" style
  in TROOT constructor. Non-setting the frame border to 0 produced
  a thin red line in the top/left lines of the frame on EPS files.
//
// 06/06/1999  11.38.41  by  Fons Rademakers
//
- TRint: now always load iostream. Please remove any
  "#include <iostream>" statements from your rootlogon.C.

- TGTab: added RemoveTab(Int_t idx).

- TFile: updated comments for RFIO in ::Open().

- TGFrame: added virtual dtor for TGFrame (reported by R. v.d. Eijk).

- TSystem: tentatively added "try {} catch(...){}" clause in Run().
  Will be enabled when compiling with -DR__EH, still off by default.
//
// 04/06/1999  13.12.53  by  Rene Brun
//
- Protect TFile::Init (can be called by TNetFile and TWebFile) in case
  tye file is connected and content is bad.

- Changes in TWebFile::Init. Set file descriptor fD to -2.
  With the previous value fD=-1, TFile::isOpen was false when called
  from TWebFile destructor. (thanks valery for reporting the problem).
//________________________________________________________________________
//
//::>          VERSION  2.22/04   03/06/99 19.13.54
//
//
// 03/06/1999  16.47.19  by  Rene Brun
//
- Several unused functions removed from TH1.

- Small change in TTUBE::Paint (Thanks Andreas Morsch). The radial lines
  are not drawn anymore when drawing in a pad.

- Modify TSpectrum to include a default constructor. The code generated
  without the default constructor for the dictionary was given problems on
  alphas with cxx6.

- minor changes in CINT functions Class and Type to remove a compilation
  warning on hp-ux and alpha.
//
// 02/06/1999  09.25.31  by  Rene Brun
//
- Protection in TPad::Paint in case fPrimitives = 0.
  This case can happen is a user by mistake has invoked the default pad
  constructor.
//
// 01/06/1999  12.21.34  by  Fons Rademakers
//
- Make-macros: fix for PostScript.

- TTabCom: new version from Christian Lacunza. Automatically substitutes
  . for -> and vice versa.

- TApplication: handle now: ".x test.C (101)" (notice space between .C and ()).

- TObject, TObjectTable: use advanced TMath::Hash() as hash function.

- TClass: added protection in ListAllPublicMethods() and ListAllPublicMembers().
  Noticed when doing: root [0] istream::[TAB]

- New CINT 5.14.3 and 5.14.4:
  5.14.3  9 May 1999
  1097, automatic variable turn on/off
  1098, special character allowed as project and dllid for makecint
  -   , include/bool.h  -DTRUE, -DFALSE  problem fixed
  1099, .hh .hxx. hpp extension allowed
  1100, template comment
  -   , STL header files vector.h -> _vector.h
  1101, non-static member func call->error, Not activated:dictionary problem
  -   , .X t141.cxx ("abc",123)  bug fix
  1102, .X error recovery bug fix
  1103, f(int x) { const int N=x*2; }
  -   , operator overloading floating accuracy %.12e -> %.17g
  1104, f(scope::cls& x=scope::cls()) fix for makecint, not yet for interpreter
  1105, .X f.C( sin(1.23) )  bug fix
  5.14.4 22 May 1999
  -   , 1093 improved for makecint/rootcint
  1106, G__tagdefining reset bug fix
  1107, G__tagdefining questionable restore fixed ???
  1108, La (reLoadAll) command
  1109, (enum A::)0 bug fix
  1110, default parameter evaluation
  -   , G__getmakeinfo() API added
//
// 01/06/1999  08.10.26  by  Rene Brun
//
- Fix a problem in TTreeFormula::EvalInstance.
  A wrong value was returned in case of
     tree->draw("var","2")
  Following the fix, the new version returns a weight=2 for each entry.
  (thanks Patrice Lebrun for reporting)

- Implement TChain::GetMinimum and TChain::GetMaximum.
  These two new functions redefine the corresponding TTree functions.
  They loop on all files in the TChain to return respectively the minimum
  and maximum for a given variable.

- Implement new function TAxis::UnZoom.
  This new function as well as the existing TAxis::SetRange are both
  visible in the TAxis pop-up menu.

- Tutorial basic.C rewritten to use ifstream.

- Minor changes from Valery integrated in TShape and TPoints3DABC.
//
//________________________________________________________________________
//
//::>          VERSION  2.22/03   31/05/99 19.12.56
//
//
// 31/05/1999  16.23.57  by  Rene Brun
//
- Changes in TTree::MakeClass. The new version generates a skeleton
  analysis function allowing a better performance when reading the tree.
  In addition, to the list of leaf (variable) names, the new version also
  generates for each branch a member like:
    TBranch *b_branchname;
  In the analysis loop, one can call
      b_branchname->GetEntry(entry) to read only the variables belonging
  to this branch. The branch pointers are initialized in the Init function.
  Note that if b_branchname->GetEntry(entry) is invoked more than once
  for the same entry, the subsequent calls return immediatly from GetEntry.

- Changes in TPad::PaintText and TPad::PaintTextNDC.
  Text is now always clipped at the pad boundaries. In the previous version,
  Text drawn outside the pad was visible with Postscript.

- Modify TH1x::DrawCopy functions to invoke Clone instead of Copy.
  The new version of DrawCopy is able to copy the fit part of a TH1.

- Modify TGX11::SetFillColor to set the member fFillColor.
  fFillColor is used by TGXW::GetFillColor.

- Modify TH1::PaintBoxes to restore TGXW::SetFillColor after each box.

- Add new function in class TGenerator:
   Int_t ImportParticles(TClonesArray *particles, Option_t *option).

- Correction in TPostScript::Text. The greek characters chi and eta
  were inverted.

- Move inline definition of TMath::Hash to implementation to avoid
  including string.h in TMath.h
//________________________________________________________________________
//
//::>          VERSION  2.22/02   28/05/99 18.55.03
//
//
// 28/05/1999  15.26.42  by  Fons Rademakers
//
- ==========>>IMPORTANT NEW FEATURE<<=============
  TBuffer: WriteObject()/WriteClass() now write the buffer offset
  into the output buffer instead of the map index. This allows the reading
  of classes and objects inside skipped objects (skipped because their
  shared libs are not available/loaded at reading time).
  This change is fully backward compatible.

- TExMap: new Map container which can use an external hash value to
  store the (key,value) pair. The pairs are two longs (so can also
  contain object addresses). Used in TBuffer.

- TMath: added method Hash(const void *, int). This hash function is
  provided by V.Perev and provides very good hashing.

- TMapFile: added protection in case more than one map file is open
  and one of them gets closed. Also added ifdef for GLIBC 2.1 (RH6).
  Corrected "fix" of 22/04/1999  22.13.54, StrDup() space was not
  allocated in mapped file.

- TDirectory: add protection against recursive remove in dtor (like
  is done in Close()).

- TArray, TMessage: changed call to TBuffer::MapObject(0) to
  TBuffer::MapInit().

- TString: added warning in case one tries to do I/O of a string longer
  than 255 characters.

- TObjectTable: added protection in Remove().

- TList: added protection in case GetName() returns 0 in FindObject().

- TGX11: handle dashed lines in DrawLine(), like in DrawPolyLine().

- TGX11TTF: for negative X-bearing to 0 (left upper corner of W was
  otherwise wrapped to right upper side in pixmap).

- hclient.C: fix in hclient.C tutorial (hpx was not declared).

- rootcint: some more code for handling STL containers.
//
// 28/05/1999  14.22.05  by  Rene Brun
//
- Add new class TSpectrum
  =========================
  This class contains advanced spectra processing functions.
    - 1-d & 2-d background estimation
    - 1-d & 2-d deconvolution
    - 1-d & 2-d peak search

   The original functions in C were written by:
      Miroslav Morhac
      Institute of Physics
      Slovak Academy of Sciences
      Dubravska cesta 9, 842 28 BRATISLAVA
      SLOVAKIA
   For more information, see the class documentation.

- Add new member fWeight in class TParticle and corresponding Get/Set.
(Thanks to Andreas Morsch for the suggestion).
//
// 27/05/1999  18.09.18  by  Rene Brun
//
- TMath::ATan2(y,x) was returning PI/2 instead of -PI/2 if (y <0, x==0)
 (Thanks Bjorn Nilsen for reporting).
//
// 26/05/1999  09.42.29  by  Rene Brun
//
- Add comments in the ClassDef statement of the following classes:
   - TTabCom
   - TVector2
   - TVector3
   - TParticlePDG
   - TLorentzVector
  Corresponding dictionaries regenerated.
//
// 25/05/1999  09.56.26  by  Rene Brun
//
- Correct documentation for the list of markers in TAttMarker.
  Rebuild markers.gif file. Update Web site.
   (Thanks Ulrich Jost for notifying).
//
// 21/05/1999  18.13.23  by  Rene Brun
//
- Optimize TPostScript::Text for a better evaluation of the text size
  in function of the page aspect ratio.

- Implement function TMarker3DBox::ExecuteEvent. TMarker3DBox objects
   can now be rotated in a pad.
  A protection added in TMarker3DBox::Paint to not call PaintGLPoints
  if OpenGL not selected.

- Changes statements in TabCom like assert(plist) to assert(plist != 0).
  This to prevent a compiler error with KCC under Alpha.

- Changes in TLine::executeEvent and TTextExecuteEvent to support picking
  in case of a TLine or TText object defined in NDC.

- Implement option "all" in TPolyLine3D::Print and TPolyMarker3D::Print
  TPolyLine3D::Streamer was not restoring correctly fLastPoint.

- Change logic in TPolyLine3D::SetPolyLine and TPolymarker3D::SetPolyMarker.

//________________________________________________________________________
//
//::>          VERSION  2.22/01   20/05/99 16.53.54
//
//
// 20/05/1999  16.36.57  by  Rene Brun
//
- README deck in root.cmz file updated to reflect the current
  installation procedure. A copy of the CMZ installation procedure
  has been added to the Web site.

- Fix a memory leak problem in TMatrix::Invert.
  Thanks Roy Lee rlee@physics.harvard.edu for reporting.

- decks CINT_EG and EG_LinkDef updated to include new class TParticle.

- IMPORT CHANGE for LINUX users. in $kumacs/globals and all makefiles
  the options  -fno-rtti -fno-exceptions have been removed.
  When we moved from gcc to egcs1.0 about 1 year ago, we found out that
  using the default compiler options was generating a huge overhead in
  space in the object files. In particular the exceptions could generate a few
  tens of kilobytes of additional code compared to no-exceptions. We saw many
  cases of small and medium size classes (in fact the majority) for which the
  object file was more than double.
  Because support for rtti and exceptions was supported by only a few
  compilers at the time, we set by default the options above.
  egcs1.1 is now generating a more compact code than its predecessor
  and is quickly becoming the standard compiler on Linux.
  We have compared a few weeks ago the overhead induced by each option
  above and found the following result on the Root classes
   -rtti overhead = 1.2 per cent (totally negligible)
   -exceptions    = 20 per cent
  The overhead generated by the exceptions option is still not negligible.
  However, we have decided to compile Root with the default egcs options.

- New member function TAxis::CenterTitle. This function is visible
  from the axis context menu. By default, the axis title is right adjusted
  on the axis. This function can be called (or via the mouse) to draw
  the title at the center of the axis.
   Patch   //ROOT/INCLUDE

- TBasket header file modified to increase class version id to 2.
  TBasket::Streamer modified to write/read only the part of the current
  buffer filled with useful data. The previous version wrote the full
  buffer. This change generates slightly smaller files in case of Trees
  with many branches and large buffer sizes.
  TBasket::WriteBuffer modified. In some very special cases, it was found
  that the size of the "compressed" buffer could be larger than the
  uncompressed buffer (this in case of byte data types).
  When this happens, the buffer is written in uncompressed mode.
  The message generated in the above case was:
     mmzip: output buffer too small for in-memory compression
  With this modification, users should not see this message anymore.

- Several changes in class TH1
  ============================
  - a new data member "Double_t *fIntegral"
    fIntegral is a pointer to an array containing the integral bin by bin
    of the histogram. This array is filled by the new function TH1::ComputeIntegral.

  - new member functions to return a random number distributed according
    the contents of a histogram.
     Axis_t   GetRandom();  // for 1-d
     void     GetRandom2(Axis_t &x, Axis_t &y); //for 2-d
     void     GetRandom3(Axis_t &x, Axis_t &y, Axis_t &z); //for 3-d
    For the 3 cases GetRandom computes the integral of the bins 9if not yet done).
    This integral (fIntegral) is normalized to 1 and a random number
    returned following this integral.

  - existing functions TH1::FillRandom(TF1*) and TH1::FillRandom(TH1*)
    have been modified. TH1::FillRandom(TH1*) has been rewritten to use
    the new TH1::GetRandom functions. The new function does not require
    that the source and destination histogram have the same number of bins or
    bin limits. Statistics are also correctly filled.

  - Changes in prototype for TH1::DrawCopy from
     old: void    DrawCopy(Option_t *option="");
     new: TH1    *DrawCopy(Option_t *option="");

  - New option in TH1::Eval
       If option "R" is specified, the function is evaluated only
       for the bins included in the function range.
       If option "A" is specified, the value of the function is added to the
       existing bin contents
       If option "S" is specified, the value of the function is used to
       generate an integer value, distributed according to the Poisson
       distribution, with f1 as the mean.
       Many thanks to Gerco Onderwater <onderwat@nialas.npl.uiuc.edu>
       for suggesting/implementing the new option "S".

   - New argument in TH1::FitSlicesX,Y,Z:
     void TH1::FitSlicesX(TF1 *f1, Int_t binmin, Int_t binmax, Int_t cut, Option_t *option)
     void TH1::FitSlicesY(TF1 *f1, Int_t binmin, Int_t binmax, Int_t cut, Option_t *option)
     void TH1::FitSlicesZ(TF1 *f1, Int_t binminx, Int_t binmaxx, Int_t binminy, Int_t binmaxy, Int_t cut, Option_t *option)
     The new argument option (default="QNR") can be used to change the fit options.
        "Q" means Quiet mode
        "N" means do not show the result of the fit
        "R" means fit the function in the specified function range

   - TH1::PaintLego and TH1::PaintSurface modified. The last color level
     was not correctly filled.

   - new option "I" supported in TH1::PaintStat. When this option is set,
     the "stats" box shows the integral of bins.
     This option can be activated by TStyle::SetOptStat.

   - TH1::PaintStat uses the new options in TStyle::SetStatFont
     and TStyle::SetStatStyle. The stats box can be made transparent
     with gStyle->SetStatStyle(0).

   - TH1::PaintTitle uses the new options in TStyle::SetTitleFont.


- Changes in class TLine
  new function:
     TLine *DrawLineNDC(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t y2);
    This new function can be used to draw a line in Normalized Device Coordinates.
  the prototype of the existing function DrawLine has been changed to:
    TLine *DrawLine(Coord_t x1, Coord_t y1,Coord_t x2, Coord_t y2);

- Several changes in class TStyle
  ===============================
  3 new data members:
     Style_t       fStatFont;          //font style of Stats PaveLabel
     Style_t       fStatStyle;         //fill area style of Stats PaveLabel
     Style_t       fTitleFont;         //font style of Title PaveLabel
  with corresponding new Getters and setters:
     Style_t          GetStatFont()  {return fStatFont;}
     Style_t          GetStatStyle()  {return fStatStyle;}
     Style_t          GetTitleFont()  {return fTitleFont;} //return histogram title font
     void             SetStatStyle(Style_t style=1001) {fStatStyle=style;}
     void             SetStatFont(Style_t font=62) {fStatFont=font;}
     void             SetTitleFont(Style_t font=62)      {fTitleFont=font;}

- Changes in class TText
  new function:
     TText   *DrawTextNDC(Coord_t x, Coord_t y, const Text_t *text);
    This new function can be used to draw a text in Normalized Device Coordinates.
  the prototype of the existing function DrawText has been changed to:
     TText   *DrawText(Coord_t x, Coord_t y, const Text_t *text);

- Several changes in class TTree
  ==============================
  The old data members:
     Int_t         fMaxEventLoop;    //Maximum number of events to process
     Int_t         fReadEvent;       //Number of the event being processed
  have been renamed:
     Int_t         fMaxEntryLoop;    //Maximum number of entries to process
     Int_t         fReadEntry;       //Number of the entry being processed

  The previous functions or function arguments:
     virtual void      EstimateLimits(Int_t estimate, Int_t nevents=1000000000, Int_t firstevent=0);
     virtual void      EventLoop(Int_t &action, TObject *obj, Int_t nevents=1000000000, Int_t firstevent=0, Option_t *option="");
     virtual Int_t     GetEventNumber(Int_t event);
     virtual Int_t     GetMaxEventLoop() {return fMaxEventLoop;}
     virtual void      GetNextPacket(TSlave *sl, Int_t &nevents, Stat_t &firstevent, Stat_t &processed);
     virtual Int_t     GetReadEvent() {return fReadEvent;}
     virtual Int_t     LoadTree(Int_t event);
     virtual void      Loop(Option_t *option="",Int_t nevents=1000000000, Int_t firstevent=0); // *MENU*
     virtual void      SetEstimate(Int_t nevents=10000);
     virtual void      SetMaxEventLoop(Int_t maxev=1000000000) {fMaxEventLoop = maxev;} // *MENU*
     virtual void      Show(Int_t event=-1);
  have been renamed:
     virtual void      EstimateLimits(Int_t estimate, Int_t nentries=1000000000, Int_t firstentry=0);
     virtual void      EntryLoop(Int_t &action, TObject *obj, Int_t nentries=1000000000, Int_t firstentry=0, Option_t *option="");
     virtual Int_t     GetEntryNumber(Int_t entry);
     virtual Int_t     GetMaxEntryLoop() {return fMaxEntryLoop;}
     virtual void      GetNextPacket(TSlave *sl, Int_t &nentries, Stat_t &firstentry, Stat_t &processed);
     virtual Int_t     GetReadEntry() {return fReadEntry;}
     virtual Int_t     LoadTree(Int_t entry);
     virtual void      Loop(Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0); // *MENU*
     virtual void      SetEstimate(Int_t nentries=10000);
     virtual void      SetMaxEntryLoop(Int_t maxev=1000000000) {fMaxEntryLoop = maxev;} // *MENU*
     virtual void      Show(Int_t entry=-1);

  The old TTree::GetEvent has been kept for compatibility. Its new definition is:
     Int_t     GetEvent(Int_t entry=0, Int_t getall=0) {return GetEntry(entry,getall);}
  We STRONGLY recommend our users to edit their code to replace
     TTree::GetEvent by TTree::GetEntry.


- Several changes in class TMath:
  ==============================
  TMath::LnGamma moved from private to public.
  bug fix in TMath::Nint.
  TMath::Gaus returns the value of a gaussian normalized to 1.


- Bug fixed in TEllipse::Paint (thanks Bryce Moffat).

- class TGaxis modified to support the new option CenterTitle.


- modification in TPad in WIN32 specific code when creating
  a new text or Pavelabel with the graphics editor.
  The old version was creating a temporary variable "TPad *p" that could clash
  with an existing user variable with the same name.
  (thanks Nick van Eijndhoven)

- Protection in TTreeViewer::ExecuteDraw in case of long selection
  expressions. Thanks Walter F.J. Mueller" <mueller@axp602.gsi.de>

- A few fixes in TPolyMarker3D (X3D case )

- Inconsistency in TSPHE::Streamer fixed (thanks Rutger van der Eijk)
  A TSPHE stored in a ROOT file isn't correctly retrieved from the file.
  This results in not drawing the TSPHE.
  Caused by:
  The reason for not drawing the TSPHE is that fNz isn't set by the streamer
  function (which causes TSPHE::Paint(...) to return before 'drawing' anything).

- Protection added in TBranch::SetAddress. This functions resets the
  internal state variable fReadEntry. damir Buskulic reported
  an example where he was doing:
    branch->GetEvent(2)
    branch->setAddress(new address)
    branch->GetEvent(2); //same event as before
  In this case the new event was not restored.

- Protection added in TBranchClones constructor in case a TClonesArray
  references a class with an unknown data type.

- Philippe Canal adds new functionality in TLeaf::GetLeafCounter.
  A multi-dimensionnal array notation can be specified in TTree::Draw.

- A very nasty bug fixed in function X3D function DrawSegments.
  The old test:
   if(remainder)
      XDrawSegments(display, win, gc, &segs[index], remainder);
  has been replaced by:
   if(remainder > 0)
      XDrawSegments(display, win, gc, &segs[index], remainder);
  Drawing a TPolyMarker3D with only two points was generating a case
  with remainder = -1.
//
// 12/05/1999  16.23.14  by  Fons Rademakers
//
- TTabCom: .class layout was changed -> fixed parsing.

- GButton: handle correctly "crossing events" over buttons with a
  pressed mouse button. Reported by Glen Salo.

- TString: fix Chop() in case of empty string.
//
// 10/05/1999  17.29.14  by  Fons Rademakers
//
- rootcint: generate Streamer code for STL containers vector, list,
  deque, map, set, multimap and multiset. It is now possible to do
  automatic I/O for classes containing these containers, e.g.:

     class stl1 : public TObject {

     typedef vector<TObjString*> Vec;  //example of typedef (not required)

     private:
        string              fStr;
        vector<TString>     fSVec;
        Vec                 fSOVec;
        vector<Float_t>     fFVec;
        list<TNamed>        fNList;
        ...
     };

- rootcint: correct Streamer now for multi-dimensional arrays, e.g:
     class aap : public TObject {
     private:
        TNamed   fName[2][3];
        ...
     };

- New CINT 5.14.1 and 5.14.2:
  5.14.1  30 Apr 1999
  1078, -Q quiet option for cint not to print prompt.
  PHIL0, ROOT class comment off of Dictionary
  1079, G__display_proto() display also base class member function
  1080, char *s; s->Data() error detection
  1081, G__scrupto() crash prevention
  1082, void*& argument to compiled function, bug fix

  5.14.2  4 May 1999
  1083, const data member in class handled as static const
  1084, non-const static data member initialization in class def, warning
  1085, 'class' command displays class/struct/union/namespace
  -   , G__dasm() uninitialized instruction protection
  1086, G__EOFfgetc() does not exit, call G__genericerror instead.
  1087, class A { }  missing ';' error detection
  -   , G__calc_internal() for not rewinding dictionary
  1088, reference member dictionary generation allowed
  1089, automatic variable , warning -> error
  1090, -I,envvar option
  1091, ROOT macro static variable prohibited
  1092, (a+b.data()).data() bug fix
  1093, A *p= new A; bug fix
  1094, undo rewind implementation
 x1095, compiled class redeclaration, object deletion order
  1096, T b; T a=b; precompiled class bytecode bug fix
  -   , G__assign_error message
//
// 10/05/1999  13.13.41  by  Valery Fine(fine@mail.cern.ch)
//
- TString:  fix in ReplaceAll
//
// 30/04/1999  12.32.15  by  Fons Rademakers
//
- rootcint: handle correclty pathnames in dictionary file name, e.g.:
    rootcint -f /tmp/aapDict.cxx -c Aap.h
  works now correctly.

- TMath: fixed Nint(Float_t) and Nint(Double_t) for negative values.

- TApplication: now check if TT fonts can be found in Root.TTFontPath
  before trying to load the TTF libs. Before only the existence of
  $ROOTSYS/ttf/fonts was checked.

- New CINT 5.13.98:
  5.13.98 24 Apr 1999 ,  1073 disabled
  -   , G__pp_undef() #undef 'g' command bug fix
  -   , 1062, 1063 implemented but turned off by macro defined in G__ci.h
  1073, EXPERIMENTAL! class object instantiation in bytecode function
  1074, Api.cxx delete interpreted object
  1075, G__Lderived declared if only necessary
  -   , G__more_pause() COLUMN enhancement
  1076, function overloading and class inheritance scan order changed, err det
  1077, class to fundamental type conv in func arg, bug fix
//
// 29/04/1999  18.25.40  by  Fons Rademakers
//
- TMap: provide GetName() in the TAssoc helper class. This GetName()
  returns the name of the key. This fixes TMap::FindObject(const char*).
  Exported TAssoc to the interpreter.

- TTabCom: make enum EContext_t public. Some compilers don't like a private
  enum as return type (even if they are private them selves). Renamed
  resource TabCom.fignore -> TabCom.FileIgnore and added example in .rootrc.

- Getline: fix in putenv of the LINES and COLUMNS variables.

- Makefile.sgi64egcs: added flag -DIRIX64 to CXXFLAGS.
//
// 28/04/1999  13.08.51  by  Fons Rademakers
//
- TSystem: fix in DirName(). When path is /tmp it returns correctly /.

- TClass: fixed GetListOfAllPublicMethods(). Don't return any duplicates.

- TTabCom: use tmpnam() to get unique temp files and don't use anymore
  the templated error printing function.

- Make-macros: fixed typo: METAADS -> METADS.
//
// 27/04/1999  19.10.21  by  Fons Rademakers
//
- New class TTabCom: very useful new class made by Christian Lacunza
  <lacunza@cdfsg5.lbl.gov>. This class performs basic tab completion.
  You should be able to hit [TAB] to complete a partially typed:

     username
     environment variable
     preprocessor directive
     pragma
     filename (with a context-sensitive path)
     public member function or data member
     global variable, function, or class name

  Also, something like gWhatever->Func([TAB] will print the appropriate
  list of prototypes.

  This class is used via a hook function by the Getline package and it
  is activated by the interactive application class TRint.

  It is an large piece of code (+/- 2000 lines). Thanks Christian.

- Getline: several new features provided by Christian Lacunza.
     M-F/M-B : Move cursor forward/backward one word.
     M-D     : Delete the word under the cursor.
     ^SPC    : Set mark.
     ^W      : Kill from mark to point.
     ^X      : Exchange mark and point.

- TClass: two new methods to get all public methods and members of a
  class (including its base classes).
     TList        *GetListOfAllPublicMethods();
     TList        *GetListOfAllPublicDataMembers();

- TCanvas: small fix concerning popdown of tooltips (again). Now it really
  seems to be ok.

- pause: delete correctly temp files even when G__process_cmd is recursively.

//
// 26/04/1999  16.50.59  by  Rene Brun
//
- ==========>>>>WARNING<<=================
  Terminology change in TTree. We now call "entry" what was called "event"
  ========================================================================
  We have added the following functions
     TTree::GetEntry
     TChain::GetEntry
     TBranch::GetEntry
  These new functions behave like the old GetEvent functions.
  We have left the old GetEvent functions for backward compatibility.
  However, note that these old functions call the new functions GetEntry.
  We strongly encourage you to make the corresponding changes in your code.

  This change of terminology has implied massive editing in the source code.
  All terms "event" have been replaced by "entry"

- New class in patch EG: TParticle. This new class replaces the old class
  TPrimary (left for compatibility).
  The classes TGenerator, TVenus, TPythia changed to use the new class.
  TGenerator::GetPrimaries has been renamed TGenerator::ImportParticles.
//
// 26/04/1999  12.26.50  by  Fons Rademakers
//
- TMapFile: in method Add() the name argument now overrides the objects
  given name.

- Globals and Makefiles: for aCC disable warning 823 (warning about cpp
  concatenation can be ignored).

- rootcint and TBuffer: can now generate Streamer()'s containing a byte
  count. This complements the default byte count facility for pointers to
  objects. The byte count streamer are generated for those classes that
  have the + option specified in their #pragma line. For the time being
  this option is not the default. Example:

      #pragma link C++ class AliEvent+;

   The Streamer() in that case looks something like this:

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      ...
      ...
      R__b.CheckByteCount(R__s, R__c, Noot::IsA());
   } else {
      R__c = R__b.WriteVersion(Noot::IsA(), kTRUE);
      ...
      ...
      R__b.SetByteCount(R__c, kTRUE);
   }

  In the writing part we see that WriteVersion() returns the offset where
  in the output stream the byte count should be placed (just before the
  version number). SetByteCount() writes the byte count at the reserved
  location. In the read part ReadVersion() returns the offset of the
  current position in the input buffer (R__s) and the expected byte count
  (R__c). After reading all data members CheckByteCount() is called to
  check if the current input buffer position is where the start and byte
  count expect it to be. If not an error is printed and the input buffer
  is positioned according to the byte count. This allows the system to
  correctly read the next object in the stream.

  The byte count version of the Streamer() can read files generated by the
  standard (non byte count) Streamer(). Also, a standard Streamer() can
  read files produced with a byte count Streamer(). This allows total
  flexibility.

- CINT (Api, pause, newlink, var): several mods in CINT passed to Masa.
//
// 24/04/1999  23.15.57  by  Fons Rademakers
//
- TString: fix in EndsWith().

- rootcint: remove multiple reference to user's header file from dictionary.
  In this case headers that are not protected against multiple inclusion
  don't break dictionary compilation.

- ==========>>IMPORTANT NEW FEATURE<<=============
  TBuffer: WriteObject() now inserts a byte count in front of the buffer
  and ReadObject() checks at the end of reading the byte count. If the
  byte count is not correct the buffer is positioned at the location
  specified by the byte count so that a next object in the same buffer
  can still be correctly read. This new feature is very useful to detect
  if a Streamer() is out of sync compared to the data on the file. Also
  it will allow the system to skip data of an unkown class (class info
  has been lost or shared lib is not loaded), but still correctly read
  the other data. This feature works for all objects written via a pointer,
  see for example this write part of a streamer:

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fNoot1;             // byte count is checked
      fNoot2.Streamer(R__b);      // no byte count
   } else {
      R__b.WriteVersion(Aap::IsA());
      TObject::Streamer(R__b);
      R__b << fNoot1;             // bytecount written via WriteObject()
      fNoot2.Streamer(R__b);      // no byte count
   }

  The byte count facility adds an overhead of 4 bytes per object.
  Of course this feature does not break backwards compatibility, i.e. all files
  generated without byte count can still be read with this new version.

  **** IMPORTANT NOTICE ****
  ROOT FILES WRITTEN WITH BY THIS AND HIGHER (>= 2.22) VERSIONS OF OF THE
  SYSTEM CANNOT BE READ BY PREVIOUS (< 2.22) VERSIONS. PLEASE UPGRADE.
  *****************

- TClass: Load() prints error when class is not found or could not be loaded.
//
// 23/04/1999  17.12.58  by  Fons Rademakers
//
- TCint: fixed memory leak in UpdateListOfGlobalFunctions().

- proofd: correct calling sequence of send() and recv() for
  Solaris.

- Globals: added special cases for SunOS 5.6 and IRIX 6.2.
  To compile for SunOS 5.6 add SUNOS56 to SEL flag of cmzlogon.kumac.
  To compile for IRIX 6.2  add IRIX62  to SEL flag of cmzlogon.kumac.

- TString: three new member functions:
   Bool_t  BeginsWith(const char *pat,    ECaseCompare cmp = kExact) const;
   Bool_t  BeginsWith(const TString& pat, ECaseCompare cmp = kExact) const;
   Bool_t  EndsWith(const char *pat,      ECaseCompare cmp = kExact) const;

- TRint: only treat command line arguments ending in ".root" as ROOT
  files that will be connected at startup. Before I only checked if
  the argument contained ".root", which obviously could clash with
  other argument strings.

- New CINT 5.13.97. Masa has been working like mad!
  Mods for version 5.13.96 and 5.13.97:
  5.13.96 11 Apr 1999
  1045, map.h load/unload bug fix G__tagdefining reset in scrupto
  1046, struct.c map.h reloading error fixed
  1047, tmplt.c search for typedef for default template parameter
  1048, pause.c 'class vector<int,allocator<int> >' bug fix
  -   , G__overloadopr() buffer length
  -   , HP-UX aCC makecint.c newlink.c modification for include trick
  -   , include > tmp redirection bug fix
  1049, TString* a("abc") syntax checking
  1050, (string)??? error check
  1051, #include<stdio.h>
  1052, typedef new bug fix
  1053, G__shl_load() G__setup_tagtable order change
  1054, namespace compilation
  1055, Internal error: G__type2string() ??? removed

  5.13.97 18 Apr 1999
  -   , 1006 side effect fix
  Scott Snyder's contribution
  -   , KCC warning removed
  1056, A<int, int>  space in template argument bug fix
  1057, namespace foo{class X{};}struct bar{using namespace foo;class Y{X x;};};
  1058, initialization of G__using_namespace member
  1059, Looking up enum in namespace
  1060, using namespace directives in global scope
 ?1061, spaces in macro arguments (8)
 -1062, imporovements for 'variable' macros,  not implemented completely (9)
 -1063, More CRLF problems, not implemented yet , (10)
  1064, Parsing problem of A::B & X() {}
  1065, (c1+c2).disp() bug fix
  1066, G__clearfilebusy()
  1067, security_recover
  1068, return mem=local;
  1069, f(1)[2] bug fix
  1070, int a[10]; *a=3; bug fix
  1071, delete (float*)l; bug fix
//
// 23/04/1999  08.33.32  by  Rene Brun
//
- Protect TTree::Draw when no entries in the Tree or no entries
  in the generated histogram.

- Add Warnings in TTree::Branch and TBranchClones constructor in case
  of a data member that cannot be processed in split mode.

- Function TMath::LnGamma promoted from private to public.

- Modify $kumacs/globals to add the compiler option -DSGI_REL=62
  for SGI KAI compiler. Without this option, rootd cannot be compiled.

- Minor mods in TParticlePDG and TDatabasePDG (Pasha Murat).
//
// 22/04/1999  22.13.54  by  Fons Rademakers
//
- TMapFile: make sure that the TClass object that can be created by
  a call to TObject::ClassName() is allocated on the heap and not
  in shared memory.
//
// 21/04/1999  20.00.43  by  Fons Rademakers
//
- CINT: import stl and prec_stl directories in CMZ. These directories
  needed for STL support are now part of the distribution.

- Getline: change the LINES and COLUMNS shell environment variables
  after the term window has been resized.

- TCanvas: re-applied the fix made 10/03/1999 19.36.02 to properly
  pop-down tooltips when the mouse leaves the canvas.

- TRint: call TCint::RewindDictionary() to clean up partially executed macro
  environment in case user hits ctrl-c in middle of macro.

- TUnixSystem: call TCint::RewindDictionary() to clean up partially
  executed macro in case of a segv, bus error, illegal instruction or
  floating exception. Also cleanup command line input buffer in these cases
  so that hitting return will not cause the same buggy macro to re-execute.
  This should considerably reduce the number of times you will have to
  leave and re-start root after a macro error.
//
// 19/04/1999  18.38.14  by  Fons Rademakers
//
- THashTable: fix in Rehash() in case the gObjectTable is not used don't
  check validity of pointers.

- TDirectory: fkey and fList are now initialized with THashLists(100,4).
  Previously auto rehash level of 1 was used, but THashList sets this to 0
  if level < 2.
//
// 19/04/1999  09.23.32  by  Rene Brun
//
- Import changes by Valery in the G3D classes. These changes include:
   - a fix in TPARA (mismatch degress/radians)
   - an additional test when computing the rangeView parameter in all classes.

- Modification by Pasha Murat in TDataBasePDG. Variable cleaner must
  be declared static.
//
// 16/04/1999  17.51.45  by  Fons Rademakers
//
- TFile, TNetFile, TRFIOFile: changed the signature of Flush() (not const
  anymore. Also the protected SysXxxx() methods are not const anymore.

- TRFIOFile: fixed writting case (could only read before). Also optimized
  the number of rfio_lseek() calls.

- TKey: delete TFree object whose gap exactly matches a new key. Previousely
  this TFree was leaked.

- TObject: in Write(.., kOverwrite) mode delete the overwritten TKey.
  Previously this key was leaked.

- TDirectory, TFile: fixed potential TKey leak.

- rootcint: put a clearer message in case a custom Streamer() is assumed.

- Makefile.linuxegcs: use g77 instead of fort77.
//
//________________________________________________________________________
//
//::>          VERSION  2.22/00   09/04/99 18.10.52
//
//
// 09/04/1999  18.08.35  by  Rene Brun
//
- g2root modified to correctly convert shapes TRAP and PARA. In the previous
  version, angles were left in radians instead of being converted to degrees.
  (thanks fJean-Pierre Ernenwein for reporting)

- Thanks to Yasuhiro SHIRASAKI for reporting a small problem in h2root.
  In case of 2-d histograms, under/overflow bins were not converted
  from hbook to root.

- Thanks to Chris Jillings for reporting a problem when an interpreted
  function is referenced by multiple TF1. The bug was in a CINT function
  called by the Root class TMethodCall called by TF1.

- Several minor changes and additions in classes TLorenztVector, TVector2
  and TVector3.

- Change TGX11 to authorize up to 1000 colors (instead of 256).

- Optimisation in TROOT. The list of colors is now a TObjArray instead
  of a TList. This speedups considerably applications defining/managing
  their own color palette. TROOT::GetColor is much faster.

- Change in BASE1-LinkDef to export global gErrorIgnoreLevel. This variable
  is now visible from the interpreter and can be used to set the Error level.

- Thanks to Valery Fine for reporting a mismatch in the class TCONS.
  There was a parameter inversion in the constructor.

- Change all DrawCopy functions to return a pointer to the new object
  created by this function. The functions affected are:

    class TF1
         virtual TF1     *DrawCopy(Option_t *option="");
    class TF2
         virtual TF1     *DrawCopy(Option_t *option="");
    class TH1, TH1C,S,F,D
          virtual TH1    *DrawCopy(Option_t *option="");
          virtual TH1    *DrawCopy(Option_t *option="");
          virtual TH1    *DrawCopy(Option_t *option="");
          virtual TH1    *DrawCopy(Option_t *option="");
          virtual TH1    *DrawCopy(Option_t *option="");
    class TH2C,S,F,D
         virtual TH1    *DrawCopy(Option_t *option="");
         virtual TH1    *DrawCopy(Option_t *option="");
         virtual TH1    *DrawCopy(Option_t *option="");
         virtual TH1    *DrawCopy(Option_t *option="");
    class TPROFILE
          virtual TH1    *DrawCopy(Option_t *option="");
  Note that the return type is always the base class. You must cast
  to the real type.

- In classes TAttFill, TAttLine, TAttText, TAttMarker, TAttPad a semi-colon
  has been added as a terminator string when invoking the attribute canvas
  via the interpreter. This automatically removes a print generated by CINT
  when these commands were invoked. (Thanks Christian Lacunza).

- Members fSelected and fSelectedPad initialized in the TCanvas constructor.
  (thanks Pasha Murat for reporting).

- Remove print statement in TNode constructor printing a message every 1000
  invokations.

- Changes in TH1::FillN to take into account variable bin size histograms.

- In TClass::GetMenuItems, add a protection in case a pointer to a baseclass
  is null (Valery).

- in TTree::Draw, the fEstimate parameter is automatically set to the number
  of entries in the tree if this number is smaller than 100000.
  The previous default value was always 10000.

- in TTree::GetEvent, return when the event is >= fEntries.
  (thanks for reporting this subtle case).

- in TLeafI::Import add a protection in case one element in a TClonesArray
  has a null pointer. Also TLeafC, TLeafS, TLeafF and TLeafD have the same
  protection. Thanks Thomas Hadig for reporting.

- Thanks Damir Buskulic for providing the makefile for LinuxPPC.
//
// 29/03/1999  20.28.35  by  Fons Rademakers
//
- getline: fixed problem with history file being cleared after 100
  commands.

- Updated a number of Makefile's to correctly build the fortran based
  conversion tools h2root and g2root.

- Install: now also build rootd, proofd and proofserv.

- TMonitor: fix case of Select() with timeout. Remove timer from
  timer list after timeout (one shot only timer).

- TObject: in Delete() call gInterpreter->DeleteGlobal(this); to
  tell CINT that object cannot be used anymore.

- Rtypes.h and rootcint: mods by Stefan Kluth to handle templated
  classes. This is an important first step to full template and STL
  support. Thanks Stefan.
