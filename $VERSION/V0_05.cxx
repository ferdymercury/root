//*CMZ :          24/11/99  11.25.31  by  Rene Brun
//*-- Author :    Rene Brun   05/12/95
//
// 26/07/96  09.11.04  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  0.05/03   02/02/96 14.34.14
//
// 01/02/96  20.22.29  by  Fons Rademakers
//
- Crazy.mac now runs correctly on the optimized versions of ROOT on
  HP, Solaris and AIX 3.2 (cernsp).

- Class TMinuit: changed the structure of mnline(), this fixes problems with
  some older Cfront based compilers (Solaris) that do not handle the
  destruction of temporary TString objects correctly.

- Class TRint: fixed bug in AnalyzeLeft() in case of assignment to an
  object pointer (TText *t1=pave.AddText("aap")).
//
// 01/02/96  16.14.07  by  Rene Brun
//
- Merge with Valery's version. Graphics now fully operational under Windows/NT.

- Some changes in the dictionary macros to be independent between Unix and NT.
  New macro UpdateDict.

- Change global name f1 to gF1 in TH1 and a few other places.
  TH1 must still be changed to remove several unneccesary globals!

- Introduce a few ifndef SOLARIS in the Minuit code in case of Solaris.
  Problem apparently due to a bug in the C++ Solaris compiler in
  minuit routine mnline.

- Move functions LegoFunction, GouraudFunction, SurfaceFunction
  from the TH1 class to the TLego class.

- Change the default option in Paves from "tr" to "br"

- Slight changes in TFormula::Evalpar to solve a problem on Windows/NT
  with the Symantec compiler.

- Improve performance of data types conversion routines in bytefromto.

- Implement more efficient I/O for the Array classes.

- Code to Create/Fill/Read Tree/Branch now complete.

- See a short example to create a tree in the TTree::TTree constructor

//________________________________________________________________________
//
//::>          VERSION  0.05/02   23/01/96 19.14.59
//
// 23/01/96  18.49.43  by  Rene Brun
//
- Activation of the new TContextMenu class for demonstration purposes only.
  This class supports the logic when the right mouse button is clicked
  on any object on the screen. A pop-up menu is shown with a selected list of
  functions specific to the class of this object.
  If one menu item is selected, a second menu appears with the list
  of parameters of the corresponding function. The user can type the
  parameter value in the input field of the named parameter.

- Modify many include files to insert the string *MENU* in the comment
  field of member function prototypes to be seen in the pop-up menus.

- Modify the program DICT to store the comment field and also inline functions
  declarations in the dictionary.

- Member function TClass::DefineMethod and the TMethod constructor modified.
  A new parameter "comments" pass the value of the comment field.

- Class TMethod modified. New data member fComments.
  New member function TMethod::GetComments.

- Change in TAlias::Substituted. Aliases defined with one single character
  are OK now.

- Merge with Valery's version of 22 January.

- Update include $Readh used by the dict compiler.
  Increase the maximum number of classes from 250 to 300.
  You must recompile the compiler.

- Insert new menu item Browser in the Inspector menu of the tool bar.
  Implement new member function BrowserCB in TMotifCanvas.

- Remove call to TEditor in NewPadCB.

- New Directory TREE.
  This new directory includes all the Tree/Branc/basket/Leaf.. classes.
  The code for these new classes is not operational yet. It is inserted to use
  the automatic generation of the HTML code for documentation.

- New macro dict_tree to generate the dictionary for the Tree classes.
  The DictTree deck is put in Patch Tree.

- Remove functionality of NewPad in tool bar menu View.

- Very important change in the ClassDef philosophy.
  The ClassDef macro has still the same syntax as before, but the second parameter
  indicates now the version number of the class. As a consequence version
  numbers have been changed to 1.
  This version number is used to support evolution of the class schema
  with time.
  The ROOT DICT compiler has been modified to automatically generate the code
  to support versioning in the member functions ReadBuffer, FillBuffer and
  Sizeof.
  All ROOT classes have been changed to support this facility.
  With this important new feature, ROOT will be able to read any type
  of ROOT file written with older class definitions. Objects made
  with different class versions can coexist in the same file.

  The ROOT include $RConfig has been modified. It includes two new macros
  called FillVersion and ReadVersion. These macros can be referenced
  in FillBuffer and ReadBuffer respectively.
  Example: the TLine class in ROOT itself. TLine inherits from TObject and TAttLine.
  The parameter specified in FillVersion must be the class name.
  The parameter specified in ReadVersion(version) is an integer that returns
  the class version number. Conditional code based on version may be included
  when the class definition changes.
  The TObject::FillBuffer, TObject::ReadBuffer, TAttLine::FillBuffer, TAttLine::ReadBuffer
  contain the same statements. Note that the code below is automatically
  generated by the ROOT compiler itself.
  The overhead introduced by this versioning scheme is 2 bytes per class component
  of an object.

   void TLine::FillBuffer(char *&buffer)
   {
   //*-*-*-*-*-*-*-*Encode TLine with its attributes in output buffer*-*-*-*-*-*-*
   //*-*            =================================================
   FillVersion(TLine);
     TObject::FillBuffer(buffer);
     TAttLine::FillBuffer(buffer);
     byte_fromfloat(buffer, &fX1);
     byte_fromfloat(buffer, &fY1);
     byte_fromfloat(buffer, &fX2);
     byte_fromfloat(buffer, &fY2);
   }

   void TLine::ReadBuffer(char *&buffer)
   {
   //*-*-*-*-*-*-*-*-*Read this TLine & its attributes from input buffer*-*-*-*-*
   //*-*              ==================================================
   ReadVersion(version);
     TObject::ReadBuffer(buffer);
     TAttLine::ReadBuffer(buffer);
     byte_tofloat(buffer, &fX1);
     byte_tofloat(buffer, &fY1);
     byte_tofloat(buffer, &fX2);
     byte_tofloat(buffer, &fY2);
     AppendPad();
   }

 We do not provide a macro for Sizeof. Instead inserts one statement:
      Int_t nbytes = sizeof(Version_t);

   Int_t TLine::Sizeof() const
   {
   //*-*-*-*-*-*-*Return total size of this TLine with its attributes*-*-*-*-*-*-*
   //*-*          ===================================================
      Int_t nbytes = sizeof(Version_t);
      nbytes      += TObject::Sizeof();
      nbytes      += TAttLine::Sizeof();
      nbytes      += 4*sizeof(Coord_t);
      return nbytes;
   }

- the DICT compiler has several changes. Regenerate all dictionary decks.

- A new macro in $KUMACS/make_code. This macro is an interface to
  the program makecode generated automatically by the "exec utils" facility.
  makecode writes the skeleton C++ code corresponding to a class header file.
  The syntax to invoke this program is the following:
     makecode headerfile_name  cppfile_name
  Example:  makecode Line.h Line.C generates the implementation file Line.C
            from the class definition in Line.h
  The root.cmz file also defines an alias called "code".
  Typing :  code Line
    extracts automatically Line.h from the cmz include directly, invokes
    the makecode program with the syntax desbribed above and also returns the
    File.C in the cmz editor.
  Note that the makecode program inserts by default the header and relevant
  includes for the implementation file. It also generates the FillBuffer,
  ReadBuffer and Sizeof member functions of the class.

- Some memory leaks fixed in several classes. In particular in THN::Draw.

- New member functions TGeometry::RecursiveRemove and TNode::RecursiveRemove.

- TPad::Delete invokes TList::Clear instead of TList::Delete.

- Protections in TAttLine::Modify and also the othera ttribute classes
  against possible calls when no canvas has been defined.

- Simplification of TROOT::Reset

- Fix bug in TRINT::AnalyzeLeft in case apointer=2.

- Several mods in the TH2X::DrawCopy function.
//
// 17/01/96  12.23.34  by  Nenad Buncic
//
- Change in TPopupMenu::Show(XEvent *event) member function. Added menu
  position code.

- New class TContextMenu provides an interface to context sensitive
  popup menus. These menus pop up when the user hits the right mouse
  button.

- Change in TMotifCanvas. Added new private data member fContextMenu.
  Added support for the TContextMenu in TMotifCanvas::CreateWindow().
  also change in TMotifCanvas::~TMotifCanvas() added code for deleting
  TContextMenu object.

- Change in TClass. New member function TList *TClass::GetContextItems().
//
// 13/01/96  18.28.34  by  Rene Brun
//
- Correct bug in TPavesText::Paint. Previous code was assuming origin at (0,0).
//
// 11/01/96  11.41.08  by  Fons Rademakers
//
- TROOT: moved all dictionary type definitions in a protected member
  function InitTypes. This obsoletes the routines InitH and InitG (they
  are removed from the file). Removed also the declaration of InitGui
  from the TROOT header.

- Routine InitGui(): initialize the MakeDefCanvas routine here instead of in
  letting the user do it (was in TRint which is formally a user defined
  routine).

- TApplication: added protections in the ctor in case TROOT is not initialized
  and InitGui() has not been called. Also call gROOT->SetApplication() here
  instead of in TRint (same rationale as above).

- rmain: removed InitH() and InitG() from the TROOT ctor.

- Added InitGui() to the TROOT ctor in test_th.
//
// 10/01/96  10.16.01  by  Rene Brun
//
- Update the README deck.

- $Object has an additional BIT(3) kObjInCanvas.
  The TObject::AppendPad function automatically sets this bit for all objects
  inserted in a pad/canvas.
  The TObject destructor as well as the TDynamic destructor and TROOT::Reset
  test this bit before calling TCanvas::RecursiveRemove.

- Define __STDC__ for WIN32 in ZIP/Inflate.

- Set default in TROOT::Reset to null string.

- Remove extra line with { in deck x3d for WIN32 flag.

- Create new directory GPAD and new DICT_GPAD.
  The following decks have been moved grom directory G to GPAD:
     AttButton
     AttLineButton
     AttFillButton
     AttTextButton
     AttMarkButton
     AttHistButton
     Pad
     ChoiceButton
     EditButton
     AngleButton
     Editor
     SelectPad
     Canvas
  The following decks have been moved grom directory BASE to GPAD:
     Undo
     INitGUI

- Minor mods to H1 and FIle.

- Mods in $RCONFIG. Introduce SGI option.

- Mods in ZIP for WindowsNT. Must deselected MSDOS flag in some places.
//
// 09/01/96  10.58.06  by  Fons Rademakers
//
- Class TFile: added compression factor default argument to ctor. By default
  compression is 1.

- Removed unused functions CompressBuffer and UnCompressBuffer from Patch C.

- In classes THtml, TFile, TPaveText: changed fstream to ifstream or ofstream.

- In number of decks removed unused variables.

- Class TBtree: fixed bug. BTree's seem to work fine now.

- Class TSystem: Which() is now an (abstract) member function (was static
  on TUnixSystem).

- Class THtml: use member function Which() instead of TUnixSystem::Which().

- Class TUnixSystem: Which() is now a member function.

- Include X3DBuffer: added proper extern "C" statement.

- Getline: made ANSI C conformant (function prototypes) and added MacOS
  version.

- Class TMacSystem implemented.

- Introduced headers for TGMac, TMacGuiFactory.
//
// 08/01/96  09.07.04  by  Rene Brun
//
- Correct bug in TClass::Draw. All PaveText objects created are deleted
  before return.

- Rename TFile::Compress to TFile::SetCompressionLevel and set protections.

- Correct Minexam test program. Must specify the maximum number
  of parameters in the TMinuit constructor.

- Restructure TROOT destructor and TROOT::Reset.

- Clean up all Delete functions. The TObject::Delete has additional
  functionality to also delete TDynamics pointing to this object.

- TDynamic destructor changed to recursively remove pointed objects
  in the current canvas.

- Delete member function Delete in the following classes:
  All TArray classes, TH1, TH2, TH3, THN and TNamed.
  TCanvas::Delete invokes TObject::Delete instead of TPad::Delete.

- New directory ZIP.
  This directory contains new code (the Gzip/GUnzip algorithms) to
  compress/uncompress data.
  Macros loadincludes, root_libs and root_make have been modified
  to use this new directory. A new shared library zip.sl is also created.

- Mods in TFile constructor. By default a new file is compressed.
  use member function Compress(0) to select the uncompressed mode after
  the TFile constructor.

- Class TKey modified to call the new compression routines R__zip and R__unzip
  from the ZIP patch. (thanks to E.Tchernaev).

- Mods in TFile::Map. In case of a compressed file, do not list name and title
  of the object because they are part of the compressed data.

- Modify the test programs in directory TEST.
  Remove references to hclasses and gclasses.

- Merge with Valery Fine version of 4/01/96.

- Changes in Tutorials to reflect new ROOT functionality.

- Protect TMethod in case a member function (eg TMotifCanvas) defines only
  the type of parameters and not the name.

- Protect THtml against NULL pointers.

- Changes in TF1::Paint. Remove temporary histogram from current Directory.

- Mods in THN::Fit and THN::Draw.
  By default the temporary histogram created is called htemp.
  If varexp contains >>hnew , the new histogram created is called hnew
  and it is kept in the current directory.

- Reorganization of TKey. The new TKey class is used not only
  to write objects in the current directory, but also by the ntuple class
  to write new ntuple buffers.
  The task of inserting the key in the list of keys has been moved to the
  TDirectory class.

- New member function TDirectory::AppendKey. It returns the key cycle number.

- New argument in TKey::WriteFile(Int_t cycle). This function must be called
  only after the cycle number is known.

- Delete [] fRaster in TLego destructor.
- Delete fRealdata in TClass destructor.

- Fix bug in TNode destructor. Must remove node from gGeometry list
  of nodes when fParent = 0;

- Add statement tlink->SetBit(kCanDelete) in TObject::Inspect

- Delete TH1::UpdateOptions.
  Move corresponding code in TAttHistButton::SetAttributes

- SetBit(kCanDelete) in TSelectPad and TEditButton constructors.

- Correct TMixture destructor.

- Merge with Fons version of 23 December.

- Protection in TLego constructor. Do not create a new TView if pad has already
  an existing view.

- Protect TFile::Sizeof if fFree is NULL.

- Reimplement initialisation of MakeDefCanvas in TROOT.

- Move declaration of gSize3D from Pad to VirtualPad.

- Move TObject::DrawClass from ObjInspect to Object.

- Create new macro dict_gpad to create a new dictionary DictGPad.
  DictGpad contains all classes including Pad and its derived classes.

- Move several classes from Base or G to GPad.

- Remove GetCanvas from ROOT include and from implementation.
  This was forcing the code of GPad in case of normal archive libraries.

- Delete TH1::Write, THN::Write, TNamed::Write and TCanvas::Write.
  All objects are now written exclusively via TObject::Write.

- New data members fVersion, fVersionInt, fVersiondate, fVersionTime in ROOT.
  Corresponding new access functions:
    - GetVersion()  returns ROOT version as stamped by CMZ.
    - GetVersionInt() version number in integer format
    - GetVersionDate() date of version (ex 951226)
    - GetVersionTime() time of version (ex 1456)
  Replace sequences VERSQQ,etc in TRINT::PrintLogo by these access functions.
  Use GetVersionInt in TFile:TFile instead of kVersion.

- Add new data member fCompress in TFile and corresponding function
  IsCompressed() returns kTRUE is file is compressed, 0 otherwise.
  Compress(Int_t mode=1) to set the compress flag.

- Add new data member fObjlen in TKey. When option Compress is selected,
  fObjlen is the length of the uncompressed object.
  Old ROOT files can still be read with the new format.

- New static functions CompressBuffer and UnCompressBuffer in Patch,C.
  These two functions are called by the TKey class when the file is in
  compress mode.

- New member function TFile::GetCompressionFactor.
  This function scans a ROOT file sequentially. It computes the total number of
  bytes compressed and uncompressed. It returns the ratio uncomp/comp.
//
// 04/01/96  14.20.46  by  Valery Fine
//
- AddAtFree member function was added for ObjArray Class
  It adds a new TObject at the free slot in the array or at its last empty
  slot.
  Return the slot number

- a flag QF_MSOFT was introduced for UTILS patch, which means Microsoft
                  Fortran compiler will be used.
//
// 23/12/95  02.38.24  by  Fons Rademakers
//
- Class TApplication is now independent of the GUI.
  TApplication contains now a pointer to TApplicationImp which provides the
  interface to the GUI dependent application class TMotifApplication.
  TApplicationImp is initialized using the gGuiFactory.
  This pattern is identical to the ones I use for TCanvas and TBrowser.
  Hsimple does not reference any Motif or X11 routines anymore!

- Many changes in the MOTIF patch: TApplication -> TMotifApplication.

- TGuiFactory: create a TApplicationImp.

- The gGuiFactory and gVirtualX are now initialized in InitGui(). InitGui() is
  added to the list of init functions for TROOT in rmain.
  TMotifGuiFactory was called in TROOT which caused the loading of all
  the Motif classes.

- All HClasses, GClasses, etc. are renamed InitH, InitG, etc. InitXXX
  means "Initialize system XXX".

- TClass: introduced the typedef ReadCallBack_t. Is easier on the eye
  than function pointer syntax.

- Dict: the ReadObject function is now a static class member function
  (like Dictionary()). This has the advantage that the default constructors
  may now be private or protected. Regenerated all dictionaries.

- $Rconfig: added ReadObject() to the ClassDef macro.

- First version of TMacSystem introduced.
//
//________________________________________________________________________
//
//::>          VERSION  0.05/01   21/12/95 15.20.45
//
// 21/12/95  10.56.51  by  Rene Brun
//
- Protect several destructors against reentry (this can happen when objects
  have been stored in several lists).

- Correct several problems when deleting arrays. Found a few places
  with "delete thing" instead of "delete [] thing".

- New and very simplified version of THN::Draw. This new version
  takes advantage of the new kCanDelete mechanism.

- Functions TH1::PaintStat and TH1::PaintTitle have been rewritten.
  The title and the stats are now TPaveText objects instead of pads.

- New constant kCanDelete introduced in TObject. The kCanDelete bit (bit 0)
  is used to identify objects in TList that can be deleted in TList::Clear.
  This feature is of interest for all objects entered into a pad via a copy
  operation.
  All graphics functions have been modified to SetBit(kCanDelete) in all
  DrawCopy functions.

- TList::Clear modified. In the Clear operation, all objects with the kCanDelete
  bit set are deleted.

- In TH1F::DrawCopy reset fDirectory to 0.

- Optimize TPaveText::Paint to compute a better character size.

- In TPad::Clear remove the special logic to delete the stats and title pads.
  This is now automatic with the kCanDelete bit.

- In the TStyles constructor update default positions of the histogram title
  and statistics box.

- In TNamed::ls print also the TestBit(kCanDelete).

- Additional protections against already deleted objects in TROOT::Reset.

- The TDynamic constructor has been modified to issue a Warning in case one
  attempts to recreate an already existing TDynamic.

- Important changes in all attribute classes. The following functions have been
  deleted:
  TAttLine::SetAttributes
  TAttFill::SetAttributes
  TAttText::SetAttributes
  TAttMarker::SetAttributes
  All ExecuteEvent functions referencing 1000+TAttxxx have been simplified.
  The logic previously in the above functions has been moved in the
  TAttLineButton::SetAttributes, etc.
  These changes were necessary to remove all references to TPad and TCanvas
  in many classes.

- a new member function TObject::Execute(Text_t *methodname, Text_t *parlist).
  This new function is used as an interpreter in some places where casting
  to classes like TAttLine is not possible (TAttLineButton::SetAttributes,etc..).

- ROOT has been ported on Alpha-OSF. Some changes were necessary to be able to
  compile. Several ifdef ALPHA have been introduced in a few classes,
  $RConfig, $TString, $RTypes.
  ifdef,ALPHA also introduced in TbTNode constructor and in TString to circumvent
  a bug in the DEC compiler. Problem has been reported to Jean-Piere Thibonnier.

- Macros bind_test and compiler modified to support porting on Alpha-OSF.
  New macro bind_lib_alpha.

- TNamelist modified to fix a problem with the DEC compiler.

- Class TUnixSystem modified to accomodate the ALPHA version.

- Add new data member fType in TF1. This is necessary due to limitations
  of the DEC compiler (cannot do if(fFunction) ) when fFunction is a pointer
  to a member function).
//
// 21/12/95  10.33.19  by  Fons Rademakers
//
- Port to Solaris 2.3 (ifdef SOLARIS). Changes mainly in TUnixSystem.
  Some problems in TMinuit, due to some compiler problem (I suspect).
  When running with Purify no errors are reported. However, some TString
  dtor for chpq gets erroneously called at the end of TMinuit::mnline.
  Code ifdef'ed for SOLARIS. Still segmentation violation in ~TROOT.
  Also here it runs fine when in Purify. Will investigate further.

- Dict: fix for very long lines in dictionary. Truncation was incorrect.
  Problem appeared in TTRAP dictionary.

- Number of corrections in the install scripts.

- New class TRandom: wraps Rndm() and Rannor().

- Class TStopwatch: removed machine dependencies from header.

- Class TString: protection in TString::operator() when specifying a
  substring that is too long.

//
// 18/12/95  11.47.32  by  Rene Brun
//
- In TFormula, replace all static array declarations by pointers to arrays.
  Create local pointers witha  maximum dimension to handle very long formula.
  Copy these local arrays into the TFormula objects at the end of
  TFormula::Compile.

- Protect TClass::BuildRealData for case where dm->GetDatType() is NULL.

- In TMinuit, replace all static array declarations by pointers to arrays.
  New member functions TMinuit::BuildArrays and TMinuit::DeleteArrays.
  The TMinuit constructor calls BuildArrays.
  The TMinuit destructor calls DeleteArrays.
  With this change, Minuit is not limitated anymore for the number
  of parameters. The default maximum number of parameters has been changed
  from 50 to 15.

- $VirtualPad has now the extern gPad and gCanvas.
  The extern declaration has been removed from $Pad and $Canvas.

- Continue clean-up of several decks to remove references to Pad and Canvas
  where VirtualPad is sufficient.

- Implement new logic in TPave, TPaveLabel, TPaveText.
  If the option NDC is given to the TPave constructor, the TPave or its derived
  class objects are defined in NDC coordinates instead of the default
  world coordinates.
  Also, the Pad may be in log scales.

- Disable one line in TGaxis to optimize number of primary divisions
  as a function of the physical pad size.

- Changes in TH1 paint functions. The fitted function was not always drawn
  when the option "e1p" was given.
//
// 15/12/95  15.32.38  by  Nenad Buncic
//
- Added support for a search engine in the THtml::CreateIndex member function.
  If an environment variable Root.Html.SearchEngine exist in .rootrc file
  (see also class TEnv), and if it points to the search engine,
  generated index will be search-able, also one additional file, containing
  search options, will be created in the default HTML output directory
  ('Search.html'), but only for The Developers team, in all other cases search
  form will be without options.

  Example:
     Root.Html.SearchEngine: http://very.fast.machine.com/cgi-bin/search
//
// 13/12/95  10.28.53  by  Rene Brun
//
- Create new directory INCWIN32. Move all sequences previously in WIN32 in
  this new directory. Modify loadincludes and headers accordingly.

- Fix 4 problems in DICT.
  - Data members having blanks between the name and the semicolon were ignored.
  - if argument type is a class local typedef or enum prepend classname to it.
  - if argument type is a baseclass typedef or enum prepend baseclassname to it.
  - Do not store member functions that are pointers (eg **Argv) in Dictionary.

- Impressive gain in speed in dict thanks to the introduction of a new
  array iparent(maxclass).  This array is filled at the end of READH
  and avoids thousands of calls to the time consiming routine FindClass.
//
//
// 12/12/95  12.20.01  by  Nenad Buncic
//
- Introduced some make facilities and new member function THtml::IsModified,
  also THtml::CopyFile has changed. Machine dependent code has been removed,
  and replaced by TSystem calls. Some private member function are disappeared
  (due to optimisation), or function parameters has been changed.

- Member function THtml::CopyFile has changed, actually completely
  rewritten, and now it should be faster.

//
// 09/12/95  18.07.38  by  Rene Brun
//
- New class TAlias. Command aliases may be defined in several ways.
  for example you can add to your rintlogon.mac the following definitions:
    TAlias sh(sh,"gSystem.Exec("")
    TAlias pwd(pwd,"gSystem.Exec(pwd)")
    TAlias ls(ls,".ls")
    TAlias op(op,gObjectTable.Print)
    TAlias ed(ed,"gSystem.Exec(ved ")
  then in a ROOT session typing
    Root > sh echo this is a message
  has the same effect as:
    Root > gSystem.Exec("echo this is a message")

- Change TF1::Draw and TF2::Draw in case the same function with different
  parameters is drawn on the same canvas. In this case one must copy
  the function.

- Changes in TPostScript::Text and TPostScript::UtoPS, TPostScript::VtoPS.
  Conversion from world coordinates to PostScript coordinates is more accurate.

- Protection in TCollection::RecursiveRemove. Replace ForEach by Iterator
  and protection againt already deleted objects.

- Introduce the graphics code GWin32 and new functions in WINNT.
  many new decks and several iterations with Valery (not yet finished).
  Some WINNT linker limitations force the initialization of some global
  variables in TROOT constructor.

- Deck ActionList and corresponding include moved to RINT.

- Patch $VERSION changed to T=C++.
  This facilitates the automatic generation of the hyperized version
  of new release notes (requires CMZ version 1.48/33).

- Patch Tutorials changed to T=C++,IF=TUTORIALS.
  Macro tutorials changed accordingly.

- Changes in TPostScript::Text. Correct problem in horizontal and vertical
  aligment. This fixes a problem when drawing axis titles.

- Modify TPad::Print and TCanvas::Print. TPad::Print is now able to make
  a PostScript print of a pad or canvas. The PostScript file created has by
  default the name of the pad (canvas).

- Modify TMotifCanvas::PrintCB. This member function is now simplified
  and calls TCanvas::Print.

- Changes in class TMinuit. The destructor does not reset gMinuit anymore.
  New data member fObjectFit and corresponding inline functions
   TMinuit::GetObjectFit and TMinuit::SetObjectFit.
  the fObjectFit pointer points to the currently fitted object.

- Modify TRint::TRint to initialize gMinuit with the standard Minuit constructor
  instead of the default constructor.
  gMinuit is preset to 0.

- Modify TH1::Fit to invoke the standard Minuit constructor.
  Modify the test to create standard functions gaus,expo,etc in TH1::Fit.
  Invoke TMinuit::SetObjectFit.
  Modify static function H1FitChisquare to repalce gCurrentHist by
  Th1 *hfit=gMinuit->GetObjectFit.
  This gives the possibility to call the Minuit functions, eg gMinuit.mnscan
  after an histogram fit. (gCurrentHist was overwritten by the pointer
  to the function representing the fit).

- Many changes in $KUMACS. New macros dict_winnt , dict_win32 to create
  the dictionary for the WINNT and WIN32 classes.
  Changes in macro headers, loadincludes,etc.
  New macro bind_lib, bind_lib_hpux and bind_lib_linux.
  Generalisation of macro ROOT_LIBS and ROOT_MAKE.

- New sequence $BUTTONS in INCLUDE.

- Mods in $STOPWATCH for WINNT.

- Mods in $X3DBUFFER and X3D for WINNT.

- Minor modifications in many decks to make the HTML look better.
//
// 07/12/95  10.44.02  by  Maarten Ballintijn
//
- Many thanks to Maarten for porting ROOT on LINUX.
      Maarten reported the following changes:
* X11_imgpickpalette.c:43

	NULL should be 0, in C NULL == (void *) and Window (from X11) is unsigned long.

* X3DBuffer.h

	Type should be C not C++

* X3D.h

	+SEQ i.s.o #include for X3DBuffer (to get dependency right in cmz)

* UnixSystem.h

	Replaced TFdSet with linux specific implementation. Probably this
	should be generalised to POSIX.

	Defined SIGSYS


* HTML_Html.cc

	Added a cast to SortNames() to force const-ness

//------------------- WARNINGS ----------------------

//* H_H3.cc

	H_H3.cc: In method `void TH3F::Sizeof3D() const':
	H_H3.cc:444: warning: assignment to `int' from `double'
	H_H3.cc:445: warning: assignment to `int' from `double'

//* HTML_Html.cc

	HTML_Html.cc: In method `void THtml::Class2Html(class TClass *)':
	HTML_Html.cc:358: warning: initialization to `const char **' from `char **' adds cv-quals without intervening `const'
	HTML_Html.cc: In method `void THtml::ListOfTypes(char *)':
	HTML_Html.cc:1790: warning: initialization to `const char **' from `char **' adds cv-quals without intervening `const'
	HTML_Html.cc: In method `void THtml::MakeIndex()':
	HTML_Html.cc:1916: warning: assignment to `const char **' from `char **' adds cv-quals without intervening `const'
	HTML_Html.cc:1952: warning: passing `char **' as argument 1 of `THtml::SortNames(const char **, int, unsigned char)' adds cv-quals w

//* G_AttLineButton.cc

	G_AttLineButton.cc: In method `void TAttLineButton::DrawSelectPad()':
	G_AttLineButton.cc:97: warning: name lookup of `i' changed for new ANSI `for' scoping
	G_AttLineButton.cc:78: warning:   using obsolete binding at `i'

//* G_Lego.cc

	G_Lego.cc: In method `TLego::TLego()':
	G_Lego.cc:64: warning: name lookup of `i' changed for new ANSI `for' scoping
	G_Lego.cc:63: warning:   using obsolete binding at `i'

//* RAE_NameList.cc

	RAE_NameList.cc: In method `class TNameList & TNameList::operator =(const class TNameList &)':
	RAE_NameList.cc:96: warning: name lookup of `i' changed for new ANSI `for' scoping
	RAE_NameList.cc:86: warning:   using obsolete binding at `i'
//____________________________________________________________________________
//
//::>          VERSION  0.05/00   05/12/95 18.54.13
//
// 05/12/95  18.50.57  by  Rene Brun
//
- Create new class TVirtualPad.
  This new class is an abstract base class for all pads and canvases.
  It is introduced to reduce the amount of code loaded with ROOT.
  An application without graphics should not load the graphics library.
  The introduction of this new class required several changes in many
  other classes.

- Introduce new member functions
   TROOT::SetMakeDefcanvas
   TROOT::GetMakeDefCanvas
   Introduce a new pointer to a static function fMakeDefCanvas.
   This pointer is set to 0 in the TROOT constructor.
   It is set to the static function MakeDefCanvas (in ROOT deck) by
   the TRint constructor.
   This trick is to avoid references to the canvas constructor in
   TObject::AppendPad.

- Problem fixed in TCanvas destructor.

- Directory RAE renamed MOTIF

- New directories UNIX, MAC, WINNT and WIN95.
  UNIX contains all Unix dependent functions.
  MAC  contains all MacInstosh dependent functions.
  WINNT contains all Windows/NT dependent functions.
  WIN95 contains all Windows95 dependent functions.
  WIN32 contains all graphics functions common to Windows/NT and Windows95.

- Modify all graphics primitives to use the new TObject::AppendPad
  member function. AppenPad checks if the canvas exists. If no canvas, Appendpad
  automatically creates a canvas named c1.
  AppendPad also sets fModified=kTRUE.

- New macro DICT_UNIX in $KUMACS to generate the Unix dictionary.

- New macro DICT_WINNT in $KUMACS to generate the Windows/NT dictionary.

- New macro DICT_WIN95 in $KUMACS to generate the Windows95 dictionary.

- New macro DICT_WIN32 in $KUMACS to generate the Windows32 dictionary.

- Remove TUnixSystem from $KUMACS/Dict_base.

- New macro $KUMACS/Setup to initialize the ROOT development system.
  This new macro should be invoked from the logon.kumac file.
  Below is a copy of this new macro:
     macro setup 1=-
     filecase keep
     exec aliascreate [1]
     exec selectsystem [1]
     exec sourcedir [1]
     exec loadincludes [1]
     exec compiler [1]
     set c C++ -lan
     MESS 'Welcome to the ROOT development System'
     return
  The aliascreate macro  defines several aliases. Do alias/List to see
  all aliases definition.

- In TCanvas destructor, recompute gPad. In particular, both
  gCanvas and gPad must be set to 0 if the only existing canvas
  is being destroyed.

- Functions TH1::PaintStats and TH1::PaintTitle. Add pad->PaintModified call
  at the end of these functions to force a painting of the two pads.

- Fix a problem for histograms with non-equidistant bins in TH1::PaintHist.
  Array keepx must be craeted with nbins+1 and not nbins.

- Move definition of Cardinal data type from RAEClasses to ROOT.

- Fix a problem in TVirtualX.
  due to round-off errors in TPad::Resize() we might get +/- 1 pixel
  change, in those cases don't resize pixmap.
//
// 30/11/95  17.30.57  by  Nenad Buncic
//
- New member function THtml::ExpandPpLine expands preprocessor lines in the
  source files, and provide clickable include file names.

- Changes in the class THtml. Data members fNum, fDir, fPath are removed.
  Data member fHtmlOutputDir is renamed to fOutputDir. Added new data
  member fSourceDir.

- Member function THtml::CheckDir is replaced by TUnixSystem::AccessPathName,
  also function FindFile is replaced by TUnixSystem::Which.

- THtml::PathSetup no longer exist.

- Small change in the THtml::WriteHtmlFooter. Char_t *lastUpdate became
  const Char_t *lastUpdate.
