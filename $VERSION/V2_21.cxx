//*CMZ :          05/09/99  16.41.17  by  Rene Brun
//*CMZ :  2.21/08 18/03/99  21.49.29  by  Rene Brun
//*CMZ :  2.21/07 08/03/99  13.26.00  by  Rene Brun
//*CMZ :  2.21/06 18/02/99  14.30.11  by  Rene Brun
//*CMZ :  2.21/05 10/02/99  15.58.38  by  Rene Brun
//*-- Author :    Rene Brun   04/01/99
//
// 05/09/1999  16.40.07  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.21/08   18/03/99 21.49.29
//
//
// 17/03/1999  08.32.29  by  Rene Brun
//
- New CINT version 5.13.92 introduced.

- Makefiles for SGI configurations updated. Remove -DG__DECCXX from
  the list of compiler options.

- new makefile makeaixegcs to install Root with egcs1.1 under aix.
  Note that this makefile (thanks Richard Dubois & Donald Brenton)
  is not yet tested. This makefile requires a new utility provided
  in the distribution "makeSharedLib".

- A few fixes from Philippe Canal in the makefiles to install rootd,
  h2root, g2root. this is currently operational under SGI/KCC only.
  We will update all other makefiles later.

- The test program for the TMinuit class in test/minexam has been
  substantially rewritten to reflect the new interface routines
  introduced in TMinuit.

- Fix a problem in TMinuit::mnset preventing to call this function
  with the option "Show params". Thanks Christian Lacunza.

- Implement function TEventList::Sort. This function sorts an event list
  in increasing number of event ids.

- Change default parameters in the histogram functions generating
  projections of 2-d, 3-d histograms. Default is to make the projection
  including all bins with under/overflow bins.
  In the previous version, default was firstbin=0, lastbin=0 (this meant all bins).
  In the new version, default is firstbin=0, lastbin=9999.
  If lastbin is greater than the overflow bin number (nbins+1), lastbin
  is reset to be nbins=1.
  The new default allows to make a projection with firstbin=0 and lastbin=0, ie
  a projection of the undeflow bin. This was not possible with the previous default.
        TProfile    *ProfileX(const char *name="_pfx", Int_t firstybin=0, Int_t lastybin=9999, Option_t *option="");
        TProfile    *ProfileY(const char *name="_pfy", Int_t firstxbin=0, Int_t lastxbin=9999, Option_t *option="");
            TH1D    *ProjectionX(const char *name="_px", Int_t firstybin=0, Int_t lastybin=9999, Option_t *option="");
            TH1D    *ProjectionY(const char *name="_py", Int_t firstxbin=0, Int_t lastxbin=9999, Option_t *option="");
            TH1D    *ProjectionZ(const char *name="_pz", Int_t firstxbin=0, Int_t lastxbin=9999, Int_t firstybin=0, Int_t lastybin=9999, Option_t *option="");
  Thanks to Hans Dijkstra for the suggestion.

- Implement change suggested by Valery in THtml::CopyHtmlFile to support
  WindowsNT pathnames including special characters. This solves a problem
  reported by F.X.Gentit.
//
// 15/03/1999  18.28.12  by  Rene Brun
//
- in class TH1, static function H1InitGaus, set constraint for RMS
  to be positive.

- Changes in classes TTree, TBranchClones and TBranchObject to support
  branches with leaves having the same name.
  Support case of objects with different addresses at each Fill.
  In case a Tree branch is a TObject and split mode , one can force
  the specified branch name to preceed the object data member name
  by terminating the branch name with a "."
  For example, if one wants two branches in a TTree referencing
  two objects of the same class Track, one can do:
  Track *track1=0, *track2=0;
  T->Branch("track1.","Track",&track1,16000,1);
  T->Branch("track2.","Track",&track2,16000,1);

- new class TPaveStats, a specialized TPaveText to draw histogram statistics.
  Functions TH1::PaintStat and TH1::PaintStat2 modified to create a TPaveStats
  instead of a TPaveText.
  By clicking on the TPaveStats object, one can select the "stats" options.
  The current stats option can be saved in gStyle via the context menu
  item "SaveStyle".
  The new class is introduced in the HIST directory. Corresponding
  dictionary makers and makefiles have been modified.

- Change default level of optimisation in the makefiles from -g to -O

- Modify test program test/MainEvent.cxx. Instead of
       Event *event = 0;
  always create an Event object before setting the event address
       Event *event = new Event();
  The creation of this object is mandatory before setting the branch address
  in case this object has data members that are Root containers (TList,
  TObjArray, TClonesArray, TMap).

- Implement TH1::SetBins for 3-d histograms.

//
// 10/03/1999  19.36.02  by  Fons Rademakers
//
- TCanvas, TRootCanvas, TRootEmbeddedCanvas: fix pop-down of tooltips
  in case of multiple canvases (reported by Otto Schaille).

- TGMenu: removed harmless compiler warning.

- TMapFile: can now open in UPDATE mode and update objects in the file
  (thanks to Otto Schaille and Valeriy Onuchin). To do so, just open in
  update mode, Get() the object, play with it, and Update() the file.
  If the object is not an histogram that is automatically added to the
  current directory, you have to call Add() yourself after Get().
//
// 10/03/1999  09.05.14  by  Rene Brun
//
- Add new functions to class TMinuit. These functions are simpler interfaces
  to existing TMinuit functions. (Thanks Christian Lacunza)
     Int_t  Command(const char *command);
     Int_t  DefineParameter( Int_t parNo, const char *name, Double_t initVal, Double_t initErr, Double_t lowerLimit, Double_t upperLimit );
     Int_t  FixParameter( Int_t parNo );
     Int_t  GetParameter( Int_t parNo, Double_t& current_value, Double_t& current_error );
     Int_t  Migrad();
     Int_t  Release( Int_t parNo );
     Int_t  SetErrorDef( Double_t up );
     Int_t  SetPrintLevel( Int_t printLevel=0 );

//________________________________________________________________________
//
//::>          VERSION  2.21/07   08/03/99 13.26.00
//
//
// 08/03/1999  13.23.02  by  Rene Brun
//
- Add a call to TPostScript::Close in the TPostScript destructor.
  In TPostScript::Close protection against gVirtualPS = 0.

- Modify prototype for all TLeaf::Export. add a second argument Int_t n.

- Several improvements in the TTree/TBranch/TLeaf classes to speed up
  reading and writing time. With these improvements, up to a factor 2 gain
  when reading TTrees containing TClonesArray.
  TLeafI::Export and TLeafF::Export recoded to replace calls to memcpy
  by an internal loop.

- Important change in TBranch::GetBasket. Use a static TBuffer object
  instead of creating/deleting the buffer at each entry.
//
// 08/03/1999  12.53.56  by  Fons Rademakers
//
- rootcint: strip off correctly path name of header file when using
  an automatically generated LinkDef file. Now this works:
     rootcint -f dict.cxx -c ../include/myClass.h

- TMapFile: added Remove(const char*). Also when Add()ing an object
  with a name of an already existing object, the existing object will
  be deleted. Provided TMapRec::GetObject(). Be careful with this one
  and read the documentation.

- Exported TGFrameElement to dicitionary. It will now appear in the HTML doc.

- Fixed warnings in several tutorials for new CINT: use -> instead of .

- New CINT 5.13.90 18 Feb 1999
  * 1004, recursive G__process_cmd call in interpreted function bug fix
  * 1005, vector<const A*> a;  bug fix
  * 1006, A *p=A(); A *p=new int;  error report
  * 1007, while(x) sum+=; error detection
  * 1008, '.cover ' SEGV avoided
  * 1009, f(char const*) bug fix
  * 1010, G__defined_tagname
  * 1011, return A(x); return type mismatch error, bug fix
  * 1012, 986 fix,  class A{void f() {const int a=3;const int b=a;}};
  * 1013, . vs -> warning message
  * 1014, 2dt  error detection
  * 1015, G__linked_taginfo::tagnum reset
//
// 05/03/1999  17.22.00  by  Rene Brun
//
- Thanks to Markus Oldenburg for pointing out that the xwho service at
  cern has changed its address. So the default value of the fXwho variable
  in THtml should be changed to "http://consult.cern.ch/xwho/people?"

- Modify TPave::PaintPave to process the case fBorderSize = 1.
  (same problem as TWBox::paintFrame below).

- Modify TWBox::PaintFrame in the Postscript interface. the line width
  for the frame was not taking into account correctly the Wbox attribute.
  (thanks Scott Wakely).

- Protect TTree::Branch (case TBranchObject) in case of an invalid
  class name.

- Speed up TBranch::DropBaskets by using TObjArray::UncheckedAt
  instead of the operator [].

- Speed up TBranchClones::GetEvent by using TObjArray::UncheckedAt
  instead of the operator [].

- Modify $kumacs/aliascreate and globals to add
   -alias ccprof to compile with the gprof option.
//
// 04/03/1999  16.54.17  by  Rene Brun
//
- Implement new class TRandom2 derived from TRandom.
  TRandom2 has the same functionality than TRandom. It has
  a periodicity of 10**14 instead of 10**8 for TRandom.
  Two new functions are defined to set/get the current seed (two numbers).

- Add new makefile Makesgiegcs

- Add new makefile Makesgi64egcs (thanks Martin Weber)
//
// 03/03/1999  11.59.27  by  Rene Brun
//
- Protect TCanvas::DrawEventstatus.
  When  "Canvas.ShowEventStatus: true" in the .rootrc file, one get
  a segmentation violation as soon as one close a DrawPanel or FitPanel.
  In this case, the member fCanvasImp = 0 for the deleted canvas.
  (thanks Gerco Onderwater for reporting the problem).

- Implement new class TGraphAsymmErrors.
  Like TGraphErrors, this new class is derived from TGraph and supports
  asymmetric error bars in both X and Y.

- Take into account the number of fit parameters during the evaluation
  of the size of the TPaveText for "stats" in TH1::PaintStat.
  (thanks to Thomas Walter for the remark).
//
// 02/03/1999  19.01.41  by  Rene Brun
//
- Implement Sort functions in TMath;
   static void  Sort(Int_t n, Short_t *a,  Int_t *index, Bool_t down=kTRUE);
   static void  Sort(Int_t n, Int_t *a,    Int_t *index, Bool_t down=kTRUE);
   static void  Sort(Int_t n, Float_t *a,  Int_t *index, Bool_t down=kTRUE);
   static void  Sort(Int_t n, Double_t *a, Int_t *index, Bool_t down=kTRUE);

  Sort the n elements of the array a.
  In output the array index contains the indices of the sorted array.
  if down is false sort in increasing order (default is decreasing order)
   This is a translation of the CERNLIB routine sortzv (M101)
   based on the quicksort algorithm
  NOTE that the array index must be created with a length >= n
  before calling this function.

- Protect TMath::Atan2 in case 2nd argument = 0.
  TMath::ATan2 was already protected.
  TMath::Atan2 is a variant of TMath::ATan2 returning results in degrees
  instead of radians.

- Change TCanvas::Build to take into account log scale settings in TStyle.
  The log settings were OK in TPad.
  (thanks Damir Buskulic for reporting the anomaly).

- Move TF1::GetHistogram from include to implementation.
  If, when this function is called, fHistogram=0, the function forces
  a pad update.

- Change TGraph::GetHistogram to force a pad update in case GetHistogram
  is called in a macro before TGraph::paint has been called.

- Improve automatic error computation in TGraph::FitChisquare.
  In case the range in Y was very small, the automatic errors were
  not realistic. Also fix a problem in same function in the algorithm
  computing the graph boundaries.
  These two changes fix a problem on DEC/Alpha reported by Peter Wuerdemann.

- Modify GPAD/Helptext for the help to draw a polyline and a TCutG.

- In TF1::EvalPar protect case of a compiled function when the second
  argument params is not specified (thanks Federico Carminati).

- In TH1::PainTable, the 2-d Paint functions are called even when
  the number of entries is zero. Some users use directly functions
  such as TH1::SetCellContent and not the TH1::Fill functions.

- Fix a problem (thanks Philippe canal) in TH1::Divide and TH1::Multiply
  when computing the x value of the current bin/cell.
  Note that the 2-d statistics are not (yet) correctly processed
  by the TH1::Add, Divide and Multiply.

- Fix a problem introduced in the development version in TH2x::Reset
  and TH3x::Reset. For example TH2F::Reset must invoke TH1F::Reset
  instead of TH1::Reset. Thanks Cristoph Borgmeier for reporting.

- Merged with Valery's version.

- Implement a suggestion from Thierry Auger to automatically extend the
  arrays of errors in TGraphErrors::SetPointError. This has implied
  to overload TGraph::SetPoint in TGraphErrors::SetPoint to cope with
  all possible combinations where SetPoint is called before or after
  SetPointError.

- Implement suggestion from Philippe Canal in include DllImport.

//
// 28/02/1999  16.54.57  by  Valery Fine(fine@mail.cern.ch)
//
-  TBrowser:: new data-member and Get/Set method to access the last selected
      object has been introduced
      WIN32BROWSERIMP,WIN32LISTVIEWCTRL,WIN32TREEVIEWCTRL have been adjusted
      to provide fLastSelected object properly under WIN32

-  G3D  -  special option "range" for all Paint() methods have been introduced to
           estimate the space the 3D object will occupy faster.
           See: TNode::Draw(Option_t *option) method:

             // *-*- Create a 3-D View
             TView *view = gPad->GetView();
             if (!view) {
                view = new TView(1);
                view->SetAutoRange(kTRUE);
                Paint("range");          // This is NEW, there was just Paint() here
                view->SetAutoRange(kFALSE);
             }
//
// 19/02/1999  20.14.28  by  Fons Rademakers
//
- TFile: removed redundant SysOpen() with two arguments.

- TMapFile: correct a cast of fhSemaphore for WIN#@.

- Tutorial h1draw.C: correct size of pave so text fits nicely.

- Make-macros: corrected TV2 and TV3 to TVector2 and TVector3.

- Makefile.solaris: added comment in case of 5.4 (default is for 5.6).
//________________________________________________________________________
//
//::>          VERSION  2.21/06   18/02/99 14.30.11
//
//
// 18/02/1999  09.10.07  by  Rene Brun
//
- Add new function void TH1::SetStats(Bool_t stats)
  to set the statistics box option on/off.
  By default, the statistics box is drawn.
  The paint options can be selected via gStyle->SetOptStats.
  This function sets/resets the kNoStats bin in the histogram object.
  It has priority over the Style option.
  (thanks Philippe Canal for the suggestion).

- Introduce option in TH1::Draw to draw/not draw the color scale
  when option "COL" is specified. Note this small backward incompatibility:
   option "COL" now does not draw the color scale
   option "COLZ" in addition draw the color scale.

- A few additional protections in test/Event and test/stress to avoid
  possible memory leaks.
  A new function Event::ResetHistogramPointer has been introduced
  to simply set to 0 the data member fH in Event.
  This function is called in a few places in the stress program before
  deleting the object event.

- minor correction in tutorial "file".

//
// 17/02/1999  18.41.19  by  Fons Rademakers
//
- TKey: fix in Read() to obtain correctly version of TKey.
  (thanks to Victor Perevoztchikov for reporting the problem).
//
// 15/02/1999  13.16.58  by  Rene Brun
//
- Add a protection in TTree::Branch (BranchClones case).
  In case of an invalid data type, an invalid branch address was used.

- Modify TText::ExecuteEvent when rotating the text with the mouse.
  Authorize only exact multiples of 1 degree. With this change, it is easier
  to select angles like 0, 90 or 180 degrees.

- WARNING. Class TDatime specs modified. TDatime::Set accepts time of the day
  in format hhmmss only. TDatime::Get always returns date in the format
  19990223 (February 23 1999) instead of 990223.
//
// 15/02/1999  12.21.23  by  Fons Rademakers
//
- TApplication and TRint: handle directories and ROOT files on the
  command line. When a directory is specified it is made the current
  working directory (if multiple directories are specified the latest
  one becomes the current working directory). ROOT files are attached
  to the session using the interpreter. The file will be accessable in
  the interpreter via its basename minus the .root extension. Examples:

     $ root $ROOTSYS/tutorials hsimple.root demos.C

  In this case ROOT will run in the $ROOTSYS/tutorials directory, connect
  the file hsimple.root (available as "TFile *hsimple" via the interpreter)
  and execute the script demos.C (both hsimple.root and demos.C are taken
  from $ROOTSYS/tutorials.

- TClonesArray: fix in the reading part of the Streamer(). Array was not
  correctly sized.

- Observed a memory leak in XCopyArea() on XFree86 3.3.x.x of +/- 90 bytes.
  Bug report has been submitted to xfree86.org. This leak shows up, a.o., in
  TCanvas::Update(). It is independent of the canvas size.

- TMapFile: put the TMapRec class definition in the TMapFile header so it
  can be used to loop over objects in the mapped file.

- TGFrame: provided a number of static functions to export protected class
  static variables. This is needed because WIN32 DLL's cannot export class
  statics. The WIN32 port of the GUI classes has begun!
//
// 15/02/1999  11.38.46  by  Rene Brun
//
- Introduce new classes in PHYSICS and EG initially developped by Pasha Murat.
  In PHYSICS:
    - new class TLorentzVector
    - new class TVector2
    - new class TVector3
   in EG:
    - new class TParticlePDG

- Mods in test/MainEvent, Event and stress to avoid a memory leak
  when reading the TTree in split mode.

- Delete reference to unused variables in:
  GUI_Gtext  (return kNpos)
  GPAD_TreeViewer (TCanvas *c1)
  BASE_System (variable lfname)

- class TGraph modified to use the new Clipping facility introduced
  in TPad when drawing a Polyline. The TGraph constructor sets the TGraph
  status bit kClipFrame on.

- Modify TPad::CreateNewPolyline to reset the kClipFrame bit when
  a normal polyline is created via the graphics editor.

- Function TPad::PaintPolyLine invokes TPad::PaintLine to take advantage
  of the Clipping algorithm.

- Function TPad::PaintLine modified to clip
  either at the pad boundary
  or     at the frame boundary.
  Clipping at the frame boundary is triggered when the pad object has its
  status bit kClipFrame set. Currently this bit is set only when painting
  a TGraph object.

- Merge with new Valery's version introducing a skeleton for the new GUI
  under NT.
//
// 12/02/1999  15.31.57  by  Rene Brun
//
- Mods in TGraphErrors constructor. Following a suggestion
  from Christian Lacunza, the arguments ex or ey can be null.
  in this case, the corresponding array of errors is preset to 0.

- a problem fixed in TPostScript::DrawPS in case of special fill patterns
  in the range 3010->3025. (thanks to Olivier Couet for help
  and to Peter Wiennemann for showing evidence of the problem).

- implement change in TGX11TTF::DrawRotatedText TGX11TTF::DrawText
  when calling the X11 function XCreateImage. this function was failing
  on X servers with a bit depth of 15 bits.
  (Thanks to Marcus Mendenhall for submitting the fix).
//
// 11/02/1999  19.01.27  by  Rene Brun
//
- TChain::Startviewer now operational.

- TEventList supported by TChain.

- Simplify code in functions TTUBS::MakeTableOfCoSin, TPCON, TTUBE, TSPHE.
//________________________________________________________________________
//
//::>          VERSION  2.21/05   10/02/99 15.58.38
//
//
// 10/02/1999  15.58.38  by  Rene Brun
//
- Several changes in class TMinuit to correct incorrect passing
  of string arguments. TMinuit::mncomd, TMinuit::mnexcm, TMinuit::mnset
  and TMinuit::mnhelp should be OK now.
  (thanks Christian Lacunza for reporting).

- Implement functions TH2C::Reset, TH2S::Reset, TH2F::Reset, TH2D::Reset
  and same for TH3. The Reset function invokes TH1::Reset and in addition
  resets the statistics specific to TH2 objects.
  (thanks to Marcus Mendelhall for reporting).

- Add some comments in TF1 constructors.

- Start to introduce changes in classes TChain and TTree to support
  the TTreeViewer and TEventList in TChains.

- Changes in g2root. Due to changes in recent versions of Zebra/RZ,
  the Zebra routine RZINK has been imported in g2root. With this change
  the baBar Geant3 geometry has been successfully converted to Root.

- introduce modification from Valery in TWinNTSystem::ExpandPathname.
//
// 09/02/1999  16.58.47  by  Fons Rademakers
//
- A number of small changes in different places for the port to FreeBSD.
  Thanks A.Yu.Isupov <isupov@moonhe.jinr.ru> for this work.

- TBox: any TBox or derivative (TPave, TPad, TButton, etc.) supports now
  tool tips (little boxes containing hints).

- TVirtualPad: implements interface for tool tips that can be called
  via any other class. This allows classes in front of the graphics barrier
  to call graphics objects.

- TRootCanvas: propagate kKeyPress events to TCanvas.

- TCanvas: HandleInput() now handles kKeyPress events and forwards them
  to the selected objects ExecuteEvent(). The event==kKeyPress and
  px==pressed char and py=0.
//
// 07/02/1999  17.16.19  by  Rene Brun
//
- Following the introduction of TCanvas::EnterLeave, a change had to be made
  in TCanvas::Clear. the members fSelected and fSelectedPad must be set to 0
  to avoid calling TCanvas::EnterLeave with an invalid pointer.

- Modify install_h2root macro under Linux to link with libf2c_minus.so
  instead of libf2c.so.

- Changes in g2root to circumvent the recursivity problem on some machines.
  A new routine node2 calling node is introduced.
  (thanks Chul Su Park for the suggestion).

- Optimize the computation of the text size in TPostScript::Text in case
  of vertical pads.

- Minor change in TPaveLabel and TPaveText in the algorithm computing
  the text size.

- Slight change of format in TH1::PaintStats when printing statistics.
//________________________________________________________________________
//
//::>          VERSION  2.21/04   05/02/99 19.28.38
//
//
// 05/02/1999  11.21.44  by  Fons Rademakers
//
- test/Makefile: added --no_exceptions for SGI / KCC.

- Buttons.h: added new events kMouseEnter and kMouseLeave.

- TCanvas: Added new member EnterLeave(). It is called in HandleInput() and
  calls ExecuteEvent() for the previous (kMouseLeave) and newly selected
  (kMouseEnter) objects. Also made the following functions const:
    virtual Float_t  PadtoX(Axis_t x) const;
    virtual Float_t  PadtoY(Axis_t y) const;
    Int_t            UtoAbsPixel(Float_t u) const;
    Int_t            VtoAbsPixel(Float_t v) const;
    Int_t            UtoPixel(Float_t u) const;
    Int_t            VtoPixel(Float_t v) const;
    Int_t            XtoAbsPixel(Axis_t x) const;
    Int_t            YtoAbsPixel(Axis_t y) const;
    Float_t          XtoPad(Axis_t x) const;
    Float_t          YtoPad(Axis_t y)  const;
    Int_t            XtoPixel(Axis_t x) const;
    Int_t            YtoPixel(Axis_t y) const;
    virtual void     XYtoAbsPixel(Axis_t x, Axis_t y, Int_t &xpixel, Int_t &ypixel) const;
    virtual void     XYtoPixel(Axis_t x, Axis_t y, Int_t &xpixel, Int_t &ypixel) const;
  updated also TVirtualPad and TPad equivalents. More getters should be made
  const in TPad and TCanvas. Later.

- TBox: made GetX1(), GetX2(), GetY1() and GetY2() const.

- TButton: check kMouseEnter and kMouseLeave. Will be later used to
  activate and deactivate tooltips.

- TGToolTip: new ctor that accepts now also a TPad and TBox, so tooltips
  can be bound to objects in a TCanvas.

- TString: fix in TString ctor and operator=() to correctly treat 0 pointer
  char* arguments.

- TString: removed conts for several members returning an object by value.
  Const makes no sense in such cases.
//
// 04/02/1999  15.45.09  by  Fons Rademakers
//
- AA_README: updated to mention how to install TTF fonts.

- AA_INSTALL: updated to mention to remove the include directory
  and make it a link to src.

- ROOTD: fix loop in RootdCloseTab(). Don't call ErrorFatal() in this
  routine because that causes a loop.
//
// 03/02/1999  12.22.03  by  Rene Brun
//
- mods in TCanvas::Build to use the style options grid and ticks.
  (thanks Scott Wakely for the remarks)

- mods in TH1::UseCurrentStyle to use the new TStyle functions.

- mods in TAttAxis::Reset to use TStyle::GetTitleSize

- Several changes in TStyle.
  Do not use the following functions:
     SetTitleXOffset(Float_t offset=1)  {SetTitleOffset(offset,"X");}
     SetTitleXSize(Float_t size=0.02)   {SetTitleSize(size,"X");}
     SetTitleYOffset(Float_t offset=1)  {SetTitleOffset(offset,"Y");}
     SetTitleYSize(Float_t size=0.02)   {SetTitleSize(size,"Y");}
  Instead use:
     SetTitleOffset(Float_t offset=1, Option_t *axis="X"); //set axis title offset
     SetTitleSize(Float_t size=0.02, Option_t *axis="X");  //set axis title size
  same for Get Functions.
  (thanks Stephen Bailey for the suggestions and remarks).

- Modify TTree::TakeAction And TTree::TakeEstimate to correctly fill
  2-D histograms with statistics.

- Add a protection against fMatrix=0 in TNode::DistancetoPrimitive.

- Merge with Valery's version. Valery made changes in
  TSystem, TUnixSystem, TWintNTSystem.
  Also updated TGeometry, TPolyLine3D and TNode.
//
// 03/02/1999  11.40.49  by  Fons Rademakers
//
- TGFrame: new member ChangeBackground() to make it easier to change the
  backgound color of a TGFrame. Search in $ROOTSYS/test/guitest.cxx for
  "green".

- TGTab: new members GetTabContainer(Int_t tabIndex) and
  GetTabTab(Int_t tanIndex). These return TGFrame derived objects that can
  then be manipulated. Search in $ROOTSYS/test/guitest.cxx for
  "yellow". Also tab text can be changed by calling
  GetTabTab(idx)->SetText(new TGString("bla")).

- TUnixSystem: removed ExpandFileName(), protected function now only in TSystem.
//
// 30/01/1999  18.06.06  by  Fons Rademakers
//
- TGeometry: reordered SetPosition() inline functions, need to be defined
  before being used (AIX4.3 complained).

- TUnixSystem: number of mods for port to AIX4.3.
//
// 29/01/1999  14.15.00  by  Fons Rademakers
//
- TMapFile: fix for linux ppc.

- Globals and makesgikcc: added option --no_exceptions for KCC.

- TDatime: applied fix by Victor Perevovchikov to be Y2K safe.
  Still to do: need to fix setting of time now we can not set time
  for hour 0!

- test/Makefile: fix for HP-UX egcs.
//
// 27/01/1999  10.05.18  by  Fons Rademakers
//
- Decks ROOTX, UnixSystem, $RConfig: Introduced Damir's mods for egcs
  and linux ppc.
//
// 26/01/1999  18.42.37  by  Fons Rademakers
//
- TGX11TTF: fix in SetTextSize() in case text angle is not 0.
  This error resulted in text to be draw microscopically small.

- New version of CINT (5.13.88 17 Jan 1999) by Masa introduced:
  5.13.88 17 Jan 1999
  990, unary + operator const int a(+1);
  991, for(i=0;i<10;i++){if(i){A a(6);}}  Object creation bug fix
  992, A *p(0); bug fix
  993, int a[2][3][4]; a a[0] a[0][0] eval pointer level bug fix
  817-2, class A{virtual void f() throw=0;};  bug fix throw=0 in ifunc.c
  994, int *p=(int*)new int;  bug fix
  995, operator@(A& a,int*& b) { } bug fix
//
// 25/01/1999  11.58.16  by  Fons Rademakers
//
- Test stress: cleanup temp files.

- Makefile for SGI/KCC: added -32 to compile and link flags.

- TUnixSystem: fixes for AIX 4.2.

- TUnixSystem: fix in ExpandPathName(). Don't prepend full pathname to
  local files.
//________________________________________________________________________
//
//::>          VERSION  2.21/03   22/01/99 16.29.37
//
//
// 22/01/1999  08.42.31  by  Rene Brun
//
- Apply changes proposed by Otto Schaille in TH1::Fit, TGraph::Fit
  to support fits with one or more fixed parameters.
  Otto also fixed a problem in TMinuit::mnline when calling the user
  function in case of a fixed parameter.
  Thanks to Otto for this important contribution.

- Small mods in TF2::Paint, TF2::SetContour and TF2::GetContourLevel.
  The new algorithm returns a correct contour level by default when
  no contours have been set.
  With this change, the tutorial "surfaces.C" works correctly again.

- Optimize the automatic computation of the text size in TPaveLabel::Paint.

- Cosmetic changes in tutorial "tree"
//
// 20/01/1999  18.10.44  by  Fons Rademakers
//
- Introduce new version of TUnixSystem::ExpandPathName from Victor Perevovchikov.

- TString: fix in ReadToken() and also operator>>(istream& str, TString& s)
  (which uses ReadToken()).
//
// 20/01/1999  17.20.46  by  Rene Brun
//
- Change a parameter in test program stress5.

- Introduce a change in TH1::Fit with Log LikeliHood technique
  to not reject bins with no entries.
  (Thanks to Thorsten Brandt and Roland Waldi).
//
// 20/01/1999  16.08.37  by  Fons Rademakers
//
- TRFIOFile: new class supporting I/O via the CERN rfiod daemon. To use
  RFIO (part of the CERN SHIFT software) open a file like:

     TFile *f = TFile::Open("rfio:/path/galice.root")

  where "/path/galice.root" is a symlink to a file of the type
  "/shift/.../.../galice.root" or:

     TFile *f = TFile::Open("rfio:server:/path/galice.root")

  where "server" is the machine running the rfiod. The returned
  object is a TRFIOFile which derives from TFile and has the
  same functional interface as a TFile.

  Note: the code for class TRFIOFile resides in the shared library
  libRFIO.so. This library is dynamically loaded by TFile::Open()
  when an "rfio:" file is specified. Do not link explicitely with this
  shared library!!! The library libRFIO.so is statically linked with
  libshift.a and will only be build via the make process if you define
  the shell variable RFIO to point to libshift.a, e.g.:

     export RFIO=~/shift-1.10.2.9/lib/libshift.a

- TFile: basic I/O goes now via the protected virtual functions:
  SysOpen(), SysClose(), SysWrite(), SysRead(), SysSeek(). The class
  TRFIOFile only overrides these basic I/O functions.

- New library libPhysics.so introduced. Currently it contains a
  dummy TLorentzVector class, but all placeholders for this lib
  have been added in the CMZ and make Makefiles.

- TInterpreter, TCint and TROOT: return Long_t instead of Int_t from
  method Calc() and TROOT::ProcessLineFast(). Return value is typically
  an address to an object.

- TUrl: recognize rfio: and hpss: as predefined protocols.

- TVector: don't export variable number of argument ctor to interpreter.

- New version of CINT (5.13.87 8 Jan 1999) by Masa introduced:
  5.13.85 19 Dec 1998
  971, 'namespace x{ class A{ A();}; A::A(){}}' ctor/dtor scope bug fixed
  972, friend template function improved (still not 100%)
  -  , Solaris(SunOS5.6) lib/posix,lib/socket fix,
  -  , predefined macro G__SUN,G__SUNPRO_C,G__SPARC added
  -  , 965 deactivated because of ROOT special symbol search problem
  973, 948, 969 still problem, Fixed again, ???
     , G__othermain, G__globalcomp exposed for libcint.dll
  974, store/restore bytecode param in G__loadfile
  975, 'if([enum val])' bug fix
  976, 'class A { A(nontype E) { } };' catch syntax error

  5.13.86 20 Dec 1998
  977, 'unsigned int a=0x80000000; a>>12;' bug fix
  978, 'enum x {a,b}; void f(x *y){} f(b);' bug fix
  -  , demo/tcpip, TCP/IP demo program added
  -  , demo/mthread, Multi-Thread demo program added
  979, iterator& operator=(iterator& x); scope bug fix
  980, basector, G__no_exec_compile bug fix

  5.13.87 8 Jan 1999
  981, Private dtor linkage in rootcint, bug fixed
  -  , 762 deactivated, seekg,seekp, need to verify portability
  982, reference member error message
  983, Txxx a = new Txxx; error rejected
  984, shl.c HPUX/egcs fix
  985, Double_t(1)/a bug fix
  986, f(){const int SIZE;static int a[SIZE];} bug fix, need verification
  987, f(){static int a[3]={1,2,3};} bytecode compile validation
  988, bytecode abort message
  989, f(int &,int a) { } byteocde POP bug fix
//________________________________________________________________________
//
//::>          VERSION  2.21/02   18/01/99 17.52.46
//
//
// 18/01/1999  11.07.10  by  Rene Brun
//
- Add new function TAxis::GetBinUpEdge.

- Delete option "B" (Bound) from TH1::Fit and TGraph::Fit.
  You can specify the limits on a parameter via TF1::SetParLimits.
  If (lower_limit >= upper_limit) the parameter is fixed.
  Note that you are not forced to fix the limits for all parameters.
  For example, if you fit a function with 6 parameters, you can do:
    func->SetParameters(0,3.1,1.e-6,0.1,-8,100);
    func->SetParLimits(4,-10,-4);
    func->SetParLimits(5, 1,1);
  With this setup, parameters 0->3 can vary freely
  Parameter 4 has boundaries [-10,-4] with initial value -8
  Parameter 5 is fixed to 100.

- Following a suggestion by Chris Jillings, modify the automatic
  generation of a new canvas name to avoid clashes with pad names
  obtained by dividing a canvas.
  The new scheme generates c1_n1 instead of c1_1 if c1 already exists.
  The change was in TCanvas::MakeDefCanvas.
//
// 17/01/1999  09.34.28  by  Rene Brun
//
- TF2::GetObjectInfo reports now correct position in case of a TF2 object
  drawn with the option "cont".

- TH1::GetObjectInfo reports now correct position in case of a TH2 object
  drawn with the option "cont".

- Implement non-equidistant contours in TH1::PaintContour.
  Changes in TH1::PaintContourLine prototype.
  Non-equidistant contours also available when painting a TF2.

- Add the following new functions to class TF2:
   Int_t    GetContour(Float_t *levels=0);
   Float_t  GetContourLevel(Int_t level);
   void     SetContour(Int_t nlevels=20, Float_t *levels=0);
   void     SetContourLevel(Int_t level, Float_t value);

   The previous data member fNlevels has been replaced by TArrayF fContour.

- Remove drawing of statistics box when painting a TF2.
//
// 16/01/1999  11.07.48  by  Rene Brun
//
- Modify TPad::SavePrimitive to use the new functions from TAttPad.
  With this change, the pad/frame attributes are now saved in the
  generated macro file.

- Add new functions in class  TAttPad:
     void SetFrameFillColor(Color_t color=1) {fFrameFillColor = color;}
     void SetFrameLineColor(Color_t color=1) {fFrameLineColor = color;}
     void SetFrameFillStyle(Style_t styl=0)  {fFrameFillStyle = styl;}
     void SetFrameLineStyle(Style_t styl=0)  {fFrameLineStyle = styl;}
     void SetFrameLineWidth(Width_t width=1) {fFrameLineWidth = width;}
     void SetFrameBorderSize(Width_t size=1) {fFrameBorderSize = size;}
     void SetFrameBorderMode(Int_t mode=1)   {fFrameBorderMode = mode;}
    + the corresponding Get functions.
    + the corresponding data members.

- Use the new functions from TStyle in the TPad constructor
  and also in TH1::PaintTitle and TH1::PaintStat.

- Extend functions in class TStyle. Add:
     void SetPadGridX(Bool_t gridx) {fPadGridX = gridx;}
     void SetPadGridY(Bool_t gridy) {fPadGridY = gridy;}
     void SetPadTickX(Int_t tickx)  {fPadTickX = tickx;}
     void SetPadTickY(Int_t ticky)  {fPadTickY = ticky;}
     void SetStatBorderSize(Width_t size=2) {fStatBorderSize=size;}
     void SetTitleBorderSize(Width_t size=2) {fTitleBorderSize=size;}
    + the corresponding Get functions.
    + the corresponding data members.

- Fix a problem in TF1::IntegralMultiple and in TF3::GetRandom3.
  In case of an interpreted user-defined function, the address of the arguments
   was not given to CINT. InitArgs must be called.
   (Thanks Stefan Kluth).
//________________________________________________________________________
//
//::>          VERSION  2.21/01   14/01/99 13.49.10
//
//
// 14/01/1999  14.21.56  by  Fons Rademakers
//
- TSocket, TUnixSystem, TWinNTSystem, TVmsSystem: improved error reporting
  on sockets. In the new version TSocket::Recv() returns either:

   0   -- peer has closed connection (SIGSEGV problem fixed)
  -1   -- general error
  -4   -- EWOULDBLOCK in case socket is in non-blocking mode and nothing to read

  and TSocket::Send() returns:

  -1   -- in case pipe is closed SIGPIPE signal is handled and -1 returned

- Tutorials file.C and na49view.C: adjusted size of some paves to contain
  correctly the text.
//
// 14/01/1999  12.49.16  by  Rene Brun
//
- Bug fixed in TH3F::Copy. This function was invoking TH3F::Copy instead
  of TH1F::Copy. (Thanks Alexander Zvyagin for reporting the problem)

- Several additional protections added in class THtml.
  The order of some ifs like if (a && b) changed to  if( b&& a).
//
// 12/01/1999  11.12.04  by  Fons Rademakers
//
- Port to HP-UX/egcs: changes in TUnixSystem and CINT_shl.c to force
  execution of ctors/dtors of global static objects when loading and
  unloading shared libraries. Small change also in H2ROOT since egcs
  on HP-UX also defines the symbol HIUX (for Hitachi HP-UX).

- Makefile for HP-UX/egcs.

- TFile/TDirectory: made copy ctor and assignment operators private,
  i.e. files and directories cannot be trivially copied.

- TList: optimization in At(). Thanks Victor P.
//
// 12/01/1999  10.03.24  by  Rene Brun
//
- Fix a problem in TMinuit::SetFCN when this function is called interactively.
  The 4th parameter to FCN IFLAG was incorrectely passed by reference
  instead of value. (thanks Stefan Kluth for reporting the problem)

- Modify test program minexam to be run in batch mode with the Makefile
  or interactively. See comments
//
// 12/01/1999  08.03.20  by  Valery Fine(fine@mail.cern.ch)
//
- Upgrade of classes TPolyLine3D and TPolyMarker3D.
  I am offering a correction for TPolyMarker3D, since my users were surprised
  that this class can not allocate points dynamically but TPolyLine3D can.
  So I did TPolyMarker3D allocating space dynamically as well (a'la TpolyLine3D).
  Mean time I found one bug with TPolyLine3D::SetNextPoint(...) and did some
  clean up as well.
  The only question. At the moment both classes expand the space by one point.
  May be it would be more clever to allocate some extra space in advance.
  (See:
      void TPolyMarker3D::SetPoint(Int_t n, Float_t x, Float_t y, Float_t z)
      void TPolyLine3D::SetPoint(Int_t n, Float_t x, Float_t y, Float_t z)
  )
//
// 11/01/1999  08.34.33  by  Rene Brun
//
- Implement new functions in class TF1,TF2,TF3 to support multiple integrals.
   TF2::Integral(Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax);
   TF3::Integral(Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax, Float_t zmin, Float_t zmax);
  These two new functions use the new function TF1::IntegralMultiple.
  TF2::GetRandom2 modified to invoke TF2::Integral instead of computing
  the function integral bin by bin.

- Change specifications of TH1::Fit and TGraph::Fit when
  the "B" (Bound) option is specified.
  When the Bound option is used, if parmin=parmax, the parameter is not bound
  When the Bound option is used, if parmin>parmax, the parameter is fixed.
  In the previous algorithm, when the Bound option was specified, the parameter
  was fixed if parmin >= parmax.
//
// 08/01/1999  17.50.42  by  Rene Brun
//
- Implement new function TH1::ProjectionZ (see comments in code).
   Thanks to original implementation by Paola Collins and Hans Dijkstra.
//
// 07/01/1999  14.48.00  by  Rene Brun
//
- Change algorithm in TGaxis::PaintAxis when drawing the x10 exponent
  on the X axis. (Thanks Julio Lozano)

- Delete a wrong comment from TEventList::Resize. (Thanks Damon Spayde)
//
// 06/01/1999  09.04.25  by  Rene Brun
//
- Change argument in TROOT:SetDefCanvasName from type Text_t to const Text_t.

- Add support for variable bin size histograms in h2root.
  Take into accounts leading and trailing blanks in column names.

- Fix a memory leak in TPythia constructor. fPrimaries was already
  allocated as a TObjArray in the base class TGenerator.
  (Thanks to Pasha Murat for reporting this problem).

- WARNING: IMPORTANT CHANGE
  =========================
  All TH1::Fill and TProfile::Fill functions have been changed
   from void  TH1::Fill
   to   Int_t TH1::Fill
  These functions return -1 in case of under/overflow and the bin
  number otherwise. This new feature is used in case of 2-d histograms
  to not fill the statistics parameters in case of under/overflows.
  As a result, TH1::GetCovariance, GetRMS, etc correctly return
  the parameters not taking into account the under/overflows.
  ===> IN CASE YOU DERIVE FROM TH1, UPDATE your Fill prototype.

- Changes in TH1::ProjectionX, TH1::ProjectionY, TH1::FitSlicesY, TH1::FitSlicesZ
  When generating the projected histogram, the errors in the source
  histogram are now taken into account (Thanks Hans Dijkstra).

//________________________________________________________________________
//
//::>          VERSION  2.21/00   04/01/99 07.57.27
//
//
// 03/01/1999  23.25.02  by  Valery Fine(fine@mail.cern.ch)
// G3D package has been changed:
//
    G3D system made more flexible:
    The goal was to separate TShape and TNode classes to be able
    to use TShape's classes without TNode's

    Methods: TNode::UpdateMatrix
             TNode::UpdateTempMatrix(...)
             TNode::Local2Master(Float_t *,Float_t *)
             TNode::Local2Master(Double_t *,Double_t *)

    were moved from TNode class to TGeometry class. Several new data-members
    were added to support these new methods as well.
    All TShape's DistancetoPrimitive(..) and Paint(...) methods were adjusted.

    New methods:
                TShape::SetPoints
                TShape::ShapeDistancetoPrimitive(...)
    have been implemented.

    G3D patch:
    The loop:
      for (Int_t i = 0; i < numpoints; i++)
             gNode->Local2Master(&points[3*i],&points[3*i]);
    was moved from all Paint() methods of these classes derived from TShape
    to TShape::ShapePaint() method directly.
//
// 22/12/1998 13.24.52  by  Rene Brun
//
- Changes in TPostScript::DrawPS when drawing fill areas with the special fill
  area interior styles in the range 3000->3100. This problem was reported
  a long time ago by Peter Wienemann.

- Modify THtml header to include TString required for the generation
  of the dictionary. (thanks Stefan Kluth).

- Modify TPaveLabel::PaintPavelabel. The font size was not correct when
  the canvas width was smaller than the canvas height.

- Modify TPave::ExecuteEvent to add new functionality.
  When the object bit kNameIsAction is set, double-clicking on a TPave
  object executes the action (via the interpreter) in TPave::GetName().
  This change has also required a change in TBox::ExecuteEvent.


