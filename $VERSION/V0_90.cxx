//*CMZ :          16/12/97  16.35.32  by  Rene Brun
//*-- Author :    Rene Brun   09/09/96
//
// 16/12/1997  16.33.59  by  Rene Brun
//
//
//
//::>          VERSION  0.90/12   13/01/97 15.12.29
//
//
            Summary of changes and new features of version 0.9
            ==================================================

- Several new machines and options are now supported. See complete list
  in Availability and Status.
  New supported machines are SGI and IntelPCs with SOLARIS.

- When referencing the ROOT shared libraries, the old environment variable
  called ROOTDIR has been renamed to ROOTSYS. This change was necessary
  to avoid a clash with an environment variable used by the Load leveller
  under AIX.

- Considerably simplified the eventloop. Used to be two separate loops:
  one when running with X11/Motif and another for batch mode. A change
  was needed to correctly multiplex also on the network sockets. Now
  the two eventloops have been merged into TUnixSystem::DispatchOneEvent()
  which uses a single select() to look for terminal I/O, X display,
  network sockets and synchronous timers.

- A first version of a ROOT object browser is introduced. The browser can
  be activated via the canvas pull-down menus, or via the command:
   Root > b = new TBrowser("b");

- A utility program called h2root is included in the distribution kit.
  h2root converts an HBOOK histogram file to a ROOT file.
  The current version supports all histograms, Row-Wise-ntuples. Most
  Column-Wise-Ntuples should also be OK. (Please report any problems).
  To use this converter, do:
     h2root  file.hbook
  This will automatically create file.root.
  The following convention has been used. All HBOOK integer identifiers
  are converted to Root names by inserting the letter h in front of the identifier.
  ID=10 becomes the object h10.

- ROOT can be run in batch mode if the argument -b is given when invoking
  the executable. One can also run one or more macros in batch: Example
              root -b test.C
  will process the file test.C in batch mode (no screen graphics). Note that in
  batch mode, you can run an existing macro creating one or more canvases
  or PostScript files.
  You can also execute more than one macro and quit. Example:
              root -b -q macro1.C macro2.C macro3.C
  will execute consecutively the 3 macros, then will quit from ROOT.

- One can pipe the result of a macro or command in a log file.
   Root [1] .x test.C > test.log
          will redirect to the file test.log all alphanumeric output otherwise
          produced on the screen.
   Root [2] .x test.C >> test.log
          will append to the file test.log.
  To output to a log file the result of one or more commands, insert the
  command or list of commands between {}. Example:
   Root [3] {for (int i=1;i<100;i++) printf("sqrt(%d)=%f\n",i,sqrt(i));} > test.log
  Same logic for input:
   Root [4] .x test.C < test.dat.
  Note that currently it is required to have a blank in front of the
  redirect character. And single statements must be terminated with a ;

- New function TROOT::Macro. This function can be used as an alternative
  to .x file.C to execute a macro.
    Root [5] gROOT->Macro("file.C");
  executes macro file.C. file.C in turn can invoke gROOT->Macro(...),etc.

- All Root classes have now a Copy constructor.

- New functions TH1::DrawPanel, TH1::FitPanel and TGraph::FitPanel.
  These panels can be activated by selecting the item in the object
  context menu. In the case of the FitPanel, default fitting functions
  are shown, the various fit options can be selected and the fit range
  can be selected via a slider.


- Implement new function TTree::SetAutoSave. By default the Tree buffers are
  saved when the number of bytes written to the file is greater than fAutoSave.
  fAutoSave is set via SetAutoSave in bytes.

- The TFile constructor has been modified to enable an automatic crash
  recovery procedure via new function TFile::Recover.

- Implement new functionality in TTree::Draw.
  In the command ntuple.Draw("var>>hvar") the variable var is histogrammed into
  a permanent histogram named hvar. If the same command is executed, the
  existing histogram hvar is reset before the ntuple loop.
  If the command ntuple.Draw("var>>+hvar") the existing histogram is not cleared.,
  New ntuple entries will be added to the existing contents.

- Implement new class TFrame. This class is used to draw the pad graphics frame
  for histograms. TFrame inherits from TWbox. Frame attributes can be set.
  By default, frame attributes are the same as the pad attributes.

- Implement operators +,-,* and / for the histogram classes.

- New member function TStyle::SetScreenFactor and TStyle::GetScreenfactor.
  the new data member fScreenFactor is used as a multiplication factor
  for the canvas position and dimensions.  In this way, one
  obtains the same aspect ratio independently of the screen resolution.
  This screen factor is automatically set by the Root startup routine.

- Change the default color table definition in TCanvas. Add new colors
  8,9,12 and 50.

- Implement new class TGraphErrors. This new class inherits from TGraph.
  It can be used to display a list of non-equidistant points and their
  associated error bars.

- TRandom class changed from static to normal class deriving from TNamed.
  Global variable gRandom defined in $TRandom.
  All tutorials and test programs modified accordingly.

- Change calling sequence of TH1::Fit. Add two new parameters xmin and xmax.
  If xmin and xmax are specified, the function range is automatically set
  to these values. These parameters also appear in the fit dialog box.

- Introduction of new Inter Process Communication classes. TInetAddress,
  TServerSocket and TSocket (all in patch NET).

For more details, see the full list of changes and additions in the ROOT
history file (sequential history from the developpers) below.

//
// 13/01/1997 15.12.29  16.35.55  by  Rene Brun
//
- Fix a problem in TPad::Print when printing with encapsulated Postscript
  and the current canvas was not the current pad.

- Change tutorials Fisrt, Second and Archi. These 3 tutorials used to
  create TPad objects instead of pointers to pad objects. The same macro
  could not be executed twice.

- Merge with latest Valery's version for Windows/NT.
//________________________________________________________________________
//
//::>          VERSION  0.90/11   10/01/97 17.25.37
//
// 10/01/1997  16.35.55  by  Rene Brun
//
- Most NET classes modified to add more documentation.

- New macros client.C and server.C added to tutorials

- New version of WIDGETS/Listtree solving a timing problem in the browser.

- Introduce more comments in the test program Event.

- New macros eventload.C, eventa.C and eventb.C introduced in the test directory.

- Change TGeometry documentation to refer to g2root.

- Introduce the installation procedure for the Hitachi HIUX operating system
  under GCC. (still untested).
//
// 09/01/97  21.54.29  by  Fons Rademakers
//
- Class TString: added the operators:
     TString &operator=(char c)
     TString &operator=(TSubString &substr)
  having these operators saves the creation of a temporary TString object.
//
// 09/01/1997  18.04.29  by  Rene Brun
//
- Change installation procedures for SGI, SOLARIS,etc.

- New directory CINTUTILS currently containing 2 decks MAKEINFO and iosenum.
  The procedure install_cint has been modified to generate $ROOTSYS/cint/MAKEINFO
  and $ROOTSYS/cint/include/iosenum.h.

- new program g2root in directory UTILS.
  g2root is a conversion program from GEANT/RZ files to ROOT macros.

- New installation procedure install_g2root to create $ROOTSYS/bin/g2root.
  The invokation of g2root is like for h2root:
    g2root geant_file_name  root_macroname
//
// 08/01/97  12.58.54  by  Rene Brun
//
- Merge with Valery's , Fons's and Nenad's versions.

- Install root under SolarisPC. New option in all installation procedures.

- Default option in install procedures changed from debug to opt

//
// 07/01/97  18.16.29  by  Fons Rademakers
//
- Exception handling for Linux fixed.

- Many changes in the network (TSocket, TServerSocket, etc.) and system
  (TSystem and TUnixSystem) classes. The network classes allow the setting
  of most frequently used socket options. Sending and receiving protocol
  improved.

- Considerably simplified the eventloop. Used to be two separate loops:
  one when running with X11/Motif and another for batch mode. A change
  was needed to correctly multiplex also on the network sockets. Now
  the two eventloops have been merged into TUnixSystem::DispatchOneEvent()
  which uses a single select() to look for terminal I/O, X display,
  network sockets and synchronous timers.

- Renamed gTheApplication to gApplication and gTheMotifApplication to
  gMotifApplication.

- TNamed::SetName argument is now const.

- Everywhere use now logical values TFile::kRead or kWrite.
//
// 06/01/97  17.53.23  by  Rene Brun
//
- Change logic in TTree::Draw to compute histogram limits when option "same".
  The previous logic did not take into account the case where the second Draw
  is from a different ntuple.

- Modify UTILS/Event to take into account the most recent changes in TTree.

- Modify TFile constructor to invoke WriteHeader.
  Introduce new function TFile::Recover. Recover is automatically called
  when the TFile constructor cannot find the TKeys list at the end
  of the file.
  Open the file in UPDATE mode to write the recovered keys list.

- Introduce new function TTree::AutoSave. This function is automatically
  called by TTree::Fill when the number of bytes written to the file
  is greater than fAutoSave. fAutoSave can be set via TTree::SetAutoSave.
  The default value for fAutoSave is 10 Mbytes.

- A TTree can now be read as a complete object.

- New function TClonesArray::ExpandCreate. This function is called
  by TBranchClones::GetEvent.

- Fix a bug in TClonesArray::Streamer. fLast must be set in read mode.
  Another fix should be applied in Streamer. fMethodCall should be saved
  and reset. Otherwise Delete cannot work.

- Delete directory DICT.
  Modify cint_base to create BASE_G__Base
  Modify cint_cont to create CONT_G__Cont
  Modify cint_h    to create H_G__Hist
  Modify cint_g    to create G_G_Graf
  Modify cint_minuit to create MINUIT_G_Minuit

  Modidy all link and install procedures to remove reference to lDict.

- Protect histogram contructors against number of bins <= 0.

- Rename class TLeafClass to TLeafObject.

- Modify rootcint to generate better code when a data member is  TClonesArray.

- Delete classes TBranchClone and TLeafClone.
  Many changes in class TBranchClones. TBranchClones creates only
  basic branches.

- TBasket::Streamer. Take care of case fNevBuf=0.

- CompressionLevel 2 set identical to level 1.
  When TBranchClones creates sub branches, float branches are compressed
  if compressionlevel> 1. They are not compressed otherwise.

- New function TBuffer::ResetMap to delete the map count and fWriteArray.
  This new function is called by TBranch::Fill.

- Protection in TLeafClass::Streamer.
//
// 18/12/96  14.54.51  by  Fons Rademakers
//
- TROOT::Idle() now works also in batch mode version. Uses an a-synchronous
  TTimer object.

- Fix in Getline() to gracefully handle SIGALRM events generated by
  a-synchronous timers.

- Restructuring of install scripts. Now all compile and link options for all
  platforms are controled via the CMZ Global variables set in deck GLOBALS.

- Fixed number of memory leaks in the Motif Menu classes and in TList,
  THashTable and TBuffer (current set of benchmarks run with 0% memory
  leaks under Purify).

- Introduction of new Inter Process Communication classes. TInetAddress,
  TServerSocket and TSocket (all in patch NET).
//________________________________________________________________________
//
//::>          VERSION  0.90/10   20/12/96 17.25.35
//
// 15/12/96  15.24.51  by  Rene Brun
//
- Modify TLeaf structure. Remove data members fIsPointer, fOffset and fNbytesIO.
  Changes in the logic to allocate buffers for variable length arrays.
  The logic to process a leaf of type px[ntrack] where ntrack refers to an existing leaf
  has been implemented.

- Implement new member functions in the TBuffer class ReadFastArray and WriteFastArray.
  The functions are equivalent to ReadStaticArray or WriteArray but do nor read/write
  the array length.

- h2root has been modified to digest most hbook column-wise-ntuples.

- Modify rootcint to generate the correct class stamping:
   old version generated b.WriteVersion(IsA());
   new version generates b.WriteVersion(classname::IsA());
  As a consequence, all dictionaries have been regenerated and all Streamer functions
  modified.
//________________________________________________________________________
//
// 09/12/96  17.47.30  by  Fons Rademakers
//
- TClonesArray::Delete() now correctly calls the clone object destructor.
  If the dtor of the clone object is a no-op (i.e. does not free memory)
  one can specify in the TClonesArray constructor to not call the clone
  dtor. This can save quite some time.
//
//________________________________________________________________________
//
- Modify TClass::Draw. Change slightly the position and size of the
  default canvas.

- In TRint::Rint add logic to automatically set the TStyle::SetScreenFactor.

- Change kListDefaultWidth to 500 in $TMOTIFBROWSER.

- Introduce several protections in class THtml (strlen(NULL).

- THtml::CopyFile has been renamed to THtml::CopyHtmlFile to avoid conflict
  with WIN32 CopyFile macro

- TSystem::Load(const char *module, const char *entry) has been changed.
  Now "module" can be an "absolute" path name as well.

- Renormalize tutorials to current times on hpux-10
//________________________________________________________________________
//
//::>          VERSION  0.90/09   03/12/96 18.48.27
//
// 03/12/96  18.25.45  by  Rene Brun
//
- Change TROOT destructor (setting gROOT at the end).

- Modify all test examples to create TROOT object in main program.

- Add Function TF1::Browse

- Implement TBrowser::RecursiveRemove and TBrowserImp::RecursiveRemove.
  TObject destructor will call these functions when kObjInCanvas is set.
  This protects various cases when objects in canvas or browser are deleted
  from the canvas or browser context menu or from the command line.

- Move declaration of gGXW from cint_x11 to cint_g.
  This makes gGXW accessible under Windows.

- Correct TH3x::Fill functions. The bin number was not correctly computed.
  (thanks to Glenn Cooper).
//
// 28/11/96  23.29.51  by  Fons Rademakers
//
- Using the TROOT::Idle command ROOT can execute commands while the system
  is idle (i.e. no keyboard or mouse events are happening).

- New TTime class which is a basic data type for time operations
  with a millisecond precision. Currently it is being used by the TTimer
  class.

- New TTimer class. Using TTimer one can register synchronous and
  a-synchronous timers. TTimer inherits from TSysEvtHandler.

- Class TSystem and TUnixSystem. Added infrastructure for TTimer support.
//________________________________________________________________________
//
//::>          VERSION  0.90/08   02/12/96 18.46.31
//
//
// 02/12/96  12.58.54  by  Rene Brun
//
- Merge with valery's version of December 2.

- Implement TNode::Browse and TNode::IsFolder.

- Integrate new version 5.11.27 of CINT.

- Modify the TFormula constructor to remove a function with the same name
  from the gROOT list of functions.

- Remove special logic regarding TPads in TList::Clear.

- Rename TPad::Delete as TPad::Close (same in TVirtualPad)
  TCanvas::Close calls TPad::Close

- Delete TAxis::Delete, TFree::Delete and TColor::Delete.

- Edit all tutorials to create objects via new (in particular TPads)
//________________________________________________________________________
//
//::>          VERSION  0.90/07   29/11/96 18.16.53
//
//
// 29/11/96  15.18.42  by  Rene Brun
//
- Merge with Valery's version

- Implement TLeaf::GetTypeName and also in TLeaf derived classes.

- Change in TCanvas when creating a batch canvas. Use gROOT->IsBatch
  as a global in TCanvas::Build to be tested in TColor::SetRGB.

- TMotifCanvas::CloseCB deletes canvas instead of Close.

- TCanvas destructor simplified. The logic to delete the canvas in the list
  of canvases has been moved in TCanvas::Close. With this change, the canvas
  can be destroyed via the "Close Canvas" item in the Root canvas FILE menu
  or via the Motif window close button.

- Modify INCMOTIF and MOTIF to put ClassDef and ClassImp under
  the condition MotifDict. By default the Motif dictionary is not generated.
//
// 28/11/96  23.29.51  by  Fons Rademakers
//
- New TTime class which is a basic data type for time operations
  with a millisecond precision. Currently it is being used by the TTimer
  class.

- New TTimer class. Using TTimer one can register synchronous and
  a-synchronous timers. TTimer inherits from TSysEvtHandler.

- Class TSystem and TUnixSystem. Added infrastructure for TTimer support.
//
// 28/11/96  17.13.33  by  Rene Brun
//
- All TTree classes modified to correctly use the TBrowser.

- Improve class TGaxis when drawing the multiplication factor 10.

- new class TFitPanelGraph derived from TFitPanel. This new class is invoked
  by the TGraph::FitPanel function.

- New macro cint_motif2. Half of cint_motif has been moved to cint_motif2.
  The new dictionary for Motif was necessary because AIX xlC compiler
  could not compile the previous G__Motif file!

- Remove parameter option from TObject::Dump, TObject::DrawClass ,
  TObject::Inspect and TCollection::Dump. With this change, these functions
  can be directly called from the context menu without prompting for option.

- Implement TCanvas::SetTitle. This function sets the canvas title.
  Files $TcanvasImp and $TMotifCanvas changed accordingly.
  The canvas title is automatically updated by the TDialogCanvas, TFitPanel
  and TDrawPanelHist with the name of the edited object.

- minor changes in AttText, Diamond, GraphEroors, PaveLabel, PavetText and Text.
//________________________________________________________________________
//
//::>          VERSION  0.90/06   26/11/96 18.07.35
//
// 26/11/96  18.03.06  by  Rene Brun
//
- Merge with Masa's version 5.11.24. This new version supports a new facility
  for automatic objects. Cint stores the pointer to the object as well as
  another pointer (in case of ROOT ,this is the gDirectory).
  New version is also faster.

- New class TDrawPanelHist in GPAD. The draw panel histogram provides
  control for 1D and 2D drawing options.

- New classes TSlider and TSliderBox in directory GPAD.

- New class TFitPanel in GPAD. This class is invoked by TH1::FitPanel.
  The fitpanel can be invoked from the histogram context menu.
  It provides control for setting the fit range, fit options and type
  of function to fit.

- Several changes in TMinuit. Replace constant 50 by fMaxpar.
  This fixes a problem when Minuit is initialized with less than 50 parameters.
  (Thanks to Nick for reporting).

- Cleanup histogram class. Remove two member functions TH1::GetContent
  and TH1::GetError (Use GetBinContent and GetBinError instead).
//
// 21/11/96  18.46.25  by  Rene Brun
//
- TRandom class changed from static to normal class deriving from TNamed.
  Global variable gRandom defined in $TRandom.
  All tutorials and test programs modified accordingly.
//________________________________________________________________________
//
//::>          VERSION  0.90/05   21/11/96 13.32.33
//
//
// 21/11/96  10.39.03  by  Rene Brun
//
- Implement copy constructors for all classes.

- Change existing Copy member functions. First argument is always of
  type TObject. This avoids tons of compiler warnings.

- Implement TPad::Divide in the same way as TCanvas::Divide

- Modify TString::Streamer to use unsigned char instead of char for nwh.

- Introduce new version of Browser from Nenad. The Obj->Browse function
  has a new calling sequence (one less parameter).

- New virtual function TObject::IsFolder. By default this function returns false.
  This function is redefined by all classes to be considered to be folders.

- New member functions PadtoX, PadtoY, XtoPad and YtoPad added in TVirtualPad
  with the real implementation in TPad.
  These new functions return the real user coordinates in a pad taking care
  of log/linear scales.

- Using the above facilities, picking works correctly in log scales
  for histograms, graphs and grapherrors.

- Change TObject::GetObjectInfo to take care of log scales.

- Change TGraph to inherit from TNamed instead of TObject.
  Corresponding objects may be named and titled.
  For TGraph objects, when using the option "A", the pad range is automatically
  computed from the graph coordinates with a 10 per cent margin added.

- Change in THtml::DrawTree. The canvas uses the default canvas color.

- Implement Color palette in TStyle. Class has a new data member TArrayI fPalette.
  New member function TStyle::SetPalette to initialize/set the color palette.
  New member function TStyle::GetNumberOfColors.
  New member function TStyle::GetColorpalette(Int_t color).
  The color palette is used by TH1::PaintColorlevels.

- Implement TH1::PaintColorLevels. This function is invoked when
  TH1::Paint is called with option "col".
  The palette color table is drawn on the right side of the pad via
  the new function TH1::PaintPalette.

- Modify TH1::SetBinError to automatically invoke TH1::Sumw2 if this function
  was not already executed.

- Merge with Valery's version of November 18.
  This new version fixes a problem in WinNtSystem onder Windows95 when the
  environnement variable HOME is not set.

- Merge with Fons version of 18 November. Class TGXW modified.
  New global gGXBatch introduced.

- Change name of tutorial geomfile to geometry.
//________________________________________________________________________
//
//::>          VERSION  0.90/04   18/11/96 14.42.55
//
//
// 18/11/96  14.39.32  by  Rene Brun
//
- Change format for printing statistics in TH1::PaintStat. Give more room
  for mean value and rms.

- Introduce new browser (Nenad). New class TMotifBrowser.
  many changes in class TBrowser and TBrowserImp.
  New version of IconBox in Widgets.

- Implement pointers to functions in class TF1. New constructor called
  when a function is defined via the interpreter.
//________________________________________________________________________
//
//::>          VERSION  0.90/03   16/11/96 15.01.15
//
//
// 16/11/96  12.56.47  by  Rene Brun
//
- Delete global gCanvas and use gPad instead. This change has required
  many mods in TVirtualPad but also in many functions previously using gCanvas.
  In particular, access functions to the canvas functions have been implemented
  in $TPad and TPad.

- Change in TClass::Draw to create the "class" canvas via the interpreter
  and not via the default canvas.
//
// 16/11/96  10.29.25  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  0.90/02   15/11/96 18.55.33
//
//
// 15/11/96  17.17.32  by  Rene Brun
//
- Modify TROOT::FindObject to include the current canvas and the current pad
  in the search path for automatic object search.

- Protect TTree::Draw in the above case when the dimension of h2 is different
  from the previous dimension.

- Fix a problem in TTree::Draw in case of ntuple.Draw("y:x>>h2").
  When the default option (scatter-plot) was selected, h2 was filled
  with the x and y coordinates inverted.

- Change TAxis::GetBinLowEdge in case of underflows/overflows bins.

- Changes in TPostScript::DrawPolymarker. Set size of polymarkers 6 and 7
  to 0.2 and 0.4 times (respectively) of the current marker size.

- Change calling sequence of TView::FindPhiSectors and TView::FindThetaSectors.
  Parameters kth and kphi passed by reference.
  This fixes a problem when drawing legos in spherical coordinates.

- Implement new function TStyle::SetLegoInnerR and TStyle::GetLegoInnerR.
  This sets the inner radius when drawing in cylindrical coordinates.
  Function TLego::LegoCylindrical changed accordingly.
//
// 08/11/96  20.25.16  by  Fons Rademakers
//
- New CINT which support I/O redirection and fix in TRint to handle
  this new feature. One can now do, e.g:
    root [1] .x fit1.C > fit.log
    root [2] .x ntuple1.C >> fit.log
    root [3] .x read.C < input
    root [4] hpx.Dump(); > dump.log
  Note that currently it is required to have a blank in front of the
  redirect character. And single statements must be terminated with a ;

- Root can now run in batch, i.e. without any graphics. Start ROOT with
  the -b option, e.g.:
    $ root -b
  In batch mode one still can create PostScript files.
//
// 08/11/96  11.36.36  by  Rene Brun
//
- Changes in tutorials demos, hsum.
  New tutorial Surfaces.

- In TGenerator, replace call to GetEntries by GetLast.

- Merge with Valery's version (8 November)
  This includes a preliminary implementation of the object browser.
  Several new classes.

- Include two new bits in $TObject
   kModified
   kDoneByView
//
// 08/11/96  11.27.48  by  Valery Fine(fine@vxcern.cern.ch)
//
-  Windows NT/95. The second type of the ROOT executable has been introduced with
                  Microsoft: root4for.exe (see bind_root kumac). One needs to use
                  Fortran subroutines one must use this brand of exe with MSFRT40.DLL
                  together

- New kumac to install_test under Windows.

//________________________________________________________________________
//
//::>          VERSION  0.90/01   07/11/96 14.20.13
//
//
// 07/11/96  14.20.13  by  Rene Brun

- Modify TBasket::ReadBasketBuffers to read from the ntuple directory
  and not from the current directory.

- Implement new functionality in TTree::Draw.
  In the command ntuple.Draw("var>>hvar") the variable var is hitogrammed into
  a permanent histogram named hvar. If the same command is executed, the
  existing histogram hvar is reset before the ntuple loop.
  If the command ntuple.Draw("var>>+hvar") the existing histogram is not cleared.,
  New ntuple entries will be added to the existing contents.

- Change the default color table definition in TCanvas. Add new colors
  8,9,12 and 50.

- Modify TLego::Spectrum to cycle on the color table in case the number
  of colors + first color is greater than last color.

- Modify TGX11::SetRGB to free previously allocated color with same number.

- Change TContextMenu::ExecuteAction to not set the Modified bit in the
  current pad.

- Declare the color names and line styles ENums from $Gstyle to CINT
  in macro CINT_G

- Many changes in TH1::PaintLego and TH1::PaintSurface.
  Surface options now operational.
  Option LOGZ now working.
  Color mapping improved.

- Fix a problem in TLego::SurfaceFunction when drawing in polar coordinates.
  Implement logz option.

- Change in TView::DistancetoPrimitive in case of non cartesian coordinates.

- Modify TH1::PaintTitle. The title size is automatically adjusted to the
  box title size.

- Mods in TH1::Fill member functions. Increment sattistics only for entries
  in histogram range.

- Many changes in class TF1. New data member fHistogram to hook the
  histogram object created for drawing.
  TF1::DistancetoPrimitive and TF1::ExecuteEvent simplified.
  It is now possible to pick/change axis attributes of a function.
  Clear pad before drawing in TF1::Draw and TF2::Draw.

- Change calling sequence of TH1::Fit. Add two new parameters xmin and amax.
  If xmin and xmax are specified, the function range is automatically set
  to these values. These parameters also appear in the fit dialog box.

- Fix a bug in TFormula::Analyze in case of reference to an already
  existing formula (thanks Nick).

- Global output redirect works again. E.g.: "root < file.C > file.out".

- In TApplication: by calling TApplication::SetReturnFromRun()
  just before calling TApplication::Run(), the application will
  return from Run() and the user can clean up as he likes. This assumes
  one uses TRint. If you make your own TApplication sub-class, use
  TApplication::ReturnFromRun() to check if a return from Run() is
  required and if so, call TApplication::StopRun().

- Implement new class TFrame. This class is used to draw the pad graphics frame
  for histograms. TFrame inherits from TWbox. Frame attributes can be set.
  By default, frame attributes are the same as the pad attributes.

- New data members and member functions in class TStyle to store/retrieve
  the new Frame attributes.

- TH1::PaintFrame totally rewritten to use the new TFrame facility.

- Changes in TH1::DistancetoPrimitive and TH1::ExecuteEvent
  to support the new TFrame. A frame can be grown/shrunk like TWbox.
  Change cursor to kHand when surfing on the x and y axis.

- TAxis::ExecuteEvent modified. Does not call anymore TH1::ExecuteEvent.

- Modify classes TVirtualPad and TPad to add a new data member fFrame.
  Also corresponding functions TPad::SetFrame and TPad::GetFrame.

- Tutorial hsimple modified to illustrate the new TFrame facility.

- Implement options "m" and "d" for TDirectory::ls().
  Option "m" shows only objects in memory.
  Option "d" shows only objects in file.

- New member function TObject::GetObjectInfo. This function is called
  by TCanvas::DrawEventStatus. It returns by default the mouse pixel
  positions and the corresponding pad coordinates.

- New function TH1::GetObjectInfo that redefines the version in TObject.
  It returns the pad coordinates and also the bin number and bin content.

- Implement operators +,-,* and / for the histogram classes.

- Implement the copy constructor for TH1.

- Replace references to $ROOTDIR by $ROOTSYS.
  Remove references to $ROOTSRC and $ROOTLIB.

- TH1::Paint can be called with option "p" only.

- New functions TH1::Multiply.

- New data member fNpfits in class TF1. Corresponding new member functions
  TF1::SetNumberFitPoints and TF1::GetNumberFitPoints.
  The number of points used in a fit is set in H1FitChisquare.

- Modify TH1::PaintStat to show the chisquare and number of degrees of freedom.

- Merge with Valery's version. This new version includes:
   ** changes in the installation procedures under WindowsNT
   ** changes in $TBrowser, $TContextMenu , $TObject and $TString
      To implement a new TObject member function:

      virtual void  Execute(TMethod *method, TObjArray *params)

      Up to now TObject had the Execute method in the form as follows:

      virtual void  Execute(Text_t *method,  Text_t *params);

   ** new functions TString::ReplaceAll
   ** skeleton for browser under WindowsNT.
   ** when linking with DLLs including Fortran, it was necessary to introduce
      a new fortran dummy function Welcome (to force MS linker to initialize
      Fortran I/O subsystem and Fortran environment

- Change TRandom::Rannor calling sequence. Pass parameters by reference.

- Protect TBtree against a bug in the DEC CXX compiler.

- New version of CINT 5.11.12  integrated in root.
  The new version of CINT has changes in the internal data structures.
  All G__xxxx files must be regenerated.

- Modify CINT/g__cfunc . Do not define memcpy in case of __alpha.

- Change the compiler and linker parameters for ALPHACXX.

- Correct a bug in TTree::Draw when computing the limits for a 3-D plot.
  (thanks Detlef Irmscher).

- Include new member functions in classes TH1 and TGraph.
  DrawPanel and Fitpanel.

- Increase the size allocated to /pawc/ in the conversion program h2root.

- Modify the $TBuffer (fReadArray initialisation) in order to compile
  with the DEC CXX compiler.

- Option "box" in TH1::Draw working again. The following convention is used:
  if the histogram fill color is 0, then only the box contour is drawn.

- Remove test on GetDimension from TH1::Build.

- Optimize character size in TClass::Draw.

- Rename TH2C::Fill2 into TH2C::Fill. Same for TH2S,TH2F and TH2C.

- Changes tutorial hsimple to call Fill instead of Fill2.

- New member function TStyle::SetScreenFactor and TStyle::GetScreenfactor.
  the new data member fScreenFactor is used as a multiplication factor
  for the canvas position and dimensions. For example, when working
  on a screen with a low resolution of 800x600, one can specify
  gStyle->SetScreenfactor(0.6) in the rootlogon.C file. In this way, one
  obtains the same aspect ratio than on a screen with resolution 1280x1000.

- TCanvas::TCanvas constructors modified to take into account the screen factor
  specified in TStyle.

- New member function TObject::GetDrawOption. This new function is used
  for example in TH1::DistancetoPrimitive to find out if the option "same"
  was specified in TH1::Draw.

- new tutorials staff and multifit added in directory tutorials.

- TCanvas::SaveSource includes the logic to save TDialogCanvas and derived classes.

- Add drawing option  "goff" in TTRee::Draw. If this option is specified
  no graphics is generated.

- class TF1 has a new data member fParent and two new functions
  TF1::GetParent and TF1::SetParent.
  The parent information is used in TH1::Fit and TGraph::Fit.
  With this change, one can now safely delete a fitted function from
  an histogram or graph.

- Objects gHtml and gMinuit not created anymore by the ROOT main program.
  TRint constructor changed accordingly.

- Change the private functions of the TTree class to protected mode.

- TNamed::SetName and TNamed::SetTitle set the current pad modified.

- Change TH1::PaintTitle to redraw the current title.

- Implement new function TGaxis::SetTitleOffset and TGaxis::GetTitleOffset.
  Change definition of fTitleOffset in class TAxis. fTitleOffset represents
  now a multiplication factor to the default title offset (default is 1).
  Slight changes in the default title offsets for X and Y axis.

- Modify TH1::PaintAxis to set the title offset when drawing a TGaxis.

- Correct a problem in TFormula::TFormula in case of operators >= and <=

- Modify TObject::Write to not write TDirectory objects.

- Implement new member function TH1::SetEntries().

- New version of UTILS/h2root working under Windows/NT and also
  supporting HBOOK subdirectories. Number of entries correct.

- Modify TDirectory::Streamer to read subdirectories.

- Modify TFile::GetCompressionFactor and TFile::Map to not read
  beyond the end of file.

- Protection introduced in TKey::Read .

- Comment call to AbstractMethod in several TObject functions.

- New function TAttLine::DistancetoLine.
  This new function is called by TLine::DistancetoPrimitive and also
  by TGraph::DistancetoPrimitive and TPrimary::DistancetoPrimitive.

- New classes TGenerator, TVenus, TPrimary and TAttParticle introduced
  in new patch EG. This patch must explicitly be selected with SEL EG.
  New macro cint_eg to generate the dictionary for these classes.
  TVenus derived from TGenerator is an interface with the event generator
  program Venus version 5.21 from Klaus Werner.
  TGenerator includes functions to draw an event.

- Bug fixed in TPad::x3d. The test on obj->Is3D() must be between {}.

- New functions in class TGraph:
  TGraph::Fit  to fit a graph with a user function.
  TGraph::GetN returns the number of points
  TGraph::GetX returns a pointer to the X array of points
  TGraph::GetY returns a pointer to the Y array of points
  TGraph::GetPoint returns one point
  TGraph::InitExpo to compute fit initial parameters values in case of exponential
  TGraph::InitGaus to compute fit initial parameters values in case of gaussian
  TGraph::InitPolynom to compute fit initial parameters values in case of polynomial
  TGraph::LeastSquareFit internal function called by InitPolynom.
  New data member fFunctions added. In case of fit, the fitted function
  is added to the list of functions.
  The TGraph::Paint function modified to loop over the list of functions.

- Tree tutorial removed from macro Benchmarks.

- Merge with Fons version:
  References to gif files added in the container classes documentation.
  Special option in $Terror and $TFile to compile with new HP/aCC compiler.
  Also new compiler taken into account in Motif/Pipe and Cint/cppmain,shl.
  Change in TLeafClone (delete [] ibuf instead of delete [] fBuf.

- Implement DLLs on Windows/NT and 95 (Valery Fine).
  This required several changes in many ROOT classes. In particular references
  to extern global variables has been changed. Globals cannot be referenced
  directly or via inline functions. Many inline functions referencing globals
  have been moved to the implementation.
  $RTypes has many mods to reflect the above changes. IsA() in particular
  is not inline anymore.
  a new macro EXTERN is defined in new sequence $DLLImport.
  On Unix, EXTERN is the same as extern.
  Several macro/utilities to create and manage DLLs added to $KUMACS and UTILS.

- TSystem, TWinNTSystem and TUnixSystem modified to use the new facility
  provided by CINT to dynamically load shared libraries and Windows DLLs.

- Bug fixed in TgWin32::ClearWindow. This fixes the problem when drawing
  functions.

- Modify TGraph::Draw and TGraph::Paint. Support upper and lower case options.
  In case of option *, set marker style to 3 and change option * to P.
  This allows changing the marker style with the MarkerAttributes panel
  in case the graph was drawn with option * (suggestion by Nicolo de Groot).

- Implement new option "ARC" in TPave::Paint. When drawing a TPave or any
  or its derived classes TPaveLabel and TPaveText, the option ARC will
  draw rounded corners. The radius of the corner may be specified via
  TPave::SetCornerRadius(rad) where rad is given in percent of the pave height.

- Protect TView::GetDistanceToAxis in case of contours.

- Protect TH1::DistanceToPrimitive in case of contour plots. If contour mode 3
  the TView object is deleted from the pad. (problem reported by C.Roland)

- Protection in TTree::Draw in case one draws a 2-D plot with polymarkers
  in an already existing plot. (problem reported by C.Bormann).

- Fix a problem related with destructors in THtml class (Nenad).

- Include new examples in tutorials:
    rootenv: describes the root environment
    io :     I/O requirements
    archi    the root system architecture
    first    my first root session
    second   my second root session
    shared   dynamic linking from shared libraries

- Modified MakeDist to include tutorials/.rootrc in the tar file.

- Introduce preliminary OPENGL code in the G3D routines.
  TShape modified to include new member functions interfacing ROOT to OpenGL.

- Implement TWin32Canvas::MarkersCB to call TMarker::DisplayMarkersTypes.

- TText::ExecuteEvent modified. The interactive interface to move/grow/shrink
  a TText has been slightly modified. Growing/Shrinking is done by moving
  the moose in the first 30 per cent of the text (cursor shape is automatically
  changed). Pointing in the remaining 70 per cent moves the text only.

- Create new deck UTILS/h2root. h2root is a program converting HBOOK files
  into ROOT files. A macro install_h2root has been created in $KUMACS.
  The standard installation procedure invokes install_h2root.

- Implement new class TGraphErrors. This new class inherits from TGraph.
  It can be used to display a list of non-equidistant points and their
  associated error bars.

- Implement new function TMarker::DisplayMarkersTypes.
  This function is called when invoking the Markers item in the View menu
  of the canvas toolbar.

- Modify TMotifCanvas to invoke TMarker::DisplayMarkersTypes.
  Direct call to TColor::DisplayColorTable.

- Fix bug in TGraph::PaintGraph. Repalce obsolete call to gPad->DrawLine
  by gPad->PaintLine. This solves a problem reported by Nick van Eijndhoven
  Top and right axis were not drawn in the PostScript file for TGraph objects.

- PostScript files include now the ROOT version number and the date/time
  of generation of the file. (thanks Nick van Eijndhoven).

- Fix a bug in TFormula constructor. Remove function with "name"
  instead of "expression" in the list of functions.
  Another problem fixed in TFormula::Analyze (missing statement fNpar += npold;
  in case of a reference to an existing formula with parameters.

//
//________________________________________________________________________
//
//::>          VERSION  0.90/00   09/09/96 08.40.43
//
// 09/09/96 08.40.43  by  Rene Brun
//
- Modify TTree::Draw to copy the Tree line width and style to the
  temporary histogram. (suggested by C.Bormann)

- Implement two new member functions in TProfile class.
  TProfile::GetErrorOption and TProfile::SetErrorOption.

- Fix a bug in TProfile::BuildOptions. Test on lower case instead of upper case
  for parameter option.

- Fix a problem in TPad::Print. If one prints a canvas from the file menu
  and this is not the current canvas, the PostScript parameters are taken
  from the current canvas and not from this canvas.
   (bug reported by C.Roland).

- Protect TBranch::TBranch in case a ntuple/tree is created and no file is open.
   (problem reported by C.Bormann).

- Fix a problem in TH1::PaintInit when superimposing an histogram
  on top of an existing histogram in a canvas with LogY scale.
  (thanks to Detlef Imrscher).

- Modify TClass::Draw to not draw the Dictionary member functions and destructor.

- A bug in the Win32Dialog has been fixed. It affected the Windows
  version only caused a wrong default value of the parameter not
  defined by user from the dialog box.
