//*CMZ :          01/02/2000  16.36.26  by  Rene Brun
//*CMZ :  2.23/12 01/02/2000  16.21.14  by  Rene Brun
//*CMZ :  2.23/11 12/01/2000  12.11.46  by  Rene Brun
//*CMZ :  2.23/10 17/12/99  12.31.22  by  Rene Brun
//*CMZ :  2.23/09 26/11/99  08.35.55  by  Rene Brun
//*CMZ :  2.23/08 02/11/99  09.36.56  by  Rene Brun
//*CMZ :  2.23/07 27/10/99  18.00.59  by  Rene Brun
//*CMZ :  2.23/06 21/10/99  08.44.00  by  Rene Brun
//*CMZ :  2.23/05 20/10/99  19.01.08  by  Rene Brun
//*CMZ :  2.23/04 13/10/99  19.04.04  by  Rene Brun
//*CMZ :  2.23/03 27/09/99  15.19.38  by  Rene Brun
//*CMZ :  2.23/02 07/09/99  18.25.12  by  Rene Brun
//*CMZ :  2.23/01 01/09/99  11.55.46  by  Rene Brun
//*CMZ :  2.23/00 18/08/99  18.33.08  by  Rene Brun
//*-- Author :    Rene Brun   18/08/99
//
// 01/02/2000  16.35.57  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.23/12   01/02/2000 16.21.14
//
//
// 31/01/2000  11.23.56  by  Rene Brun
//
- CheckByteCount
  ==============
  All Root Streamers include now the CheckByteCount facility.
  All LinkDef files modified accordingly.
  For users intending to use the same facility, modify your Linkdef file
  adding a + character at the end of the class name, eg:
          #pragma link C++ class TLeafB+;
  The code generated for Streamers with the bytecount facility is backward
  compatible with Streamers not including this code.

- Modify Root header files declaring pointers to basic types in view
  of the planned rootcint extensions. For example the TPolyLine header
  looks like:
        Int_t        fN;            //Number of points
        Float_t      *fX;           //[fN] Array of X coordinates
        Float_t      *fY;           //[fN] Array of Y coordinates
        TString      fOption;       //options
  The string [fN] immediatly following the // indicates that the length
  of the arrays fX and fY is the value of the data member fN.
  Thanks to this change, rootcint will be able to automatically generate
  a valid Streamer for the class.

- Several headers modified for "char*" to "const char*". This concerns
  the G3D classes in particular.

- The StreamerInfo facility
  =========================
  A new function  const char *TObject::StreamerInfo has been introduced.
  Returns a string describing the names/types of object attributes
  as written by the Streamer function.
  A set of corresponding new functions has been added to the class TClass.
     void TClass::SetStreamerInfo(const char *info)
        info is a string describing the names and types of attributes
        written by the class Streamer function.
        If info is an empty string (when called by TObject::StreamerInfo())
        the default Streamer info string is build. This corresponds to
        the case of an automatically generated Streamer.
        In case of user defined Streamer function, it is the user responsability
        to implement a StreamerInfo function (overriding TObject::StreamerInfo).
        The user must call IsA()->SetStreamerInfo(info) from this function.
    void TClass::FillStreamerInfoList(TList *list)
        Fill a TList with all attributes names and types corresponding
        to this class, base classes, used classes, etc. The TList will contain
        a list of TNamed objects with attributeName and attributeType.
        class names are recursively analyzed to end-up with basic types only
        Other types are resolved to known basic types.
    void TClass::PrintStreamerInfoList(TList *list)
        print StreamerInfo items in the list.
        If the list pointer is null, print StreamerInfo for this class.
        For example, the following statement:
           TArrow::Class()->PrintStreamerInfoList(0);
        produces the following output:
           TArrow;1
                TLine;TAttFill;Float_t fAngle;Float_t fArrowSize;
                TString fOption;
           TLine;1
                TObject;TAttLine;Coord_t fX1;Coord_t fY1;
                Coord_t fX2;Coord_t fY2;
           TObject;1
                UInt_t fUniqueID;UInt_t fBits;
           TAttLine;1
                Color_t fLineColor;Style_t fLineStyle;Width_t fLineWidth;
           TAttFill;1
                Color_t fFillColor;Style_t fFillStyle;

   The TObject::StreamerInfo() function may be redefined in a class, eg
      const char *Myclass::StreamerInfo() {
         IsA()->SetStreamerInfo("TObject;TAttLine;fX;fY;Int_t i,j,k;Float_t x,y,z;");
         return IsA()-GetStreamerInfo();
      }
      This corresponds to the description of Streamer (write part)
            TObject::Streamer(R__b);
            TAttLine::Streamer(R__b);
            R__b << fX;
            R__b << fY;
            Int_t i,j,k;
            i = ...;
            j = ...;
            k = ...;
            R_b << i;
            R_b << j;
            R_b << k;
            Float_t x,y,z;
            x = ...;
            y = ...;
            z = ...;
            R_b << x;
            R_b << y;
            R_b << z;

   The StreamerInfo facility is currently implemented in the TTree system.
   The class TTree includes a new member:
        TList *fStreamerInfoList;
   that contains the StreamerInfo for all classes referenced in the
   Tree branches. This information is saved in the Tree header.
   We intend to make further extensions in future versions to use this
   information in: browsers, Inspectors, MakeClass.
   It should be possible to read any Root Tree when the code used to fill
   the Tree is not available any more.
   In the same way, we intend to add the StreamerInfoList in the TDirectory
   class to save the dictionary information of any object written into a
   Root file.

   We stronly suggest users implementing their own Streamers to also
   implement the corresponding StreamerInfo function.

- Functions DistancetoPrimitive and ExecuteEvent promoted from protected
  to public in classes TBox, TLine and Tmarker3DBox.

- Replace Text_t declarations by char in all Root classes.

- In classes TLorentzVector, TVector2 and TVector3, the TObject info
  is not Streamed anymore.

- New function TPad::WaitPrimitive(const char *pname, const char *emode)
  ======================================================================
  Loop and sleep until a primitive with name=pname
  is found in the pad.
  If emode is given, the editor is automatically set to emode, ie
  it is not required to have the editor control bar.
  The possible values for emode are:
   emode = "" (default). User will select the mode via the editor bar
         = "Arc", "Line", "Arrow", "Button", "Diamond", "Ellipse",
         = "Pad","pave", "PaveLabel","PaveText", "PavesText",
         = "PolyLine", "CurlyLine", "CurlyArc", "Text", "Marker", "CutG"
  if emode is specified and it is not valid, "PolyLine" is assumed.
  if emode is not specified or ="", an attempt is to use pname[1...]
  for example if pname="TArc", emode="Arc" will be assumed.
  When this function is called within a macro, the macro execution
  is suspended until a primitive corresponding to the arguments
  is found in the pad.
  While this function is executing, one can use the mouse, interact
  with the graphics pads, use the Inspector, Browser, TreeViewer, etc.
  Examples:
    c1.WaitPrimitive();      // Return the first created primitive
                             // whatever it is.
    c1.WaitPrimitive("ggg"); // Set the editor in mode "PolyLine/Graph"
                             // Create a polyline, then using the context
                             // menu item "SetName", change the name
                             // of the created TGraph to "ggg"
    c1.GetPrimitive("Arc");  // Set the editor in mode "Arc". Returns
                             // as soon as a TArc object is created.
    c1.GetPrimitive("lat","Text"); // Set the editor in Text/Latex mode.
                             // Create a text object, then Set its anme to "lat"

  The following macro waits for 10 primitives of any type to be created.
  {
     TCanvas c1("c1");
     TObject *obj;
     for (Int_t i=0;i<10;i++) {
        obj = gPad->WaitPrimitive();
        printf("Loop i=%d, found objIsA=%s, name=%s\n",
               i,obj->ClassName(),obj->GetName());
     }
  }

- IMPORTING NEW CLASSES FROM STAR
  ===============================
  A new set of classes written in the context of the STAR collaboration
  at BNL have been added to the root.cmz file. The corresponding source
  files are not part of the released source tree. Discussions are going on
  with the STAR group to make several suggested changes.
//
// 29/01/2000  02.49.59  by  Fons Rademakers
//
- rootd: a new authentication method is to create a file ~/.rootdpass
  containing an encrypted password. If this file exists its password
  is used for authentication. This method overrides all other
  authentication methods. To create an encrypted password do
  something like:
     perl -e '$pw = crypt("<secretpasswd>","<salt>"); print "$pw\n"'
  and store this string in ~/.rootdpass.
  Use this solution if your system has shadow passwords and you
  cannot run rootd from inetd. Or if you don't want to use your
  real password with rootd.
//
// 27/01/2000  18.44.06  by  Fons Rademakers
//
- Cleanup in the thread releated classes. Also removed any special
  R__THREAD ifdef's, so there is now only one thread capable version
  of ROOT instead of two different versions. All decks related
  to thread involved.

- TUnixSystem: Which() now also correctly finds files specified as
  dir/file.

- TVector: another fix to ResizeTo().

- TBuffer: CheckByteCount() returns now 0 in case of success or
  the amount of bytes beings skipped. This allows
  explicit error trapping in Streamers().

- TFile: fix in case gProof symbol is not known anymore to CINT.
//
// 21/01/2000  12.50.35  by  Rene Brun
//
- A small fix in TCanvas::EditorBar. The tooltip text for latex and marker
  were inverted (thanks Nick van Eijndhoven ).

- A small fix in TF1::Derivative (thanks Federico Carminati) in case
  the requested point is at the boundaries.

//
// 20/01/2000  18.03.54  by  Rene Brun
//
- Implement a better algorithm in TGraph::Fit to take into account
  errors along X and Y. This algorithm was proposed a long time ago
  by Jacek Holeczek, but never implemented , see URL:
        http://root.cern.ch/root/roottalk/roottalk98/0382.html
  The modification is in TGraph::GraphFitChisquare and is effective
  when a TGraphErrors::Fit is called.

- Port to LynxOS (thanks Vincent Boudry for providing a test machine).
  add new Makefile.lynxos
  Modify RConfig.h to support new compiler flag R__LYNXOS.
  Mods in Makemacros and makelib.
  Changes have been made in the following classes/functions
  class TUnixSystem, TMapFile, TNetFile, TGFSContainer.
  function TMinuit::mnexcm (TString replaced by const char*).
  R__LYNXOS flag added in C functions getline, attach and keys.

- add new function TMinuit::mnhelp(). It is equivalent to mnhelp("*").

- Modify the logic to accumulate/reset statistics for a 2-d histogram.
  2-d stats are now OK following TH1::Add, Divide and Multiply calls.
  New function TH1::PutStats.

- New versions of TPGON and TPCON from Valery Fine. The definition
  of parameters is consistent with the definition of these shapes in Geant3.

- fix a problem in TTreePlayer::MakeClass when generating the code
  to set the branch address of a branch corresponding to a class
  not available.
//
// 14/01/2000  10.27.08  by  Rene Brun
//
- Add two new functions in TH1:
    virtual Float_t  GetTitleSize(Option_t *axis="X");
    virtual void     SetTitleSize(Float_t size=0.02, Option_t *axis="X");

- Add TGraph::GetFunction(const char *name).

- Modify TTreePlayer::DrawSelect to not call gPad->Clear() in case one
  generates a 2-d or 3-d histogram. This has a side-effect when
  a TPostScript object was open to store multiple canvases.

- One of the TRotmatrix constructors was not setting correctly fType.
  The rotation matrix was called in case of an identity matrix.
  (thanks Andrzej Olszewski for reporting).

- Modify all TArrayx classes to preset the array to 0.
  When lNew is not used or on some machines (aix), the array was not
  preset.
//________________________________________________________________________
//
//::>          VERSION  2.23/11   12/01/2000 12.11.46
//
//
// 12/01/2000  09.56.24  by  Rene Brun
//
- Modify TTreePlayer::MakeClass and TTreePlayer::MakeCode to support
  branches with variable length strings.

- Move TGraph::LeastSquareFit and TGraph::LinearLeastSquareFit
  from public to private. These two functions use internally the
  static variables xfirst, xlast.
//
// 11/01/2000  18.43.07  by  Rene Brun
//
- Fix a bug in TTreeFormula::EvalInstance in case 4 when dividing
  expressions like x/y where y=0. the variable pos was not decremented
  in this case. (thanks Alexey Toptygin for reporting this case).
  The same fix has been applied to TFormula::EvalPar.

- Fix a bug in TLeafF::ReadBasketExport when a TClonesArray contains
  a data member that is an array and the number of elements in the array=1.
  We had a test in this case to avoid calling ReadFastArray.
  The test was "if(n==1)". Now changed to "if(n*flen==1)".
  (thanks to George Irwin and Stephan Hurling for reporting this problem).
  The same fix has been applied to TLeafI and TLeafS.

- Replace stack TObjArray loc in TGeometry::Get by a heap object instead.
  The static object was generating problems when the TGeometry object was
  destroyed before the file destructors.

- some cleanup in the original TAxis3D code from Valery.

- Modify the TMinuit constructor to allocate mne doubles to fGin
  instead of mni doubles. This was generating a problem when the
  option Gradient was used.
//
// 11/01/2000  08.53.16  by  Valery Fine
//
- TGWin32WindowsObject - kKeyPress event has been activated for TCanvas
                         under Windows

- new G3D class: TAxis3D to paint axis "around" TView object
//
// 09/01/2000  15.54.21  by  Rene Brun
//
- Implement new class TInspectCanvas. This class replaces
  the functionality previously provided by TPad::InspectObject.
  New functions added. Two buttons "Backward" and "Forward"
  can be used to naviguate in the list of already inspected
  objects.
  Files cint_gpad, gpad_linkdef and make-macros updated.

- Remove functions TVirtualPad::InspectObject and TPad::InspectObject.

- TObject::Inspect invokes directly the static function
  TInspectCanvas::Inspect via the interpreter.

- Fix a minor Y2K bug in TRINT::PrintLogo.

- Minor update in zdemo (do not set the TPaveLabel size).

- In class TButton, use a TLatex instead of TText.

- In TBox::ExecuteEvent remove obsolete statements from the time
  when TVirtualPad derived from TBox.
//
// 07/01/2000  15.40.08  by  Rene Brun
//
- Several changes in classes TVirtualPad, TPad and TCanvas to implement
  the AutoExec facility.
  The class TPad has a new data member TList *fExecs.
  fExecs may contain one or more TExec objects.
  Use TPad::addExec to enter a new TExec object in the list
  Use TPad::DeleteExec to remove&delete a TExec from the fExecs list.
  When a pad event occurs (mouse move, click, etc) all the commands
  contained in the fExecs list are executed in the order found in the list.
  This facility is activated by default. It can be deactivated by using
  the canvas "Option" menu.
  The following examples of TExec commands are provided in the tutorials:
  macros exec1.C and exec2.C.
  Example1 of use of exec1.C
  ==========================
  Root > TFile f("hsimple.root")
  Root > hpx.Draw()
  Root > c1.AddExec("ex1",".x exec1.C")
   At this point you can use the mouse to click on the contour of
   the histogram hpx. When the mouse is clicked, the bin number and its
   contents are printed.
  Example2 of use of exec1.C
  ==========================
  Root > TFile f("hsimple.root")
  Root > hpxpy.Draw()
  Root > c1.AddExec("ex2",".x exec2.C")
    When moving the mouse in the canvas, a second canvas shows the
    projection along X of the bin corresponding to the Y position
    of the mouse. The resulting histogram is fitted with a gaussian.
    A "dynamic" line shows the current bin position in Y.
    This more elaborated example can be used as a starting point
    to develop more powerful interactive applications exploiting CINT
    as a development engine.

- Include some corrections from Valery in:
  TShape:  Improve drawing speed
  TControlBarImp: working now on NT

- Modify TBox::ExecuteEvent, TPaveVar::ExecuteEvent, TPad::ExecuteEvent
  to execute the case kMouseEnter when the pad is not editable.
  With this change, the tooltip is again operational in all classes
  deriving from TBox and TPad such as TPavevar and TButton.
//
// 06/01/2000  08.24.52  by  Rene Brun
//
- Modify TNamed::SetName, SetTitle to Modify the current pad only
  if the bit kObjInCanvas is set.

- Protection added in TBasket::Streamer in case fLast > fBufferSize.
  This case could happen in case one entry occupies more than the original
  declared buffer size. (thanks Bill Love & Victor Perevoztchikov).

- Implement a new constructor in class TGaxis. The new constructor has
  an argument "funcname" replacing the arguments wmin,wmax and referencing
  an existing TF1 object mapping the user coordinates in the pad with
  the axis values. A new data member fFunction points to this TF1.
  The function TGaxis::PaintAxis has been updated to support the new
  functionality (thanks Mathieu de Naurois for this contribution).

- Modify the test program $ROOTSYS/test/MainEvent to add an new case
  with arg4 = 2 (write=0, fill=0).

//
// 04/01/2000  08.49.55  by  Rene Brun
//
- New styles "Bold" and "Video" are created by default (thanks Art Poskanzer).
  New static function TStyle::BuildStyles creating all standard styles
  "Default", "Plain" ,"Bold" and "Video".
  This function is called by the TROOT constructor.
//
// 03/01/2000  19.55.50  by  Rene Brun
//
- Reimplement TTreeViewer::BuildInterface. By default all Tree variables
  are created in the viewer. The canvas size is set with vertical and
  horizontal scroll bars.
  Remove the fCommand TPaveVar. Previous fCommand functionality is now
  provided by the TButton fRecord.

- Modify TPaveVar constructor to take the text attribute
  from the TreeViewer.
  Optimize speed by removing some unnecessary calls to TPad::Modified.

- Changes in TButton::ExecuteEvent. Do not call canvas->Modified.
  Automatically repaint current button title.

- Modify TPaveLabel::PaintPaveLabel. Do not use automatic text size
  computation when the text size is not zero or 0.9.

- Modify Aclock constructor in $ROOTSYS/test/Aclock.
  The canvas size may be specified as an optional argument.
//
// 31/12/1999  15.06.13  by  Rene Brun
//
- Modify TPad::Paint. Replace the statement fPrimitives->Paint(option)
  by an explicit loop. Following the modification in TCollection::Paint,
  TPad::Paint must transfer the GetDrawOption instead of option.
//
// 30/12/1999  17.32.33  by  Rene Brun
//
- Fix a problem in TTreeViewer::IsUnderW.
  This is a side effect of the introduction of the command/echo buttons.
  The test to find if a TPaveVar is under the selection button was not correct.
  When the selection TPavevar was moved out of the selection button,
  the command/echo TPaveVar was selected by mistake.

- Some improvements in TTreePlayer::MakeClass:
  Generate new function GetEntry.
  Take into account case of two levels of objects in one branch when
  generating the statement const Int kMaxBranchname. For example
  the branch HRichHit.fData.fRing generated the code kMaxHRichHit_fData.fRing
  instead of kMaxHRichHit_fData_fRing (thanks Thomas Eberl).

- Promote data members of class TGaxis from private to protected.

- Modify TTreePlayer::DrawSelect to use the new possibilities provided
  by the new version of TAxis::FindBin and TH1::RebinAxis.
  DrawSelect sets automatically the bit kCanRebin in the created histogram.
  In the previous versions, the parameter SetEstimate was essential to
  compute the histogram axis limits from the SetEstimate number of entries.
  With the new version, a first guess for the axis limits is computed
  from the current SetEstimate. If a new value is outside the axis limits,
  the limits will be automatically recomputed by doubling the current
  axis range. This algorithm works for 1-d, 2-d and 3-d histograms.

- Add new Function TH1::RebinAxis(Axis_t x, const char *axis="X")
  This function is automatically called by TAxis::FindBin, but may also
   be called by a user to automatically recompute the axis limits such
   that x is inside the axis limits.

- New option in TH1::Reset. If option="ICE", only the Integral, the Contents
  and the Errors are reset. Existing statistics and number of entries are
  not reset. This new option is used by the new TH1::RebinAxis.

- New function TAxis::FindFixBin (a copy of the previous FindBin).
  New functionality in TAxis::FindBin. In case of an underflow or overflow,
  FindBin may invoke TH1::RebinAxis if the new bit TH1::kCanRebin is set.
  Many calls to TAxis::FindBin have been replaced by calls to TAxis::FindFixBin
  in classes TH1, TAxis and THistPainter.
//
// 29/12/1999  14.20.26  by  Rene Brun
//
- Modify TCollection::Paint to use the argument option instead
  of taking the GetDrawOption for the current element in the list.

- Initialize member fAngle in the default TArrow constructor.

- In TMarker3DBox::SizeofH3 and TPolyMarker3D::SizeofH3, take into
  account the size of the DrawOutlinetoCube.

- Modify THistPainter::PaintH3 to specify the argument option
  when drawing the OutlinetoCube (for x3d).

- Add more comments in the TH1 documentation.
//
// 28/12/1999  18.50.04  by  Rene Brun
//
- New class TExec in BASE.
   TExec is a utility class that can be used to execute a CINT command.
  This class is useful to execute one or more commands when painting
  objects such as histograms or graphs.
  When a TExec object is found in the list of functions of graphs or
  histograms, its Paint function is called to execute a command.
  The command in turn can invoke a CINT macro to paint graphics objects
  at positions depending on the histogram or graph contents
  Example:
     Assume an histogram TH1F *h already filled.
     TExec *ex1 = new TExec("ex1","DoSomething()");
     TExec *ex2 = new TExec("ex2",".x macro.C");
     h->GetListOfFunctions()->Add(ex1);
     h->GetListOfFunctions()->Add(ex2);
     h->Draw();
  When the Paint function for the histogram will be called, the "DoSomething"
  function will be called (interpreted or compiled) and also the macro.C.
  Modify BASE2_LinkDef, cint_base2 and makemacros accordingly.

- Modify THistPainter::PaintFunction to save the current pad before
  painting objects in the list of functions and restore it after painting.
  With the introduction of the new class TExec, gPad may be modified.

- New functions in TH1 class
    Int_t    GetMaximumBin();
             returns the location of the bin with the maximum value.
             If histogram is 1-d, returns locmax below.
    Int_t    GetMaximumBin(Int_t &locmax, Int_t &locmay, Int_t &locmaz);
             returns the location of the bin with the maximum value.
             returns the bin numbers in x, y, z corresponding to the maximum.
    Int_t    GetMinimumBin();
             returns the location of the bin with the minimum value.
             If histogram is 1-d, returns locmix below.
    Int_t    GetMinimumBin(Int_t &locmix, Int_t &locmiy, Int_t &locmiz);
             returns the location of the bin with the minimum value.
             returns the bin numbers in x, y, z corresponding to the minimum.

- Rewrite functions TH1::GetMaximum and TH1::GetMinimum.
  The new algorithm works for 1,2 and 3-d histogram and takes into account
  the current bin range.

- Remove TH2x::Fill(Axis_t, Stat_t) from the list of private functions.
  It is now possible to fill a 2-d histogram with h->Fill(x,y)
  where the argument y may be float or double.
//
// 22/12/1999  22.11.33  by  Rene Brun
//
- One more protection added in TKey::ReadObj in case R__Unzip returns nout=0.
  In this particular case, not only one must break the loop but also
  the obj->Streamer must not be executed (thanks Valery Fine).

- Optimize algorithm in THistPainter::Init calculating the minimum on y axis
  in case of a logy scale. In case of bins with null contents, the minimum
  is set to max(1,ymax/1000) if ymax is greater than 1 and to ymax/1000
  if ymax < 1.

- In TGaxis::PaintAxis add a protection against an infinite loop
  when drawing secondary and tertiary tick marks. This could happen
  in case the axis limits contain an infinite or NaN number.

- Reimplement code for TArrayF::Set. The new logic preserves the previous
  array contents. Thanks George Heintzelman for the suggestion.
  Same modification in TArrayC::Set, TArrayS::Set, TArrayI::Set, TArrayL::Set
  and TArrayD:Set.

- Add a new data member fName in TCollection with corresponding SetName
  and GetName. As a result, all Root collections can now be named.
  Modify TCollection::Streamer, TMap::Streamer, TObjArray::Streamer
  and TClonesArray::Streamer to take into account the schema evolution.
//
//________________________________________________________________________
//
//::>          VERSION  2.23/10   17/12/99 12.31.22
//
//
// 17/12/1999  11.20.52  by  Rene Brun
//
- Modify TMapfile.h (due to one more MS oddity !!)
  Because Microsoft has many include files with statements such as
    #define GetObject  xxxxx
  one has to undo all this garbage by using a Root well know technique:
    including Windows4Root.h

- Activate button "Hist" in the TTreeViewer. One can press this button
  while the histogram is being filled by a previous "Draw" command
  to display the current histogram during the filling process.

- Implement a new option "sames" in TH1::Draw.
  When option "same" is specified, the statistic box is not drawn.
  Specify option "sames" to force painting statistics with option "same"
  When option "sames" is given, one can use the following technique
  to rename a previous "stats" box and/or change its position
  Root > TPaveStats *st = (TPaveStats*)gPad->GetPrimitive("stats")
  Root > st->SetName(newname)
  Root > st->SetX1NDC(newx1); //new x start position
  Root > st->SetX2NDC(newx2); //new x end position
  Root > newhist->Draw("sames")
//
// 16/12/1999  19.08.50  by  Rene Brun
//
- Remove data member fTimerInterval from TTreePlayer (also Get/Set).
  Add TTree::GetTimerInterval.
  Modify TTreePlayer::EntryLoop to call the fTree->GetTimerInterval.
  With this change, the timer is now operational in the TreeViewer
  and the vertical slider shows the progress in the file(s).

- Font size optimisation in TPad::InspectObject. This is the function
  called by TObject::inspect(). In many cases for large objects, the
  font size was too small.

- Add a protection in TKey::ReadObj in case one part of a file has
  been corrupted (thanks Valery Fine).

- Add new attribute fTitleStyle in TStyle (fill area style for title box)
  void  TStyle::SetTitleStyle(Int_t style=1001)
  Int_t TStyle::GetTitleStyle().
  Modify THistPainter::PaintTitle to use the new TStyle::GetTitleStyle.

- Increase buffer to print a row in the stats box from 32 to 64 characters.

- Protect TKey::Browse in case the current directory is not the
  directory referenced by the key.

- Modify TLatex::Paint to support NDC coordinates.
  One can now do:
     TLatex l(.5,.5,"text in NDC");
     l.SetNDC(); // this means that l has its coordinates set in NDC
     l.Draw();

- Document option "HIST" in TH1::Draw.

- Several changes in class TDatabasePDG (thanks Marcel Kunze).
  The static function Instance previously inline has been moved to the
  implementation file to avoid problems with DLLs on NT.
  New function TDatabasePDG::ReadPDGtable(const char *filename).
  Instead of using the default Init function one can call this function
  to read particle definition from a table.
  An example of table has been inserted in $ROOTSYS/tutorials/pdg.dat.
  The PDGcode for the Upsilon(4S) has been changed from 40553 to 300553.


- Remove TAttParticle::Hash. This functions prevented a search in
  the particle list by name.

- In TPaveText::SavePrimitive and TPaveLabel::SavePrimitive, take into account
  option "NDC" when generating the code for the constructor.
  Save the fBorderSize attribute.
//
// 16/12/1999  02.06.52  by  Fons Rademakers
//
- TRootBrowser: each browser sets now the gDirectory before
  executing an action.

- TGFileDialog, TGFSContainer: don't change anymore current working
  directory. TGFileDialog now returns a full pathname instead of
  a file name (in the new working directory).

- TProof, TProofServ, TGListBox: renamed Active() to IsActive().
//
// 14/12/1999  20.07.46  by  Fons Rademakers
//
- TObjArray: fixed bug in AddAtFree(), fLast was not correctly updated.

- TEnv: fix for handling system.rootrc.

- Exported to CINT: kWarning, kError, kSysError and kFatal.
//
// 13/12/1999  19.51.49  by  Fons Rademakers
//
- TProofServ: don't use global gProofServ anymore via interpreter
  interface, use static function TProofserv::This() instead.
//
// 13/12/1999  09.38.27  by  Rene Brun
//
- Add 3 new functions in class TRandom (suggested by Christian Lacunza).
   virtual  Double_t Exp(Double_t tau);
   virtual  UInt_t   Integer(UInt_t imax);
   virtual  Double_t Uniform(Double_t x1=1);
     where:
        Exp returns an exponential deviate  exp( -t/tau )
        Integer returns a random integer on [ 0, imax-1 ]
        Uniform returns a uniform deviate on the interval ( 0, x1 ].
   Modify return type from Float_t to Double_t for:
   virtual  Double_t Gaus(Float_t mean=0, Float_t sigma=1);
   virtual  Double_t Landau(Float_t mean=0, Float_t sigma=1);

//
// 11/12/1999  16.44.04  by  Rene Brun
//
- Add output of cint/sunstrm in script install_others.

- Modify script bind_lib_alpha_cxx. Under alpha/cxx, libCore must contain libGraf.
  The loader under alpha seems to not correctly initialize some dynamically
  linked libs. Already reported to Compaq.

- On all Unix systems, FLT_MAX is in float.h. (was assuming in math.h before).

- Modify importcint (SOLARIS and KCC case) for libstrm and sunstrm.

- Fix a problem in TPad::PaintBorder when the pad fill area=0.
  This problem was introduced in the early 2.23 when changing the inheritance
  from TWbox/TBox in TPad. With this fix, pads will a fill area=0 are
  correctly repaint during an axis zoom/unzoom.
//
// 10/12/1999  16.52.05  by  Rene Brun
//
- Small algorithm change in THistPainter::PaintBoxes.
  the minimum box size in x or y has been changed from 1 pixel to 0.5pixel.

- Modify TBranch and TTree to support any type of file including
  remote files (ROOT, HTTP, RFIO, etc).
  Invoke the static function TFile::Open instead of the TFile constructor.

- Modify TPad::UseCurrentStyle to inherit the pad color from TStyle::GetPadColor
  instead of TStyle::GetCanvasColor. (thanks Christian Lacunza for the remark).

- Add an optional paramter to TParticle::GetPDG():
   TParticlePDG *TParticle::GetPDG(Int_t mode=0)
   returns a pointer to the TParticlePDG object using the pdgcode
   if mode == 0 (default) always get a fresh value for the pointer.
   if mode != 0 this function returns directly the previously
                computed pointer from a previous call
   One can use mode=1 (faster) when the TParticle object is not part of a
   TClonesArray used in split mode in a Root TTree.
//
// 10/12/1999  15.33.32  by  Fons Rademakers
//
- TMapFile: correctly handle a growing TMapFile. The "size" argument
  in TMapFile::Create() is a specification of the minimum file size.
  Also optimize the initial TBuffer size to match the average size
  of the objects in the TMapFile (SumBuffer() and GetBestBuffer()).
//
// 09/12/1999  12.01.41  by  Fons Rademakers
//
- TObjArray, TClonesArray: recalculate fLast in Remove() and
  RemoveAt() (fix proposed by Valery Fine).

- TEnv: system version of envronment file is now called:
  system<name>, where <name> is ".rootrc": $ROOTSYS/system.rootrc.
  For backward compatibility also $ROOTSYS/.rootrc is checked if
  system.rootrc does not exist.

//
// 08/12/1999  22.12.58  by  Rene Brun
//
- Update makefiles: makelinuxkcc and makesolariscc5.

- Philippe Canal added a protection in X3D to avoid a segmentation
  violation in some cases. MakePolygonArray allocated exactly
  gSize3D.numPolys but sort use list[numPolys+1] ( sort first
  do a  while(v0 < v1) { ....; v0++ } and the next usage of v0
  is ... line 201: *v0 = *v3, so sort seems to use list[numPolys+1]
  as a temporary holding place.)
//
// 07/12/1999  18.04.57  by  Rene Brun
//
- Modify logic in THistPainter::Paint when invoking the PaintStat function.
  The previous logic assumed that all objects in the histogram list of functions
  were TF1 objects. The new code authorizes any kind of objects in this list.
  This is useful to draw objects associated to an histogram.
  (thanks Otto Schaile for the remark).

- Modify TH1::Fit to not delete the non-TF1 objects from the list of functions.
  Same for TGraph::Fit.

- Implement a new function in TTreePlayer to copy a Tree into another Tree
  by specifying a selection.
  This implies 3 new functions:
  TTree *TTreePlayer::CopyTree(const char *selection, Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0);
  TTree *TVirtualTreePlayer::CopyTree(const char *selection, Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0);
  TTree *TTree::CopyTree(const char *selection, Option_t *option="",Int_t nentries=1000000000, Int_t firstentry=0);
  The user invokes TTree::CopyTree. This function calls TTreePlayer::CopyTree
  via the abstract interface.
  See an example of use in TTreePlayer::CopyTree.

- Add an optional argument (Option_t *option="") in TTree::CloneTree.
  It is foreseen to use this option to implement the logic to copy only
  the active branches in the cloned tree.

- in TLegend constructor, do not create a TLegendEntry if the argument
  header is empty or null.

- In TPad::PaintPolymarker, add the logic to clip at the frame boundary
  or pad boundary.

- Small modification in TPad::PaintFillArea. When the new fill area
  clipping algorithm was introduced, a special case was forgotten.
  If the clipped area was just tangent at one of the pad boundaries,
  the segment was not clipped. This affected for example TPaveText objects
  occupying the entire pad (as in benchmarks.C).
//
// 01/12/1999  12.54.06  by  Fons Rademakers
//
- TVector: fixed a problem in ResizeTo(). When reducing a vector size
  by less than 7/8 of the original the memory is not actually recuperated.
  However, the real (old) memory size was not correctly saved in this
  case and wronly passed to the ReAlloc() method in case the vector
  had to be grown. This caused warning messages in CustomReAlloc2().

- Thread: protect PosixThreadInc.h for rootcint. Also removed erroneously
  <errno.h> from PosixCondition.

- TTree: two new classes TTreeResult and TTreeRow. Both classes derive
  from the abstract TSQLResult and TSQLRow. They provide access to
  results of simple TTree queries just like for SQL RDBMS queries.

- TTreePlayer: new method Query() (basically same as Scan()) but returning
  a TSQLResult object. Both Scan() and Query() are fixed and protected
  to be fully dynamic (no limit on number of columns).

- TTreeFormula: PrintValue() simplified to return non-formatted strings
  that can be used in to build a TTreeResult object. TTreePlayer::Scan()
  is doing all needed formatting.
//
// 01/12/1999  08.33.04  by  Rene Brun
//
- Add some improvements suggested by Otto Schaile in TCurlyArc
  and TCurlyLine:
  Change default values for wavelength and amplitude respectively
  to 0.02, 0.01 instead of 0.06 and 0.03.
  Save the wavelength and amplitude in TCurlyLine::SavePrimitive.
  Modify TCurlyLine.h to add enum kTooShort. When creating a TCurlyLine
  or arc too short, the bit kTooShort is set in the object.

- Protect TGaxis::Optimize in case the specified range includes NaN values.

- Add #include <errno.h> in TPosixThread.h
  change statement static void **volatile fgXArr;
  to static void ** volatile fgXArr;
  to avoid a CINT error when ruuning rootcint on TThread.h.

- Use the definition in math.h of FLT_MAX (maximum value for a float)
  instead of 1e30 in the following classes:
     TChain, TTree, TTreePlayer, TGaxis.
//
// 28/11/1999  13.53.35  by  Rene Brun
//
- Implement clipping for fill areas in TPad::PaintFillArea.

- Protect TPad::CreateNewPolyLine in case the start point and end point
  are on the same pixel.
//
// 27/11/1999  12.40.16  by  Rene Brun
//
- Modify the TGraph constructor to set the kClipFrame bit
  before returning in case the arrays x and y are not specified.
  (thanks Anton Fokin for reporting).
//________________________________________________________________________
//
//::>          VERSION  2.23/09   26/11/99 08.35.55
//
//
// 26/11/1999  08.33.14  by  Rene Brun
//
- Modify TTreePlayer::TakeEstimate and TPolyMarker3D::PaintH3
  to draw the axis for a 3-d scatter plot.
//
// 25/11/1999  19.13.44  by  Fons Rademakers
//
- Added set of SQL abstract base classes:
  TSQLServer, TSQLResult and TSQLRow.
  These abstract base classes provide an interface to typical SQL
  DBMS systems, like MySQL, Oracle, SysBase, Informix,etc.
  A concrete implementation for MySQL is available (separate tar
  file ftp://pcroot.cern.ch/root/MySQL.tar.gz). For more
  information see http://root.cern.ch/root/html/TSQLServer.html.
  Via the TSQLServer et al. classes it is trivial to access SQL
  DBMS via the interpreter and scripts.
//
// 25/11/1999  19.00.19  by  Rene Brun
//
- Modify THistPainter::PaintBox to draw a box with a size always greater
  than one pixel.

- In THistPainter activate option "Z". When option "Z" is specified
  together with one drawing option like "CONT", "COL", a Z scale palette
  is drawn on the right side of the pad.

- Add a new function TH1::GetPainter returning a pointer to the painter
  for a given histogram. Note that each histogram object has its own painter.

- In the new TTree::Delete, add code to delete all keys with the same
  name as the key being deleted. This is necessary because keys
  corresponding to previous TTree::AutoSave cannot reference the deleted baskets.

- Modify TClonesArray::ExpandCreate to uncomment a piece of code
  previously deactivated. Thanks Fred Gray for fixing this problem.
  A new function TClonesArray::ExpandCreateFast is now called by
  TBranchClones::GetEntry instead of TClonesArray::ExpandCreate.
//
// 24/11/1999  18.59.00  by  Rene Brun
//
- Reimplement TTree::SetBranchStatus such that
      tree->SetBranchStatus(branchname,0)
  TTree::UpdateActiveBranches deleted.
  All TBranch::GetEntry functions have an additional parameter Int_t getall.

- Take into account overflow bins in the following functions:
    TH1::ProfileX
    TH1::ProfileY
    TH1::ProjectionX
    TH1::ProjectionY
    TH1::ProjectionZ
  This solves a problem reported by Rutger van derEijk.

- Rename the following functions in the ZIP package to avoid naming clashes
  with applications using the original ZIP functions.
   void     R__bi_init    OF((FILE *zipfile));
   void     R__send_bits  OF((int value, int length));
   unsigned R__bi_reverse OF((unsigned value, int length));
   void     R__bi_windup  OF((void));
   void     R__copy_block OF((char far *buf, unsigned len, int header));
   int      R__seekable   OF((void));
   extern   int (*R__read_buf) OF((char *buf, unsigned size));
   ulg      R__memcompress OF((char *tgt, ulg tgtsize, char *src, ulg srcsize));
   void     R__error      OF((char *h));

- In the TGenerator constructor check if the TDatabasePDG tables are already
  created. If yes, skip this step.

- Add new option "M" (More) in TH1::Fit and struct Foption.
  When this fit option is selected the TMinuit IMPROVE mechanism is called.

- New possibility in the TTree::Branch with a TObject*.
     New option "splitlevel=2".
     if splitlevel=1 (default), this branch will automatically be split
      into subbranches, with one subbranch for each data member or object
      of the object itself. In case the object member is a TClonesArray,
      the mechanism described in case C is applied to this array.
     if splitlevel=2 ,this branch will automatically be split
       into subbranches, with one subbranch for each data member or object
       of the object itself. In case the object member is a TClonesArray,
       it is processed as a TObject*, only one branch.

//
// 23/11/1999  15.19.15  by  Fons Rademakers
//
- TROOT: fix in ProcessLine() to save the original line which may come
  from the From() buffer and which may be overwritten during the
  TApplication::CreateApplication() execution.

- TCanvas: protect From() buffer in MakeDefCanvas().
//
// 22/11/1999  12.29.04  by  Rene Brun
//
- Merge with latest Fons version.

- Protect TButton::ExecuteEvent in case the action executed by the TButton
  deletes the button itself.

- In THistPainter::PaintStat2, take into account the lowest and highest bins
  to draw the integral of bin contents.

- In TH1::Integral do not call TH1::GetStats. Instead call the TH1::Integral
  functions for 1-d, 2-d, 3-d histogram respectively.
  TH1::Integral() now returns the sum of weights instead of the sum
  of the absolute value of values returned by TH1::GetStats.

//
// 21/11/1999  19.44.19  by  Fons Rademakers
//
- rootcint: fix for handling of "#pragma link C++ defined_in".

- Several classes: declare enums for special bits in the header
  file instead of hidden away in the source. User's deriving need
  this info.

//
// 20/11/1999  17.35.14  by  Rene Brun
//
- clean up class TAxis. Remove the following unused functions:
  Draw, DrawAxis, ls, Paint, Print, PaintAxis, Print.

- clean up class TLeaf, TLeafObject. Remove TLeaf::Print, TLeafObject::Print.

- clean up class TText, TLine. Remove TText::Draw, TLine::Draw.

- Several fixes in class TButton. Side-effects of the previous changes
  related to SetEditable have been corrected.

- New functions in the graphics editor. 4 new options have been added:
   - Line: to draw a single line segment
   - Marker: to drawn one marker
   - CurlyLine to draw a TCurlyLine
   - CurlyArc to draw a TCurlyArc.
   The following classes and functions have been modified accordingly;
    - TROOT::SetEditorMode
    - TPad::CreateNewArrow has been changed to TPad::CreateNewLine
    - TPad::CreateNewText
    - TCanvas::EditorBar

- Update the HelpText deck to document the new graphics editor options.

- Adapt two new classes TCurlyArc and TCurlyLine originaly developed by
  Otto.Schaile@Physik.Uni-Muenchen.DE
  These classes can be used to draw Feynman diagrams.
  See new example in tutorials/feynman.
  TCurlyArc derives from TCurlyLine and TCurlyLine derives from TPolyLine.
  Like TPolyLine and TArcs, these objects can be edited interactively
  with the mouse.
  (thanks to Otto for this nice contribution).

- Add a few corrections from Valery Fine in TView, TWin32Canvas.
//
// 19/11/1999  13.31.52  by  Fons Rademakers
//
- Introduced the GetErrno() and ResetErrno() also in rootd, rootx
  and thread code.

- Fixes to the configure and Makefile's.
//
// 19/11/1999  09.16.45  by  Rene Brun
//
- Include Philippe Canal changes in $G__ci, kccstrm and meta/Cint.

- Merge with Valery Fine version. Valery added the menus Inspect and Classes
  in the NT canvas menu bar.

- Introduce new version (non-truncated) of kccstrm for KCC (thanks Philippe).

- In the TStyle destructor, set gStyle to the last defined TStyle
  in case the TStyle being destroyed is the current style.
  (thanks Peter Filip for the suggestion).
//
// 18/11/1999  17.49.38  by  Rene Brun
//
- Generate new dictionaries G__Winnt and G__Win32.

- Add new examples in tutorials:
   - manyaxis: to draw many TGaxis of different styles
   - two:      to draw two histograms in the same pad and different scales

- Modify comments in TGaxis and generate a new gaxis.gif file.

- Modify TTree::GetMaximum and TTree::GetMinimum to have their arguments
  of type const char* instead of char*.

- several changes to compile under Solaris new CC5 compiler.
  - All references to errno (from errno.h) have been replaced by
    TSystem::GetErrno() or TSystem::ResetErrno().
    The machine dependencies of errno are in these two functions only.
  - With this new compiler the C string library is backward incompatible.
    For example strchr and strstr returns a const char* instead of char*
    In a few places where we had
       char *s = strstr(...)
    we force a cast to char*
       char *s = (char*)strstr(...)
   *** Many thanks to Dave Morrison for help in this conversion process***.

//
// 17/11/1999  12.45.19  by  Rene Brun
//
- Add a new function TBranch::ResetReadEntry. This function can be called
  when reading branches of a Tree to force an update of the branch data
  in case of two consecutive calls to TBranch::GetEntry for the same entry
  and in the case where the branch data in memory has been modified between
  the two calls.

- In the TCanvas destructor, move the statement to delete the contextmenu
  before the test on gPad. This prevents a possible memory leak in case
  on calls TCanvas::Close bedore deleting a TCanvas.
  (Thanks to Kristjan Gulbrandsen for notifying the problem).

- In TPad::PaintModified replace iterator on list of primitives
  by an explicit loop on TObjOptLink objects instead.
  This solves a problem reported by Selim Issever when an object being painted
  deletes another object in the pad list.

- Modify::THistPainter::PaintLego and THistPainter::PaintSurface to
  paint with the original histogram line color.

- Fix a problem In TGraph::Fit, TGraph::InitGaus, TGraph::InitPolynom
  and TGraph::InitExpo when fitting in a sub-range of a graph.
  The parameters xfirst/xlast were not correctly set and used.
  (thanks Frank Lavaud for reporting this problem).
//
// 16/11/1999  18.02.10  by  Rene Brun
//
- TLatex::GetXsize and TLatex::GetYsize are now operational.
  These two functions return the size along X/Y of the Tlatex object
  in pad user coordinates.

- Recode TPaveText::PaintPrimitives to take advantage of the new TLatex
  function GetXsize.

- Fix a problem in TPad::SavePrimitive. In case of a pad hierarchy with
  more than 2 levels, the macro generated was not correctly setting
  the current pad.

- Fix a problem in TPolyMarker3D::Paint preventing to view a TPolyMarker3D
  with X3D or OpenGL.

- Add a protection in TPadOpenGLView in case gGeometry = 0.

- In THistPainter::PaintH3 add call to PaintTitle.

- Remove the limitation to 255 colors in TPostScript::SetColor.

- Comment one line in CINT function libstrm for operator !
  This was a fatal compilation error on alpha/cxx.

- Adds proposed mods by Masa in CINT function parse.c.
  This solves a problem reported by Rutger van derEijk.
//
// 15/11/1999  15.41.51  by  Rene Brun
//
- New functionality in class TLatex (by Marthe Brun)
   You can produce 3 kinds of proportional delimiters.
   #[]{....} or "a la" Latex #left[.....#right] : big square brackets
   #{}{....} or              #left{.....#right} : big curly brackets
   #||{....} or              #left|.....#right| : big absolute value symbol
   New example latex3.C added to tutorials.

- Small rewrite (thanks Valery Fine) to TShape::ShapeDistancetoPrimitive
  to make the code more efficient.

- in TTree::CloneTree, do not set the compression level for the new Tree
  to the new file compression level. Keep the old branch compression level
  instead. The previous algorithm made the test program stress much slower
  because all the branches were compressed in the cloned Tree.
  (thanks Sergei Avvakumov for noticing the effect).

- Several enhancements to the branch/basket/tree logic.
  TBranch::GetBasket has been rewritten to take advantage of the new
  functions in TBasket.
  TBranch has a new data member fBasketBytes (an array of Int_t) keeping
  the number of bytes on the file for each branch basket. In order to read
  existing TTrees, a special function TBasket::ReadBasketBytes has been
  implemented to read the first bytes of a logical record and return
  the number of bytes in the logical record.

- Correct a problem in TBranch::DropBaskets (thanks Stefan Kluth).
  The algorithm managing the short list of baskets in memory was wrong
  in some cases.

- New functions in TBasket;
  TBasket::ReadBasketBytes to return the length of a basket.
  TBasket::ReadBasketBuffers, a rewrite of the old function. The new version
  has a more efficient TBuffer management minimizing the number of buffer
  copies.

- New function TBuffer::SetBuffer. This new function is used by
  TBasket::ReadBasketBuffers in case of compressed buffers.

- Correct a typo in TGraph.h (removed a comma in the enum list).

//
// 12/11/1999  16.12.57  by  Fons Rademakers
//
- Introduced new configure script and Makefiles by Christian Holm.
  The new build system makes it possible to build ROOT in a fixed
  location not depending on ROOTSYS. Typically you want to do this
  when installing in a location like `/usr/local/bin' or even
  `/usr/bin'. This allows you, and all others on your system, to run
  ROOT without having to setup ROOTSYS and special PATH and LD_LIBRARY_PATH
  variables. This scheme also makes it easier to make ROOT
  distributions/installations that fit with an existing system. E.g., it
  should be trivial to install ROOT via a RedHat (.rpm) or Debian (.dep)
  package. See AA_INSTALL for more.

- In all source files where $ROOTSYS was used/referenced we now
  include the header `config.h' which is generated by `configure'.
  When compiling with the flag -DHAVE_CONFIG the absolute paths
  provided by this include will be used. The option will be enabled
  automatically in the Makefile generated by `configure <archs> --prefix'.

- THashTable: Rehash() call Clear() with the option "nodelete". During
  rehashing we don't want to delete any objects (the ones with the
  kCanDelete bit were deleted).
//
// 11/11/1999  23.16.26  by  Rene Brun
//
- Increase maximum file name length from 300 to 1000 characters
  in TFile::Init (requested by BaBar).

- Implememt support in TString::Streamer for strings greater
  than 256 characters. This change is backward compatible.

- Several changes in class TLegend and TLegendEntry.
  New function TLegend(const char *name, const char *label, const char *option).
  In TLegendEntry the members fLabel and fOption previously char *
  have been changed to TString. As a result TLegendEntry is now correct.
  A TLegend object can be saved in a Root file or on a macro.

- Add new class TMessageHandler.
  This class handle messages that might be generated by the system.
  By default a handler only keeps track of the different messages
  generated for a specific class. By deriving from this class and
  overriding Notify() one can implement custom message handling.
  In Notify() one has access to the message id and the object
  generating the message. One can install more than one message
  handler per class. A message handler can be removed or again
  added when needed.
  a default Messagehandler is created by the TROOT constructor.
  The existing functions TObject::Warning and TObject::Error register
  the messages to the messahe handler.
  One can print the Message Hanler(s) status by calling
    gROOT->GetListOfMessagehandlers()->Print().
  To keep track of the individual messages for each class, one change
  has been necessary in the TClass constructor. The UniqueID of the
  TClass object is set to the serial number (starting at 1) of
  the TClass constructor.

- Introduce Philippe Canal changes in
  CINT:  ifunc, loadfile
  TCint.h and TInterpreter.h

//
// 10/11/1999  19.13.47  by  Rene Brun
//
- Modify TLatex::PaintLatex to invoke TAttText::Modify.
  This fixes a problem when drawing TPaveText objects when text
  is not automatically positionned in the TPaveText (eg via DrawClass).

- Modify The TLatex constructors to set the default line width to 2.
  Modify TLatex::DrawLine to use the LineWidth from TAttLine instead
  of computing it.

- Modify class TAxis to support pointer to parent.
  in TAxis::ExecuteEvent, use the fParent info instead of looping in
  the list of pad primitives to find the first TH1 object.

- Modify TH1::Build to set the TAxis parent to this.
  Add new option "AXIS" in the list of possible drawing options.
  When this option is used, only histogram axis are drawn. Using this option
  is a better solution than using TPad::RedrawAxis.
  In case multiple histograms are drawn in the same pad and some fill area
  hides the axis, one can call h1->Draw("sameaxis") to redraw only
  the axis on top of the picture, where h1 is the first histogram drawn
  in the pad (and setting the scale).

- Modify THistPainter::Paint and THistPainter::PaintAxis to support
  the new histogram drawing option "AXIS"

- TPad::RedrawAxis rewritten to take advantage of the new option "AXIS"
  described above in TH1::Draw.

- Minor modification in a print format in class TMutex.

//
// 09/11/1999  17.36.05  by  Rene Brun
//
- Add drawing of axis in the TH3x Paint functions.
  A 3-d box outline is also drawn like in the case of lego/surf plots.
  THistPainter::PaintH3 modified accordingly.

- In TObject::Clone set internally gFile=0 before calling obj->Streamer.
  gFile is reset to its original value when returning.

- Protect TPaveStats::Streamer, TMarker3DBox::Streamer and TShape::Streamer
  for the case when gFile=0.

- Implement TH3x::DrawCopy functions. TH3F::DrawCopy is used by
  the new functionality of TTreePlayer::TakeAction and TakeEstimate.

- New functionality supported by TTreePlayer. one can now do:
    tree->Draw("x:y:z>>h3")
  where h3 is a 3-d histogram. Like for the 1-D and 2-D case, if
  h3 is non-existing before the call, it is created internally.
  If h3 exists, it is reset (unless +h3 is specified).
  Functions modified are:
    TTreePlayer::DrawSelect, TTreePlayer::TakeAction ,TTreePlayer::TakeEstimate.

- class TView inherits also from TAttLine. The view line attributes
  are used when drawing the "OutlineToCube" when rotating a 3-D view.

- TPolyLine3D::DrawOutlineToCube modified to read the TView line attributes.

- Add new function TPostScript::SetLineScale(Float_t scale).
  This function can be used to select the default line width scale factor.
  The default is set to 3.

- Add new functions in TStyle;
   -SetLineScalePS(Float_t scale=3)
   -GetLineScalePS();
   The LineScalePS is used by TPostScript constructor to set the current
   line width scale factor.

- Make all TPad::Createxxx functions public instead of protected.
  On NT, these functions are called via the interpreter.
//
// 08/11/1999  16.55.38  by  Rene Brun
//
- Modify clipping logic in TPad::Clip
   use Cohen Sutherland algorithm.
   If Clip ==2 the segment is outside the boundary.
   If Clip ==1 the segment has one point outside the boundary.
   If Clip ==0 the segment is inside the boundary.

- Modify TPad::PaintLine and TPad::PaintPolyLine to use new Clip logic.

- Add clipping to the frame boundary to TGraphErrors and TGraphAsymErrors.

//
// 07/11/1999  10.29.35  by  Rene Brun
//
- Add several protections (thanks Robert Rowe) in the logic of TTreeViewer.
  A segmentation violation was generated in some cases when drawing the histogram.
  Subsequent attempts to draw anything results in the  histogram being drawn
  and a segmentation violation.
  Additionally if the window containing the histogram is closed any attempts at
  drawing result only in a segmentation violation without anything displayed.
  The Draw method in the TTreeViewer attempts to write the
  Tree->Draw(....) command to the CINT history file, which it gets from gEnv by
  looking for "Rint.History". If not set in .rootrc this attempt returns "".
  Naturally the file open command doesn't succeed and the thing bombs at the
  write operation.
  The TRint constructor has been protected in this case.

- In TPad::Close add the statement:
  if (gROOT->GetSelectedPad()== this) gROOT->SetSelectedPad(0);
  in order to remove the pad from being returned as the selected pad after
  it has gone. (fix also proposed by Robert Rowe)
//
// 06/11/1999  19.26.07  by  Rene Brun
//
- Important improvement in TF1::GetRandom. Instead of doing a linear
  interpolation in the bins of the function integral, the integral
  is now parametrized with a parabola for each bin. The parabola
  coefficients are stored as data members of the class.
  This change improves substantially the quality of the random numbers
  in case the number of bins is small (less than 20).
  With the new technique, 50 bins are in general enough.
  The default (100 bins) should always give good results.

- Modify TCanvas::SetBatch. Remove the test in case fCanvasImp==0.
  It was not possible to SetBatch(kFALSE) in the following situation:
  Read a TCanvas from a file (no graphics yet)
  canvas->Print(); //this sets internally batch mode and attempts to reset
                     to kTRUE when Print has completed.
  canvas->Draw(); // no graphics in canvas
  (thanks to Frank Hartmann for reporting this problem).
//
// 05/11/1999  11.41.49  by  Rene Brun
//
- function TFile::ReadFree. Fix a problem that could occur in some cases
  when reading the list of free blocks. stop reading when one block with
  upper limit greater than fEND.

- class TCTUB. New constructor and graphics support for this shape
  implemented by Valery Fine.
//
// 04/11/1999  11.26.52  by  Fons Rademakers
//
- TDatime: added more convenint time setting ctor's, assignment operator,
  comparison operators.
//
// 04/11/1999  08.03.36  by  Rene Brun
//
- Correct a typo in TH1::ProjectionZ.
  if (iymax > nx) iymax = ny; ==> if (iymax > ny) iymax = ny;
  Thanks to Urs Langenegger for reporting
//
// 03/11/1999  18.57.10  by  Philippe Canal
//
- Protection added in TLeaf::Browse.
  If you double click in the TBrowser, on a leaf of an empty
  Tree, you get a core dump. This poped-up when a user used TBranch::Fill
  instead of TTree::Fill.

- Changes in TTreePlayer::MakeClass and TTreePlayer::MakeCode.
  MakeClass and MakeCode produced invalid code when a branch
  contains mode than one leaf.  Namely, it defines all the variable
  corresponding to the leaf of a branch with the exact same name.
  With the fix, when a branch has more than one leaf it create
  the variable name as 'branchname_leafname'
//
// 03/11/1999  16.58.34  by  Rene Brun
//
- Implement new function TTree::Delete(Option_t *option).
  to delete a Tree from memory or/and disk.
  if option == "all" delete Tree object from memory AND from disk
                     all baskets on disk are deleted.
  if option =="" only Tree object in memory is deleted.

- Implement new function TFile::GetRecordHeader (see description).
  This new function is called by TTree::Delete and will be called
  by existing TTree functions or planned new functions.

- Increase Postscript line size from 120 to 250.
  This solves a problem when printing the application title that must fit
  on one single line.
//
// 02/11/1999  15.27.59  by  Fons Rademakers
//
- rootcint: fix which allows again the LinkDef.h file to be in a directory
  specified via an -I argument (functionaly was broken since 2.23/07).
//
//________________________________________________________________________
//
//::>          VERSION  2.23/08   02/11/99 09.36.56
//
//
// 02/11/1999  09.17.47  by  Rene Brun
//
- Correct kumac file for installation on SGI with CC.
  The CILIBS symbol was not set in case of SGI64.

- Add +IF,KCC in deck CINT/kccstrm

- Modify kumac install_others to export CINT_kccstrm
//
// 01/11/1999  18.28.43  by  Masaharu Goto
//
- New CINT 5.14.21 22 Oct 1999
  1208, class A { public: operator const char*(); }; cin>>a; bug fix, risk2
  1209, class A { public: void f() const; private: void f();}; bug fix, risk4
  1210, G__ignoreinclude, G__set_ignoreinclude added, risk1
 -1211, opr overloading, search order changed, not std compliant still,
  1212, vector<A*> v; v[0]->f(); bug fix, risk3
  -   , G__splitfilename((char*)NULL) bug fix, risk0
  1213, base to derived conversion disabled at initialization, risk4
  1214, if(1!=libp->paran) ; in dictionary, eliminated, risk1
  1215, func( f();  error detection, risk4
  1216, A* volatile a; supported, risk1
  1217, Unnamed macro error detection for G__loadfile(), risk1
  1218, Fons's change,  risk1
  1219, func arg conversion from/to p2f disabled, risk3
//
// 01/11/1999  17.32.01  by  Rene Brun
//
- Modify TTree::AutoSave. The new version saves the current Tree header
  then deletes the previous header (if one). The Print statement
  in the function has also been removed.
  Note that calling TTree::AutoSave too frequently (or similarly calling
  TTree::SetAutoSave with a small value) is an expensive operation.
  You should make tests for your own application to find a compromize
  between speed and the quantity of information you may loose in case of
  a job crash.
//
// 01/11/1999  16.58.54  by  Fons Rademakers
//
- rootcint: added extra checks in case files don't exist.

- DataMbr: correctly update G__ClassInfo::class_property (side effect
  of perofmance enhancement in G__ClassInfo::Property()).

- TList: members AddBefore(), AddAfter() and AddAt() call now explicitely
  the TList methods AddFirst() and Addlast() and not any possibly
  overridden methods.
//
// 01/11/1999  17.07.46  by  Rene Brun
//
- IMPORTANT CHANGE IN POSTSCRIPT OUTPUT
  =====================================
  The line width is now multiplied by 4 instead of the original 1.5.
  This makes Postcript outputs looking more comparable to the screen.

- Implement a more efficient version of TPad::PaintPolyline.
  Instead of calling TPad::PaintLine for each segment, the new function
  implements the clipping logic of TPad::PaintLine directly in the loop.
  This generates a huge gain for Postscript files in case of histograms
  or functions with a large number of bins.
//
// 31/10/1999  14.13.40  by  Rene Brun
//
- New function void TBranchObject::SetAutoDelete(Bool_t autodel)
  This new function can be used to instruct Root to not delete the object
  referenced by a branchobject before reading a new entry.
  By default, the object is deleted.
  If autodel is kTRUE, this existing object will be deleted, a new object
    created by the default constructor, then object->Streamer called.
  If autodel is kFALSE, the existing object is not deleted. Root assumes
    that the user is taking care of deleting any internal object or array.
    This can be done in Streamer itself.
  If this branch has sub-branches, the function sets autodel for these
  branches as well.
  We STRONGLY suggest to activate this option by default when you create
  the top level branch. This will make the read phase more efficient
  because it minimizes the numbers of new/delete operations.
  Once this option has been set and the Tree is written to a file, it is
  not necessary to specify the option again when reading, unless you
  want to set the opposite mode.
  We also STRONGLY suggest to revisit your Streamer functions
  such that in the read part all previously dynamically allocated
  objects are correctly cleaned, resized or deleted.
  Thanks to Stefan Kluth (BaBar) for making this nice suggestion.

- Modify TLeafObject::ReadBasket to take into account the new
  AutoDelete option.

- Modify $ROOTSYS/test/MainEvent to call TBranchObject::SetAutoDelete(kFALSE)
  to take advantage of the new facility above.
  Modify Event accordingly. Event::Streamer is now part of the Event.cxx
  file instead of being generated automatically by rootcint.
  The new Streamer function takes care of cleaning up the Event
  structure correctly before importing a new entry.

- Modify TH1::Streamer (read part) to make sure that the function can be
  called for an existing and non-empty histogram. This is now used
  for example by the new test/Event program as explained above.

- Changes in TH1::Print. The new version prints more detailed information like
  the bin number and the center of the bin coordinate for 1-D, 2-D and 3-D histograms.
  (suggestion from Christian Lacunza).

- Modify TGaxis::PaintAxis. When drawing the scale factor (x10)
  the new logic uses a TLatex expression x10^{n}.
  With TLatex, the exponent is placed at a better position
  than with the previous algorithm.

- Modify TAxis::ExecuteEvent and TAxis::UnZoom to support zoomimg/unzooming
  of the Y axis of a 1-d histogram. Zooming the Y axis, invokes TH1::SetMinimum
  and TH1::SetMaximum.
//
// 30/10/1999  09.29.57  by  Rene Brun
//
- Introduce the changes in the CINT function CallFunc proposed by Philippe.
  The problem was due to a side effect of the 1167 modifications
  (enhancement for reference resolutions). For reference arguments,
  the actual type of the argument is now being used
  (unlike the G__CallFunc::SetArgArray comment suggest).
  This fixes a problem when running the tutorial Ifit.C
//
// 29/10/1999  10.30.36  by  Rene Brun
//
- Modify TRint constructor for WIN32.
  cannot process the statement: ProcessLine("#include <iostream>");

- In class TGenerator, remove include TCanvas.

- In TTree::CloneTree add possibility to set the compression level
  in the cloned Tree to the compression level of the new file.

//________________________________________________________________________
//
//::>          VERSION  2.23/07   27/10/99 18.00.59
//
//
// 27/10/1999  14.58.12  by  Rene Brun
//
- Added some statements in GX11GUI to execute Root with Threads.
  (thanks Marc Hemberger).

- Some changes in the TCanvas constructors:
  replace gROOT->FindObject(name) by
  gROOT->GetListOfCanvases()->FindObject(name)

- Regenerate the G__Thread dictionary.

- Update Makefiledeb2 to include CRYTLIBS.
//
// 27/10/1999  12.22.51  by  Fons Rademakers
//
- All containers: Remove(TObject*) returns a pointer to the actual
  object removed. This pointer can be different from the one passed as
  arguments to Remove() depending on what IsEqual() decides. The
  new functionality allows more specific checks on what Remove() is
  doing (only for expert usage).

- rootcint: Changes for template handling by Stefan Kluth.
//
// 26/10/1999  17.48.25  by  Rene Brun
//
- TREES: I/O improvements
  =======================
  Thanks to a nice Tree provided by the H1 collaboration (Thanks Ursula Berthon)
  an important gain in performance when reading Trees has been obtained.
  The following changes have been made:
   - In class TBuffer, modify the constant kMapSize from 67 to 503.
     This minimizes the number of TExmap extensions. (20% improvement)
   - Discover that a lot of time was spent in invoking the class constructor
     via the interpreter. A new version of G__ClassInfo::New has been
     consequently implemented by Fons. (20% improvement)
   - Some per cent gained in recoding (Fons) TClass::GetBaseClass.
     This function is called in TBuffer::ReadClass when calling InheritsFrom.
   - TObjArray::Streamer has been recoded (20% improvement).
     The previous version was calling TObjArray::AddAtAndExpand in the loop
     of objects. The new version extends the array only once.
   - TBranch::DropBaskets has been recoded/extended. Instead of looping
     on the TObjArray of baskets (several thousand baskets/branch in the H1
     example), a new table of active baskets in memory has been introduced.
     typically only one or two baskets are in memory/per branch. It is more
     economical to loop on the short list (5% improvement).
   - TExmap::FindElement. more efficient coding
   - TExmap::GetValue: replace call to FindElement by inline code.
     These two functions are called extremely frequently in case, for example,
     a branch contains a TObjArray of objects. (3% improvement).
   - Put the code from TBasket::GetEntryPointer inline in TBranch::GetEntry.
   - TBranchClones::GetEntry is now calling TBranch::GetEntryClones.
     In turn, GetEntryClones has some improved logic with respect to
     TBranch::GetEntry in case of branches of a TClonesArray.
     A new function Tleaf::ReadBasketExport has been introduced (also
     in all TLeaf derived classes). This new function combines the two
     functions TLeaf::ReadBasket and TLeaf::Export.
 The gains quoted above are specific to the H1 tree (30 branches TClonesArray
 and 3 branches TObjArray).
 PLEASE REPORT TO US THE PERFORMANCE IMPROVEMENT OBSERVED IN YOUR CASE.
 (together with the result of tree->Print()).

//
// 25/10/1999  19.02.40  by  Philippe Canal
//
- Base_System modified to allow for debugging the script compiler without
  recompiling (by setting gDebug to greater than 3).
  Make-macros modified to allow the compilation of kccstrm (when it be added
  to cint!).
  In Makefile.*kcc, add the definition of symbols __KCC to the
  cint C file compilation (needed because CINT_init.c has a
  ifdef __KCC but it NOT compiled with KCC).
//
// 25/10/1999  18.45.21  by  Fons Rademakers
//
- Class (of CINT): optimization in New() and Property().

- TClass: optimized GetBaseClass().

- TCint: CreatListOfTypes() renamed UpdateListOfTypes() to reflect
  new functionality. It now behaves like UpdateListOfGlobals(). Types
  might be added when a new shared lib is loaded, so the list has to
  be updated in that case.

- TDataType: store copy of type name, otherwise list search does not
  work (CINT reuses the buffer in which it stores the typename).

- TROOT: allow updating of list of types via "load" flag in
  GetType() and GetListOfTypes().
//
// 25/10/1999  16.08.34  by  Rene Brun
//
- Correct a problem in TBranch::SetFile(TFile *file) (thanks Ursula Berthon).
  In case a pointer to a file is specified, the filename was
  taken from file->GetTitle() instead of file->GetName().
//
// 24/10/1999  19.48.02  by  Rene Brun
//
- Class TBranch::GetBasket. Add a protection to make sure to not read
  beyond the end of file.

- Class TTree::UpdateActiveBranches. Wildcarding was not correctly
  introduced. One must diable branches with daughters (TBranchObject
  and TBranchClones) from the list of active branches.

- Class TShape. Streamer now in implementation file.
  Schema Evolution had been forgotten when adding the inheritance
  from TAtt3D. In the new Streamer, test file version number
  to be able to read the pre 2.23/04 files.
  (Thanks Valery Fine nor notifying the problem).

- Class TMarker3DBox. Changes in Streamer like for TShape above.

- Class TH3. Changes in Streamer like for TShape above.

- Modify the dictionary generation files G3D_Linkdef and H_Linkdef
  to not generate Streamer for TShape, TMarker3DBox and TH3.

- Class TAxis. Change prototype of function ChooseTimeFormat.
         const char  *ChooseTimeFormat(Float_t axislength=0);
  New logic (Damir Buskulic) in case of the new facility to display
  the axis values in Date/Time format.

- Class TGraph. Add SetTitle to the context menu.
  Implement TGraph::SetTitle. In case fHistogram exists, the title
  of the current histogram used to view the graph is modified.
  (thanks Glen Salo).

- Class TLatex. New improvements for a better alignment.
  Change logic in case of complex formula with fractions of fractions.

- Class TBuffer. Modify the default parameter kMapSize from 67 to 503.
  This speeds up substantially the read I/O.

- Class TPadOpenGLView. In function TPadOpenGLView::ExecuteEvent
  replace the test:
      if (!gPad->IsEditable()) return;
   by
      if (!GetPad()->IsEditable()) return;
   (The old test was freezing the GL viewer in case the current pad
   was not the pad being viewed.
   (thanks Stefano Bettelli for reporting).

- Class THistPainter::PaintErrors. The last bin was not drawn.
  (thanks Stefan Stonjek for reporting).
//
// 24/10/1999  17.43.15  by  Fons Rademakers
//
- New CINT 5.14.20 imported.

- CINT: fixes to get re-initialization of permanent (system) shared
  libs to work correctly. There were several issues:
  - Init functions for rootcint generated dictionaries have special
    names. This init function pointer can be found in G__call_setup_funcs().
    I've added code in G__call_setup_funcs() to save them in G__initpermanentsl.
  - More tricky. Re-initialization of a shared lib causes the tagnum to
    be changed. However, tagnum is stored (via G__ClassInfo object)
    in the associated TClass, so during re-initialization CINT has to call
    back to ROOT to tell the associated TClass object to update the tagnum
    in its G__ClassInfo object. To do this ROOT has to register with CINT
    a function that CINT will call during re-initialization. For this I've
    introduced in CINT the function: G__InitUpdateClassInfo(). This function
    is called in the TCint ctor where the static function
    TCint::UpdateClassInfo() is registered. CINT calls this function via
    G__get_linked_tagnum().

- TWinNTSystem, TUnixSystem: streamlined the handling of method Load().
  In both classes we call now the base class TSystem::Load(). Added third
  Bool_t parameter to Load(). If this parameter is true the library to be
  loaded is a permanent systen library that should not be unloaded during the
  course of the session.

- TROOT: LoadClass() calls gSystem->Load() with third parameter true.

- TLatex: NkWord1 was one too many (27 instead of 26). Caused endless
  loop when running without libNew.

- Tutorial graph.C: make array index variable const.
//
// 22/10/1999  17.51.36  by  Fons Rademakers
//
- Makefile for Solaris CC 5.0 by Dave Morrison. Updates in ./configure
  and top Makefile.
//
// 21/10/1999  18.36.42  by  Fons Rademakers
//
- TGTextEntry: check if object has not been deleted after <return>.
//
// 21/10/1999  10.55.31  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.23/06   21/10/99 08.44.00
//
- A few fixes reported by Philippe following the build on a few systems.
        #ifdef on KCC not needed anymore
        assert on OSF1 has to be an int (or a boolean)
        INADDR_NONE not declare in /usr/include/netinet/in.h on SOLARIS
                (at least the on I have)
        64 bits pointer protections. (OSF1)

- wrong #idef, #elif directive in UnixSystem for HP-UX corrected.
//________________________________________________________________________
//
//::>          VERSION  2.23/05   20/10/99 19.01.08
//
//
// 20/10/1999  18.01.31  by  Rene Brun
//
- The following libs are temporarily loaded by the TRint constructor
  due to a problem with CINT unloading these libs when named macros
  are executed several times.
  HistPainter, TreePlayer, TreeViewer.

- Simple modification proposed by Philippe Canal in TCanvas constructor
  to prevent a core dump if the name of something else than a canvas
  is given to a new canvas.
//
// 20/10/1999  17.30.39  by  Fons Rademakers
//
- TInetAddress: made default ctor public so pointers to TInetAddress
  objects can be streamed.

- TTabCom: merged fixes by Christian Lacunza.

- TUnixSystem, TWinNTSystem: fix in GetHostByName() in case hostname
  is not found.
//
// 20/10/1999  16.31.29  by  Rene Brun
//
- New directory PYTHIA6 and new class TPythia6.
  The class TPythia6 was initially developped by Pasha Murat.
  This class is an interface with Pythia version 6.1.
  The previous interface with Pythia 5 is kept with the original name TPythia.
  To use this new class, one must load the new libPythia6.so instead
  of libPythia.so.
  TPythia6 requires Pythia 6.1 + 2 tiny Fortran files and a tiny C file.
  These 3 files, including Pythia6.1 can be found at:
          ftp://root.cern.ch/root/pythia6.tar.gz
  The similar files for Pythia version 5 can be found at:
          ftp://root.cern.ch/root/pythia5.tar.gz
  To be consistent between Pythia 5 and 6, some changes have been made
  in the old class TPythia. The original functions
  TPythia::PyStat, PyTest, PyEvnt, LuList, LuExec, LuComp, PyInit
  have been renamed respectively to:
  TPythia::Pystat, Pytest, Pyevnt, Lulist, Luexec, Lucomp, Pyinit

- MakeMacros modified to introduce TPythia6 and the corresponding set
  of symbols.

- New version of the ATLFAST++ package.
  This new version supports both Pythia version 5 or 6.
  Several internal changes were necessary to run ATLFAST++ with this latest
  version of Root.
  The default when compiling is still with the old Pythia.
  If you run the makefile and specify the compiler switch -DPYTHIA6,
  you get ATLFAST for Pythia6.
  A file (atlfast.root) generated by ATLFAST++/Pythia5 can be processed
  by ATLFAST++/Pythia6 and vice-versa.
  The README file in the distribution tar file has been updated to indicate
  what to do to compile/run with either Pythia5 or Pythia6.
  This new version of ATLFAST++ can be found at URL:
         ftp://root.cern.ch/root/atlfast.tar.gz

- In classes TVector3 and TLorentzVector, change a Warning to Error
  in case of a bad index. (Peter Malzacher).

- Bug found by Michael Sievers and corrected by Peter Malzacher
  in TVector3::PseudoRapidity. A minus sign was missing.

//
// 20/10/1999  11.56.23  by  Rene Brun
//
- Protect TParticle constructors in case the particle code is unknown
  from the PDG data base. The mass is then computed from the parameters.
//
// 19/10/1999  08.34.56  by  Rene Brun
//
- TRandom3::SetSeed modified to set fCount624 = 624.
  (Thanks mathieu de Naurois for reporting this problem)
//
// 18/10/1999  20.00.46  by  Fons Rademakers
//
- TDirectory: on popular demand now supports wildcarding.
  The option can has the following format:
     [-d|-m][<regexp>]
  Option -d means: only list objects in the file
         -m means: only list objects in memory
  The <regexp> will be used to match the name of the objects.
  By default memory and disk objects are listed.
  Example:  dir->ls("hp*")
  List all objects with name starting with "hp".
//
// 18/10/1999  19.12.19  by  Rene Brun
//
- Forgot to increment the Class VersionID in the ClassDef of TPaveStats.
  It was not possible to read canvases saved with 2.22.
  A special case introduced in TPaveStats::Streamer to support canvases
  saved with 2.22 or 2.23/04. (thanks Philippe Canal for reporting thsi case).
//
// 17/10/1999  16.16.34  by  Rene Brun
//
- Tune text position in TPavelabel and TPaveText.

- Improved version of TLatex with better text size estimation.
  Increase vertical displacement for Greek characters.

- Change clipping algorithm in TPad::PaintText in Postscript case.
  Instead of ignoring text with a starting position outside the pad frame,
  set this position at the pad boundary. This is to circumvent precision
  problems when converting in some cases pixels to pad coordinates.

- Modification of TBranchObject::GetEntry in case the branch address is not yet set
  and a reference to a member function is found in TTree::Draw.
  The following case is now operational: (thanks Philippe Canal)
   TFile f("Event.root");
   T.Draw("event.GetNtrack());
//
// 15/10/1999  16.09.58  by  Fons Rademakers
//
- Corrected some CMZ install scripts for WinNT.

- Makelib: return linker exit code in case of link failure. This should
  properly stop the Makefile.

- ROOT Splash screen now mentions right version number
  (thanks Dave Morisson).

- TUnixSystem: in DynamicPathName() show dynamic library path in case
  library is not found.

- TUnixSystem: in GetDynamicPath() make sure $ROOTSYS/lib is always in
  path and also append $LD_LIBRARY_PATH to any specified path.
//
// 15/10/1999  15.33.38  by  Rene Brun
//
- Add a protection in TChain::Add in case the specified object name
  is not a TTree (Philippe Canal).

- Extend kMAXDIM from 100 to 200 in TMinuit.
  This change has been requested by Chris Jillings who has a problem
  involving 140 parameters. The best solution would be to make the
  internal TMinuit static arrays dynamic.
//
// 14/10/1999  08.49.07  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  2.23/04   13/10/99 19.04.04
//

  NEW LIBRARY STRUCTURE
  =====================

  We have minimized libraries dependencies by:
    - moving classes to other categories (i.e. shared libraries)
    - introducing new abstract interfaces
    - removing unnecessary includes in the implementation files
    - calling classes via the interpreter when performance is not an issue
    - some minimal changes in several classes

  With the new structure, for example:
    - a program referencing only TObject will need to link the following
      libraries only (the Root kernel): libCore and libCint.
      This "kernel" includes the Root I/O. There are no references
      to graphics, GUI, etc.
    - a batch program creating/filling/saving histograms and a Tree will only
      need the kernel above (libCore, libCint) + the libHist and libTree
      libraries.

  The following picture shows all the Root libraries and their dependencies.
  All non-Core libs reference the Core library.
  Libs shown in green are dynamically loaded by the system when needed.

  Begin_html <img src="gif/Root_Libs.gif"> End_html


  Some new abstract interfaces have been introduced and some changes (renaming)
  have been made in the existing abstract interfaces.

  Begin_html <img src="gif/Root_Virtual.gif"> End_html

  -TVirtualPad: abstract interface to graphics in a pad,
                real implementation is TPad.
                The new TVirtualPad does not derive anymore from TWbox but
                directly from TObject.
  -TVirtualX:   abstract interface to the basic windowing system (was TGXW)
                real implementations are TGX11 (Unix) or TGWin32 (Windows/NT)
  -TVirtualPS:  abstract interface to Postscript,
                real implementation is TPostScript.
  -TVirtualGL:  abstract interface to Open GL,
                real implementation is TGLKernel.
  -TVirtualFitter: abstract interface to a minimisation package,
                real implementation is TFitter calling TMinuit.
  -TVirtualHistPainter: abstract interface to histogram graphics,
                real implementation is THistPainter.
  -TVirtualTreePlayer: abstract interface to the TTree analyzer,
                real implementation is TTreePlayer.
  -TInterpreter: abstract interface to a C++ interpreter,
                real implementation is TCint.
  -TSystem:     abstract interface to the operating system,
                real implementations are TUnixSystem, TWinNTSystem, TVMSSystem.

  The abstract classes are in the Core library.

  These new abstract interfaces increase dramatically the overall modularity
  of the Root system. For example:
   - One can now easily implement an alternative to the standard Root classes,
     by deriving from one of the abstract interfaces.
   - The linker knows only about the abstract base classes. For example,
     TObject::Draw references only the TVirtualPad. There is no need
     to link with the graphics libraries if graphics is not used.

  Due to these changes the interactive Root module (root.exe) is now
  only explicitely linked against a few libraries (to see this do on
  linux: ldd $ROOTSYS/bin/root.exe). There is even no need anymore to
  explicitely link against X11 libraries (even for you own apps).
  During the execution only the needed libs will be loaded, e.g. if you
  don't fit during your Root session you will never load the Minuit
  library or if you run in batch mode (-b option) you will not load any
  graphics libs.


  IMPORTANT NEW FEATURES
  ======================

  - New version of CINT with new features.
  - Important changes in class TClassTree.
    See TClassTree header for a complete documentation.
    The new version of this class is more poweful and simple to use.
    All kinds of class dependencies can be drawn.
  - Integrate changes in the THREAD package by Joern Adamczewski, Hans Essel,
    Marc Hemberger. See their report in the notes.
  - Important improvements in the TLatex class.
  - Classes TPaveLabel and TPaveText use TLatex instead of TText.
  - The graphics editor option Text uses TLatex instead of TText.
  - Histogram titles and axis titles accept a TLatex expression.
  - InitGui() graphics initialization function not needed anymore.
  - CVS repository created. The latest sources can now be retrieved from
    our anonymous CVS repository. However, it is still needed that you
    start with a valid binary distribution, to where $ROOTSYS must point
    (the binary version only has to be installed once).


  BACKWARD INCOMPATIBILITIES
  ==========================

  - Users having classes referencing the old TGXW class must replace TGXW
    by TVirtualX and the corresponding global pointer gGXW by gVirtualX.
  - The global pointer gCurrentPS has been renamed gVirtualPS.
  - The global pointer gGLKernel has been renamed gVirtualGL.
  - The methods TObject::Is3D and TObject::Sizeof3D have been removed.
  - New class TAtt3D: use this class via multiple inheritance
    to get 3D capability (like the other TAttxxx classes and like
    Java's interface mechanism). The virtual function, Sizeof3D(),
    provided by this class should be overridden. See release notes
    for more info about TAtt3D.
  - The libraries libBase, libCont, libMeta, libClib, libUnix/libWinNT
    and libZip are merged into one single library libCore.
  - To be insulated in the future against any library changes try to use
    as much as possible the provided script $ROOTSYS/bin/root-config. For
    its use see $ROOTSYS/test/Makefile.
  - The enum in TCanvas defining kIsEditable, kIsNotEditable has been deleted.
    Replace statements like canvas->setEditable(kIsEditable) by
     canvas->SetEditable(kTRUE);
  - In the previous version, when the canvas was not editable, none of its
    subpads were editable. With this new version, the IsEditable is a feature
    of the pad, not of the canvas. If you have a pad containing buttons,
    you should set this pad not editable.


  LINKING parameters
  ==================

  - To be insulated against any library changes and to get the proper
    list of Root libraries to link with use the provided script
    $ROOTSYS/bin/root-config. For its use see $ROOTSYS/test/Makefile.
  - X11 dependence is now completely contained in libGX11. No need to link
    anymore an application explicitely with -lXpm and -lX11. Dynamically
    loading of libGX11 will also force the loading of libXpm and libX11.


  IBM AIX
  =======

  Thanks to this restructuring, we are now able to provide the same
  structure on AIX as on the other Unix platforms.
  The old and big library libRoot.a has been split into several libs.
  See above remark about root-config to list the libs under AIX.

  A complete list of all changes and improvements, bug fixes, etc. can
  be found in the Release notes below.
//
//-------------------------------------------------------------------------
//               D E V E L O P M E N T S   N O T E S
//-------------------------------------------------------------------------
//
// 13/10/1999  08.12.21  by  Rene Brun
//
-     BASE
      ====
 - Rename TAttFill::Reset   TAttFill::ResetAttFill
 - Rename TAttLine::Reset   TAttLine::ResetAttLine
 - Rename TAttText::Reset   TAttText::ResetAttText
 - Rename TAttMarker::Reset TAttMarker::ResetAttMarker
 - Rename TAttPad::Reset    TAttPad::ResetAttPad

- class TMath. Remove function SinCos (portability reasons)
                Remove Atan2 to avoid confusion with ATan2

- class TAttText.
  Do not use anymore the array x11factor.
  Do not set TextMagninute (unused).

- class TObject: change prototypes:
    void Inspect(TClass *cl, const char *parent, const char *name, void *addr);
    void TDumpMembers::Inspect(TClass *cl, const char *pname, const char *mname, void *add)

- class TRandom2, function SetSeed2.
   Add comment that seed1 and seed2 must be < 2147483647

- class TROOT. Reimplement TROOT::GetClass. The previous implementation
   was striping trailing blanks. This operation was time consuming.
   The only case where blank striping was necessary was in the THtml class.
   see changes in THtml.
   Add new function TROOT::LoadClass.
   This new function checks if class "classname" is known to the interpreter.
   If not it will load library "libname". Returns 0 on successful loading
   and -1 in case libname does not exist or in case of error.
   Replace invokation of TProof by a call via the interpreter.
   This removes dependencies of the new libCore from Proof.

- class TStyle. Reflects all the changes in the Reset functions of
   the attribute classes.
   Add new function TStyle::SetTimeOffset.

- new abstract base class TVirtualFitter.

- class TView moved from G to BASE. This class includes a new function:
    virtual void  NDCtoWC(Float_t *pn, Float_t *pw);

- class TVirtualPad. New functions or prototypes:
    virtual Bool_t   IsEditable() = 0;
    virtual void     SetBatch(Bool_t batch=kTRUE) = 0;
    virtual void     SetEditable(Bool_t mode=kTRUE) = 0;
  Function TVirtualPad::RedrawAxis is deleted. Only in TPad::RedrawAxis.

-      H
 ========
- class TAxis.
  Add new data members fTimeDisplay and fTimeFormat.
  New member function TAxis::ChooseTimeFormat (from Damir Buskulic)
  New member function TAxis::SetTimeFormat (from Damir Buskulic)
  New member function TAxis::SetTimeDisplay (from Damir Buskulic)
  When this function is called, the axis panting routines will show
  labels in date/time format instead of numeric values.

- class TF1
  Remove global gF1
  Implement TF1::GetObjectInfo. This function displays the function
  info (x, function value) corresponding to the cursor position.

- class TFormula
  Add some protections in Analyze.
  Replace internal static arrays by new data members. This solves several
  problems with recursivity. lexpr ==> fExpr, loper ==> fOper,
  lparams ==> fparams

- class TH1
  Add new option "U" in TH1::Fit.
  if Hoption.User is specified, assume that the user has already set
  his minimization function via SetFCN.
  In H1FitLikelihood, remove test on bin error = 0.
  Do not compute the Sum of Logs at each iteration. This sum is computed
  only once in TFitter::GetSumLog.
  In Th1::SetContour, always recompute the contour levels except when
  the levels are user specified. This solves a problem reported
  by Martin Purscke when drawing 2-d histograms with the Lego option.
  New bit kUserContour introduced.
  Add new function TH1::SetCellContent.

- class TH3
  function TH3::Sizeof3D reimplemented to invoke Marker3DBox::SizeofH3
  or TPolyMarker3D::SizeofH3 via the interpreter.
  the R__EXTERN Size3D gSize3D statement has been deleted.

- HISTPAINTER
 ============
 New function THistPainter::PaintText to draw a 2-d histogram
 with the option cell values. Use the option "TEXT" in TH1::Draw
 or click the TEXT button in the DrawPanel to select this option.

-      G
 ========
  Add statements in all graphics primitives to test if the pad is editable or not.
  Fix a bug in TEllipse::Paint. The fPhiMin angle was not taken into account
  correctly.
  Class TGaxis. Introduce new code from Damir Buskulic to support date/time
  formats for axis labels.
  new function TGaxis::SetTimeFormat.

- class TGraph
 Rename global gF1 to grF1.
 Rename Foption to fitOption.
 Rename Fitter to grFitter.
 Add new constructor: TGraph::TGraph(Int_t n, Double_t *x, Double_t *y)
 Delete unnecessary casts to (char*) when invoking the TH1 constructor.
 Fix a clipping problem in TGraph::PaintGraph.
 Fix a problem in TGraph::PaintGrapHist. When drawing a graph with a fill area,
 The Postscript line width is reset in TPostScript::DrawPS. Add one more call
 to TAttFill::Modify and TAttLine::Modify after having drawn the fill area.
 (thanks to Otto Schaile)

- class TGraphErrors and TGraphAsymmErrors
  add clipping along X

- class TLatex.
  A long list of changes in this class (Marthe Brun).
  New function TLatex::GetTextExtent. This function includes tables for all
  fonts in order to compute accurately the size of any text expression.
  Internal alignment of subexpressions has been improved.
  Two passes instead of one (one pass for the screen, one pass for postscript).
  Note that TLatex is now used instead of TText for histogram titles,
  axis titles and all TPaveLabel and TPaveText.

- new class TLegend and TLegendEntry by Matt Dobbs.

- class TLego. Change "char*" to "const char*" in
    void    LegoCartesian(Float_t ang, Int_t nx, Int_t ny, const char *chopt);
    void    SurfaceCartesian(Float_t ang, Int_t nx, Int_t ny, const char *chopt);
    void    SurfacePolar(Int_t iordr, Int_t na, Int_t nb, const char *chopt);
    void    SurfaceCylindrical(Int_t iordr, Int_t na, Int_t nb, const char *chopt);
    void    SurfaceSpherical(Int_t ipsdr, Int_t iordr, Int_t na, Int_t nb, const char *chopt);


- class TPaveLabel
  Optimize aligment and computation of the text size.
  TLatex is used instead of TText. Any Latex expression can be given
  for the string shown in TPaveLabel.

- class TPaveText
  same improvements as in TPaveLabel
  New options in the TPaveText contextmenu to add/insert/delete/edit.
  A long list of improvements in the TPaveText interactive editor.

- class TCutG. Several changes in the data members definition.
  The data member fTree pointing to the current Tree has been deleted.
  The members fFormulaX and fFormulaY are now TObject* instead of TTreeFormula*.
  New functions
    TObject       *GetObjectX() {return fObjectX;}
    TObject       *GetObjectY() {return fObjectY;}
    virtual void   SetObjectX(TObject *obj) {fObjectX = obj;}
    virtual void   SetObjectY(TObject *obj) {fObjectY = obj;}

-   GPAD
 ========
- class TButton. Replace calls to the interpreter.
  gInterpreter->ProcessLine ==> gROOT->ProcessLine

- class TCanvas
  Remove enum ECanvasEditMode. Replace kIsEditable by kTRUE.
  new function TCanvas::DrawClone. It is now possible to clone a canvas
  by selecting "DrawClone" in an existing canvas.
  One can also clone a pad in one canvas into another canvas. To do it,
  first select the destination pad/canvas with the middle button, then
  select the item "DrawClone" in the original pad context menu.

- class TDrawPanelHist
  When starting the Drawpanel, the slider shows the current axis selection.
  add new Drawing option "TEXT". When this option is selected, 2-d histograms
  are drawn with the "TEXT" option showing cell values.

- class TFitPanel
 Add new user button "USER" to fit with a user defined function.
 To specify a user function, use the USER button context menu and click
 on SelectMethod.
 Button "Same Picture" moved to a different location.
 New button "Log Likelihood" to select the log likelihood fitting method
 instead of the default chisquare method.

- class TPad
 Remove dependencies from TLego.
 Add new data member fIsEditable with corresponding Getter and Setter function.
 If SetEditable(kFALSE) is called, the graphics editor cannot modify
 objects in the pad.
 This option/toggle is available in the TPad context menu.
 TPad::CreateNewText creates TLatex objects instead of TText.
 When selection the entry "TEXT" in the graphics editor, one can type
 a TLatex expression.
 New function TPad::SetBatch invoking TCanvas::SetBatch.
 TPad::Print loads automatically the libPostscript shared library.
 Add a new optional argument in void TPad::RedrawAxis(Option_t *option).
 If option contains the string "grid", the grid is redrawn on top of
 the picture.
 Modify TPad::Streamer in read mode to automatically call TPad::ResizePad.
 TPad::x3d can automatically link the X3D shared library.

- class TSliderBox.
  Replace gInterpreter->ProcessLine by gROOT->ProcessLine

-   G3D
 ========
- class TMarker3DBox.
  new function void TMarker3DBox::SizeofH3(TH1 *h)

- class TMaterial
  Automatic creation of a TGeometry if global gGeometry is null.

- class TPadOpenGLView. New prototypes for:
    void         MoveModelView(const Char_t option,Int_t count=1);
    void         MoveModelView(const Char_t *commands, Int_t display_time=0);
  Remove unnecessary casts to (char*).

- class TPolyMarker3D.
  in TPolyMarker3D::PaintH3, the test on the number of entries was wrong.
  new function: TPolyMarker3D::SizeofH3

- class TRotMatrix
  In the destructor, remove this matrix from the TGeometry list of materials.
  (thanks Francois-Xavier Gentit for reporting).



-   HTML
 ========
- class THtml. Add new function TClass *THtml::GetClass(const Text_t *name1, Bool_t load).
  This function replaces calls to TROOT::GetClass. It includes additional
  tests on the string supposed to contain a class name. If the class name
  includes trailing blanks, they are stripped.

-   META
 ========
- class TClass. Change prototype
    void Inspect(TClass *cl, const char *parent, const char *name, void *addr);
   void TBuildRealData::Inspect(TClass *cl, const char *pname, const char *mname, void *add)
   remove unnecessary casts to (char*).


-  MINUIT
 ========
- class TFitter.
  Add new function TFitter::GetSumLog to compute the sum of the logs
  of numbers from 1 to N. used by Log likelihood functions.
  This saves a considerable amount of time when loglikelihood option
  is selected (thanks Gerco Underwater for reporting).
  new function void TFitter::FixParameter(Int_t ipar).
  new function void TFitter::ReleaseParameter(Int_t ipar).

- class TMinuit
  TMinuit::Contour returns a TObject instead of a TGraph.
  This change to avoid dependency of libMinuit from graphics.
  Calls to TGraph via the interpreter.
  Replace several "static char" by "const char"

-  TTREE
 ========
- class TBasket
  in function TBasket::WriteBuffer replace test
  if (nout > fObjlen) by if (nout >= fObjlen)
  This fixes a problem in case the compression algorithm generates
  a compressed buffer of exactly the same size as the input buffer.

- class TBranch
  Remove the definition of variable lentype from the constructor.
  use the leaf->GetLenType instead.
  In TBranch::GetBasket, replace statement:
      if (basket->GetObjlen() <= nb) {
  by
      if (basket->GetObjlen() + basket->GetKeylen() <= nb) {
  (thanks xxxx)

- class TBranchObject.
  In TBranchObject::SetAddress implement suggestion by Andy Salnikov
  to set the user branch pointer to the internally created object.
  This nice suggestion introduces a symmetric behaviour between split
  and non-split mode.

- class TLeaf. New prototype for;
    virtual Float_t GetValue(Int_t i=0);
  dependencies from TTreeFormula removed.

- mame in TLeafB, TLeafC, TLaefD, TLeafF, TLeafF, TLeafObject

- class TChain
  make TChain::Lopp dummy for the time being.
  Replace Pop by Notify.

- class TTree
  Split this class into 3 new set of classes
    - the original and smaller TTree
    - the new class TTreePlayer implementing most of the old TTree::Draw
    - the new class TTreeViewer
  The new TTree has no references to graphics or viewers anymore.
  Internal members fV1, fV2, fV3 , fW, fVar1, fVar2, fVar3, fSelect deleted.
  Fix a problem in TTree::BuilIndex. New array fIndexValues introduced.
  TTree::Draw is a small layer to invoke TVirtualTreePlayer::Draw
  The following functions have been deleted from TTree and reimplemented
  in TTreePlayer:
  TTree::ClearFormula, CompileVariables, CreatePacketGenerator
  TTree::EstimateLimits, EntryLoop, FindGoodLimits, GetSelector, MakeChopt
  TTree::SetPacketSize, SetSelector, TakeAction, TakeEstimate.
  Several improvements in TTree::MakeClass and TTree::MakeCode
  TTree::SetBranchStatus supports wildcarding for the branch name.
  New function void TTree::SetBasketSize(const Text_t *bname, Int_t buffsize)
  where bname also supports wildcarding.


- TREEVIEWER
  ==========
  Add two new buttons/fields to display the command currently executed
  and to activate the echo of this command in stdout. (Philippe Canal)

-  PHYSICS
 ========
- classes TLorentzVector and TVector3. add protection in case of a reference
  to a bad index. (Peter Malzacher)

-    X3D
 ========
  new class TViewerX3D. This class is a small interface to invoke the X3D viewer.


- POSTSCRIPT
 ===========
  Several optimisations in TPostScript::Text.
  The computation of the text size takes into account the pad aspect ratio
  in the same way as TAttText::Modify.
  The array psrap has been modified to give the same character size between
   the screen and Postscript for all the defined fonts.

-  TEST
  =====
 In main program MainEvent of the Event test program, repalce statement
     Event *event = new Event();
 by
     Event *event = 0;
 and call new Event only in the Write test.

  Modify stress test program to
   - dynamically link the postscript shared lib.
   - in stress7 delete statement    cutg->SetTree(ntuple);
  In Tetris, replace    fIsEditable = kIsNotEditable; by   fIsEditable = kFALSE;

-  TUTORIALS
   =========
  In rootlogon.C delete dynamic linking of Root_Tree.DLL for Windows/NT.
  This is now symmetric between Unix and NT in TRint.
  In testrandom, the loop index i was defined twice.
  In Zdemo, delete some unused statements.

-  INSTALL
   =======
  Many changes in Make-macros to reflect the changes in the internal
  organisation and the new classes.
  Change CXXFLAGS and SYSLIBS in Makesolarisegcs.

- The ALPHA/CXX saga
  ==================
  A considerable amount of time has been spent to make Root version 2.23
  operational on Dec/Compaq/Alpha with the CXX compiler and linker.
  After lengthy investigations suspecting problems with the compiler
  or Root itself, we finally found out a problem with the loader.
  If one tries to create the libraries libCore, libHist, libGraf3d like
  on all other Unix systems, one gets unpredictable results during
  execution. The program bombs at variable places. Adding a print statement,
  compiling with different options move the problem to a different location
  like if the code was overwritten.
  After many attempts, dirty tricks, etc, we finally solved the problem
  in adding into libCore the contents of libHist and libGraf3d.
  For compatibility with the other Unix systems, libHist.so and libGraf3d.so
  exist, but contain dummy code.
  This problem has been reported to Compaq.

// 12/10/1999  19.40.41  by  Fons Rademakers
//
- TClass: fix in GetBaseClassOffset(): return correct offset for
  arbitrary deep inheritance trees.

- On WinNT: can now link DLL's like shared libs on AIX. I.e. also WinNT
  is now modular. Had to move several classes from the Win32 lib to the
  WinNT lib.

- Introduced new header RVersion.h (available whenever a ROOT class header
  is included). This header exports the followin symbols:

     #define ROOT_RELEASE "2.23/03"
     #define ROOT_VERSION_CODE 136963
     #define ROOT_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))

  which can be used in the following way:

      #if ROOT_VERSION_CODE >= ROOT_VERSION(2,23,4)
         // for newer versions
      #else
         // for old versions
      #endif
//
//
// 11/10/1999  12.25.59  by  Fons Rademakers
//
- Cleanup of WinNT installation. Removed empty patch Win95. Generate
  dictionaries for TWinNTSystem and TGWin32 classes. Introduced
  WIN32_LinkDef and WINNT_LinkDef. Corrected number of WinNT related
  CMZ install macros.

- TBuffer: fixed reading of strings (TBuffer &TBuffer::operator>>(Char_t *c)).
  The user must make sure that c points to space large enough to hold the
  string to be read. In previous version only 4 bytes were read. Use TStrings
  for dynamic strings.

- TGTextEntry: addtional fixes from V.Onuchin for no echo mode.
//
// 05/10/1999  18.23.13  by  Fons Rademakers
//
- Make-macros: added build rules for libThread.so.

- G__MethodInfo: Property() returns correct info when method is const.
  This will allow the THtml class to correctly show the signature of
  const methods.

- Removed macro EXTERN from DllImport.h. To export globals in a portable
  way to the interpreter you HAVE to use now the macro R__EXTERN.

- TFunction: fix in GetSignature() so that it also works in the derived
  class TMethod.

- TVector: fix in ResizeTo() when growing a TVector (fix by Marek Kowalski).

- TSystem: ListLibraries() prints now on all platforms the list of loaded
  shared libraries. Removed redundant space from GetLibraries().

- TCint: removed redundant space from GetSharedLibs().
//
// 04/10/1999  20.59.25  by  Fons Rademakers
//
- New browser icons by Suzanne Panacek.
//
// 03/10/1999  19.17.52  by  Fons Rademakers
//
- InitGui() graphics initialization function not needed anymore.
  Graphics libs (libGX11 and libGui) will now be loaded by
  TApplication only when !gROOT->IsBatch(). By default the system
  will not be in batch mode when the DISPLAY environment variable is
  set or when, for backward compatibility, InitGui() is specified
  (InitGui() is now dummy, so remove it from your TROOT ctor).
  To explicitely set the system in batch mode call gROOT->SetBatch()
  before creating the TApplication object, or pass the -b command line
  argument to the TApplication ctor. NOTE: The previous default behaviour
  was to be always in batch mode when InitGui() was not specified in
  the TROOT ctor, now you've to use SetBatch() as mentioned above.
  Changes in TROOT, TApplication, InitGui(), pmain, rmain, guitest,
  hworld, stress and root-config.

- For all platforms: introduced libCore consisting of the previous libs:
     BASE, CONT, META, NET, UNIX, ZIP and C.
  Changes in ROOT_LIBS and ROOT_MAKE macros.

- X11 dependence is now completely contained in libGX11. No need to link
  anymore an application explicitely with -lXpm and -lX11. Dynamically
  loading of libGX11 will also force the loading of libXpm and libX11.
  Modified all Makefile's accordingly.

- THistPainter: corrected case of deckname.
//________________________________________________________________________
//
//::>          VERSION  2.23/03   27/09/99 15.19.38
//
//
// 27/09/1999  00.59.09  by  Fons Rademakers
//
- Make-macros: fixed number of typos.

- IBM AIX: after re-organization and introduction of abstract
  interfaces, can now link in number of small libraries. Like
  on other systems. Had to move TAttAxis to BASE since it is
  used by TStyle. On IBM libCore.a consists of:
     BASE, CONT, META, NET, UNIX, ZIP and C.
  Also updated all AIX link sequences (number of system libs
  could be removed from link command).

- Updated root-config.
//
// 25/09/1999  20.26.07  by  Fons Rademakers
//
- TGWindow: new method IconifyWindow().

- TGVirtualX, TGX11: new method IconifyWindow()

- TRootCanvas: Iconify() now calls IconifyWindow().

- TApplication: protect againts double loading of libGX11TTF.so.
//
// 23/09/1999  18.06.34  by  Fons Rademakers
//
- TGFrame: added method SetIconPixmap().

- TGVirtualX, TGX11: added SetIconPixmap().
//
// 21/09/1999  19.19.54  by  Fons Rademakers
//
- TROOT: added error handling to LoadClass(). Also use LoadClass() to
  load libProof in Proof().

- TRint:  explicitely load commonly used libraries (Matrix, Postscript,
  Minuit).

- TFile: use TROOT::LoadClass() to load libRFIO.
//
// 21/09/1999  19.19.54  by  Fons Rademakers
//
- TROOT: added error handling to LoadClass(). Also use LoadClass() to
  load libProof in Proof().

- TRint: explicitely load commonly used libraries (Matrix, Postscript,
  Minuit).

- TFile: use TROOT::LoadClass() to load libRFIO.
//
// 21/09/1999  19.19.54  by  Masaharu Goto
//
* 5.14.16 22 Aug 1999
* 1176, cast error message was too strict. Allow pointer cast, risk1
* 1177, (pary[i])->f(new A); bug fix, risk5
* -   , default editor for .E command , notepad for Windows, risk0
* 1178, n,y,z,< debugger command eliminated from ROOT help
* 1179, Macro expansion bug at dictionary generation, risk1
* 1180, no default constructor errmsg in bytecode compilation eliminated, risk0
* 1181, G__calc("delete a"); bug fix
* 1182, class A { A const& operator=(A const& x); }; bug fix
//
// 20/09/1999  12.43.06  by  Fons Rademakers
//
- TGCompositeFrame: AddFrame() provide default layout hints when
  user does not provide hints.

- Removed references to libX3d from globals, root-config and Make-macros.
  The libX3d is oly loaded when needed.
//
// 18/09/1999  14.50.10  by  Fons Rademakers
//
- TObjArray: set fLast correctly in copy ctor.

- TStorage: new static method AddToHeap(). This method keeps
  track of total memory range used for heap. This allows for
  correct checking of heap objects, i.e. any object within
  this range is on the heap. Previously only the range of
  the just new-ed object was checked (and reset in delete).
  This would fail if before the execution of the ctor another
  object would be new-ed (like as in a method passed as
  argument that returns an object).
//
// 17/09/1999  00.44.30  by  Fons Rademakers
//
- TWebFile: Init() now takes Bool_t argument (unused) so it
  will not hide TFile::Init(Bool_t).
//
// 13/09/1999  02.49.53  by  Fons Rademakers
//
- TSystem: enlarged max buf size in ExpandFileName() to 1024
  (limit of max path length on many systems).
//
// 12/09/1999  15.47.08  by  Fons Rademakers
//
- TClass: added two new methods:
     void *DynamicCast(const TClass *base, void *obj)
     Int_t GetBaseClassOffset(const TClass *base)
  the first method is used to safely cast via a generic
  obj pointer to a base class (equivalent to dynamic_cast<>()).
  It returns either 0 or a pointer pointing to the "base"
  part of obj. The second method is used internally by DynamicCast().

- TObject: removed Is3D() and Sizeof3D() from TObject.
  Added new method Notify(). Notify() can
  be implemented whenever an object has to respond to some
  notification.

- New class TAtt3D: use this class via multiple inheritance
  to get 3D capability (like the other TAttxxx classes and like
  Java's interface mechanism). The virtual function, Sizeof3D(),
  provided by this class should be overridden. To safely access
  this TAtt3D method do:
     TIter next(pad->GetListOfPrimitives());
     TObject *obj;
     while ((obj = next())) {
        TAtt3D *att;
   #ifdef R__RTTI
        if ((att = dynamic_cast<TAtt3D*>(obj)))
   #else
        if ((att = obj->IsA()->DynamicCast(TAtt3D::Class(), obj)))
   #endif
           att->Sizeof3D();

  Used like this in TViewerX3D::View().

- Modified all classes which had Is3D()=kTRUE to inherit from TAtt3D.
  Implementation of Sizeof3D() for these classes stayed the same.

- Changed all calls of gInterpreter->ProcessLine() to
  gROOT->ProcessLine(). The latter is a safe interface to the
  interpreter (i.e. it makes sure the proper TApplication environment
  exists) and should always be used. Removed unneeded TInterpreter.h
  inclusions from a number of files.

- Cleaned up many cases where temporary string variables were declared.
  Mostly in cases where command strings were formed to be passed
  to ProcessLine(). Use the ::Form() function to format temp strings
  in a circular text buffer.

- Added proper error handling in several cases of gSystem->Load().

- TVirtualFitter: added argument specifying the maximum number of
  fit parameters to Fitter() (also added this to TFitter ctor).
  Also added the methods FixParameter() and ReleaseParameter()
  (to avoid confusion since parameters defined via the virtual
  interface count from 0 while minuit counts from 1).

- $ROOTSYS/test/minexam.cxx: use TVirtualFitter interface so we
  don't have to link explicitely with libMinuit.

- TChain, TTree: use TObject::Notify() instead of Pop() to notify
  an object during chain traversal.

- TVirtualX, TGX11: added new method FreeFontStruct().

- TGString: fixed memory leak (using FreeFontStruct()) in TGHotString::
  DrawHotChar(). Thanks Krzysztof Zelazowski.

- TGTextFrame: fixed memory leak. Thanks Krzysztof Zelazowski.

- TCanvas: fixed opaque moving and resizing that were broken after
  the large dependency cleanup of 2.23/01.
//
//________________________________________________________________________
//
//::>          VERSION  2.23/02   07/09/99 18.25.12
//
//
// 07/09/1999  18.03.41  by  Rene Brun
//
- IMPORTANT CLEANUP OPERATION
  ===========================
  An effort has been started to reduce libraries dependency by:
    -moving classes to other categories
    -introducing new abstract interfaces
    -removing unnecessary includes in the implementation files
    -calling classes via the interpreter when performance is not an issue
    -some minimal changes in several classes
  All these changes should be totally transparent to users.
  With the new structure, for example:
    -a program referencing TObject only will need the following
     libraries (the Root kernel): Base, Meta, Cont and Cint.
     This "kernel" includes the Root I/O. There are no references
     to graphics, GUI, etc. (Many users believe that because there is
     a TObject::Draw, this implies linking with graphics!!).
    -a batch program creating/filling/saving histograms will only need
     the kernel above + the Hist library.


  Some new abstract interfaces have been introduced and some changes (renaming)
  have been done in the existing abstract interfaces.

  -TVirtualPad: abstract interface to graphics in a pad
                real implementation is TPad.
     The new TVirtualPad does not derive anymore from TWbox but directly
     from TObject.
  -TVirtualX:   abstract interface to the basic windowing system (was TGXW)
                real implementations are TGX11 (Unix) or TGWin32 (Windows/NT)
  -TVirtualPS:  abstract interface to Postscript
                real implementation is TPostScript.
  -TVirtualGL:  abstract interface to Open GL.
                real implementation is TGLKernel.
  -TVirtualFitter: abstract interface to a minimisation package.
                real implementation is TFitter calling TMinuit.
  -TVirtualHistPainter: abstract interface to histogram graphics
                real implementation is THistPainter.
  -TVirtualTreePlayer: abstract interface to the TTree analyzer.
                real implementation is TTreePlayer.
   -TInterpreter: abstract interface to a C++ interpreter
                real implementation is TCint.
  -TSystem: abstract interface to the operating system
           real implementations are TUnixSystem, TWinNTSystem, TVMSSystem.

   The abstract classes are in the Base library.

                   More details on the restructuring
                   =================================
   Library libBase
   ===============
   - remove dependency from libProof by use of the interpreter.
     affects TDirectory::Get, TFile::ConnectFile, TFile::DisconnectFile.
   -The Root constructor does not reference/initialize TMinuit, TGeometry
     or TPostScript.
     The initialisation of these three objects is automatic from the new functions
     TVirtualFitter::Fitter TShape::TShape or TPad::Print respectively.
     The return type for TROOT::GetGeometry is a TObject* instead of TGeometry*
     The return type for TROOT::GetFunction is a TObject* instead of TF1*
   -The attribute classes TAttFill, TAttLine, TAttMarker, TAttText, TAttPad
     have been moved to Base from Graf.
   -TBrowser has been moved to Base from Graf.
   -TColor has been moved to Base from Graf.
   -TGuiFactory has been moved to Base from Graf.
   -TStyle has been moved to Base from Graf.

   Library libFunc
   ===============
   This library has been DELETED. The corresponding classes moved to libHist.

   Library libHist
   ===============
   - The class TH1 has been split into two classes
     - a reduced TH1 (no graphics)
     - the new class THistPainter (see library libHistPainter)
   - New transient only data member added fPainter. fPainter is a pointer
     to the TVirtualHistPainter object associated to each histogram.
     Note that an object per histogram is required to work in a multiThread
     environment.
   - References to graphics via the new abstract interface TVirtualHistPainter.
   - The classes TFormula, TF1, TF2, TF3 have been moved from Func to Hist.
   - No more direct references to TMinuit.
     The interface to an abstract minimizer has been introduced via
     the new class TVirtualFitter (in Base). The real implementation is
     in class TFitter in the libMinuit library.
   - The class TAxis has been moved from Graf to Hist.
   - The class TAttAxis has been moved from Graf to Hist.
   - The class TPolyMarker has been moved from Graf to Hist.
   - The class TPaveStats has been moved from Hist to Graf.
   - The class TLink has been moved from Base to Graf.

   Library libHistPainter
   ======================
   - Contains the class THistPainter and TLego (moved from libGraf).
   - this library contains all the functions required to paint histograms.
     This class includes all the functions previously called TH1:Paintxxx.
   - this library is automatically linked by TH1::Paint.

   Library libGraf
   ===============
   - all changes already described above
   - TGXClient is temporarely dropped.
   - class TGXW renamed to TVirtualX and moved to Base.
     global variable gGXW renamed gVirtualX.
   - class TGraph:
     new function TGraph::RemoveFunction.
   - class TView. remove dependency from Graf3D by creating a new function
     TPolyLine3D::DrawOutlineCube (in Graf3D) and invoking this function
     via the interpreter in TView::DrawOutlineToCube.
   - class TWbox. remove TPostScript dependency by calling the new
     function TVirtualPS::PaintBorderPS.
   - Changes in TWbox and TBox to remove knowledge about TPad or TButton.

   Library libGpad
   ===============
   -The class TPad derives from TVirtualPad (as before). But because of the
    changes in TVirtualPad, the previous functionality previously in
    TWbox/TBox::DistancetoPrimitive and TBox::ExecuteEvent has been included
    in TPad.
    TPad has new data members (previously in TBox) fResizing and fTip.
    TPad/TVirtualPad have new functions (see class).
       TPad::PaintBorder, TPad::PaintBorderPS.
    Dependency from TCutG, TGToolTip removed by using calls via the interpreter.
    Dependency from TPostScript removed by using calls to the TVirtualPS object.
    TPad::Print can dynamically link the Postscript lib when this is required.
    TPad::Resize suppressed.
    Dependency from X3D removed: When TPad::x3d is called, the new library libX3d
    is dynamically  linked and the the new class TX3D invoked via the interpreter.
    Change return type from TGToolTip* to TObject* in all TPad functions
    involving tooltips.

   Library libGraf3d
   =================
   - new function TMarker3DBox::PaintH3.
     This function is called via the interpreter from THistPainter::PaintH3.
   - new function TPolyMarker3D::PaintH3.
     This function is called via the interpreter from THistPainter::PaintH3.
   - new function TPolyLine3D::DrawOutlineCube.
     This function is called via the interpreter from TView::SetOutlineToCube.
   - In TShape::TShape, a TGeometry object is automatically created
     in case gGeometry = 0.

   Library libPostscript
   =====================
   The class TPostScript derives from TVirtualPS instead of TNamed.

   Library libMinuit
   =====================
   The class TMinuit is now invoked by the new class TFitter derived
   from the abstract interface TVirtualFitter.

   Library libX3d
   ==============
   A new small class TX3D has been introduced. Corresponding utilities
     -cint_x3d
     -x3d_linkdef
   The library libX3d is now automatically dynamically linked by TPad::x3d
   and a TX3D object created. TPad::x3d invokes the static function
   TX3D::Viewer via the interpreter.

   Library libGui
   ==============
   new constructor in class TGToolTip
   TGToolTip::TGToolTip(const TBox *b, const char *text, Long_t delayms);
   This new constructor is invoked by TPad::CreateToolTip to remove
   the previous depency of libGpad on libGui (gClient was necessary).
   All previous calls to gGXW replaced by gVirtualX.

   Library libTree
   ===============
   The original TTree class has been split into two new classes
      -The TTree class with no graphics. Includes the Tree creation/Filling.
      - the old TTree::Draw complex has been moved to a new class TTreePlayer
      - TTree::Draw is simply an interface to the abstract TVirtualTreePlayer.
   A program creating/filling a TTree does not need to link with the graphics
   libraries. dependencies on libProof have been removed.

   Library libTreePlayer
   =====================
   includes the Ttree analyzer function TTreePlayer. This class derived
   from the abstract interface TVirtualTreePlayer implements the functions
   previously called by TTree::Draw.
   The library also includes the classes TSelector, TTreeFormula, TPaveVar,
   TTreeViewer and TPacketGenerator. This lib depends on libProof and the
   graphics libs.


//
// 03/09/1999  09.08.55  by  Rene Brun
//
- In TLeaf::GetLeafCounter, one of the delete [] countname statement was
  misplaced and prevented the correct utilization of 3 dimensionnal (and up)
  indexed arrays. (thanks Philippe canal).
//
// 01/09/1999  17.29.57  by  Fons Rademakers
//
- TGtextEntry: small fix for block cursor.

- TFile: better test to see if libRFIO is already loaded.

- TGX11TTF: protection against running out of X buffer space when fonts
  get toot big (more than 50000 points).
//
//________________________________________________________________________
//
//::>          VERSION  2.23/01   01/09/99 11.55.46
//
//
// 31/08/1999  20.37.39  by  Fons Rademakers
//
- TRint: removed R__UNIX ifdef (symbol now exported by CINT also for Windows).

- TGTextEntry: updated version by Valeriy Onuchin. Supports now scrolling and
  advance (emacs) like editing.

- TArray: ReadArray() and WriteArray() now handle correctly the bytecount
  recently introduced in TBuffer.
//
// 31/08/1999  18.32.08  by  Rene Brun
//
- The following new classes have been introduced:
    TVirtualHistPainter & THistPainter
    TVirtualFitter & Tfitter

  class TVirtualHistPainter and THistPainter
  ==========================================
  TVirtualHistPainter is an abstract base class that provides a general
  interface for an histogram painter.
  The class TH1 has been split into two new classes;
    -the old TH1 with no graphics
    -the new class THistPainter
  THistPainter is the real implementation of TVirtualHistPainter.
  With this change, somebody not happy with the default histogram painter
  provided by the class THistPainter can implement his own version.

  class TVirtualFitter & TFitter
  ==============================
  TVirtualFitter is an abstract class that provides a general interface
  to a minimization package. TFitter is the real implementation for
  this class and it uses the existing TMinuit class.
  With this change, somebody not happy with the default fitter (either
  TMinuit or the new interface to TMinuit by TFitter can implement
  his own version.
  The functions TH1::Fit and TGraph::Fit invoke the TVirtualFitter directly.
  With this new implementation, the histogramming package and the TGraph
  package are independent of TMinuit. Somebody using histograms or graphs
  but no fits does not need to link with the shared library libMinuit.

- Add the following line in TSystem::CompileMacro
         gSystem->Unlink( dictObj );
   (thanks Philippe Canal)

- Changes in makemacros to generate the file compiledata.h in two steps.

- Move implementation for functions TChain::GetBranch, TChain::GetLeaf
   and TChain::GetNbranches from header file to implementation file.
   The new code is now protected in case TChain::LoadTree was not already
   called.

- Fix a problem in TF1::SavePrimitive. In case a canvas contains a TF1
   object referencing a CINT function, the code generated was invoking
   the wrong TF1 constructor. Thanks David Hardtke for reporting.

//
// 30/08/1999  18.44.14  by  Rene Brun
//
- Modidy TObject::DrawClone to draw the clone object in the current pad
  instead of the pad where the mouse points to. With this change one can
  select an object in a pad, select DrawClone to draw a copy of this object
  in the current pad.

- Fix a problem in TPostScript::SetFillPatterns. The local array cpat
  is now dimensionned to 5 instead of 4.

//
// 27/08/1999  22.22.00  by  Rene Brun
//
- Modify TAxis::FindBin to take into account NaN.
  The trick is to replace the test for overflows
     if (x >= xmax) by if (!(x<xmax))

- In class TPaveStats, add new data members and member functions
   to specify the format used to print the statistics and fit parameters
   in a "stats" box. The new functions are;
      const Text_t  *GetFormatFit  () const;
      const Text_t  *GetFormatStats() const;
      void           SetFormatFit(const Text_t *format="5.4g"); // *MENU*
      void           SetFormatStats(const Text_t *format="6.4g"); // *MENU*

- Some cleanup in class TROOT. remove unnecessary includes.
   Function TROOT::Proof invokes TProof via the interpreter.

- Modify TLego to remove the use of the globals gLego and gNIDS.

- Merge with Valery's version.
  Valery has suggested a way to solve the following problem:
   -create a canvas TCanvas c("c")
   -delete canvas with the mouse
  At this point the global variable gPad was not available anymore.
  Valery fixes are in GUI/TRootCanvas and in Win32/TWin32Canvas, Browser
  and Dialog.


//
// 26/08/1999  17.10.47  by  Fons Rademakers
//
- rootcint: declaration of G__map_cpp_name moved to G__ci.h.

- TGMimeType: error where freed memory was accessed.

- TGListTree: undefined variables defined.

- TGTextEntry: text is now horizontally scrollable. Implemented by
  Valeriy Onuchin.
//
// 26/08/1999  15.49.03  by  Rene Brun
//
- new class THistPainter. This is a helper class to draw histograms
   with different options. The code in this new class was previously in TH1.
   Makefile modified accordingly.

- All graphics function from TH1 moved to new class THistPainter.
  TH1 defines a static object THistPainter Painter. This Painter is invoked
  from the graphics routines TH1::Paint, distancetoPrimitive and ExecuteEvent.

- Mods from Philippe Canal in CINT:
  running rootcint on my version of TGraph.h and TContextMenu.h fails
  because by pure chance both file have their ClassDef statement EXACTLY
  at the same position in number of charaters.
  According to this extract from CINT_macro.c from G__execfuncmacro
  cint lookup it has already translated a macro by comparing the
  the file pointer and the position in number of charaters.
  However the file pointers can be reused during rootcint and so
  these two numbers are not a unique identifier and thus (at least in
  my case) their is a clash :(
  Problem fixed by Masa.

- In an attempt to compile root under Solaris with the new compiler CC5,
  many changes replacing "char *" by "const char *" have been made to avoid
  a long list of warnings from the compiler. The classes changed are:
    TCint, TClonesArray, TColor, TContextMenu, TControlBar, TDataMember,
    TGLViewerImp, TGX11, TVirtualX, TInterpreter, TLego, TMinuit, TObject,
    TPad, TPaveText, TRotMatrix, TStyle, TTree, TVirtualPad, TGWin32,
    TAttParticle, TGenerator, TPrimary, TPythia, TMethodCall, TSelector.
//
// 19/08/1999  18.08.43  by  Rene Brun
//
- new function TH1::Smooth.
   This new function implements a simple smoothing algorithm.
   It is currently only implemented for 1-d histograms.
   It uses the services of two new static functions
      TH1::SmoothArray and TH1::SmoothMedian.
   This new function is also available via the TH1 context menu.
   (thanks to Michal Lijowski for translating the original algorithm
   in the Hbook routine hsmoof).

- protection added in the TKey constructor in case R__zip cannot compress at all.
  This can happen in case of small buffers containing random patterns.
  The threshold for object compression has been rised from 64 to 256 bytes.
  (thanks Peter Malzacher for providing a simple test case).

- protection added in TPad::CreateToolTip in case of WIN32.
- protection added in TPad::CreateToolTip in case of a batch session.

//________________________________________________________________________
//
//::>          VERSION  2.23/00   18/08/99 18.33.08
//
//
// 18/08/1999  18.16.20  by  Rene Brun
//
- Add function TGraph::Browse. A TGraph object in a TFile can be viewed
  directly by the browser.

- remove several dependencies:
   TGroupButton: no need for TPaveLabel
   TBasket:      no need for TLeaf
   TTree:        no need for TChain

- Change invokation to TClassTree from TRootCanvas and TWin32Canvas.

- Update tutorial classcat to reflect the changes in TClassTree.

- Class TPaveClass updated to reflect the changes in TClassTree.

- Important changes in class TClassTree.
  See TClassTree header for a complete documentation.
  The new version of this class is more poweful and simple to use.
  All kinds of class dependencies can be drawn.
  Note in particular the following interesting new feature:
    A TClassTree object may be saved in a Root file.
    ================================================
      This object can be processed later by a Root program that ignores
      the original classes. This means that you cans send
      the class structure of an application to a colleague who does not have
      your classes.
      Example:
         TFile f("myClasses.root","recreate")
         TClassTree *ct = new TClassTree("ct","ATLF*")
         ct->Write();
      You can send at this point the file myClass.root to a colleague who can
      run the following Root basic session
         TFile f("myClass.root"); //connect the file
         tt.ls();                 //to list all classes and titles
         tt.Draw("ATLFDisplay")   //show class ATLFDisplay with all its dependencies
      At this point, one has still access to all the classes present
      in the original session and select any combination of these classes
      to be displayed.

//
// 12/08/1999  18.51.40  by  Rene Brun
//
- Comment one statement in TMethod::FindDataMember.
   it was making troubles in BuildRealData for classes with protected
   default constructors.

- Fix a problem in TFormula::EValPar (thanks Gene Van Buren).
  The same variable name (i) is used to loop over the operations,
  and also within the loop as another loop variable over
  defined strings and variables.

- Import the following changes by Peter Malzacher:
    Bug Fix for TLorentzVector member function CosTheta (PR#461)
            reported by Marios Kagarlis

    TVector3::Eta() (CDF mc-bugs PR#264) (guard against Pt==0)
            reported by Pasha Murat

    New Getter  GetXYZT(Double_t/Float_t *carray) and
                GetXYZ(Double_t/Float_t *carray)
            in TLorentzVector and TVector3
            requested by Pasha

    Changed two global functions in TVector2 to static memberfunctions
            to avoid nameclashes with CDF SW
            requested by Pasha

//
// 09/08/1999  10.02.02  by  Rene Brun
//
- Merge with Fons's version.

- import new CINT 5.14.13 from Masa
//
// 09/08/1999  10.00.22  by  Masaharu Goto
//
* 5.14.9 4 Jul 1999
* -   , G__VARIABLEFPOS, linenum added
* 1138, #pragma link, undefined symbol warning
* -   , disable 1083, class A{const char *str; const int N=5;};
* 1139, G__type2string, invalid tagnum protection
* -   , 1137 fixed
* G__PTR2MEMFUNC, t195.cxx, pointer to member function support
* -   , G__reloadfile() improved
* -   , -p option, -I$CINTSYSDIR/stl added
* -   , -p option  'vector' loading bug fix
*
* 5.14.10 4 Jul 1999
* 1140, virtual base class instantiation in ctor, risk1
* 1141, typedef long long int __quad_t; bug fix, risk2
*
* 5.14.11 30 Jul 1999
* 1142, G__optimizemode(), G__getoptimizemode() added, risk0
* 1143, lib/stream 'extern istream cin;' wrong error detection fixed, risk2
* -   , istream::seekg activated for Visual C++, risk1
* 1144, lib/longlong , G__longlong <=> long conversion changed, risk2
* 1145, Warning message for in function typedef, risk0
* 1146, error message improvement, risk0
* 1147, enum {a,b,c}; string x[c]; error bug fix, risk1
* 1148, 1086, G__check_semicolumn_after_classdef() bug fix ')' missing, risk4
* 1149, int npar 10; warning message, risk0
* 1150, cout<<setw(5) name<<endl; warning message, risk0
* 1151, const int N=p->x; eliminate error message, dynconst flag set, risk2
* 1152, class A{ Trk* trk() const; }; bug fix, risk0
* 1153, class A{long long a;}; bug fix, not perfect , risk2
* 1154, new A(v,w,x) error detection for interpreted class, risk2
* 1155, G__asm_loopcompile, G__RECOVER_ASMENV changed, risk3
*-1156, G__init_env() in G__clearfilebusy() didn't solve Ctrl-C problem
* 1157, A* p=new A(px,new int,new B); bug fix in new_operator, risk4
*
* 5.14.12 1 Aug 1999
* 1158, struct without dtor with class object member with dtor, bug fix, risk3
*-1159, template member function call in func.c, overloading problem
* 1160, template member function call in ifunc.c , risk4
* -   , bytecode compiler reset, warning message improved, risk0
* G__TYPEDEFFPOS, filename and linenumber for typedef, risk0
* 1161, class bool { ... }; if(bool) {}  evaluated in G__iosrdstate(), risk2
* -   , 1122 STAR dictionary problem solved, Error -> Warning, risk0
* 1162, error message for dictionary generation problem, risk0
*
* 5.14.13 8 Aug 1999
* 1163, Add local variable dictionary in ERTTI API, risk0
* 1164, Local variable table, bytecode compiler workaround, risk0//
//
// 08/08/1999  22.28.09  by  Fons Rademakers
//
- Makefiles: made all Makefile $ROOTSYS independent. You can now
  build the complete system in a tree independent of $ROOTSYS,
  "gmake install" will copy the new headers, binaries and libraries
  to $ROOTSYS. Changes need for clean build of sources coming from cvs.

- TProof: fix bug in reparenting of resulting histogram. Use
  h->SetDirectory(gDirectory) instead of gDirectory->AppendPad(h).

- TApplication: don't check for TrueType fonts when application has
  name "proofserv".
//
// 07/08/1999  18.44.38  by  Fons Rademakers
//
- rootcint: protection against fp=0 and make sure that template arguments
  are converted to a legal string in WriteTmpltExtras.

- TDatbasePDG: removed the Cleaner class since it caused problems with the
  new HP aCC. Anyway it was not necessary since memory is always freed when
  a program terminates. Some general cleanup and comments added.

- TRint: notify CINT in case of ctrl-c so macro's can now safely be interrupted.

- TH1: use Error() instead of Printf() in a number places. Error() calls can
  be trapped and send to an error logger while Printf() calls can not.

- TGSlider, TGDoubleSlider: now also execute associated command strings.

- TBuffer: removed two redundant statements.

- TROOT: print warning instead of program abort when more than one TROOT
  object is being created.
//
// 06/08/1999  18.53.39  by  Rene Brun
//
- new class TPaveClass used by the new version of TClassTree.
  TPaveClass is a special TPaveLabel with additional functions
  to set interactively the options for the supported class.
  Decks cint_gpad, gpad_LinkDef, makedepend and makemacros modified.

- Important additions and changes in class TClassTree.
  The class structure has been modified. Some of the arrays previously
  defined in TClassTree::DrawTree are now data members. These members
  are used by the new functions TClassTree::FindClassesUsedBy and by
  TClassTree:FindClassesUsing. The class uses TPaveClass instead
  of TPaveLabel. By clicking on a TPaveClass, one can now select
  the following new options:
     -Show the list of classes used by this class.
     -Show the list of classes referencing this class

- Update documentation for TFormula::DefinedVariable & DefinedString.

- Modify TTree::MakeClass to generate one additional statement in case
  of a TChain.

- in TF1::Paint always call SetLimits for the axis. Previous version called
  TAxis::SetLimits only when the function limits were different from the
  pad limits. This fixes a problem when unzomming a pad containing functions.
  (Thanks Philippe Canal).

- protection added in TRootBrowser::IconBoxAction.

- protection in rootcint (thanks Philippe Canal).
  Linux/KCC actually core dumps in fclose(fp) if fp is null
  (which happens if the directory in which the dictionnary file
   should be created does not exist).

// 03/08/1999  12.49.50  by  Rene Brun
//
- Some changes in TTreeViewer.
  The button CPad has been deleted. The graphics output goes automatically
  to the latest selected pad.
  The Hist button was drawn twice.
  ToolTips have been added to all buttons.
  Thanks Philippe Canal for several remarks.

- In TPad::HightLight call gROOT->SetSelectedPad(this).
  This info is used by the new version of TTreeViewer::ExecuteDraw.

//
// 02/08/1999  12.14.56  by  Rene Brun
//
- Integrate changes in the THREAD package by Joern Adamczewski, Hans Essel, Marc Hemberger
  See their report below.
  A few changes had to be made to their changes relative to version 2.21.
  macro cint_thread modify to automatically select the THREAD and POSIX flags.
  install_linkdef modified to generate THREAD_LinkDef.h

- Make-macros modified to take into account the THREAD package.
  if the environment variable THREAD is set, the makefile will generate
  the Root libraries with the option THREAD.

- A few changes in TMinuit (thanks Christian Lacunza).
  --prototype of TMinuit::mnpout changed to:
     void   mnpout(Int_t iuext, TString &chnam, Double_t &val, Double_t &err, Double_t &xlolim, Double_t &xuplim, Int_t &iuint);
  --the following functions have been added:
     Int_t TMinuit::GetNumFixedPars() // returns the number of currently fixed parameters
     Int_t TMinuit::GetNumFreePars()  // returns the number of currently free parameters
     Int_t TMinuit::GetNumPars()      // returns the total number of parameters that have been defined.
  The changes in mnpout have implied changes in TH1::Fit and TGraph::Fit.

- Remove some obsolete comments from TBuffer::ReadBuf and TBuffer::WriteBuf.
  Thanks George Heintzelman for notifying.

- Update documentation of TStyle::SetOptStat.

- Introduce a few changes from Philippe Canal in TabCom.
  strstream on some plarform does not terminate the result of strstream::str() properly.

- Minor changes in TH1::PaintInit.

- TH1::Integral() calls TH1::GetStats and does not use the under/overflow.
  As a consequence, the information printed about the integral in the "stats"
  does not include under/overflows. It reports only about the integral of
  the bin contents for bins in the current axis range.

- new function TH1::Project3D
   TH1 *TH1::Project3D(Option_t *option)
     Project a 3-d histogram into 1 or 2-d histograms depending on the
     option parameter
     option may contain a combination of the characters x,y,z,e
     option = "x" return the x projection into a TH1D histogram
     option = "y" return the y projection into a TH1D histogram
     option = "z" return the z projection into a TH1D histogram
     option = "xy" return the x versus y projection into a TH2D histogram
     option = "yx" return the y versus x projection into a TH2D histogram
     option = "xz" return the x versus z projection into a TH2D histogram
     option = "zx" return the z versus x projection into a TH2D histogram
     option = "yz" return the y versus z projection into a TH2D histogram
     option = "zy" return the z versus y projection into a TH2D histogram
     if option contains the string "e", errors are computed
     The projection is made for the selected bins only

- Thanks to Guy Barrand for reporting an error in TBranchObject::GetEntry.
  The branch address was incorrectlky set in the piece of code attempting
  to define a branch address when the user had not set a branch address.

- Change the logic in TLeafObject::FillBasket and TLeafObject::ReadBasket
  to handle the special case of null pointers to TObject*. (thanks Philippe Canal).
  Instead of setting the kZombie bit for the temporary dummy object, the new code
    - set the kInvalidObject bit
    - set the fUniqueID to the special value 123456789.

- Change in TChain::Add in case the referenced Tree is a Root file/subdirectory.
  (thanks Philippe Canal).

//
// 02/08/1999  12.13.02  by  Joern Adamczewski, Hans Essel, Marc Hemberger
//
As already mentioned we activated the TThread classes provided
by root.

-----------------------------------------------
A detailed report can be found on our Go4 site:
http://www-wnt.gsi.de/go4/threads/tthread.htm
-----------------------------------------------

We tested several modes:

1. TThread constructor is called by root interpreter.
Works with thread functions defined in a shared library or
defined within a root macro or within the calling macro.

2. TThread constructor is called by a compiled function.
Thread functions were not called properly. Therefore we had
to change TThread. The TThread object still
could not be identified by name. Therefore we added
two new TThread constructors which allow to specify
the TThread name as string argument.

3. Thread synchronization using TCondition Objects works..
However, we had to fix definition of ERRNO() in PosixThreadInc.h
to get proper return values from TimedWait.

4. Access to global objects (histograms, flags) in threads
(created before thread creation).
Works. If several threads are writing this should be
locked explicitly via mutex.

5. Creating Objects and allocation of memory in threads.
Must be locked explicitly via mutex. This can be critical
because one not always 'sees' when objects are created.

6. Access to TCanvas, TPad and other graphics from threads.
Does not work, even if access is locked explicitly.
It seems that the errors occur in the X event handling
outside root. Moving the mouse accelerates the crashes considerably.

We will feed back the modified thread classes working as described.
We don't see a chance for us to fix problems 5,6.


 Go4 developer team @ GSI

Joern Adamczewski, Hans Essel, Marc Hemberger

//
// 30/07/1999  15.50.19  by  Fons Rademakers
//
- Additions to the Make system: there is now a top level ./configure
  (nothing fancy yet) and a Makefile. To build ROOT do:

     ./configure
     gmake depend
     gmake <architecture>  or  gmake
     gmake install

- CVS repository created. The latest sources can now be retrieved from
  our anonymous CVS repository. However, it is still needed that you
  start with a valid binary distribution, to where $ROOTSYS must point
  (the binary version only has to be installed once). Once this is set
  up, you can import the sources from CVS as follows:

     cd $ROOTSYS
     mkdir cvs
     cd cvs
     cvs -d :pserver:cvs@pcroot.cern.ch:/user/cvs login
     passwd: cvs
     cvs -z 9 -d :pserver:cvs@pcroot.cern.ch:/user/cvs co root

  To keep this repository up to date just do:

     cd $ROOTSYS/cvs/root
     cvs -z 9 update
//
