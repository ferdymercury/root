//*CMZ :          02/09/99  15.54.23  by  Rene Brun
//*CMZ :  2.00/13 30/10/98  09.19.13  by  Rene Brun
//*CMZ :  2.00/12 09/10/98  10.41.34  by  Rene Brun
//*CMZ :  2.00/11 26/08/98  19.10.44  by  Rene Brun
//*CMZ :  2.00/10 30/07/98  16.57.22  by  Rene Brun
//*-- Author :    Rene Brun   08/03/98
//________________________________________________________________________
//
//::>          VERSION  2.00/13   30/10/98 09.19.13
//
//
// 30/10/1998  08.34.54  by  Valery Fine
//
- Add several getter functions in TPadView3D.

- Minor correction in TWin32Canvas header file.
//
// 29/10/1998  18.55.47  by  Rene Brun
//
- New functions/data members in class TStyle
    TStyle::SetCanvasDefX to set the default canvas top X position.
    TStyle::SetCanvasDefY to set the default canvas top Y position.
    TStyle::GetCanvasDefX and GetCanvasDefY.

- Changes in TCanvas constructors to take into account the default
  values in TStyle for the top X and Y canvas positions.

- Some improvements in TPaveText::PaintText in the algorithm estimating
  the best character size.
//
// 29/10/1998  17.47.50  by  Fons Rademakers
//
- TCanvas: it is now possible to easily position and resize the canvas
  via some method calls. Also the canvas size is now correctly saved.
  The position depends on what de window manager does (borders, bevels,
  etc.), but is as close as possible to the intended position.
  To implement these new features the following methods were added to the
  TCanvas class:
     Int_t  GetWindowTopX()
     Int_t  GetWindowTopY()
     UInt_t GetWindowWidth()
     UInt_t GetWindowHeight()
     void   SetWindowPosition(Int_t x, Int_t y)
     void   SetWindowSize(UInt_t w, UInt_t h)

  The following method has been renamed (also in TPad):
     void SetCanvas(UInt_t w, UInt_t h)  -> void SetCanvasSize(w, h)

  The following methods have been removed:
     Int_t GetWtopX()
     Int_t GetWtopY()

- TCanvasImp: added SetWindowPosition(), SetWindowSize() and GetWindowGeometry()
  renamed SetCanvasSize() (was SetCanvas) and SetWindowTitle()
  (was SetCanvasTitle).
//
// 29/10/1998  17.01.32  by  Rene Brun
//
- Fix a format problem in TMinuit::mnmatu. The global correlation coeeficient
  was not currently printed. (Thanks Ian Tomalin for reporting).

- Add new symbol #Box in class TLatex.

- Minor correction in TTree::GetNameByIndex. With this fix, the symbol "%"
  can be used in an expression (means modulo).
//
// 29/10/1998  12.17.04  by  Rene Brun
//
- Mods in installation procedure for SGI/KAI. Introduce option -32
  in KCC (compiler and linker). Similar changes in Makefile.

- Fix a minor compilation problem (SGI/KCC) in TFunction::InterfaceMethod.
  ( return type must be void*).

- Remove CPP option _AIX41 in class TUnixSystem. Root assumes AIX version 4.
//
// 28/10/1998  19.19.12  by  Rene Brun
//
- Fix a typo in TLego::LegoSpherical when drawing the bottom face.
  (found thanks to the KAI compiler)
//
// 28/10/1998  15.35.56  by  Rene Brun
//
- Two new functions in TTree: TTree::Show and TTree::MakeClass.
  TTree::Show(Int_t event)
  ========================
  This function prints the event number event from the TTree file.
  If the argument event is not specified, prints the current event,
  otherwise, read event and print it.

  TTree::MakeClass(cont char *classname)
  ======================================
   This function generates a skeleton analysis class for this Tree.
   This function is an enhancement of the existing TTree::MakeCode.
   The following files are produced: classname.h and classname.C
   if classname is NULL, classname will be nameoftree.

   The generated code in classname.h includes the following:
      - Identification of the original Tree and Input file name
      - Definition of analysis class (data and functions)
      - the following class functions:
         -constructor (connecting by default the Tree file)
         -GetEvent(Int_t event)
         -Init(TTree *tree) to initialize a new TTree
         -Show(Int_t event) to read and Dump event

   The generated code in classname.C includes only the main
   analysis function Loop.

   To use this function:
      - connect your Tree file (eg: TFile f("myfile.root");)
      - T->MakeClass("MyClass");
    where T is the name of the Tree in file myfile.root
    and MyClass.h, MyClass.C the name of the files created by this function.
   In a Root session, you can do:
      Root > .L MyClass.C
      Root > MyClass t
      Root > t.GetEvent(12); // Fill t data members with event number 12
      Root > t.Show();       // Show values of event 12
      Root > t.Show(16);     // Read and show values of event 16
      Root > t.Loop();       // Loop on all events
//
// 28/10/1998  14.42.18  by  Fons Rademakers
//
- TGX11: changed calling sequence of GetWindowID().

- TVirtualX: added GetWindowID() to TVirtualX so it can be used from the
  GUI classes.

- TGFrame: made TGFrame(TGClient *, Window_t, const TGWindow * = 0) public
  and also added the (default) argument const TGWindow*.

- TRootCanvas: handle correctly expose events on the TCanvas. Now ROOT
  works fine on X servers without backing store and save unders.
  Also simplified X window structure (one window less).

- Event: cleaned up Event.h, Event.cxx and MainEvent.cxx in $ROOTSYS/test.
  All histograms that were declared as global objects are now conveniently
  handled by a HistogramManager class. Also the handling of the TClonesArray
  in the Event class has been revised (now handled via a static class data
  member instead of a global).
//
// 28/10/1998  17.52.39  by  Masaharu Goto
//
- New CINT 5.13.78.
  5.13.76 2 Oct 1998
  G__OLDIMPLEMENTATION912, #pragam link C++ CLS::MEMFUNC(args);
  G__OLDIMPLEMENTATION913, bool loading in class definition
  G__OLDIMPLEMENTATION914, cout << (bool)1 ; bug fix
  G__OLDIMPLEMENTATION915, for(int i=0,i<10;i++) protection
  G__OLDIMPLEMENTATION916, multiple inheritance virtual func resolution
  G__OLDIMPLEMENTATION917, #46  -> line  Solaris bug fix
  G__OLDIMPLEMENTATION918, atol -> strtoul in getitem, unsigned in bstore

  5.13.77 11 Oct 1998
  G__OLDIMPLEMENTATION919, typdef T** x;
  G__OLDIMPLEMENTATION921, typedef T** x; x pp=aa; bug fix reference
  G__OLDIMPLEMENTATION922, template<class T> f(T x); f(int** x);
  G__OLDIMPLEMENTATION923, template<class T> f() { new T(); } T=X*
  G__OLDIMPLEMENTATION924, new(p) A*(x); new.c bug fix
  G__OLDIMPLEMENTATION925, p->~int(); bug fix
  G__OLDIMPLEMENTATION926, T x[] = {long list}; bug fix
  - ON753 deactivated    , nov> cint Complex.cxx test2.cxx bug fix
  G__OLDIMPLEMENTATION927, f() {static MyClass a;} bug fix
  -                      , a=3 , undefined member  bug fix
  G__OLDIMPLEMENTATION928, G__allincludepath unlimited length

  5.13.78 22 Oct 1998
  G__OLDIMPLEMENTATION929, iterator f(iterator x);
  G__OLDIMPLEMENTATION930, sizeof(void) sizeof.c
  G__OLDIMPLEMENTATION931, iterator x=a.begin() decl.c
  G__OLDIMPLEMENTATION932, namespace foo{template<class T>class x{};}
//
// 28/10/1998  10.18.23  by  Rene Brun
//
- A few changes proposed by Olivier Couet have been introduced in TPostScript.
  In TPostScript::Initialize add the Postscript comment line %%BeginProlog
    immediately after the line %%EndComments.

  In TPostScript::Initialize move the Postscript comment %%EndProlog before the line:
     gsave  20 28 t .25 .25 scale  gsave

  In TPostScript::DefineFillPatterns, the line
    gsave Xcurr Ycurr translate PT DP gr } for } for gr } def
        has been changed to:
    gsave Xcurr Ycurr translate PT DP gr } for } for gr newpath } def

  In TPostScript::FontEncode remove an unnecessary character ";" in the line:
    fn findfont fs sf textf dup length nbas sub nbas getinterval; sw

- Add function TPave::ls. Fix a minor typo in TLine::ls

- Changes in TRootCanvas::ProcessMessage. When the canvas menu items
  deselecting the histogram title or statistics, the existing objects
  "title" or "stats" are first deleted in this function.
  These objects cannot be deleted in TH1::PaintTitle or TH1::PaintStat
  because the object removed from the list of primitives confuses
  the iterator in TPad::PaintModified.
  (Thanks to Charles Leggett for reporting the problem).
//
// 27/10/1998  19.03.07  by  Rene Brun
//
- Implement TVirtualPad::GetEvent, GetEventX and GetEventY.
  Same in TPad.
  The declaration of these functions in TVirtualPad and TPad avoid
  a reference to the libGpad shared library from TPaveText.
//
// 27/10/1998  18.22.45  by  Fons Rademakers
//
- TDirectory: fix in Browse() method.

- TKey: fix in Browse() method.

- TRootBrowser: better handling of refreshing. Also, in combination
  with the fixes in the above two Browse() methods the segv problem
  of version 2.00/12 is solved.
//
// 26/10/1998  11.05.03  by  Rene Brun
//
- Improvements in TMinuit::mnhelp suggested by Alexander Zvyagin.
  The function accepts now string in upper/lower case and the search
  is not limited to 3 characters.
//
// 23/10/1998  08.38.49  by  Rene Brun
//
- Protect TLeafObject::GetValue in case the TMethodCall object
  does not exist.

- Change of specifications for TH1::SetBins.
  The new version allows changing both the number of bins and the limits.
   The X axis parameters are modified.
   The bins content array is resized
   if errors (Sumw2) the errors array is resized
   Note that if the new number of bins differs from the old one,
   then the previous bin contents are lost
   To change only the axis limits, see TAxis::SetRange
//
// 22/10/1998  18.04.28  by  Rene Brun
//
- Move functions TLeafS::GetValue and TLeafI::GetValue from inline
  functions in the include files to the implementation files.
  Some compilers were returning wrong values for the inline code:
  (Thanks to Jean Gosset for reporting an example)
//
// 21/10/1998  12.58.44  by  Rene Brun
//
- Implement TCutG::SavePrimitive. With this implementation TCutG objects
  in a pad are now saved correctly as TCutG objects (and not as TGraph)
  in the macro generated automatically by TPad::SaveAs.

- Add new data members fEventX, fEventY in class TCanvas with corresponding
  getter functions GetEventX and GetEventY. The new members contain
  the last position of the mouse in the canvas.

- Add new functions in class TPaveText:
   TPaveText::InsertText(const char *text) to insert a new text at mouse position
   TPaveText::EditText() to edit the text at mouse position
   TPaveText::DeleteText() to delete the text at mouse position
//
// 20/10/1998  16.45.26  by  Rene Brun
//
- Fix a memory leak in TBasket destructor. This leak was a side effect
  of a change in the TKey destructor. (Thanks Thomas Ruf)

- Modify TGraph::PaintGraph. The new version does not invoke TH1::PaintStat
  if the fit option is disabled. Calling TH1::PaintStat had the side effect
  to make the "stats" object inaccessible with the mouse as soon as
  a TGraph or TCutG object were drawn on top on the TH1.
  (Thanks Otto Schaille for reporting).
//
// 20/10/1998  15.10.17  by  Fons Rademakers
//
- TList, THashList: added two new methods:
     virtual void      AddAfter(TObjLink *after, TObject *obj);
     virtual void      AddBefore(TObjLink *before, TObject *obj);
  Using iteration method 3 (see TList class description) one can
  directly insert a new object at the place before or after the found
  object. The AddAfter(TObject*,TObject*) and AddBefore() require a new
  scan to locate the insertion position.

- TDirectory: fix regression in AppendKey() introduced in version 2.00/12.
  Uses the new TList method described above.

- rootcint: call G__exit(0) at end of program to properly close CINT and
  let it cleanup any tmp files.

- CINT: should be compiled with the -DG__TMPFILE on RH4.2 systems. This to
  workaround the tmpfile() bug.
//
// 18/10/1998  14.29.52  by  Rene Brun
//
- Change fitting option in TH1::FitSlicesY. Always use
  the option "W" when fitting the slices.
- Implement a better algorithm in static function H1InitGaus
  to compute the initial parameters for a gaussian fit.
  In case of a "bad-gaussian" or long tails, the previous
  estimation of the constant parameter was systematically too low.
  The new algorithm sets the initial value of the constant term
  to the average of the old algorithm with the maximum bin content
  in the fitted range.
- Improvements in TGraph::Fit for some special cases.
  (for example when all y values are identical and a straight line fit)
  Thanks to Pavol Strizenec for reporting a simple example.
//
// 16/10/1998  12.40.55  by  "Valery Fine"
//
- Implement support for OpenGL in class TMarker3DBox.

- Fix timer related problems in TWinNTSystem and TWin32Timer.
//
// 16/10/1998  12.12.04  by  Rene Brun
//
- Fix a problem in TTRAP::SetPoints and TGTRA::SetPoints
  in case the angle theta2 is specified(TTRAP) or twist (TGTRA).
  Thanks to Francois-Xavier Gentit for reporting.
//
// 14/10/1998  15.19.41  by  Rene Brun
//
- New option in TH1::PaintAxis to draw additional tick marks/labels.
   Assume tx = gPad->GetTickx() and ty = gPad->GetTicky()
   by default only the left Y axis and X bottom axis are drawn (tx = ty = 0)
    tx = 1 ;  tick marks on top side are drawn (inside)
    tx = 2;   tick marks and labels on top side are drawn
    ty = 1;   tick marks on right side are drawn (inside)
    ty = 2;   tick marks and labels on right side are drawn
       Use TPad::SetTicks(tx,ty) to set these options
//
// 12/10/1998  18.37.31  by  Rene Brun
//
- New data member fLastPoint in class TPolyLine3D.
  Corresponding new member functions SetNextPoint and GetLastPoint.

- Extend functionality of TGraph::SetPoint to allow entering a new point
  after the TGraph definition. The arrays fX and fY are automatically
  extended. This extension allows updates of an existing TGraph with time.

- Introduce support for EGCS under SGI in decks Globals and Makefile.
//________________________________________________________________________
//
//::>          VERSION  2.00/12   09/10/98 10.41.34
//
//
// 09/10/1998  10.41.34  by  Rene Brun
//
- Clean up source file and stamp version 2.00/12.

- Modify test/Makefile to introduce support for Linux/KCC

- Add new tutorial fitslicesy.C

- generate new HTML files for this new version.
//
//
// 08/10/1998  18.32.55  by  Fons Rademakers
//
- TString: fix in ReplaceAll(str1, str2) now the replacement string
  str2 can be the empty string "".

- TUnixSystem: ExpandPathName() expands $(ROOTSYS)/bla just like
  $ROOTSYS/bla. This allows compatibility with WinNT which only
  supports $(ROOTSYS)/bla.
//
// 07/10/1998  17.52.39  by  Masaharu Goto
//
- New CINT 5.13.74.
  5.13.75 23 Sep 1998
  G__OLDIMPLEMENTATION902, VC++6.0 exception handling bug workaround
  G__OLDIMPLEMENTATION903, undefined member assignment SEGV, bug fix
  -                      , long.dll already loaded  bug fix in decl.c
  Gunay ARSLEN's bug report
  G__OLDIMPLEMENTATION904, #define xxx "abc"  bug fix
  G__OLDIMPLEMENTATION905, G__replacetemplate, G__asm_wholefunction escape
  G__OLDIMPLEMENTATION906, if(CLS==INT) x; else y; free_tempobj bug fix
  G__OLDIMPLEMENTATION907, LD_FUNC,LD_IFUNC, ++sp condition
  G__OLDIMPLEMENTATION908, sizeof(*ptr) bug fix
  G__OLDIMPLEMENTATION909, EOF problem fixed in G__readansiproto()
  G__OLDIMPLEMENTATION910, bit-field and bytecode optimization bug fix
  G__OLDIMPLEMENTATION911, T *p=new T[x] bytecode abort
//
// 07/10/1998  10.40.10  by  Fons Rademakers
//
- TDirectory: fix in the Browse() method to show all cycles of objects
  in the browser.

- TKey: fix the Browse() method to delete a previous memory resident object
  with the same name (identical behaviour to TDirectory::Get()).

- Added Makefile for Solaris.
//
// 07/10/1998  09.06.59  by  Rene Brun
//
- New function TH1::PaintH3Box to draw a TH3F object with the option "box"
  This function is called when drawing a TH3F object with the option "box".
  The function uses the TMarker3DBox class.
  TH3F::Sizeof3D modified to take into account the new option.

- Merge with new Valery's version. Valery has added new constructors
  to several geometry shapes classes and a new function in TRotMatrix.
//
// 05/10/1998  18.58.48  by  Fons Rademakers
//
- Added three very nice little "fun" programs to the $ROOTSYS/test
  directory. They show some very powerful capabilities of ROOT:
    - the graphics system
    - clever usage of timers to simulate multi-threading (like Netscape
      is doing in the Unix version of Navigator).
    - the power of inheritance from basic framework classes
  Run these 3 examples at the same time by executing the games.C macro
  in the $ROOTSYS/tutorials directory. The macro will create the shared
  libraries if they don't exist.
//
// 08/10/1998  04.48.02  by  Rene Brun
//
- Implement some fixes in TPad suggested by Valery Fine and Andy Haas
  when running Root compiled with VC++5.0 under NT running VC++6.0

- Due to the color table initialisation moved in TAppication,
  the TGWin32 class has been modified (Valery) to create the color palette
  before a canvas is created.

- Some minor changes in $TGXClient and $KeySymbols had to be made
  to compile under AIX and HP-UX.
//
// 02/10/1998  14.42.44  by  Fons Rademakers
//
- TMapFile: map files can now be "deleted". Previously only Close()
  could be used, but this would not clean up the TMapFile object itself
  (would only disconnect from the shared memory segment).

- ROOT native GUI: support now key symbols. For example:
    frame->BindKey(this, gVirtualX->KeysymToKeycode(kKey_Up), kAnyModifier);
  All defined key symbols can be found in the file KeySymbols.h.

- TVirtualX: prototype of TVirtualX::LookupString() is changed from:
     LookupString(Event_t *event, char *buf, Int_t buflen, Int_t &keysym);
  to
     LookupString(Event_t *event, char *buf, Int_t buflen, UInt_t &keysym);

- TGTab: added method SetTab(Int_t tabIndex) to bring the specified
  tab to the front (method provided by Reiner Rohlfs).

- TGDoubleSlider: new slider widget which allows modification of upper
  and lower limits as well as dragging of slider tab. This widget was
  implemented by Reiner Rohlfs.

- TDatime: Convert() made public. Using Convert() it is easy to compare
  two datime objects. Requested by Victor Perevoztchikov.
//
// 02/10/1998  11.19.28  by  Rene Brun
//
- Fix a problem in TFree::GetBestFree. Do not return a free gap
  in case the new free gap after allocation will be less than 4 bytes.
  (thanks Eddy Offermann for providing a test case).

- Fix a small problem in TTree::Draw in the following case:
    TH2F *blank = new TH2F("blank", "dE/dx vs. B mass", 50,4.8,6, 50,-3,6);
    blank->Draw();
    ntuple->Draw("dedx:mb", "dtype==431 && ktype==211", "same");
  When option "same" was specified, the limits of the histogram created
   by ntuple->Draw were not correctly from the current pad coordinates.
     (thanks Stephen Bailey for providing a simple test case).

- Merge with Valery's latest version (October 1st).
  Changes in TWinNTSystem, TWin32Canvas.
  New class TWin32Timer.
  New functions TAssoc::isFolder and TAssoc::Browse.

- Fix a memory leak problem in TDirectory::Close and TKey destructor
  when closing files with subdirectories.
  In TDirectory::Close, the keys from subdirectories were not deleted.
  In TKey destructor, buffers were not deleted.
  The TBasket destructor does not delete the buffer anymore (done
  in TKey destructor).
  (thanks Eddy Offermann for reporting this leak).

- Optimize function TDirectory::AppendKey. When many objects (keys)
  were written to a file, the time to add a new object was growing
  like the square of the existing number of objects in the file.
  The effect was only visible when several thousand keys were written.
  The new algorithm uses THashList::FindObject instead of TDirectory::GetKey.
  Same optimisation in TObject::Read and TObject::Write.

- New function TStyle::SetHeaderPS(const char *header) and corresponding
  get function TStyle::GetHeaderPS.
  The string in header will be added to the Postscript file
  immediatly following the %%Page line
  For example, this string may contain special Postscript instructions like
       200 200 translate
  This information is used in TPostScript::Initialize
  (thanks Marcus Mendenhall)

- New function TH1::FitSlicesY(TF1 *f1, Int_t binmin, Int_t binmax, Int_t cut)
  Project slices along Y in case of a 2-D histogram, then fit each slice
  Only bins along X between binmin and binmax are considered.
  with function f1 and make a histogram for each fit parameter
  if f1=0, a gaussian is assumed
  Before invoking this function, one can set a subrange to be fitted along Y
  via f1->SetRange(ymin,ymax)
  Note that the generated histograms are added to the list of objects
  in the current directory. It is the user's responsability to delete
  these histograms.

   Example: Assume a 2-d histogram h2
    Root > h2->FitSlicesY(); produces 4 TH1D histograms h2_0, h2_1 and h2_2
           with h2_0 containing parameter 0(Constant) for a Gaus fit
                     of each bin in X projected along Y
           with h2_1 containing parameter 1(Mean) for a gaus fit
           with h2_2 containing parameter 2(RMS)  for a gaus fit
           with h2_chi2 containing the chisquare/number of degrees of freedom for a gaus fit

    Root > h2->FitSlicesY("gaus",15,22,10);
           same as above, but only for bins 15 to 22 along X
           and only for bins in X for which the corresponding projection
           along Y has more than cut bins filled.

- New function TH1::FitSlicesZ(TF1 *f1, Int_t binminx, Int_t binmaxx, Int_t binminy, Int_t binmaxy, Int_t cut)
  Project slices along Z in case of a 3-D histogram, then fit each slice
  with function f1 and make a 2-d histogram for each fit parameter
  Only cells in the bin range [binminx,binmaxx] and [binminy,binmaxy] are considered.
  if f1=0, a gaussian is assumed
  Before invoking this function, one can set a subrange to be fitted along Z
  via f1->SetRange(zmin,zmax)

   Example: Assume a 3-d histogram h3
    Root > h3->FitSlicesZ(); produces 4 TH2D histograms
           with h3_0 containing parameter 0(Constant) for a Gaus fit
                     of each cell in X,Y projected along Z
           with h3_1 containing parameter 1(Mean) for a gaus fit
           with h3_2 containing parameter 2(RMS)  for a gaus fit
           with h3_chi2 containing the chisquare/number of degrees of freedom for a gaus fit

    Root > h3->Fit(0,15,22,0,0,10);
           same as above, but only for bins 15 to 22 along X
           and only for cells in X,Y for which the corresponding projection
           along Z has more than cut bins filled.

- New function TH1::Rebin(Int_t ngroup, const char*newname)
  to rebin 1-D histograms.
  This function replaces the existing histogram if newname="" (default).
  It returns a new histogram otherwise.
  ngroup is the number of bins to be merged into one new bin.
  If the original histogram has errors stored (via Sumw2), the resulting
  histograms has new errors correctly calculated.

- Start a cleanup operation to remove some classes interdependencies.
  Implement new functions
   TVirtualPad::DrawClassObject, TPad::DrawClassObject
   TVirtualPad::InspectObject,   TPad::InspectObject.
  TObject::Inspect invokes TVirtualPad::InpectObject
  TClass::Draw invokes TPad::DrawClassObject

- Implement operator "%" in TFormula (thanks Nicolas).
  Corresponding mods in TFormula::Analyze, TFormula::Eval
  and TTreeFormula::EvalInstance.

- Include a fix in TDataMember constructor by Weiwen Liu (thanks Weiwen).
  In case a class A was defined as:
     class A {
     public:
        UChar_t fA;
        unsigned char fB;
        .....
     };
  If the class A was used in a TClonesArray, the "unsigned char"
  was not processed correctly. Wewen's fix treats now
  UChar_t and "unsigned char" equivalently.

- Remove dependency from TBrowser in TObject implementation file.

- New functions TPad::Clip and TPad::ClippingCodes.
  TPad::Clip clips a line at a rectangle boundary.

- TPad::PaintLine3D function has been rewritten to take
  advantage of the new clipping facility in TPad.

- TPolyLine3D::PaintPolyLine function has been rewritten to take
  advantage of the new clipping facility in TPad.

- TBranch::Print modified to print branches with many variables
  in multi-lines. Thanks to Weiven Liu for providing the code.
//
// 25/09/1998  13.15.52  by  Fons Rademakers
//
- TStyle: added member function SetPaperSize(TStyle::EPaperSize). Can use
  symbols TStyle::kA4 and TStyle::kUSLetter to set size.
//
// 24/09/1998  18.40.36  by  Fons Rademakers
//
- TApplication: moved TColor initialization from TCanvas to TApplication
  so it will be guarenteed called before the GUI color initialization.
  Request by Rutger vd Eijk.

- Other change in mmprivate.h and mmalloc.h for VC++ v6.0.

- New CINT 5.13.74.
  5.13.74 19 Sep 1998
  G__OLDIMPLEMENTATION900, newlink , G__add_macro -p -DX=\"abc\" bug fix
  -                      , IsTmplt, TmpltName, TmpltArg added to G__ClassInfo
  G__OLDIMPLEMENTATION901, pause.c G__security assignment bug fix
//
// 23/09/1998  17.32.48  by  Fons Rademakers
//
- TServerSocket: there is no wait and retry loop anymore on the low
  level bind command. Any retries have to be done by the TServerSocket
  user. A bind() failure can be detected using the new TSocket::GetErrorCode()
  function. For more details see the TServerSocket::TServerSocket help.
//
// 22/09/1998  11.52.14  by  Fons Rademakers
//
- Changes in WIN32_*.cxx, GUI_RootCanvas.cxx and mmprivate.h
  to accommodate for VC++ v6.0. (thanks to Sverre Jarp)

- Added makefiles for Debian v2.0 and Digital Unix with cxx v6 compiler.

- TH1: Added PaintStat2() for putting the stat info for 2D histograms
  (requested by Hans Dijkstra). Basic info is there, still needs to be
  beautified.
//
// 17/09/1998  20.50.22  by  Fons Rademakers
//
- New CINT with bug fix for code "nbytes += chain->GetEvent()".

- Added egcs 1.1 support in RConfig.h.

- Added cxx support in Make-macros.
//
// 16/09/1998  00.42.29  by  Rene Brun
//
- Problem reported by Axel Schwank in TTree::Scan now fixed.
  In some cases, branches with leafcounts did not compute
  the leafcount before processing the branch.

- TCanvas::Streamer modified to save the "fShowEventStatus"
  and fMenuBar options.

- Problem reported by Reiner Rolfs when saving a canvas with a graph,
  then opening the file, drawing the canvas and closing the file.
  Closing the file had the side effect to delete the histogram referenced
  by the graph object. The correction was one line in TGraph::Streamer
  to remove the histogram from the current directory in memory.

- Problem reported by Reiner Rolfs when saving a hierarchy of pads
  has been fixed in TPad::Streamer. The global gPad was not saved
  and restored before/after the loop reading the pad primitives.
  (thanks Reiner).

- Modification in TDatime::Set to correctly encode years>2000

- Protection in TGaxis::Optimize in case the function is called
  with invalid floating point numbers (+- inf).

- Accents introduced in class TLatex + some improvements when
  positionning subscripts/superscripts and poers. (work by Nicolas)

- Code improvements in TPad::Print (thanks Alexander Zvyagin).

- Remove an unnecessary limitation in TTree::CloneTree in case the Tree
  has branches with TClonesArray and one wants to copy only a subset
  of one TClonesArray. (Thanks to Axel Schwank)

- When no options are specified in the TPave, TPaveLabel constructors
  (default option="br"), then TPave::PaintPave will not draw the border.
  Otherwise crazy fill areas were drawn depending on the pad range.
  To Draw a TPave, TPaveLabel, etc in NDC with a border, use option="NDCbr"
  (thanks Axel Schwank).

- Remove some restrictions in TTree::Draw and TTree::Eventloop.
  The following case was not supported (example from Stephen Bailey).
    h1->Draw("Mass[2]", "mcid[4]==333");
  where Mass is a branch defined as Mass[5] and mcid a branch
  defined as mcid[mcn].
  The change in TTree::EventLoop makes sure that whenever an expression
  references a branch with a leafcount, the leafcount branch is forced
  to be read even if only one element is used.

- Change parameter kMaxBuffer from 80 to 120 in TPostScript class.
  This change was requested by Olaf Steinkamp to support long
  file names as generated by an automatic system.

- Fix a problem in TChain::Merge affecting the merging of TNtuple objects.

- Fix a problem in TNtuple::Streamer. Branch addresses are now set
  when reading the TNtuple header from the Root file. This also fixes
  a problem when using TTree::CloneTree with a TNtuple object.

- Change type of argument in TFormula::Compile from char* to const char*

- Fix a problem in TChain::Merge due to a change in the default argument
  in TTree::CloneTree. The first file in the file was added twice
  to the merged file. Thanks to Scott Sampson for reporting the problem.

- Add Warning message in TH1::Add, TH1::Divide, TH1::Multiply
  in case the axis limits of operand histograms do not match.

- Fix a bug in TEllipse::Paint. phimin was not taken into account.
  Thanks to Mathieu de Naurois for reporting the problem.

- Change TGaxis ClassDef(TGaxis,0) to ClassDef(TGaxis,1) to make
  TGaxis streamable.

- Add new function TTreeFormula::GetNnodes() returning the number of Tree leaves
  referenced in the formula.

//
// 14/09/1998  17.04.25  by  Fons Rademakers
//
- TBuffer: operator<<(Char_t *c) now operator<<(const Char_t *c).

- TGString: added ctor taking directly TString.

- TGTextView: option argument has now default value (= 0).

- TGMatrixLayout: fixed size calculation (was one row too large) +
  take parent borderwidth into account.

- TGLayout: delete layoutmanager in TGCompositeFrame dtor (as per
  specification).

- guitest.cxx: show example of TGMatrixLayout in "Tab 5".

- cint_meta: added -DG__API to rootcint to process META classes
  (Make-macros also updated).

- TObject: added placement operator delete. Needed to be conform with
  ANSI C++ (is only used when exception is thrown in placement new).
  This new version of operator delete is not supported by older compilers.
  It is activated in RConfig.h using the define R__PLACEMENTDELETE.

- To compile with the new Alpha cxx v6 compiler option -nostdnew has
  to be used (all ROOT new/delete operators comply with ANSI C++, but
  cxx v6 still prefers to load its own global new operator and thereby
  causing a mismatch with the ROOT global delete operator).

- TPolyLine: corrected small typo.

- TStopwatch: Start() has now a reset flag. By default the stopwatch is
  reset on start (< 2.00/11 behaviour). Help text expanded.
//
// 28/08/1998  10.38.51  by  Rene Brun
//
- Urgent bug fix in TTreeFormula::Compile and TTree::Draw
  when doing tree->Draw("px[0]") where px is indexed on ntrack for eaxmple.
  Thanks to Stephen Bailey for reporting very quickly.
//
// 28/08/1998  08.58.30  by  Valery Fine
//
- Correction in $TStopwatch, Stopwatch and Benchmark.
  The problem was if one apply Stop, the method can continue
  counting the time with the Next Start method as people expect.
  The correction allows to accumulate the REAL and CPU time for
  each Start->Stop pair to show the total time. In fact the
  TStopwatch::Continue method was not implemented yet.
//________________________________________________________________________
//
//::>          VERSION  2.00/11   26/08/98 19.10.44
//
//
// 26/08/1998  18.54.42  by  Nicolas Brun
//
- Nicolas has implemented a new class TLatex.
  See comments and examples in the class implementation.
  With this class, it is now possible to draw mathematical
  formula (Latex style) on the screen and Postscript. TLatex supports:
    -Subscripts and Superscripts (many levels)
    -Fractions
    -Mathematical Symbols + Sqrt + Sum and Integral
    -Greek Letters
  This implementation has still a few problems.
  There are still some discrepancies between the result on the screen
  and the result on Postscript.
  Also some differences will be seen between Unix servers depending
  the version of X in use. Results on WindowsNT are also slightly different.
  An example of use can be found in tutorials/latex.C
  With this version, a TLatex object must be explicitely created.
  Note that this class cannot be used when running Root in batch mode
  because it uses info provided by the low level graphics functions
  from X11 or Win32.
  We are planning to make an automatic interface to this class
  when drawing axis titles, histogram titles and like.

  Please forward your comments and suggestions to Nicolas at
         nicolas@hpbrun.cern.ch

//
// 14/08/1998  19.15.12  by  Fons Rademakers
//
- TROOT::GetMacroPath: fix for Win32 (Valery).

- TRootCanvas and TRootBrowser: if canvas or broser are closed
  via menu File/Close then the associated symbol is taken out
  of the CINT symbol table. To prevent accidental access to deleted
  object.

- rootcint: defines now -D__MAKECINT__ which can be used as special
  flag in case of dictionary generation.

- TUnixSystem::ResetTimer: new method to reset async timer. Before
  async timer could only be Reset() while being in Notify().

- New class TProcessEventTimer. Us this async timer in tight loops to
  periodically process GUI and sync timer events. It is for example
  used in TTree::EventLoop().

- Added makefiles for Linux RH4.2 (non glibc) and Irix KCC.

- TSystem::DispatchOneEvent: new argument pendingOnly. If true then
  only pending GUI events and timers are processed. This is used in
  TSystem::ProcessEvents(). Othwerise DispatchOneEvent() falls through
  and blocks on select (in Unix case) unless a timeout is specified.
  The TUnixSystem and TWinNTSystem have been updated accordingly.

- TTree::EventLoop: use async timer to process pending GUI events
  about 3 times per second.

- MakeDistSource: do not include in source the cint/MAKEINFO and
  cint/include/iosenum.h files. They are platform dependent and
  are correctly provided in the binary distribution.

- guitest.cxx: show how to color button background

- mmconfig.h: remove reference to ansidecl.h.

- TGTab: clicking on tab will generate the event:
  kC_COMMAND, kCM_TAB, tab id, 0.
  Added test in guitest.cxx.

- TGWidget: removed fWidgetType datamember. To find widget type just use
  the IsA() member function.

- TROOT: set ObjectStat default to 0 (like in example .rootrc).

- TObject: export enum EObjBits to interpreter.


//
// 19/07/98  14.12.45  by  Valery Fine(fine@mail.cern.ch)
//
-  Several changes in class TWinNTSystem.

-  Protection in TBenchmark::Start in case of too many benchmarks.

-  TCollection::Browse(TBrowser *b) calls TObject::Browser(b) if b=0

-  Several corrections for WIN32 classes to fix
   TBrowser and TObject::Inspect method too under Windows NT / 95


//
// 10/08/1998  08.36.59  by  Rene Brun
//
- Modify TBranchObject::SetAddress and TBranchClones::Streamer
  to support schema evolution in split mode. With the new version,
  new data members can be added, deleted or swapped.

- Add a new test in TBranch::SetAddress when the branch is a TClonesArray
  branch. In this case, the leaf offset should not be taken into account.
  The leaf offset is always set when the shared library containing
  the class definition is loaded, but a technique a la MakeCode is used
  instead of the class itself.
  Thanks to Axel Schwank for reporting this funny case.

- Correct TBranchClones::SetAddress to set the address of the branchcount.
  With this fix, one can now read an existing tree from a file and
  continue to fill it. (Only Trees with TBranchClones were affected).

- Fix a problem in TTreeFormula::Compile in the following case:
    a branch ntrack
    a branch px[ntrack]
    tree.Draw("ntrack") was ok
    tree.Draw("px") was ok
    tree.Draw("px[1]") was ok
    tree.Draw("px[1]/ntrack") was wrong
    Thanks to Stefan Kluth for reporting this problem.

- Add protections in TLeafObject and TMethodCall when requesting
  an unknown method name.

- In TChain::LoadTree, call TTree::SetMaxVirtualSize with the value
  of fMaxVirtualSize defined for the chain.

- Implement new useful member functions in class TTree:
  TTree::GetV1(), TTree::GetV2(), TTree::GetV3(), TTree::GetW().
  Via these getter functions, one can access internal arrays of the Tree
  corresponding to the previous TTree::Draw function.
  See comments in the header of TTree::Draw for more details and an example.

- Fix a typo in TEventList::TEventList. The parameter delta was not used.
  (Thanks for reporting).

- Add new data member fXwho in class THtml.
  Corresponding getter/setter functions:
    GetXwho()
    SetXwho(const char *xwho)
  Default value for xwho is http://xwho.cern.ch/WHO/people?

- Rename TNode::UpdateGlobalMatrix to TNode::UpdateTempMatrix.
  Implement new function TNode::UpdateMatrix().
  This new function updates the node parameters (translation vector
  and rotation matrix). This function must be called before
  invoking TNode::Local2Master.
  Thanks to Francois-Xavier Gentit for his suggestion.

- Merge with Valery Fine version.

- Several changes + comments in class THelix.
  Please forward comments/questions to the author Ping Yeh
           pyeh@cdfsga.fnal.gov

- Set default parameters in:
    TPolyLine::SetPolyLine
    TPolyMarker::SetPolyMarker
    TPolyLine3D::SetPolyLine
    TPolyMarker3D::SetPolyMarker
  The SetPxxx functions can be called with one argument only to set
  the number of points, then the function SetPoint can be called
  to initialize points one by one.

- Change definition of internal variable from Option_t to char
  in TObject::Pop and TPad::Pop.

- Due to a clash in the definition of the macro EXTERN (with TCL/Tk),
  Root defines the following macros:
     EXTERN if not already defined
     R__EXTERN in all cases.
  We suggest you change your EXTERNs to R__EXTERN.
  This changes has required modifications in CINT function Parse.

- Add two new data members to class TMaterial:
   fRadLength;   //material radiation length
   fInterLength; //material interaction length
   Corresponding constructor and getter functions.
   Mods in TMaterial::Streamer to support schema evolution.

- Changes in TH1::Add, TH1::Divide and TH1::Multiply.
  If one of the operand histograms has the errors set (Sumw2 has been called),
  the resulting histogram has automatically the errors set (Sumw2 is called).

- Fix a problem in TF1::Paint when drawing a function in a pad
  with log axes in the case when the function range is smaller
  than the defined axis range. (thanks Glenn Cooper for reporting)

- Modify TProfile constructors to pass const Text_t instead of Text_t
  for the profile name and title.

- The following functions have been deleted:
    TPolyLine::GetPolyLine
    TPolyMarker::GetPolyMarker
    TPolyLine3D::GetPolyLine
    TPolyMarker3D::GetPolyMarker

- WARNING !! Option_t has been redefined to be const char instead of char.
  This affects many functions. Please check your code.

- The following classes have been modified to replace arguments
  of type char* by const char*

  TROOT
                     TROOT(const Text_t *name, const Text_t *title, VoidFuncPtr_t *initfunc = 0);
   TObject           *FindObject(const Text_t *name) { void *dum; return FindObject(name, dum); }
   TObject           *FindObject(const Text_t *name, void *&where);
   const Text_t      *FindObjectClassName(const Text_t *name) const;

  TVirtualPad and TPad;
   virtual void     DrawText(Float_t x, Float_t y, const Text_t *text) = 0;
   virtual void     DrawTextNDC(Float_t u, Float_t v, const Text_t *text) = 0;
   virtual TObject  *GetPrimitive(const Text_t *name) = 0;
   virtual void     PaintText(Float_t x, Float_t y, const Text_t *text) = 0;
   virtual void     PaintTextNDC(Float_t u, Float_t v, const Text_t *text) = 0;
   virtual void     Print(const Text_t *filename="") = 0;
   virtual void     Print(const Text_t *filename, Option_t *option) = 0;
   virtual void     SaveAs(const Text_t *filename="") = 0;
   virtual void     SetName(const Text_t *name) = 0;

  TCanvas
   TCanvas(const Text_t *name, const Text_t *title="", Int_t form=1);
   TCanvas(const Text_t *name, const Text_t *title, Int_t ww, Int_t wh);
   TCanvas(const Text_t *name, const Text_t *title, Int_t wtopx, Int_t wtopy,
   void              SaveSource(const Text_t *filename="", Option_t *option="");
   void              SetTitle(const Text_t *title="");

  TDialogCanvas;
   TDialogCanvas(const Text_t *name, const Text_t *title, UInt_t ww, UInt_t wh);
   virtual void   Apply(const Text_t *action="");
   virtual void   SetName(const Text_t *name) { fName = name; }

  TButton
   virtual void  SetName(const Text_t *name) { fName = name; }

  TSlider
   virtual void  SetMethod(const Text_t *method) { fMethod=method; } // *MENU*

  TAttLineCanvas
   TAttLineCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);

  TAttFillCanvas
   TAttFillCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);

  TAttTextCanvas
   TAttTextCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);

  TAttMarkerCanvas
   TAttMarkerCanvas(const Text_t *name, const Text_t *title, UInt_t ww=400, UInt_t wh=600);

  TDialogCanvas
   virtual void   Apply(const Text_t *action="");

  TDrawPanelHist
   TDrawPanelHist(const Text_t *name, const Text_t *title, UInt_t ww=500, UInt_t wh=600);
   virtual void  Apply(const Text_t *action="");

  TFitPanel
   TFitPanel(const Text_t *name, const Text_t *title, UInt_t ww=300, UInt_t wh=400);
   virtual void  SetFunction(const Text_t *function);
   virtual void  Apply(const Text_t *action="");

  TFitPanelGraph
   virtual void  Apply(const Text_t *action="");

  TGeometry
   TGeometry(const Text_t *name, const Text_t *title);
   virtual void   cd(const Text_t *path=0);
   TMaterial      *GetMaterial(const Text_t *name);
   TMaterial      *GetMaterialByNumber(Int_t number);
   TNode          *GetNode(const Text_t *name);
   TShape         *GetShape(const Text_t *name);
   TRotMatrix     *GetRotMatrix(const Text_t *name);
   virtual void   Node(const Text_t *name, const Text_t *title, const Text_t *shapename, Double_t x=0, Double_t y=0, Double_t z=0
                     , const Text_t *matrixname="", Option_t *option="");

  TNode
   TNode(const Text_t *name, const Text_t *title, const Text_t *shapename, Double_t x=0, Double_t y=0, Double_t z=0
            , const Text_t *matrixname="", Option_t *option="");
   TNode(const Text_t *name, const Text_t *title, TShape *shape, Double_t x=0, Double_t y=0, Double_t z=0
               , TRotMatrix *matrix=0, Option_t *option="");
   virtual TNode       *GetNode(const Text_t *name);

   TDirectory
    virtual void        Delete(const Text_t *namecycle="");
    virtual TObject    *Get(const Text_t *namecycle);

//________________________________________________________________________
//
//::>          VERSION  2.00/10   30/07/98 16.57.22
//
//
// 30/07/1998  14.54.40  by  Rene Brun
//
- Implement new functions in classes TH2C,TH2S,TH2F and TH2D
   -GetCorrelationFactor(axis1,axis2)
   -GetCovariance(axis1,axis2)
   -GetMean(axis)
   -GetRMS(axis)
   Thanks to Stefan Kluth<skluth@mh1.lbl.gov> for suggesting
   these new functions and providing hints for the algorithm.

- Change calling sequence of TH1::GetMean and TH1::GetRMS to add
  a dummy parameter axis to be consistent with the TH2 similar functions.
  This parameter being optional, these functions are still backward
  compatible.

- Modify TTree::TakeAction to call the Fill function instead of FillN.
  This slows down slightly the filling process for 2-D histograms,
  but the resulting histogram has the statistics information correctly
  filled. One can invoke the TH2H::GetCorreclationFactor on the 2-d
  histogram produced by TTree::Draw.

- In TTree::EventLoop add control on gSystem->ProcessEvents.
  In case of a TTree::Draw command, one can now interrupt gracefully
  the processing of the command from an embedded canvas.

- Implement changes by Akiya Miyamoto<miyamoto@ccjlc1.kek.jp>.
  Akiya has successfully ported Root on the Hitachi machines running
  the HIUX operating system under EGCS. Thanks Akiya.

- Mods in TH1::PaintScatterPlot and TH1::TableInit to not plot any markers
  in case of a 2-d histogram with entries but all outside the range.

- Several changes in utility program g2root implemented by
  Nikolai Root <nroot@inp.nsk.su>. g2root includes a new optional parameter.
  With this new parameter, one can specify a file name with a translation
  table to automatically convert the 4 Geant character volume names
  to more meaningful names. Wilcarding is supported. For more details
  see comments in the g2root header.

//
// 28/07/1998  15.45.02  by  Fons Rademakers
//
- TCint: in ResetAll() initialize CINT command processor (fixes problem
  with initializing enum's via the interpreter.

- TDirectory: in Streamer() make directory readable if its file is also
  readable. Bug caused sub-directories to be readonly even when file was
  opened in write mode.

- TDirectory: in Build() don't add directory to current directory if
  dir name is "". This is only the case when reading directory from
  disk. Only add to current dir in TKey::ReadObj() when directory name
  has been set. Bug caused re-reading of directory from disk for
  every cd() into that directory while accumulating copies in memory.

- TSystem: in ProcessEvent() protect in case of batch mode.
//
// 27/07/1998  17.52.12  by  Fons Rademakers
//
- TMapFile: new static method SetMapAddress(Long_t addr). With this
  method one can fix the start address of a shared memory region.
  For more see the TMapFile::SetMapAddress source on the web.

- Deck eventload: made machine independent.

- TObject: Write(), added option argument. Option can be
  TObject::kOverwrite and TObject::SingleKey (last one is only
  supported for TCollection::Write().

- TCollection: Write(), added option argument. See above.
//
// 24/07/1998  14.41.23  by  Fons Rademakers
//
- Added Makefile front-end for MkLinux (by Damir).

- Added Makefile front-end for Debian (by Jens Ritter).

- Deck eventload: added WIN32 case.

- TPad: fix bug in Divide() in case of long TCanvas names (now dynamic).

- TWinNTSystem: new method ProcessEvents().

- guitest.cxx: added example of custom graphics context to change
  label and button text color.
//
// 18/07/1998  19.17.01  by  Fons Rademakers
//
- New class TRootEmbeddedCanvas: this native ROOT GUI widget allows
  the easy embedding of a TCanvas in a TGFrame. The TRootEmbeddedCanvas
  inherits from TGCanvas with the container automatically set to
  be a TCanvas. Using the member GetCanvas() you can obtain a pointer
  to the associated TCanvas. To see how it should be used see
  $ROOTSYS/test/guitest.cxx. When running guitest select the menu
  item Test/Dialog... Click on Tab 3 and admire the two TCanvases.
  Play with the Start... and Stop... buttons. Also notice how you
  can select other tabs while filling continues and how the window
  is updated after resizing (even more impressive with a WM that
  allows opaque resizing, like kwm).

- TCanvas: new ctor used by TRootEmbeddedCanvas.

- guitest.cxx: added demo of TRootEmbeddedCanvas (see above).

- TDataMember: fix in ctor explaining a number of crashes in the
  browser (by Valery).

- TSystem: new method ProcessEvents(). Call this method regularly in
  tight calculation loops. It allows the processing of GUI, socket
  and timer events. Most importantly it allows the clean interruption
  of such a tigh loop. That is, it returns kTRUE when the users wants
  to terminate the loop. Currently the user can terminate the loop by
  selecting the canvas menu View/Interrupt or by hitting any key in
  the canvas. The interrupt flag is set via the routine TROOT::SetInterrupt().
  Of course, this method can be called via any GUI button.

- TROOT: new methods SetInterrupt() and IsInterrupted(). Used to toggle
  the variable TROOT::fInterrupt.

- TRootCanvas: new menu item View/Interrupt (see above).

- hsimple.C: calls gSystem->ProcessEvents() in main loop.
//
// 15/07/1998  14.33.25  by  Fons Rademakers
//
- rootrc: by default Root.MemStat and Root.ObjectStat turned off.
  Turn only on for debugging purposes.

- Cleanup of iostream forward declarations in several headers.

- RConfig.h: new flags:
  R__ANSISTREAM for ANSI C++ compatible compilers.
  R__VECNEWDELETE for compilers supporting overriding of new[] and delete[].

- TRint: Getprompt() and PrintLogo() made public virtual.

- TMapFile: default buffer size set to TBuffer::kMinimalSize (128),
  was TBuffer::kInitialSize (1024). Now small objects take only 128 bytes.
  Could maybe optimized more.

- TStorage: fixed large memory eating bug in EnterStat().

- New makefile for Linux with KCC.

- TClonesArray: major fix in the way dtors are called for clone
  objects. This fixes memory leaks in case clone objects contain
  objects that allocated space (e.g. TNamed which contain TString).
  Removed the usage of the interpreter to call the dtor. This
  is now done via the custom TObject::operator delete (see description
  in TClonesArray::TClonesArray() documentation). Also creation of
  space for clone objects simplified (does not use TClass:New() anymore).
  Method Clear() is now same as Delete().

- TObjArray: Clear() slightly optimized.
//
// 10/07/1998  11.46.03  by  Rene Brun
//
//
- New option and parameter in TObject::Write(const char *name, Int_t option, Int_t bufsize).
  Bufsize can be given to force a given buffer size to write this object.
  By default, the buffersize will be taken from the average buffer size
  of all objects written to the current file so far.

  If a name is specified, it will be the name of the key.
  If name is not given, the name of the key will be the name as returned
  by GetName().

  The option can be a combination of:
    kSingleKey and kOverwrite (enums in TObject.h)
  Using the kOverwrite option a previous key with the same name is
  overwritten.
  The kSingleKey option is only used by TCollection::Write() to write
  a container with a single key instead of each object in the container
  with its own key.

- Changes in TRint::HandleTermInput. Remove an unnecessary test
  on line[0]. Special characters such as French or German accents
  when typed at the keyboard had the bad effect to stop the Root
  session immediatly.

- Modify the installation procedure for g2root under Linux.
  The trick is to use f2c to convert g2root.f into g2root.c
  compile g2root.c with gcc. This takes care about recursivity.
  Probably the same tric could be used on other machines where Fortran
  does not accept recursive calls.

- Modify TH1::Build. Do not delete already existing histogram with
  same name in current directory. Simply, remove it from the list.

- Add operator () in TCollection (thanks Nikolay Root from Novosibirsk).

- Add a new test program to benchmark collection classes.
  this new test tcollbm has been implemented by Nikolay Root.

- Mods in test/vmatrix to compile under NT (Thanks Valery Fine).

- Add "return 0' in main program of test/vlazy.

- Implement TTUBE::Streamer to take into account class evolution.
  (thanks Vitali Choutko for reporting).

- Introduce an option in TPostScript to compile this class
  in noopt mode under NT (bug in VC++ optimizer).

- New version of CINT introduced (5.13.63)
//________________________________________________________________________
//
//::>          VERSION  2.00/09   27/06/98 09.23.55
//
//
// 27/06/1998  01.25.52  by  Fons Rademakers
//
- Introduction of Makefiles. The makefile system consists of a main,
  machine independent back-end, Make-macros, and several, machine dependent
  front-ends, Makefile.linux, Makefile.linuxegcs, etc. The individual
  file dependencies are stored in Make-depend. To use the makefiles
  create a link called Makefile to the desired front-end:

      cd $ROOTSYS/src
      ln -s Makefile.linux Makefile

  To build the complete system type:

      make distclean; make

  Make must be GNU make (gmake on some platforms). If you have an SMP
  system you can do:

      make -j <n>

  Where <n> is the number of CPU's you want to use in parallel.

  To be able to regenerate the Make-depend file one needs a special
  fixed "makedepend" program (the original "makedepend" does not work
  do to a bug in the handling of C++ comments, //). Source of this fixed
  "makedepend" program is available from ftp://root.cern.ch/root/mkdep.tar.gz.
  After compilation install it in $ROOTSYS/bin. To use it type:

      make depend

  However, the provided Make-depend file is up to date.

  More makefile front-ends for different platforms will be released
  in the coming weeks via the ROOT web site.

- Changes in a number of installation KUMACS to prepare for Makefiles.

- TH1 and TF1: fix bug in which wrong object is set for the DrawPanelHist
  and FitPanel if invoked via contextmenu.

- TSlider: fix in SetRange(), min and max were not updated.

- TDrawPanelHist, TFitPanel: change cursor to watch when executing a command.

//
// 22/06/1998  08.40.19  by  Valery Fine
//
- Implement shapes TSPHE and TELTU.
  This has required changes in include files TTUBE

- Added examples of TSPHE in tutorial shapes.

- Changes in WinntSystem::ExpandPathName().  Now it

    1. Replaces all "$(" with "%"
       Replaces all ")"  with "%"

    2. Calls WIN32 API to expand all %name%

  This means it may expand  UNIX-like and Windows like environment
  variables.(for example $(rootsys) and %rootsys% too)//

- Changed TClass::Draw() to draw an array index (like Html does).

- Changed THtml class to hyperize pointers to arrays as well.

//
// 21/06/1998  23.43.46  by  Rene Brun
//
- Mods in TTree::MakeCode. The code generated takes into account
  repetitive executions. The Root file is only connected once.

- New tutorial zdemo illustrating graphs in log scale and annotations.
  Thanks to Michael Tokarev and Elena Potrebenikova (JINR Dubna)

- Modify TDialogCanvas::Apply to show the cursor watch

- Modify TCanvas::Update to reset the current cursor to the cross shape.

- Modify FitPanelGraph to set the Watch cursor.

- Implement Getters for all geometry classes.

- Fix clipping for 3-D primitives. Changes are in:
     TPad::PaintLine3D
     TPolyLine3D::PaintPolyLine
     TPolymarker3D::Paintpolymarker

- Introduce bit mask operations in TTreeFormula. The logic was already
  available in TFormula.

- Modify TH1::GetObjectInfo to take into account the axis range when
  computing the integral for the histogram. The info reported by
  this function is reported in the canvas event status. When the histogram
  DrawPanel is active, the slider can be used to set the axis range.
  This feature can be used to interactively evaluate the integral of an
  histogram in the range defined by the slider.

- Fix a bug in TSliderBox in case of vertical sliders.

- Fix a problem in TBranchClones::Reset. The number of entries and the baskets
  in the branchcount of a TBranchClones were not reset.

- Merge with Valery's version. Main changes are in macros.
  class TPythia now OK for NT.

- Include changes from Kris Hagel and Kaori Wada for the VMS version.
//
// 10/06/1998  12.46.57  by  Fons Rademakers
//
- TKey: before writing and reading an object (via Streamer) we register
  the object in the TBuffer map keeping track of written and read
  objects. This prevents double writing of objects that contain pointer
  to themselves. This mod is completely backward compatible.
  Same change made in TMapFile.
  HOWEVER: NOTE that files written with this version of Root cannot be read
  by old versions of the system.

- TObject: simplified Clone() and now also handles case of self reference
  more efficiently.

- TServerSocket: inherits now from TSocket. The main advantage is that a
  server socket can now be monitored by a TMonitor for a connection. Only
  when the monitor returns the server socket (because a connection is
  attempted) we call Accept() which will not block since the connection
  can be established immediately. Usage is demonstrated in the new tutorial
  hserv2.C.
//________________________________________________________________________
//
//::>          VERSION  2.00/08   05/06/98 14.36.25
//
//
// 04/06/1998  15.38.43  by  Rene Brun
//
- Several new functions have been introduced in the TTree class.
  TTree::CopyEvents to copy events from a Tree to this tree.
  TTree::CloneTree. The default value for the number of events to copy
  has been changed. By default the new function copy all events.

- The TTree::SetBranchStatus information is now persistent. The next session
  will remember the branch status. A new function TTree::UpdateActiveBranches
  is automatically called by TTree::Streamer to rebuild the list of
  active branches.

- Thanks to the above changes and new functions, one can now copy a subset
  of a Tree to a new Tree. The subset can be a subset of all events and/or
  a subset of the branches. Two example macros (CopyTree and CopyTree2)
  have been added to the list of tutorials to illustrate the two cases.

- Several changes in the TEventList class. A TEventList object is a list
  of TTree event numbers. A TEventList object can now be automatically
  generated by a TTree::Draw (see below). Note that a TEventList object
  is automatically added to the list of objects in the current directory.
  To get this object from the current directory, use:
    TEventList *elist = (TEventList*)gDirectory->Get(list_name);

- Several changes in TTree::Draw and TTree::Scan to activate TEventList
     Saving the result of Draw to a TEventList
     =========================================
  TTree::Draw can be used to fill a TEventList object (list of event numbers)
  instead of histogramming one variable (say varexp).
  If varexp has the form >>elist , a TEventList object named "elist"
  is created in the current directory. elist will contain the list
  of event numbers satisfying the current selection.
  Example:
    tree.Draw(">>yplus","y>0")
    will create a TEventList object named "yplus" in the current directory.
    In an interactive session, one can type (after TTree::Draw)
       yplus.Print("all")
    to print the list of event numbers in the list.

  By default, the specified event list is reset.
  To continue to append data to an existing list, use "+" in front
  of the list name;
    tree.Draw(">>+yplus","y>0")
      will not reset yplus, but will enter the selected events at the end
      of the existing list.

      Using a TEventList as Input
      ===========================
  Once a TEventList object has been generated, it can be used as input
  for TTree::Draw. Use TTree::SetEventList to set the current event list
  Example:
     TEventList *elist = (TEventList*)gDirectory->Get("yplus");
     tree->SetEventList(elist);
     tree->Draw("py");

  Note: Use tree->SetEventList(0) if you do not want use the list as input.

  With this new functionality in TTree::Draw, the old (unimplemented)
  function TTree::Select has been deleted.

- New functions TPad::SetTickx, TPad::SetTicky, TPad::GetTickx, TPad::GetTicky.
  SetTickx, SetTicky force tick marks to be drawn on the horizontal, vertical
  outer axis respectively. The TPad class has two new data members, fTickx, fTicky.

- Protection in TRootIconBox::AddObjItem in case a directory contains
  a key corresponding to an object with a missing class definition.

- Mods in TChain constructor. By default add a TChainElement with name="*".
  This is necessary for anticipation of a construct like:
     chain->setBranchStatus("*",0);
     chain->SetBranchStatus("bname",1);

- Merge with Valery version. A few changes in h2root to take into account
  the DEC Fortran way of passing cahracter arguments (NT only).

- Change TCutG constructor. last two arguments are now optional.

- Modify TAttAxis::Streamer to take into account the case of old Root files
  generated in October 1996 with version 08/05.

- Implement new function TFile::GetVersion. This function returns the Root
  version number with which the file was initially created.

- Changes in TH1::PaintLego. When drawing the axis, one could not change
  the axis title size in case of lego/surface plots.
  (thanks to Rainer Cee for reporting).

- Due to several problems reported under WindowsNT (for example
  Postscript output was wrong), we have changed the level of optimization
  for C++ from -O2 to -O.

//
// 25/05/1998  20.30.26  by  Fons Rademakers
//

- Added new tutorials Dialogs.

- TRegexp added to dictionary (cint_base2).

- TClonesArray::Expand. Shrinking now OK.

- In TMapFile: Correction to acquire/release semaphores.

- In class THtml, functions THtml::WriteHtmlHeader and THtml::WriteHtmlFooter
  are declared virtual functions. This gives the possibility to customize the
  Root Html output.

- New function TObject::GetIconName. This function can be used to
  dynamically select the icon type shown in the browser.

- New function TCollection::SetParent.

- New constructor in TControlBar to control the position of the menu
  on the display. This has implied changes in classes TControlBar,
  TControlBarImp, TGuiFactory.
//
// 22/05/1998  12.36.14  by  Fons Rademakers
//
- TGTextEntry: text change events now also trigger the calling of the
  registered command (see TGWidget::SetCommand()).

- TRint: the name and location of the history file (default $HOME/.rootrc)
  can now be specified in the .rootrc file (resource Rint.History).
//
// 22/05/1998  10.47.33  by  Rene Brun
//
- Implement TProfile::Add, Divide and Multiply functions.

- Modify TGraphErrors constructor. All arguments except the first
  are now optional.

- Modify TH1::Scale. This function scales now both contents and errors (if any).
  The new function uses internally TH1::Add, but keeps the original
  number of entries.

//________________________________________________________________________
//
//::>          VERSION  2.00/07   19/05/98 08.15.23
//
//
// 19/05/1998  08.15.23  by  Rene Brun
//
- New function TH1::FillRandom(TH1 *hist, Int_t ntimes).
  This function can be used to fill this histogram randomly following
  the distribution in histogram hist. This new function is valid
  for 1-D, 2-D and 3-D histograms.

- Additions to TStyle. The function TStyle::SetLineStyleString accepts
  line styles in the range 1->29. Only 4 line styles were supported
  by the previous version. The functions TStyle::GetLineStyleString,
  TAttLine::Modify have been modified accordingly.

- The corrections introduced in 2.00/06 in TH1 functions to include
  underflows and overflows (Add, Multiply, Divide, Integral, FillRandom)
  have generated some side-effects in case of TH2 and TH3 objects.
  New code should work for all TH1 dimensions. (thanks Goetz Gaycken).

- One more fix in TPostScript::DrawPS function in case of fill area
  styles in the range (3000->3025). Histograms with only first bin filled
  were not correctly printed with PostScript. (thanks again Peter Wienemann ).

//
// 18/05/1998  21.28.30  by  Fons Rademakers
//
- TGPicturePool: picture cash was not working properly.

- TGClient: fRoot is now a TGFrame containing correct size of X11
  root window. This is necessary so dialogs can be centered on
  the root window, like:
  new TGFileDialog(gClient->GetRoot(), gClient->GetRoot(), kFDOpen, &fi);

- TUnixSystem: ExpandPathName was not working properly on AIX.
//________________________________________________________________________
//
//::>          VERSION  2.00/06   15/05/98 11.58.22
//
//
// 15/05/1998  10.06.42  by  Rene Brun
//
- Fix a memory leak in TClass::Draw. The memory leak was really apparent
  when processing a large number of classes with THtml::MakeAll.

- Fix a problem in TBasket::SetWriteMode. When a Tree was filled
  in two consecutive sessions, branches with only one basket in memory
  had a wrong start offset.

- New function TBasket::SetReadMode. This new function supports
  alternate read/fill operations in a TTree in the same session.

- Optimize computation of the default X axis range in TGraph::PaintGraph
  in case of log scale.

- One more tiny fix in TPostScript::DrawPS in case of fill areas
  with the special fill patterns.

- Changes in TGraph(Int_t n, Float_t *x=0, Float_t *y=0).
  The two last parameters are not optional.
//
// 12/05/1998  16.54.18  by   Kaori Wada and Kris Hagel
//              Cyclotron Institute, Texas A & M University
//
- Kaori has ported ROOT and CINT under VMS including full graphics.
  This version is included in the distribution, but a more intensive test
  is necessary before announcing this release.
  Porting on VMS has required changes in:
    - installation procedures ([.] instead of /) in diretory/file names
    - Implementation of the new class TVmsSystem.
    - mods in functions attach, Getline, keys and mvalloc.
    - mods in Rconfig
    - several changes in CINT
        - $FPROTO and $G__CI
        - functions macro, method and shl
   Many thanks to Kaori for this hard work. Kaori has been able to
   make the relevant changes with a minimum guidance from the Root team.
   Many thanks to Kris for his couragous initiative.
//
// 12/05/1998  16.11.53  by  Fons Rademakers
//
- TMessage: fix bug in case message contains objects of different classes.
  Example: TObjArray containing histograms (thanks Judith Katzy).

- The file $ROOTSYS/tutorials/.rootrc now shows all supported ROOT
  environment variables.

- Global gDebug: now int (was bool). When >4 X11 will be in synchronous mode
  which will allow better X11 debugging. gdebug is settable via .rootrc,
  via interpreter symbol gDebug or via debugger. Setting it via the interpreter
  to >4 will not cause synchronous mode because at that stage X11 is already
  initialized.

- TCanvas: new environment option Canvas.ShowEventStatus. When true
  every canvas will have by default the event status bar shown.

- Imported latest CINT 5.13.52:
   5.13.52 5 May 1998
   Otofuji-san's feedback,
   -                      , src/Makefile.base.nec fix
   G__OLDIMPLEMENTATION820, inherited virtual flag
   G__OLDIMPLEMENTATION821, p2f resolution bytecode vs compiled in shl.c
   -                      , G__define_var new_name length, f ( LongListOfArg )
//
// 07/05/1998  14.04.36  by  Fons Rademakers
//
- TGScrollbar: fix in scrolling up when clicking in scrollbar above slider.

- TGText: new text handling class in preparation for text editor widget.

- Import of latest CINT 5.13.51:
   5.13.50 25 Apr 1998
   G__OLDIMPLEMENTATION815, tempate<> class numeric_limits<float> { ... };
   G__OLDIMPLEMENTATION816, sizeof( signed char )
   G__OLDIMPLEMENTATION817, f() throw() ;
   G__OLDIMPLEMENTATION818, template<class T*> A { T a; } A<char*> b;
   G__OLDIMPLEMENTATION819, iostream style header with preprocessor

   5.13.51 1 May 1998
   -                      , Array index check changed for STL end() in pcode.c
//
// 06/05/1998  20.48.50  by  Rene Brun
//
- Changes in TH1::Integral, TH1::Add, TH1::Divide, TH1::Multiply.
  The Overflow bin was not taken into account.
  (thanks Goetz Gaycken ).

- In h2root, add option "P" in call HROPEN to preserve case
  of file name.

- Correct comments in TProfile (thanks Ludger Janauschek).

- Fix a problem in TTree::MakeCode in case of two dimensionnal array with
  a variable size first dimension. The second dimension was not generated
  in the declaration of the branch/leaf type. (Thanks Pasha Murat)

- Fix a small typo problem in TH1::PaintStat (thanks Mathieu de Naurois)
  The default width of the stats box could not be modified.
  GetStatH was used instead of GetStatW.

- Include changes from Thomas Hadig in TMinuit::mnplot.
  Thomas fixed several problems with the mixture of TString and char
  inside this function.

//
// 25/04/1998  14.30.12  by  Fons Rademakers
//
- Port to KAI KCC compiler (changes in several decks). Works except
  for CINT iostream (expect fix from Masa soon) and no support for
  ROOT's new/delete (reported to KAI). Link without ROOT's libNew.so.

- TGListBox: added multiselection option + speed inprovements in item
  add and delete. New features can be excercised in $ROOTSYS/test/guitest
  (by Reiner Rohlfs).

- TMap: important fix in TMap::Remove() (reported by Reid Rivenburgh).

- Import of latest CINT 5.13.49:
   5.13.47 2 Apr 1998
   G__OLDIMPLEMENTATION800, load XXX.dll with XXX.[DLLPOST] in MAKEINFO
   G__OLDIMPLEMENTATION801, reset G__reftype in G__memvar_setup()
   G__OLDIMPLEMENTATION802, #define A 3.14  , A -> 1.1343e-314 bug fix

   5.13.48 11 Apr 1998
   G__STD_NAMESPACE       , ON780 766 676 667, this does not work yet
   Scott Snyder's bug report
   G__OLDIMPLEMENTATION803, typedef foo<const const int> x;
   G__OLDIMPLEMENTATION804, G__library_func() in bytecode, result->ref=0 fix
   G__OLDIMPLEMENTATION805, Array index check changed for STL end()
   G__OLDIMPLEMENTATION806, throw bytecode turn off, segv
   G__OLDIMPLEMENTATION807, reference type global for dictionary generation
   G__OLDIMPLEMENTATION808, Eliminate gets in g__cfunc.c for ROOT

   5.13.49 18 Apr 1998
   G__OLDIMPLEMENTATION809, G__pointer2func recursive call bug fix
   G__OLDIMPLEMENTATION810, G__getexpr() a<b<c>> -> a<b<c> >
   -                      , G__stepmode(1) from interactive session bug fix
   G__OLDIMPLEMENTATION811,
   G__OLDIMPLEMENTATION812, memberfunc template
   G__OLDIMPLEMENTATION813, if(i) return x;  double x;  buf fix
   G__OLDIMPLEMENTATION814, new A(g->f(),g->f()); bug fix
//
// 22/04/1998  20.59.13  by  Rene Brun
//
- Fix a problem in h2root in case the Hbook ntuple block name include
  blank characters (eg 'BLOCK  0').

- Fix a problem in TGraph::PaintGraph. In case of a graph drawn with
  the option "F" (Fill area), the last point of the graph was not included
  in the fill area.
//________________________________________________________________________
//
//::>          VERSION  2.00/05   20/04/98 18.52.58
//
// 20/04/1998  18.24.39  by  Fons Rademakers
//
- The default canvas creation function TCanvas::MakeDefCanvas is now
  registered as soon as the library containing TCanvas is loaded.
  Before this was done in the InitGui routine, which required the initfunc
  arguments of the TROOT ctor to be set. So now only linking with libGPad
  is enough to get batch mode graphics.

- Class TDatime: new members functions to Set the time. Before the time
  was always the time of the creation of the TDatime object.

//
// 17/04/1998  12.04.26  by  Rene Brun
//
- Changes in TObject::Dump and TObject::Inspect to show the date/time
  instead of the compacted value stored in TDatime.
- A small problem fixed in TPostScript::DrawPS. When an histogram
  with only the first channel non-empty was drawn with fill area
  style = 3010, the Postscript ouput had some garbage. This garbage was not
  visible with Postscript viewers like gs or gv or Ghostview. It was only
  visible on the printer. This is in fact a bug in Postcript printers
  when printing some fill areas with special patterns.
  (thanks to Peter Wienemann for submitting a simple example)

- Correction in  g2root (thanks Federico Carminati).
  g2root routine toreal had a problem with numbers of the sort 3.33E-8 which
  are generated by the HP. In this case the number is written as .000000 by
  the write(s1,'(f14.7)')r. The scan starts after the point and skips
  backward al the 0's. Result nothing is written in the s string and the
  previous number is loaded. This does not happen on linux because numbers
  are written as 0.000 and so on...

//________________________________________________________________________
//
//::>          VERSION  2.00/04   07/04/98 16.02.38
//
//
// 06/04/1998  13.24.50  by  Rene Brun
//
 - Corrections from Victor Perevoztchikov <perev@mail.phy.ornl.gov>
   to run under SGI IRIX64.
   The changes are in installation macros: globals, sourcedir, selectsystem
    and install_h2root.
   Victor also fixed a problem in CINT/Error.
   Many thanks to Victor.

 - Bug fixed in TChain::SetBranchAddress
     reported by Laurent Aphecetche <aphecetche@ganil.fr>
   The correction implied changes in TChain.h and TChainElement.h.

 - In TDirectory. Added a protection against directory names including
   a slash.
   The logic with the special options "ROOT", "FILE" and "MAP" has been
   removed. The constructors from TFile, TMapFile and TROOT invokes
   the TDirectory default constructor and include the old special logic
   of TDirectory.

 - in TGraph. Clip correctly the graph when the pad range is smaller
   than the TGraph boundaries.

 - in TPaveLabel and TPaveText, optimize the estimation of the length
   of the strings by taking into account the special Postscript escape
   characters.

 - Additional protection introduced in TF1::EvalPar in case one executes
   a function compiled in a previous session, saved in a file,
   read again without providing the original version of the function.
        (thanks Carlos Lacasta)
   TF1 has two new functions TF1::Save and TF1::GetSave.
   TF1::Save is called by functions like TH1::Fit or TGraph::Fit
   to store the function values in an array in case of interpreted or
   compiled functions. This is necessary to display the shape of the function
   in a new session when the original definition of the user-defined function
   is not available anymore.
   When Painting the function, TF1::EvalPar will automatically call TF1::GetSave
   to return the function value from the values saved in a special array
   member of the TF1 class.

//
// 06/04/1998  13.24.50  by  Fons Rademakers
//

 - Support for Linux RedHat version 5 (glibc).

 - A few changes in TGSlider.

 - New version of CINT introduced (5.13.46 )  from Masa Goto.

  5.13.46 1 Apr 1998
  G__OLDIMPLEMENTATION794, #include ".." first try where source code exists
  G__OLDIMPLEMENTATION795, workaround to ON792  T() -> void*() -> (void*)()
  G__OLDIMPLEMENTATION796, void (*p2f[])() = {a,b,c}; bug fix
  G__OLDIMPLEMENTATION797, for(;;) { CLS x=init; } bug fix
  G__OLDIMPLEMENTATION798, for(;;) { CLS& x=init; } bug fix
  G__OLDIMPLEMENTATION799, for(;;) { CLS& x=init; } bug fix bytecode
  -                      , G__check_nonull() G__int(*para) bug fix for SGI
//________________________________________________________________________
//
//::>          VERSION  2.00/03   27/03/98 19.02.24
//
//
// 27/03/1998  18.45.21  by  Fons Rademakers
//
- TGListBox: can scroll specified item to top of listbox (by Reiner Rohlfs).

- TGToolTip: correctly position tooltip when on edge of screen (by R. Rohlfs).

- TRootCanvas: Menu item SaveAs... now correctly uses specified name.

- TGFrame: remove some compiler warnings.

- Front-end program: Logo stays for at least 4 seconds on screen.


//
// 27/03/1998  09.13.56  by  Rene Brun
//
 - Fix a problem in TH1::FillRandom. random numbers were offset by 1 bin.
   (thanks Andrzej Olszewski).

 - New function TH1::SetNormFactor(Float_t factor) to set the histogram
   normalization factor.
 - TH1::GetIntegral renamed to TH1::Integral to be consistent with TF1::Integral.

 - New function THtml::SetEscape(char escape). This function can be used
   to specify a escape character in front of characters "<", ">" and "&".
   The default escape character is backslash. (thanks Valery)

 - in TStyle, the functions TStyle::SetOptFit and TStyle::SetOptStat
   have been moved from inline functions to the implementation file.
   These functions are commented.

 - Protection introduced in TF1::EvalPar in case one executes a function
   created with the interpreter in a previous session, saved in a file,
   read again without providing the original version of the function.

 - Protection in TPad::SaveAs in case the pathname of the output file
   is of the form "../dir/file.ps".

 - in Tree::Branch (TClonesArray case), do not store the branch in the list
   of branches in case the TClonesArray is not split.
   Note that in the current implementation a TClonesArray branch must be split.

//________________________________________________________________________
//
//::>          VERSION  2.00/02   23/03/98 16.23.28
//
 - New version of CINT (version 5.13.45) introduced.
   This new version fixes a few problems connected with cout/printf.

 - Added ClassDef and ClassImp macros in TMath.h and TStorage.h.
   The documentation for these two classes is now generated.

 - In TFormula::GetParameter: protection in case of an inconsistent
   value of the argument.

 - In TCanvas::SaveSource. The code generated in case gStyle->SetScreenFactor
   was called was incorrect.

 - Cosmetic changes in print in TFitPanel and TFitPanelGraph.
//________________________________________________________________________
//
//::>          VERSION  2.00/01   15/03/98 16.47.52
//
//
// 09/03/1998  15.53.49  by  Rene Brun & Fons Rademakers
//
A few problems reported with the new GUI have been corrected:
  - Protection against fonts non available.
  - Library libXpm not available.
  - The front-end program "root" is now linked statically with libXpm.a.
  - Problem on 64 bit Alpha's has been fixed (segv when using contolbars).

New version of CINT introduced (5.13.44) (Masa Goto)
*  5.13.43 4 Feb 1998
*  Scott Snyder's contribution
*  G__OLDIMPLEMENTATION766, #define DOOM_STD std::
*  Ulli Schwanke's bug report
*  G__OLDIMPLEMENTATION767, if(!i%x) bug fix
*  Valeri Dorofeev's bug report
*  G__OLDIMPLEMENTATION768, func proto overriding bug fix
*  ifstream deletion problem fix,
*  -                      , libstrm.cxx malloc(size) -> new(size)
*  G__OLDIMPLEMENTATION769, linking undefined class/struct
*  Scott Snyder's contribution
*  G__OLDIMPLEMENTATION770, namespace nam{class S; A<A<S> > f; }
*  G__OLDIMPLEMENTATION771, const
*  G__OLDIMPLEMENTATION772,
*  G__OLDIMPLEMENTATION773,
*  G__OLDIMPLEMENTATION773,
*  G__OLDIMPLEMENTATION774,
*  G__OLDIMPLEMENTATION775,
*  Tetsu Watanabe's feedback
*  G__OLDIMPLEMENTATION776, Evaluation of array size decl in bytecode compile
*                          array size decl as local const still causes problem
*  Scott Snyder's contribution
*  G__OLDIMPLEMENTATION777, nested template reading and writing to same file
*  G__OLDIMPLEMENTATION778, G__instantiate_template() tagnamein -> replacetmpl
*  -                      , +V problem error->warning
*  G__OLDIMPLEMENTATION779, decl, reference initialization workaround
*  G__OLDIMPLEMENTATION780, opr.c std::
*  G__OLDIMPLEMENTATION781, vec<int>a;
*
*  5.13.44 1 Mar 1998
*  -                      , G__search_typename2 exported. bug fix
*  G__OLDIMPLEMENTATION782, #pragma include   error -> warning
*  G__OLDIMPLEMENTATION783, makecint -cc & -cint option added
*  G__VARIABLEFPOS        , record global variable file position
//________________________________________________________________________
//
//::>          VERSION  2.00/00   08/03/98 16.09.16
//
Version 2.00 contains the following important new features:

A - A completely new set of GUI classes
    (http://root.cern.ch/root/html/GUI_Index.html).

    These new GUI classes provide a full OO GUI framework as opposed to
    a simple wrapper around Motif. All GUI elements do their drawing
    via the TVirtualX abstract base class. Depending on the platfrom
    where you run ROOT the concrete graphics class (inheriting from TVirtualX)
    is either TGX11 or TGWin32. All GUI widgets are created from
    "first principles", i.e. they only use routines like DrawLine,
    FillRectangle, CopyPixmap, etc. and therefore the TGX11 implementation
    only requires X11 (no more need for Motif, Xt, Xaw, etc.) and the
    Xpm library (for color icons). [The libXpm.so library is distributed
    with the ROOT libraries in the $ROOTSYS/lib directory.]
    Another advantage of this approach is that porting to a new, non
    X11/Win32, platform requires only the implementation of an appropriate
    version of TVirtualX (and TSystem for the OS interface).

    All GUI classes are now fully scriptable and accessable via the
    interpreter. This allows for fast prototyping of widget layouts.

    The GUI classes are based on the XClass'95 library written
    by Hector Peraza (ftp://mitac11.uia.ac.be/html-test/xclass.html).
    The widgets have the well known Win95 look and feel.

    All components previously using Motif widgets, like, the Canvas,
    Browser, Controlbar, ContextMenu, Method Argument Dialogs, etc.,
    have been rewritten using the new widgets.

    Except for the automatically generated reference manual, the
    documentation of the new GUI is still very sparse. However, to see
    how to implement fairly complex GUI's have a look directly at the
    source of classes like TRootBrowser, TRootCanvas, TRootDialog, etc.
    Also try the test program $ROOTSYS/test/guitest.cxx (make guitest).
    This program excercises most of the widgets.

    [For the time being, under Windows, the old user interface classes
     are still being used.]

    The DrawPanel and FitPanel widgets are not yet using the new GUI.
    Work is in progress to replace these widgets and to add new ones
    exploiting the power of the new classes.

    More details about the new GUI classes can be found at:
    http://root.cern.ch/root/hepvis98/newgui.html


B - New front-end program that starts the actual interactive program.

    The actual interactive program, executable "root" in version 1.xx,
    is now called "root.exe". This program is started via a little
    front-end program now called "root". From the user's point of view
    nothing has changed in this respect. You still start ROOT by typing
    "root". The advantage of this little front-end program however is
    that it allows the setting of the appropriate LD_LIBRARY_PATH,
    SHLIB_PATH or LIB_PATH variables (depending on the platform).
    That means that the user only has to define a single shell variable,
    ROOTSYS, before using ROOT. Further, since the front-end is very small
    it will start quickly and, in case of an error (in the command
    line arguments or in opening an X server connection), it will give
    feedback directly, without having to wait for the loading of the ROOT
    shared libraries. Which could take some time depending if they had
    to be read from disk or over the network (AFS/NFS). Finally, it is
    this front-end that displays the "splashscreen" while waiting for
    "root.exe" to start. The source for the front-end can be found in
    ROOTX_rootx.cxx and ROOTX_rootxx.cxx (in the source distribution).
    Change the graphics and the module to be executed when you want to
    use this front-end to start your own ROOT based standalone application.


C - Enhancement of the TTree/TBranch classes.

    On popular demand (especially by people from FermiLab) branches
    of TTree objects can now be stored in separate files. This powerful
    feature allows for very large TTree's and also for the possibility
    of less used branches to be migrated to mass storage (tape, etc.),
    while at the same time keeping the rest of the TTree on disk.

    Further, multidimensional arrays are now properly supported.


D - New classes THelix and TMarker3DBox.

    These classes are interesting in the context of event displays.


E - Support for more style parameters.

    More style options can now be managed via the TStyle class.


F - New tool GH2ROOT to automatically generate C++ classes to read and
    convert Geant3 hits.

    For more information of this powerful migration tool see:
    http://root.cern.ch/root/gh2root.html


G - Long list of bug fixes, enhancements and new features:

  - All Motif releated classes have been deleted since they have been
    obsoleted by the new GUI classes.

  - Class TRandom: new algorithm similar to the one in Kernlib implemented.

  - Class TFileType has been deleted. The new Browser uses mime types as
    specified in the file $ROOTSYS/icons/root.mimes.

  - Class TCollection: the garbage collection routine was not reentrant.
    This was giving a problem when closing a file in the destructor of
    another file. This happens in the new Tree/Branch facility when
    branches of a Tree reside on different files.

  - Class TAttAxis: new data member fTitleSize and corresponding getter/setter.
    The axis title size can be modified via the axis context menu.

  - Class TGaxis: implement the new option supporting the title size.

  - Class TAxis: a bug has been fixed in TAxis::Streamer. In case a sub-range
    was set on the axis, the range was not correctly saved.

  - Class TF1: new function TF1::Derivative() to compute the derivative of
    a function at one point.

  - Class TLego: support for log scales on x,y,z axis.

  - Class TMarker: fix a memory leak in function DisplayMarkerTypes().
    The local marker object and text object were not deleted when closing
    the canvas showing the marker types.

  - Class TPaveLabel: support for changing text alignment added.

  - Class TPaveText: support for changing text alignment added.

  - Class TPolyLine: function GetPolyLine() had an incorrect parameter type.

  - Class TPolyMarker: function GetPolyMarker had an incorrect parameter type.

  - Class TStyle: new data members fCanvasDefH and fCanvasDefW + corresponding
    getters/setters. SetCanvasDefH,W can be used to define the default canvas
    size. In addition, several parameters defined in a style are now taken
    into account in several classes, like TH1, TCanvas and TGraph.

  - Class TText: new function SetNDC.
    By default, the text is drawn in the pad coordinates system.
    One can draw in NDC coordinates [0,1] if the function SetNDC()
    is called for a TText object.

  - Class TCanvas: the default canvas constructor uses the size of the canvas
    as defined by the current style (TStyle::SetCanvasDefH()).
    The bottom, top, left and right margin defined in TStyle::SetBottomMargin,
    etc. are active in creating the default pad in a canvas.

  - Class THelix: new class implemented by Ping Yeh from the AMS collaboration.

  - Class TMarker3DBox: new class, a special 3-D marker designed for event
    display. It has the following parameters:
      fX;               X coordinate of the center of the box
      fY;               Y coordinate of the center of the box
      fZ;               Z coordinate of the center of the box
      fDx;              half length in X
      fDy;              half length in Y
      fDz;              half length in Z
      fTheta;           Angle of box z axis with respect to main Z axis
      fPhi;             Angle of box x axis with respect to main Xaxis
      fRefObject;       A reference to an object

  - Class TTube: implement member function SetNumberOfDivisions().

  - Class TH1: in TH1::Fit() and H1FitChisquare(). In case a fit range was
    specified, the function was using the overflow bin. The chisquare value
    was strongly dependent on the content of this bin.
    When drawing the axis titles, the label font and axis title size are used
    in the temporary TGaxis object.
    In TH1::PaintScatterPlot(), a protection has been introduced to avoid
    plotting a too large number of dots in one cell.

  - Classes TH1C, TH1S: implement functions AddBinContent(). This function
    is a redefinition of TH1::AddBinContent(). A bin content is not
    incremented when the new bin value is bigger than the bin capacity (to
    avoid negative bin contents).

  - Class TBasket: in function SetWriteMode(), do not create the array of
    event offsets. Support introduced for branches residing on different files.

  - Class TBranch: new function SetFile(), see below:

     void TBranch::SetFile(const char *fname)

    Set file where this branch writes/reads its buffers.
    By default the branch buffers reside in the file where the Tree was
    created. Branches of the same Tree may be in different files.
    The ROOT file will be connected only when the branch is accessed.
    If called by TBranch::Fill() (via TBasket::WriteFile()), the file
    will be created with the option "recreate".
    If called by TBranch::GetEvent() (via TBranch::GetBasket()), the file
    will be open in read-only mode. To open a file in "update" mode,
    explicitely use TBranch::SetFile(TFile *file).

  - Class TBranchObject: reimplement function SetBasketSize().

  - Class TChain: memory leak problem solved. When deletting a chain, the
    files and Trees referenced by the chain were not deleted.

  - Class TLeaf: modify function GetLeafCounter() to support the case of
    multidimensional arrays. Previous version was limited to 2 dimensions.
    Reimplement function ResetAddress(). In case of a function generated by
    TTree::MakeCode(), the leaf addresses for 2-d arrays were not correctly
    set. Similar changes in subclasses TLeafB, TLeafC, TLeafD, TLeafF,
    TLeafI and TLeafS.

  - Class TTree: support for branches residing in different files introduced.
    By default a branch is stored in the same file as where the Tree has
    been created. One can use TBranch::SetFile() to specify the name of a
    file where a branch should be written.
    Writing a branch to a different file is interesting in case one plans
    to write huge Trees that cannot fit completly on disk. In that case,
    it migth be advantagous to write some branches on separate disk files
    that can then be stored on tape.
    Using a Tree that references branches that are stored on separate
    files, the branch files will be automatically opened only when
    the branch is accessed.

  - The format of TTree::Print() and TBranch::Print() is more economical,
    only 2 lines per branch are printed. Each line is <72 characters.

  - Class TTreeFormula: changes to support multidimensional arrays.

  - Class TPostscript: one can now generate an EPS file from a single pad.
    In previous versions, one could only print a complete canvas.

  - ZIP package: global functions and variables have R__ prepended to avoid
    conflict with other packages (XDR in particular).

  - The source has been cleaned, removing unused variables. Code compiles
    under the KAI compiler.

  - In Tutorials, new tutorials dirs.C and gerrors2.C

  - Conversion program h2root. A few protections added.

