//*CMZ :          02/09/99  15.54.23  by  Rene Brun
//*CMZ :  2.20/06 17/12/98  17.38.01  by  Rene Brun
//*CMZ :  2.20/05 15/12/98  19.19.30  by  Rene Brun
//*CMZ :  2.20/04 11/12/98  18.44.40  by  Rene Brun
//*CMZ :  2.20/03 07/12/98  13.20.42  by  Rene Brun
//*-- Author :    Rene Brun   27/11/98
//
// 02/09/1999  15.53.08  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.20/06   17/12/98 17.38.01
//
//            Release highlights
              ==================
This new release includes a long list of tiny improvements and a few
bug fixes. See the full release notes below for more details.
The following is a summary of the main features of this new version.

- TrueType Fonts package introduced on Unix (except AIX).
  The TTF package provides better quality scalable fonts.
  For the definitive guide on how to use the TT fonts
  with ROOT see the web page: http://root.cern.ch/root/TrueType.html.

- New class TClassTree.
  Draw inheritance tree for a list of classes
  The following options are supported
   - Direct inheritance (default)
   - Multiple inheritance
   - Composition
   - References

- New class TTreeViewer
  A graphical front-end to TTree::Draw and Scan.
  See extensive documentation in the class.

- Additional functionality in class TTimer.
   - Possibility to notify any TObject without deriving from TTimer.
   - Possibility to execute an interpreted command/macro at time-out.

- Several new functions in class TRandom (see class for more details
  and also some benchmarks).

- New functions for random number generation in TF1, TF2 and TF3.

- Several new functions in TMath.

- Zoom with the mouse on axis.

- New functionality in TDirectory (see ReadKeys and SaveSelf).

- Add a new test program called "stress" in test directory.
  This program can be compiled with the native compiler or interpreted.
  The program stress is a collection of test programs executed sequentially
  and testing most of the facets of the Root system.
  The execution of stress ranges from a few tens of seconds on fast systems
  to a few minutes. The execution time is used as a benchmark.
  We expect to add more test programs to the stress test suite.

- Add functionality to save GIF files from displays with more than 8 color planes.

- Added transparent pads.

- New makefiles.
//
// 17/12/1998  09.47.37  by  Rene Brun
//
- Add new functionality in TH1::Fit and TGraph::Fit
  When the option "B" (Bound) is specified, if parmin=parmax,
  then the parameter is fixed in TMinuit.

- New data member fTimerInterval in TTree and new function TTree::SetTimerInterval.
  The function is automatically called by TTreeViewer.

- Add TTreeViewer::SetTimerInterval (default is 300 msec). This function
  is visible from the contextmenu. The value used by TTreeViewer
  is also used in TTree::Draw.

- Modify bind_lib_alpha macro to add support for egcs1.1 under Alpha/Unix.
//
//________________________________________________________________________
//
//::>          VERSION  2.20/05   15/12/98 19.19.30
//
//
// 15/12/1998  10.57.41  by  Rene Brun
//
- Delete functions TROOT::GetCount, TROOT::GetCounter, TROOT::SetCount.
  New function TROOT::ClassSaved.
  Delete data member array fCounter.
  Instead of using the GetCount/SetCount function, the SavePrimitive
  functions of the Root classes use now TROOT::ClassSaved.
  This function uses one of the status bits of TClass.
  This new algorithm does not require an internal array to keep trace
  of the use of a class. It is faster and also does not require
  a constant associated to each class as it was the case in the previous
  algorithm.
  All Root classes referencing GetCount/SetCount edited accordingly.

- Add new macro "classcat" in tutorials.
  This macro produces the class inheritance tree for the Root class
  categories.

- Modify install_cint macro for WindowsNT.
  This macro loads the include sequences to get DllImport definition.

- Produce the inheritance diagrams for the Root class categories.
  New diagrams are referenced by http://root.cern.ch/root/Categories.html
  Include reference to the gif files in the following classes:
    TH1, TCollection, TPad, TBox, TTree, TGFrame, TGCompositeFrame, TShape.

- Add the "double-click" functionality in TTreeViewer.
  Clicking on a TPavevar in the viewer automatically histogram
  the corresponding variable using the current selection setup.
//
// 14/12/1998  14.56.21  by  Fons Rademakers
//
- TCanvas: handles double click event. The following new events have
  been defined: kButton1Double, kButton2Double, kButton3Double. For the
  time being only kButton1Double is propagted in TCanvas::HandleInput()
  (to the selected objects ExecuteEvent() method).

- rootcint: use R__EXTERN for two globals from CINT so we can link on
  WinNT with the cint.dll.
//
// 13/12/1998  11.24.25  by  Rene Brun
//
- Add class hierarchy tree in several classes (TH1, TCollection, TTree,
  TDictionary, TBox, TShape, TGCompositeFrame, TPad).

- Add new tutorial hsumTimer (a variant of the existing hsum).
  This new tutorial illustrates the use of Timers with notification
  via an interpreted function.

- Add new functionality to class TTimer. The 3 following cases are supported:
     -sub-class TTimer and implement Notify()
     -Give a pointer of an object to be notified.
     -Specify a command string to be executed by the interpreter
  Added the following members (fObject and fCommand) + new functions
  TTimer::SetObject, TTimer::SetCommand and the corresponding Get functions.

- Activate option "AH" in TH1::Draw. When "AH" is specified, the histogram
  is drawn, but the axis are not drawn.

- New function TFormula::Update with redefinition in TF1::Update.
  TFormula::Update is dummy. Real code in TF1::Update.
  The Update function is called by TFormula::SetParameter, TF1::SetNpx,
  TF1::SetRange, TF2::SetNpy, TF2::SetRange, TF3::SetNpz, TF3::SetRange.
  The function takes care of deleting the current histogram associated
  to the function or the associated Integral.

- New functionality in TTreeViewer. One can click on the "Hist" button
  while the event loop is executing to display the current histogram.

- in class TWbox, remove dependencies on class TButton. To test if
  Framing is on in case the TWbox is a TButton, use TestBit(kIsFraming)
  instead.

- Modify TButton::SetFraming to SetBit(kIsFraming). This bit is tested
  by TWbox::ExecuteEvent to decide if a frame must be drawn around the
  selected button or not. TButton::SetFraming moved from inline function
  to implementation.

- Modify TPad header file. The following functions have been moved from
  inline definitions to the implementation:
    TPad::PadtoX, TPad::PadtoY, TPad::XtoPad, TPad::YtoPad
  These functions convert from pad user coordinates to pad coordinates
  taking into account log scales.

- Modify rootcint (WindowsNT only) to replace
    extern  int   G__globalcomp; by
    R__EXTERN int   G__globalcomp;

- Modify install_rootcint for WindowsNT (thanks valery Fine)
  to link with libCint.dll instead of all CINT object files.

- Add code in "stress" test program to provide OS/machine type
  when executing under WindowsNT/95 (thanks Valery Fine).
//
//________________________________________________________________________
//
//::>          VERSION  2.20/04   11/12/98 18.44.40
//
//
// 11/12/1998  18.35.37  by  Fons Rademakers
//
- TRootCanvas: get correctly parent that is managed by the WM. Depending
  on the WM that can be several levels of windows.

- TApplication: don't try to load TT fonts when in batch mode.
//
// 11/12/1998  15.27.20  by  Rene Brun
//
- New class TTreeViewer. This new class is a first attempt to a
   graphical interface to TTrees. The TTreeViewer canvas (see
   example in class) shows the list of TTree variables represented
   by TPaveVar objects (see below). A set of buttons allows to
   execute the following operations:
    "Draw"     display the active variable(s) below the X,Y,Z buttons
    "Scan"     same with TTree::Scan output style
    "Break"    interrupt current event loop
    "List Out" to create a new TEventList using the current selection (see below)
    "List In"  to activate a TEventList as an input selection
    "Hist"     to redefine the default histogram (default htemp)
    "Cpad"     to specify the output pad (default c1)
    "Gopt"     to specify a graphics option
    "X"        to select the X variable
    "Y"        to select the Y variable
    "Z"        to select the Z variable
    "W"        to select the Weight/Selection expression

    A vertical slider can be used to select the events range (min/max)
    When the "Draw" button is clicked, The TTreeViewer object assembles
    the information from the above widgets and call TTree::Draw with
    the corresponding arguments.
    While the event loop is executing, a red box inside the slider bar
    indicates the progress in the loop. The event loop can be interrupted
    by clicking on the "Break" button.

    A new variable can be created by clicking on the canvas with the right
    button and selecting "CreateNewVar".
    New variables can be created by ANDing/ORing a stack of overlapping
    TPaveVars on the screen. Click on a TPaveVar and select "Merge".

    The selection list TPaveVar (empty by default) can be edited
    by clicking with the right button and selecting the item "SetLabel".

    TPaveVar objects may be dragged/droped to their destination (X,Y,X
    or W/Selection).
    Clicking on the canvas and selecting "MakeClass" generates the C++ code
    corresponding to the current selections in the canvas.

    At any time the canvas history can be saved in a Root file via the
    standard tool bar menu "File" and item "Save as Canvas.root".
    Assuming the current canvas is called TreeViewer, this generates
    the file TreeViewer.root. One can continue a previous session via
       TFile f("TreeViewer.root");
       TreeViewer.Draw();

- New class TPaveVar derived from TPaveLabel.
   A TPaveVar object is used by the TTreeViewer to represent
     - a TTree variable
     - a selection expression.
   A TPavevar has the same graphical representation as a TPaveLabel.
   One can only resize the left or right borders (not top/bottom).
   The context menu allows merging (and/or) overlapping TPaveVars.

- New class THYPE. This class is a dummy implementation of what should
   be a real geometry shape HYPE. Currently THYPE is a TTUBE.
   This class has been implemented to support some existing Geant3
   detector geometries using the shape HYPE (such as BES).

- Changes in TObject. Existing function TObject::AppendDirectory
  has been deleted. All calls to obj->AppendDirectory() in the Root
  classes TH1, TEventList, TTree, TProof have been replaced by
    gDirectory->Append(obj);

- New function TDirectory::Append. This function inserts an object
   in the current directory. It replaces TObject::AppendDirectory.

- Changes in TTimer. Add a new data member fObject and new member
   functions TTimer::SetObject and TTimer::GetObject.
   SetObject can be used to specify an object to be notified when
   the Timer times out. In this case TTimer::Notify invokes
   fObject->HandleTimer(TTimer *timer).

- New function TObject::HandleTimer(TTimer *timer). This simplifies
  the previous logistic with TTimers that required a small interface
  class. See examples of use in new class TTreeViewer.

- Introduce a protection in TPad::PadtoX and TPad::PadtoY when switching
  with the graphical interface from lin to log scales. Problem was apparent
  on machines like Alpha/Unix. (Thanks Damir Buskulic).

//________________________________________________________________________
//
//::>          VERSION  2.20/03   07/12/98 13.20.42
//
//
- Add new documentation in class TRandom. The new doc
   includes performance comparisons. Examples are given

- New functions in TMath:
   TMath::BinarySearch(Int_t n, tttt *array, tttt value)
   where tttt may be: Short_t, Int_t, Float_t, Double_t.

- Remove functions:
    TH1::LocateBinary
    TBranch::LocateBinary
    TF1::LocateBinary
    These functions are replaced by TMath::BinarySearch.

- Fix a bug in TProfile::Add in case coefficient c1 is negative.
  abs(c1) used instead of c1 when adding sum of squares.
    (thanks Gerco Onderwater for reporting).
//
// 05/12/1998  22.42.05  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.20/02   04/12/98 17.50.56
//
//
// 04/12/1998  17.07.38  by  Rene Brun
//
- Implement support for zooming on an axis in logarithmic scale
   in TAxis::ExecuteEvent.

- Mod in CINT/parse (from Masa) to fix a problem with the comment field
  of the ClassDef macro.
  Regenerate all dictionaries.

- Add Makefile.hpux for HP-UX 10.20 with the CC compiler.

- Modify TRandom constructor and TRandom::SetSeed(UInt_t seed).
  if seed is zero, SetSeed will set the seed to the current machine clock.
  (thanks Alexander Zvyagin for providing the code).
//
// 03/12/1998  19.06.37  by  Rene Brun
//
- Add new options in TStyle::SetOptFit(Int_t mode)
  The type of information about fit parameters printed in the histogram
  statistics box can be selected via the parameter mode.
   The parameter mode can be = pcev  (default = 0111)
     v = 1;  print name/values of parameters
     e = 1;  print errors (if e=1, v must be 1)
     c = 1;  print Chisquare/Number of degress of freedom
     p = 1;  print Probability
   Example: gStyle->SetOptFit(1011);
            print fit probability, parameter names/values and errors.
//
//________________________________________________________________________
//
//::>          VERSION  2.20/01   02/12/98 18.45.56
//
//
// 02/12/1998  18.44.08  by  Rene Brun
//
- Implement new class TClassTree.
     Draw inheritance tree for a list of classes
     The following options are supported
        - Direct inheritance (default)
        - Multiple inheritance
        - Composition
        - References
   (See TClassTree::DrawTree for examples and pictures.)
   The TClassTree viewer can be started from the "Classes" menu
   of any canvas menu bar.

- TRootCanvas and TWin32Canvas modified to include the call to TClassTree.
//
// 02/12/1998  18.26.29  by  Fons Rademakers
//
- TGX11TTF: correct text extent calculation for slanted fonts.

- TUnixSystem: in case processing a synchronous timer action takes
  longer than the interval to the next timeout, only timer actions
  would be processed and we would never get to processing file
  descriptor (keyboard, socket) events. This is now fixed.
  We will always look for file descriptor events in case the next
  timeout is shorter than 10 ms (kItimerResolution).

- TGMsgBox: supports multi line messages. To force a line break
  insert a \n in the string, e.g.: "line 1\nline2". Change by Reiner
  Rohlfs of ISDC.
//
// 02/12/1998  17.11.47  by  Rene Brun
//

- Activate methods TObject::ls and TObject::Print instead of forcing
  these methods to be redefined in the derived classes.

- Move some TMath functions from public to private.
  The following TMath functions are called internally by TMath::Gamma
     static Double_t GamCf(Double_t a,Double_t x);
     static Double_t GamSer(Double_t a,Double_t x);
     static Double_t LnGamma(Double_t z);

- Implement new functions in TF2 and TF3.
    void TF2::GetRandom2(Float_t &xrandom, Float_t &yrandom)
  This function returns two numbers distributed according the TF2 function.
    void TF3::GetRandom3(Float_t &xrandom, Float_t &yrandom, Float_t &zrandom)
  This function will return 3 numbers distributed according the TF3 function.
  Most member functions and constructors in TF3 have been modified.

- Protect TF2::GetRandom and TF3::GetRandom. When called on a TF2 or TF3 object,
  GetRandom prints an error and returns 0. Use GetRandom2,3 instead.

- Implement new constructor in TF3 to give an interpreted function
  as one of the arguments (like already the case in TF1 and TF2).

- Add new member functions in class TF1:
    Int_t TF1::GetNDF();     // return number of degrees of freedom
    Double_t TF1::GetProb(); // return fit probability

- Move TCanvas::SetCanvasSize from inline function to implementation.
  This function is now available in the TCanvas context menu.
  Setting the canvas size to large values is useful to view complex pictures
  and use the canvas scroll bars to navigate in the picture.

- Move definitions of kDoNotProcess and kIsClone from implementation files
  to TBranch header.
//
// 30/11/1998  17.05.08  by  Fons Rademakers
//
- install_test: fix in MakeDist and MakeDistSource scripts. Also introduced
  the AA_INSTALL and AA_LICENSE files.

- TGX11TTF: fixed compiler warning for HP CC and SGI Irix.

- TrueType fonts: for the definitive guide on how to use the TT fonts
  with ROOT see the web page: http://root.cern.ch/root/TrueType.html.
//________________________________________________________________________
//
//::>          VERSION  2.20/00   27/11/98 15.33.28
//
//
// 26/11/1998  16.51.11  by  Rene Brun
//
- Implement ZOOM on axis. Implement TAxis::ExecuteEvent.
  To zoom along an axis, click with the left mouse button at the position
  where you want to start zooming and release the button where you
  want to end zooming.
  If the button is released outside the axis range, unzooming is applied
  in the corresponding proportions.
  Note that the mouse may be released outside the pad or even canvas range
  if one wants to unzoom by a large factor.
  Zoom is effective for all kind of plots in 1, 2 or 3-D.

- A simple modification in TDirectory::ReadKeys adding IMPORTANT functionality
  to Root in general (thanks Philippe Canal for the suggestion).
  It is interesting to call this function in the following situation.
  Assume another process1 is connecting this directory in Update mode
    -Process1 is adding/updating objects in this directory
    -You want to see the latest status from process1.
  Example Process1:
    obj1.Write();
    obj2.Write();
    gDirectory->SaveSelf();

  Example Process2
    gDirectory->ReadKeys();
    obj1->Draw();

  This is an efficient way (without opening/closing files) to view
  the latest updates of a file being modified by another process
  as it is typically the case in a data acquisition system.

- Protect TH1::Draw when trying to draw a temporary histogram already
  existing in the pad. This solves problems like:
    ntuple->Draw("px"); // this generates temporary histogram htemp
    htemp->Draw(); // in old code, this statement was deleting htemp

- Fix a problem in TTree::DefinedVariable affecting the behaviour
  of TTree::Draw when mixing queries involving arrays with indices
  smaller than 10 and indices greater than 10.
  (thanks Ludger Janauschek for reporting this problem).

- Protect TNtuple::Streamer when reading very old Root files (written
   before January 97). Old TNtuples had one single branch.
//
// 23/11/1998  18.04.39  by  Fons Rademakers
//
- TTF fonts fully implemented. The TTF handling part in ROOT
  is implemented in class TGX11TTF which inherits from TGX11
  and only overrides a few text routines (like DrawText()).
  The loading of the FreeType $ROOTSYS/ttf/libttf.so and the ROOT
  libGX11TTF.so is only triggered when you've installed the
  TTF package in you $ROOTSYS directory. Installing this
  package will create the sub-directory ttf/ containing the lib,
  include and fonts directories. The binary ttf package can be
  downloaded for each platform from the ROOT web site. Of course
  source is also available.

  The FreeType libttf.so "only" contains functions to create a
  pixmap (for anti-aliasing) or bitmap of a certain character,
  for a certain font at a certain size. In the ROOT TGX11TTF class
  all higher level logic, like font caching, character caching,
  string composition, background transparency, color allocation
  for smoothing, etc., etc. is handled.
//
// 22/11/1998  16.56.54  by  Rene Brun
//
- Implement the following new functions in class TMath:
    Double_t TMath::Erf(Double_t x)
    Double_t TMath::Erfc(Double_t x)
    Double_t TMath::Gamma(Double_t z)
    Double_t TMath::Gamma(Double_t a,Double_t x)
    Double_t TMath::GamCf(Double_t a,Double_t x)
    Double_t TMath::GamSer(Double_t a,Double_t x)
    Double_t TMath::LnGamma(Double_t z)
    Double_t TMath::Prob(Double_t chi2,Int_t ndf)

  These new functions have been adapted to the Root coding style
  from original functions implemented by Nick Van Eijndhoven based
  on the book "Numerical recipees". See class TMath for more details.

- Correct comments in TH1::SetBins (thanks Philippe Kanal).

- Fix a problem in TChain::Merge in case the TTree does not reference
  any objects, but only simple structures as for example in TTrees
  generated by h2root (thanks Patrice Lebrun for reporting).

- Add SGI/EGCS and ALPHA/EGCS in $kumacs/globals and test/Makefile.
  (thanks to Pasha Murat).
//
// 14/11/1998  18.27.14  by  Rene Brun
//
- Changes in TCanvas::Streamer to support write/read of a canvas
  from a Root file when running in batch mode.
  The Canvas parameters were not correcly saved in the file due to a
  side-effect of TCanvas::GetTopX that modifies the members
  fWindowWidth and fWindowHeight.
  Also fBatch must be set equal to gROOT->IsBatch in Streamer read mode.
//
// 13/11/1998  18.47.45  by  Fons Rademakers
//
- TGX11: fix in RequestString and RequestLocator to not turn off
  mouse motion and keyboard event. This caused the canvas to stop
  handling mouse motion events after using the editor to edit
  text strings.

- TPad: fix in PaintBox when drawing pattern backgrounds. Regression
  was introduced during implementation of transparency in the same
  routine.

- TMatrix: in ResizeTo don't use ReAlloc that verifies previous size
  because in some cases we don't know any more the previous size
  (like after a small reduction in size when there is no realloc done).
//
// 12/11/1998  20.14.39  by  Fons Rademakers
//
- TRint: new method SetPrompt(). Using this method you can change
  the standard root[] prompt. Like:
  root [0] ((TRint*)gROOT->GetApplication())->SetPrompt("aap> ")
  aap>

- TList: new method Remove(TobjLink lnk*). If the lnk is known objects
  can be removed without makeing a linear search first. This method
  was also added to THashList.

- TCanvas: create a default TApplication object in case it does not
  yet exist at the time the first canvas is created. This guarantees
  that certain service performed by TApplication have been performed
  (like the allocation of the color table).
//
// 12/11/1998  13.52.35  by  Rene Brun
//
- Extend size of internal TMinuit arrays (dimension kMAXDIM increased to 100).

- Modify $kumacs/vhtml macro.
  Add new macro $kumacs/vhtmldev generating automatically the html file
  describing the current Changelog.

//
// 10/11/1998  19.15.04  by  Fons Rademakers
//
- THashList: corrected a case where in Delete() and Clear() objects
  could be deleted twice. Involves also small change in THashTable
  and TList.

- TDirectory: added some garbage collector clauses for extra protection
  during cleanup.

- Started integration of TrueType library for X11. We use the TT render
  engine from http://www.freetype.org/. The TT renderer will be used via
  the class TGX11TTF. This class inherits from TGX11 and overrides only
  the TGX11 text render functions. This class will be in its own shared
  library. When this library is loaded it replaces the current gVirtualX (iff
  it points to a TGX11 object) with a pointer to a TGX11TTF object.
  From that moment on all fonts will be rendered using TT fonts. See
  here the beauty of OO, C++ and dynamic linking.

- TGX11: made several text related method virtual. See above.

- TVirtualX: added the method HasTTFonts(), returns kTRUE if TGX11TTF is
  loaded and active.

- TAttText: add case for TT fonts.

- TDataMember: create getter and setter interpreter call func environment
  only when needed and not in the ctor. Save a lot of space.

- TRootGLViewer: handle expose event, like for TRootCanvas and
  TRootEmbeddedCanvas.

- TClonesArray: cleanup TObjectTable when deleting or shrinking (i.e.
  recuperating space) a clones array. Before TObjecTable could contain
  invalid entries after the deletion of a clones array.
//
// 11/11/1998  17.11.49  by  Rene Brun
//
- Implement the following new functions in class TMath:
    TMath::Gaus(Double_t x, Double_t mean=0, Double_t sigma=1)
    TMath::Landau(Double_t x, Double_t mean=0, Double_t sigma=1)
  The Landau function is a C++ implementation of the function DENLAN
  in CERNLIB (G110).

- Implement new function TRandom::Landau.
  This function returns a random number following a Landau distribution.

- new keywords "landau", "xlandau", "ylandau", "xylandau" in TFormula.
  One can create functions using inline formula referencing these keywords.
  Example:
     TF1 f1("f1","landau",-5,25);
     f1.SetParameters(100,0,1);
     f1.Draw();

- Modify TH1::Fit to automatically initialize parameters
  for a landau fit.
  Example:
     TH1F h1("h1","test landau",100,-5,25);
     h1.Fillrandom("f1");
     h1.Fit("landau");

- New button "landau" in TFitPanel.

- Modify tutorial hsum.C to show an example of TRandom::Landau.

- Implement support for both Alpha/Unix CXX version 5 and 6 in
  $kumacs/globals and test/Makefile.

- Fix a problem in TTreeFormula::GetNdata. When fNodes[i] < 0
   there is no need to compute a pointer to the leaf i.
   This problem was appearing in TTreeFormula when called
   by TTree::Scan. Thanks to Mike Beddo for reporting.

- In TCutG::SavePrimitive, add a few more statements to the generated
  code when saving a TCutG:
    -Reference to the original Tree
    -Setting of the VarX and VarY expressions.
//
// 10/11/1998  18.16.18  by  Rene Brun
//
- Modify TH1::FitSlicesY and TH1::FitSlicesZ to save the initial
  parameters settings and reinitialize the fitting function with
  the saved parameters before each new slice fit.

- Modify TH1::Build to not delete a previous histogram with the same name
  as the histogram being created. The old histogram is simply removed
  from the list of objects in the current directory.
//
// 09/11/1998  18.46.02  by  Rene Brun
//
- Change most functions of TMinuit to be virtual. This gives the
  possibility to derive a class from TMinuit.

- Merge with Valery's version and Fons's version.

- Extensions in test suite "stress". stress tested on all machines.
  Implementation of new ROOTMARKS.

- Optimization in TGaxis::PaintAxis. In case of log axis, the algorithm
  positioning the power of 10 exponent in case of logarithmic axis
  has been improved.

- Mods in TH1::UseCurrentStyle. Additional attributes are taken into account.
  In particular, axis attributes.
//
// 08/11/1998  12.35.34  by  Rene Brun
//
- Some changes in data member declarations in classes TFile, TSlave
  TNetFile and TProof.
  Data members counting I/O transactions are now declared Double_t
  instead of UInt_t. This change has implied several format changes
  in the corresponding classes.
  Root server ROOTD also changed accordingly.
//
// 05/11/1998  18.57.57  by  Rene Brun
//
- Modify TClass::BuildRealData and TTree::Branch to set the Zombie
  flag for the temporary object created to build the dictionary.
  A user can test (IsZombie()) in the object destructor.

- Modify program test/Event, adding a new static function Reset.
  This function is called by the stress program.

- Update deck makemklinux in install directory (thanks Damir Buskulic).

- Update $kumacs/global flags for Alpha/CXX. CXX version 6 is now the default.
  Same in test/Makefile.
//
// 05/11/1998  16.13.26  by  Rene Brun
//
- Add a new test program called "stress" in test directory.
  This program can be compiled with the native compiler or interpreted.
  To compile it, do:
       make stress
       stress  to run it
  To run with the interpreter, cd to $ROOTSYS/test
    Root > .x stress.cxx(100)
  The program stress is a collection of test programs executed sequentially
  and testing most of the facets of the Root system.
  The execution of stress ranges from a few tens of seconds on fast systems
  to a few minutes. The execution time is used as a benchmark.
  We expect to add more test programs to the stress test suite.

- The introduction of "stress" has required changes in test/Makefile
  and test/MakefileWin32.

- Fix a problem in TTree::Draw (AIX and SGI only).
  In case of a command like:  tree->Draw(">>eventlist","x,0")
  the internal variable varexp was not correctly initialized.

- Due to a bug in VisualC++ for the mathematical operator pow
  replace all references to TMath::Power(x,2).
  This solves in particular a long standing problem in TH1::GetRMS
  under Windows.

- In test program vmatrix, replace long by double in TMath::Power.
//
// 05/11/1998  15.09.36  by  Fons Rademakers
//
- TCanvas: GetWindowTopX() and GetWindowTopY() now return the exact
  position of the canvas on the screen. A TCanvas can now be restored
  on the same position as when it was saved.
//
// 04/11/1998  18.06.20  by  Rene Brun
//
- Fix a bug in TEventList::Add. The first time a new list was added to
  an existing list, the size fSize and the current number of elements fN
  were not set.

- Add additional comments in the documentation of classes TCutG and
  TEventList explaining how to get a pointer to these objects.

- Modify TH1::PaintTitle and TH1::PaintStat to use gStyle->GetTextFont()
  when drawing the title and stats TPaveText. The font 62 was hardwired.

- Fix a problem in TFormula::Streamer (read part).
  The array fExpr was created with zero length in case fNoper=0.
  This case could appear when a TF1 object referencing an interpreted
  CINT function was saved into a file and read again. The effect
  was only visible later in the TFormula destructor and only under HP-UX 9.
//
// 04/11/1998  16.45.20  by  Fons Rademakers
//
- TGX11: fixed WriteGIF. Works now also on X servers with more than
  8 planes. Only the used colors in the image are put in the colormap
  (used to be the full colormap, therefore > 8 planes did not work).
  If there are more than 256 colors used in the image than we should
  use the GIFquantize() routine to reduce the colormap. The routine
  is there, only has to be interfaced. The routine ImgPickPalette()
  in X11_imgpickpalette() has been removed and replaced by
  TGX11::ImgPickPalette().
//
// 03/11/1998  08.40.24  by  Rene Brun
//
- Fix a precision problem in TLego.
  Instead of testing on 0, test on kEpsil. On Linux with gcc optimized,
  the side effect was to generate large Postscript files when the Lego/Surf
  options were used.
//
// 02/11/1998  18.20.17  by  Fons Rademakers
//
- TRootEmbeddedCanvas: forgot to update after changing TRootCanvas
  and TGX11. Handles now also expose events for X servers without
  backing store.

- TPad: override SetFillStyle() to map style 0 to 4000 (transparancy).
  This allows setting of transparent mode via TAttFillDialog as can
  be done for non-pad boxes (like TPaves, etc.).
//
// 01/11/1998  18.56.47  by  Fons Rademakers
//
- TPad: implemented transparent pads. A pad is made transparent by
  setting its fill style (using SetFillStyle()) in the range 4000-4100.
  Where 4000 is fully transparent and 4100 fully opaque. All magic
  is done in the method PaintBox() using the new (private) methods
  CopyBackgroundPixmaps() and CopyBackgroundPixmap(). Transparent pads
  need to always be updated if anything in the canvas is changed
  or moved. This is handled in PaintModified().

- TAttFill: new method IsTransparent(). Returns true is fill style is
  in the range 4000-4100.

- TCanvas: fixed bug showing on X servers without backing store.
  After closing of a TCanvas the FeedBackMode() was not set false
  and therefore the X drawing mode in GX11 could remain in kInvert
  mode instead of being reset to kCopy. This results in a wrong
  refresh of the remaining canvases.

- TRootCanvas: added in the Options menu the items "Move Opaque" and
  "Resize Opaque". Also corrected default setting of the check marks
  of some option menu items.
//
// 02/11/1998  10.14.28  by  Rene Brun
//
- Protection in TDirectory destructor when called from the TROOT destructor.

- Minor change in TF1::Fit to call SET PRINT before SET ERR.
  When working in Quiet mode, no messages are printed.

- Minor change in TFile::Write. Do not print anymore the message
       TFile Writing ...
  To get the message, set the global gDebug to 1.

- Modify comments in TFormula constructor.
//
