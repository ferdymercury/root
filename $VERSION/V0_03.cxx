//*CMZ :          17/08/98  15.18.33  by  Rene Brun
//*-- Author :    Rene Brun   14/08/95
//
// 17/08/1998  15.17.00  by  Rene Brun
//
//
// 16/12/1997  16.45.16  by  Rene Brun
//
//
// 21/06/96  09.29.11  by  Rene Brun
//
//
//______________________________________________________________________________
//
// 02/11/95  12.11.02  by  Rene Brun
//
- Fix a serious problem with PostScript.
  Implement new member function NewPage. NewPage is called by TPad::Clear.
  With this change, it is now possible to have several consecutive pictures
  on the same PostScript file.

- Implement New member function TClass::Draw.
  This new function draws the complete inheritance tree for a class,
  including multiple inheritance for the base classes.
  The list of data members and methods for each class is drawn.
  Overloaded functions are shown with a different color.

- Change dimensions in $READH to reduce the size of the DICT executable module.

- Minor changes in dict and drawtree.

- Include copyright notice in several decks.
//
// 01/11/95  15.31.37  by  Nenad Buncic
//
-  Found & fixed bug in TView::ExecuteRotateView().

-  Changes in x3d. New include file 'X3DBuffer.h' which contains structures
for data exchange between ROOT and x3d. This makes changes in following
files:
             PolyLine3D.h, PolyMarker3D.h, Shape.h, x3d.h
             Pad.C, Node.C, H3.C

  Also, old put-object-in-center logic have been installed again. It seems
like a last change in this part.
//
// 25/10/95  12.01.24  by  Rene Brun
//
- New classes TH3 and TF3.
  TH3 is a 3-D histogram. It supports two constructors, one with fix bin sizes
  and the other with all axis with variable bin sizes.
  a TH3 object is filled with member function Fill3(x,y,z,w).
  TH3 has the derived classes TH3C,TH3S,TH3F,TH3D.
  All operations except graphics are supported on TH3 objects.
  The TF3 class is the 3-D formula implementation. It is used by TH3
  for fitting operations.

- Implement logic to draw axis titles.
  Mods in TGaxis::PaintAxis
  New member functions SetXTitle, SetYTitle and SetZTitle in TH1 class.
  Example:
    Root > h101.SetXTitle(GeV/C)
    Root > h101.SetYTitle("Number of events per GeV")
    Root > h200.SetXTitle(GeV/C)
    Root > h200.SetYTitle("Rapidity")
    Root > h200.SetZTitle("Number of events per GeV")

- New DECK,HMATH introduced in H directory.
  HMATH contains new member functions Add and Divide for the histogram classes.
  These member functions recompute the contents and the errors.
  If an histogram has an existing function, this function is ignored
  in the operation.
  In case of a division, it is recommended to invoke the existing function Sumw2
  before making the division if one wants to compute errors correctly.
  Example:
     h104.Sumw2
     h104.Divide(h101,h102)
  TH1::Add(TH1 *h1)   Add histogram h1 to this histogram
      this = this + h1
  TH1::Add(TH1 *h1, TH1 *h2, Float_t c1, Float_t c2)
     Replace contents of this histogram by the addition of h1 and h2
     this = c1*h1 + c2*h2
  TH1::Divide(TH1 *h1)   Divide this histogram by h1
     this = this/h1
  TH1::Divide(TH1 *h1, TH1 *h2, Float_t c1, Float_t c2, Option_t *option)
     Replace contents of this histogram by the division of h1 by h2*-*-*
     this = c1*h1/(c2*h2)
     If option B is given, binomial errors are computed.

- Additions in program DICT.
  So far if the class name was followed by the '+' character, then the I/O
  routines FillBuffer, ReadBuffer and Sizeof were automatically generated
  in the dictionary code.
  With the new version, if the + sign is followed by an additional string,
  this string will be appended to the ReadBuffer member function
  assuming a valid C++ line.
  This new feature is useful when additional actions are required after
  reading an object from a file. The string can be a call to a class member function.

- Add the possibility to pass a class pointer as an argument to member functions.
  This required several mods in RINT.

- Mods in classes DAtaMember, MethodArg, Root, Class and also in
  include files $CIN, $COUT, $SPRINTF to support the above change.

- New member function TROOT::ProcessLine(Text_t *command).
  This member function is a direct interface to the same function in TRint,
  but it copies the parameter command before invoking TRint::ProcessLine.

- Class ELLipse. Implemented DistancetoPrimitive.

- Many changes in class TPaveText.

- New version of UTILS/TOROOT (the Geant to ROOT conversion program)
//
// 22/10/95  10.48.11  by  Fons Rademakers
//
- Class TClassTable: removed const from static member Next(). Static members,
  of course, can not be const since they have no associated object. HP CC
  did not complain. It was fatal for g++.

- $Rconfig: introduced sun case.

- Classes THelpPane, TRadioSubMenu and TSubMenu: ifdef's in case old Motif
  does not support tear-off menu's (old Motif 1.1 still found on new
  SunOS machines).

- Class TH1: another fix in ExecuteEvent(). When changing the bin value this
  could also trigger a pad range change. Therefore execute PaintInit() in
  ExecuteEvent() and Recalculate the range before redrawing the pad.

- Class TGXW: Set the window bit gravity to NorthWestGravity. This prevents
  X from clearing the bitmap incase it is resized. The default behaviour
  (of clearing the resized window) was causing a white flash in
  TObject::Inspect().

- Deck Getline: introduced a description for the new routines I introduced
  some time ago.

- Class TCanvas: fix in Resize(). Don't repaint and flush the canvas after
  a resize. This caused the many screen flashes in TObject::Inspect().
  The screen update after a canvas resize is now the duty of the caller
  of Resize().

- Class TWbox: fix in PaintFrame(). Set the FillStyle correctly (i.e.
  to solid) before drawing the frame.

- Class TLink: fixed ExecuteEvent() to track mousemotion events. On links
  the cursor becomes a pointing finger.
//
// 21/10/95  16.38.08  by  Fons Rademakers
//
- Class TCanvas: fixed member Update(). Update now all modified pads, not
  only the currenlty selected one. This fixes the problem with the demos
  macro.

- Class TH1: fix in ExecuteEvent(). In case an axis has been dragged
  recalculate the pad range before doing any other pad painting. The pad
  range change might cause the system to create a new pad pixmap (due
  to small rounding errors) and in that case the already drawn pad background
  color would get lost. Also ExecuteEvent() now tracks mousemotion events
  and will change the cursor according to its position in the histogram:
  pointer on bins and double horizontal and vertical arrows on the y and x
  axes, respectively.

- Class TLine: fixed ExecuteEvent() to track mousemotion events. On the
  line end points the cursor will become a pointer and on the other parts
  of the line it will be a 4-way arrow indicating that the line can be moved.

- Class TText: fixed ExecuteEvent() to track mousemotion events and to
  correctly grab and drag text.
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/12   19/10/95 12.12.06
//
// 19/10/95  11.50.20  by  Rene Brun
//
- New class TActionList.
  An action list is a list of commands to be executed sequentially
  from the graphical user interface.
  When an action list is executed (Run()), a "Next Pad button" appears
  in the botton right corner of the canvas. When this button is clicked,
  the next action in the action list is executed.

- Add Data member fApplication in $ROOT
  and member functions GetApplication and SetApplication

- Modified the TRint constructor to set the application

- Modified $Rint to make public ProcessLine and ProcessFile
  These two functions are called from the new ActionList class.

- New class TArrow.
  Define an arrow between points x1,y1 and x2,y2 (see constructor)
  the arrowsize is in percentage of the pad height.
  Opening angle between the two sides of the arrow is fAngle (default=60 degrees)
  Various arrow formats can be selected via the option in the Draw function.
   option = ">"     -------->
   option = "<"     <--------
   option = "<>"    <------->
   option = "<|>"   <|-----|>  arrow defined by a triangle
                    If FillColor == 0 draw open triangle
                    else  draw full triangle with fillcolor
  The arrow class inherits from TLine.
  The arrow edges can be moved (like for line) with the left mouse button.

- New cmz directory HTML.
  New macro DICT_HTML to generate the html dictionary.
  New include $Html and dummy implementation Html.
  The THtml class has the functionality to automatically generate the HTML
  files for the class description using the information in memory and
  the implementation source directory.
//
// 19/10/95  01.38.53  by  Fons Rademakers
//
- Class TCanvas:
  - the current pad is now highlighted. The highlight color can be set with
    SetHighLightColor(color). The default highlight color is red. This
    default can be changed in the .rootrc file via the resource:
    ".Canvas.HighLightColor".

  - TPad's, TWbox'es and TBox'es can now be moved in opaque mode. This
    option can be set with MoveOpaque(set). The default is off. This default
    can be changed in the .rootrc file via the resource:
    ".Canvas.MoveOpaque". The ExecuteEvent() members of TPad and TBox were
    modified.

  - Fixed the Update() and Flush() members.

  - Removed $editor from $canvas. Had to add $editor to a number of
    other decks. In general try to avoid including includes in includes.
    Includes are not needed when only a pointer to an object is used in
    a class definition (a forward class declaration is enough). Try to
    avoid using inlines that use a member of a referenced object since
    this requires the include of that class to be included.
    NOTE: cmz could generate around all #include's the lines:
       #ifdef ROOT_xxxx
       #endif
    This would be very nice because in that case we don't have to worry
    about putting these lines around all includes.

  - When a TCanvas is deleted it is taken out of the TROOT canvas list.

- Class TPad: fix in Delete(), make sure that off screen pixmap of
  canvas gets deleted.

- Class TBox: boxes, wboxes and paves can now be moved. Also they can
  be selected when their parent is a canvas.

- Class TSelectPad and TEditor: removed spurious gCanvas->Update()
  calls. The Update() is now performed correctly in HandleInput() of
  TCanvas.

- Class TFile: when a file is deleted it is taken out of the TROOT file list.

- Class TRint: check if the logon and logoff macros are readable before
  trying to executed them.
//
// 17/10/95  01.38.53  by  Fons Rademakers
//
- Compiled ROOT using g++. Fixed a number of type problems and some more
  serious TString printing problems in TMinuit.

- Purified the th test program.
//
// 16/10/95  18.36.18  by  Rene Brun
//
- Added new utility root2html in the utils directory.
  root2html converts the include files into html documents.
  New macro root_html in $KUMACS.

- Modify the utils macro to generate the bind_root2html file

- Added definition of alias "html" in cmzlogon.kumac.

- New class TPaveLabel. A Pavelabel is a TPave with a label centered in the Pave
  TPaveLabel inherits from TPave and TAttText.
  The label size is automatically adjusted to the size of the pave.

- New classes TEllipse, TArc and TPave
  TArc inherits from TEllipse.
  An Ellipse has a Phimin and Phimax and may be rotated with an angle theta.
  A TPave inherits from TBox.

- Mods in TRint. Replace gCanvas by obj->Canvas().

- Reintroduce the correct version of View (Fons correct DrawCube + Nenad fixes).

- Mods in Line, Pad, Wbox to print the derived class name in .ls() and .Print().
//
//::>          VERSION  0.03/11   13/10/95 19.11.47
//
// 13/10/95  18.32.58  by  Rene Brun
//
- Modify all graphics primitives and TPad to support "Batch" graphics.
  Graphics primitives include a statement like:
    if (gCanvas->GetRWindow())
       gGXW->dosomething
  In case of batch, GetRWindow returns a null pointer.

- Implement new member functions in Pad:
    PaintLine3D
    PaintPolyLineNDC
    PaintPolyLine3D
    PaintText
    PaintTextNDC

- Currently the "Batch" style is selected by creating a Canvas with no name:
  Example
  Root > TCanvas batch("")

- In case of "batch" the PostScript file must be explicitly open
  Root > ps.Open(file.ps)
  Root > something.Draw
  Root > ps.Close

- Note that in case of a "batch" canvas, one can still invoke x3d.
  Root > TCanvas batch("")
  Root > na49.Draw
  Root > batch.x3d
//
// 13/10/95  18.31.58  by  Nenad Buncic
//
Changes in TShape. New function PaintShape(), which now takes care of
                   painting in a pad.

All shapes are modified. New function SetPoints() give us a possibility
                   to use Paint() more efficiently, and more OO.

                   IMPORTANT: Filenames of all shapes are changed to follow
                   our simple rule ('filename MUST be same as a name of the
                   corresponding class'). This means that some filenames are
                   changed in uppercase.

//
// 13/10/95  18.30.45  by  Fons Rademakers
//
- New member function TRWindow::HandleEnter()
  It changes the gCanvas to the canvas of the pointed window.
- Change PrintLogo
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/10   12/10/95 17.27.10
//
// 12/10/95  17.20.20  by  Nenad Buncic
//
- All shapes modified to get output on pads.

- Change in X3D to center the object.

- Space used by X3D is now released.
//
// 12/10/95  12.03.41  by  Rene Brun
//
- Introduce new Member function TRint::PrintLogo
  Rint prints ROOT version number as well as the date of compilation.

- Important changes in Canvas and RWindow.
  The user should not call TRWIndow anymore.
  The RWindow object is now automatically called by the TCanvas constructors.
  The old style sequence like:
     Root > TRWindow win1("Histogram Window",10,10,700,500)
     Root > win1->Show
     Root > TCanvas *wh=win1->Canvas
     Root > wh.SetName(wh)
  should be replaced by :
     Root > TCanvas wh(wh,"Histogram Window",10,10,700,500)
       or
     Root > TCanvas wh(wh,"Histogram Window",1)
       which is the same as: TCanvas wh(wh,"Histogram Window",10,10,700,500)
       or
     Root > TCanvas wh(wh)
       which is the same as: TCanvas wh(wh,wh,10,10,700,500)

- Bug fixed in Pad::Delete.
  If pad=currentcanvas do not delete pixmaps and do not rest mother

- Fix problem in Htable. Do not clear pad anymore. Pad is already cleared
  by TH1::Draw

- Inspector again operational (top->Down only for the time being).
//
// 12/10/95  02.21.30  by  Fons Rademakers
//
- New class TStopwatch. This class implements a wall clock and cpu timer.
  It provides Start(), Stop(), RealTime(), CpuTime() and Print() member
  functions. TStopwatch replaces the ad-hoc timed() function.

- Removed timed() function (see above).

- Functions rannor, rndm and ishft: remove trailing _ and made independent
  of $f2c.

- Class TCollection: removed unecessary include.
//
// 10/10/95  19.11.40  by  Fons Rademakers
//
- New class TBtree. This class implements a refined btree algorithm as
  described in Knuth volume 3. This class uses the utility classes:
  TBtNode, TBtInnerNode, TBtLeafNode and TBtItem. Only TBtree is exported to
  the interactive interface.

- New class TBtreeIter to iterate over a TBTree.
//
// 10/10/95  10.39.36  by  Rene Brun
//
- Fixed a problem in H1 and Hpaint.
  TH1::Draw looks for option "same"
  If this option is not given, The Pad is cleared, the object is added
  to the Currentpad list. The subpads corresponding to title and stats
  follow the main hsitogram pad.
  This solves a major problem when repainting or printing with PostScript.
  Member functions DrawCopy modified accordingly.
//
// 08/10/95  14.07.50  by  Fons Rademakers
//
- Getline: can now read from input file (<file) and from pipe.

- Class TRint:
  - also in command mode << can be used to display messages.
  - comments can now be added behind commands: h101.Draw   //draw histo
//
// 07/10/95  18.09.46  by  Fons Rademakers
//
- Class TFile: can now also open file with option RECREATE. This option
  overwrites on already existing file (allowed options are NEW, CREATE,
  RECREATE, UPDATE and READ. NEW and CREATE have same effect). Options
  are case insensitive.

- Class TPad:
  - cursor shapes are now consistent with the position and the
    action is also the one according to the cursor shape.
  - rubberband line is now 2 pixels wide. This enhances the visibility.
  - using mouse button 2 one can now pop pad's to the foreground.

- Class TSelectPad: can now move (again?) TSelectPad's. Change in
  TBox::ExecuteEvent().

- Massimo's TPolyMarker3D problem was due to a wrong compiler option
  used while compiling his code. ROOT is always compiled using option
  +a1 (using ANSI C float/double promotion behaviour) while Massimo
  compiled using the default (+a0) which resulted in K&R behaviour
  of float to double promotion. The result was that his routine was
  always passing doubles to TPolyMarker3D::SetPoint, which expected
  floats. Option +a1 is preferred since automatic float to double
  promotion is a quite expensive operation.
  Therefore *** ALWAYS USE COMPILER OPTION +a1 ***.

- Class TH1: histograms were added at the begining of the display list,
  this caused problems with option SAME. Now histograms are, correctly,
  added to the end of the list.
//
// 05/10/95  17.42.42  by  Rene Brun
//
- Change the TGeometry class. TList items replaced by the new THashList.
  This makes a considerable speed improvment.

- Reverse the order to search for objects in TRint.
  Look first for TDynamics before any other TLists.
//
// 05/10/95  11.38.24  by  Fons Rademakers
//
- Error: introduced macro Check which prints a warning if the condition is
  false.

- Class ObjectTable: use TIter instead of TListIter.

- Class Root: in header use TSeqCollection instead of TList. This allows
  us to change in the implementation the collection class to whatever
  TSeqCollection we like (e.g. TList, TOrderedList, TOrdCollection, TObjArray,
  THashList) without having to change the header file.

- New class THashList. THashList is a hybrid class inheriting from TList
  and adding a THashTable for fast lookup. While filling the THashList
  the TList as well as the THashTable are filled. When seaching for an
  object the hash table is used.

- Class TPad: fixed recursive drawing of pads and canvas because the canvas
  was added to the primitive list of the gPad which caused an
  endless loop when drawing the canvas. Also the reparenting of pads
  works now as it should. p1.cd; p2.Draw will resize p2 and draw it in
  p1 (assuming it was first drawn into another pad).

- Class TStorage: change in format of statistics table.

- Classes TView and TLego: changed rad to kRad and made it a constant.
//
//
// 03/10/95  23.17.27  by  Rene Brun
//
- New classes TMaterial and TMixture.
  TMixture inherits from TMaterial.

- TShape, TGeometry and TNode modified to reference TMaterial.

- New data member fBomb and new member functions GetBomb and SetBomb
  in TGeometry.
  fBomb is the bomb factor to get nice exploded views of the geometry.
  To use it (assuming na49 is the gGeometry):
  na49.SetBomb(1.5)  (default is 1.3)
  na49.Draw(x3d)
- SetVisibility added in TNode as well as SetFillColor.
  node.SetVisibility sets the visibility for all nodes below node.
  Same for colors.
- New Member function DrawOnly in TNode. This new function is useful
  to visualize a subtree of a geometry. Visibility attributes are
  set automatically.
//
// 03/10/95  16.32.27  by  Nenad Buncic
//
- Shapes PCON and PGON optimized in the interface to x3d.
//
// 29/09/95  18.36.45  by  Rene Brun
//
- New class THProfile (Profile histograms).
  Complete implementation including fitting.
  This new class inherits directly from TH1D.

- Implement new member function Sumw2() in the TH1 classes.
  This member function activates the storage of the sum of squares of weights
  at filling time.
//
// 29/09/95  18.16.22  by  Nenad Buncic
//
- New classes TPCON and TPGON implemented.
  With these new shapes, ROOT supports now the full list of GEANT shapes.
  We can now display the full versions of NA49, ATLAS, PHOBOS, OPAL, etc.
//
// 29/09/95  18.13.48  by  Fons Rademakers
//
- Class TSysEvtHandler: renamed Signals_t to ESignals since it is an enum.

- Class THashTable: new option in ctor allows for automatic rehashing
  once the collision rate exceeds a certain level.

- Class TGeometry: added gGeometry in Geometry.h and removed the
  extern gGeometry declaration from a number of files.

- Class TOrdCollection: forgot forward declaration for TOrdCollectionIter
  (trapped by g++).

- Class TEnv: fix bug in a Printf (TString was printed instead of
  TString::Data()).

- Class TUnixSystem: fixed bug in ExpandPathName, now dynamic loading
  and unloading work again.
//
// 28/09/95  08.19.46  by  Rene Brun
//
- Important change in the management of Dynamics.
  In previous versions, Root looked only in the CurrentDirectory
  (memory and file) before looking in the Dynamics list.
  With this new version, the automatic search has been extended to
  all kinds of Root objects in the list supported by the TROOT object.
  A new member function FindObject has been added for this purpose
  in the Root class.
  This function looks in the following order in the ROOT lists:
     - Current Directory in memory
     - Current Directory on file
     - List of files
     - List of functions
     - List of geometries
     - List of canvases
     - List of styles
     - List of shapes in current geometry

- When listing directories, change in format.
  The new version shows the Class name instead of the ClassID.

- Similar change in the TNamed::ls

- Minor changes in the TNode class.

- The conversion program from Geant to Root has been added in the list
  of utilities in utils directory.(see toroot)
  To use this conversion program, make first a small shared library;
        f77 -c +ppu +z toroot.f
        ld -b -o toroot.sl toroot.o
  then run any interactive version of Geant, for example:
        gexam3 - w 0
        read 4
        stop
        Geant > rz/file 21 na49.geom i
        Geant > call toroot.csl('na49.mac')
        Geant > exit
  this short interactive Geant session will convert an existing Geant RZ file
  (above called na49.geom) into a Root macro na49.mac.
  To generate the Geometry structure within Root, do:
    Root > exec na49.mac
    Root > na49.Draw
    Root > wh.x3d    (this invokes the 3-d Root viewver)
    Root > TFile gna49(na49.root,NEW)  //open a new root file
    Root > na49.Write                  //Write the na49 geometry structure
    Root > gna49.Write                 //Write all keys (in this case only one)
  Note: all keys are also written on closing of the file, gna49.Close or
  when the program exits, Root closes all open files correctly.
  Once this file has been written, in a subsequent session, simply do:
    Root > TFile gna49(na49.root)
    Root > na49.Draw
//
// 27/09/95  19.26.26  by  Fons Rademakers
//
- New class THashTable. THashTable can store all objects that inherit from
  TObject. The hash table is implemented as a list of TList's.
  By default the table has 17 slots, but in the constructor one can specify
  any initial size. Using the objects Hash() function a slot is found
  and the object is added to the TList at that slot. During filling or
  once the hash table has been filled one can obtain the hash collision
  rate via AverageCollisions() which returns the number of objects per
  slot vs. the number of occupied slots. If this number become much larger
  than 1 one can Rehash() the table. Rehash() creates a new THashTable with
  at least as many slots as there are objects in the table and fills the
  new table with the objects from the old table.

- New class THashTableIter to iterate over a THashTable.

- Class TNamed: Hash() is overridden and returns a hash value based on
  fName.

- Number of fixes in TObjArray and TOrdCollection related with the dtor.

- Class TROOT: the dynamics TList is changed to a THashTable.

- Class TRint: small fix related with the introduction of the THashTable
  (removed some dead code).
//
// 26/09/95  13.33.03  by  Rene Brun
//
- Many changes in Geometry, Shape and RotMatrix classes.
  I/O for geometry now operational.

- New versions of BRIK,etc (all shapes classes).

- The Canvas constructor defines additional colors (200+) used by x3d.

- Implement The TF1 and TF2 constructors with compiled functions.
//
// 26/09/95  12.33.39  by  Fons Rademakers
//
- New class TEnv. TEnv handles startup config files. The config files
  have a format similar to the .Xdefaults files. By default ROOT reads the
  file .rootrc in the global ROOT directory, designated by $ROOTDIR, in the
  user's home directory and in the local working directory. The local .rootrc
  overrides identical names in the user file and the user file overrides
  names in the global file. The default values can be accessed via the
  global gEnv pointer that is initialized in the TROOT ctor.
  New values can be defined at run time using SetValue() and saved using
  Save(). Using Print() one gets a listing of all currently defined
  defaults.

  The file format is:

     <SystemName>.<RootName|ProgName>.<name>[(type)]:  <value>

  Where <SystemName> is either, Unix, Mac or Dos (anything from MS),
  <RootName> the root name as given in the TROOT ctor,
  <ProgName> the current program name and
  <name> is the resource name, with optionally a type specification.

  E.g.:

     Unix.rint.Root.DynamicPath: .:~/rootlibs:$ROOTDIR/lib
     Rint.Root.Debug:            FALSE
     TH.Root.Debug:              YES
     *.Root.MemStat:             1
     Rint.Logon:                 rintlogon.mac

  <SystemName> and <ProgName> or <RootName> may be the wildcard "*".
  A # in the first column starts comment line.

  Currently the following resources are defined:                                     //
     Root.Debug                (bool)         (*)
     Root.MemStat              (int)          (*)
     Root.MemStat.size         (int)          (*)
     Root.MemStat.cnt          (int)          (*)
     Root.DynamicPath          (string)
     Rint.Logon                (string)
     Rint.Logoff               (string)

  (*) work only with the RootName since no ProgName is available at
      time of initialization.

  Note that the .rootrc config files contain the config for all ROOT
  based applications.

- Introduced the GNU Demangle routines in patch C. The cplus_demangle()
  routine can demangle GNU as well as ARM style mangled names.
  Thanks to this routine we can see the correct C++ names when doing, e.g.
  gSystem.ListSymbols(func).

//
// 22/09/95  08.03.35  by  Rene Brun
//
- New Classes TShape, TRotmatrix, TNode and TNodeDiv.
  The TShape class is the base class for all geometry shapes BRIK, TRD1, etc..
  This class has the functionality of the JVOLUM structure in GEANT.
  The TNode class is the main geometry constructor. A node can contain
  another node. A node references an existing shape and an existing
  rotation matrix.
  This class has member functions to create a new geometry, to draw and print
  nodes (including all the nested nodes). When going down in the geometry
  tree the global gTranslation and gRotMatrix arrays are automatically
  updated as being the sum of all translations and the product of all rotations.
  A member function Local2Master transforms a point in the local node system
  into coordinates in the master reference system.
  The Draw and Paint functions provide an automatic interface to X3D.

  The TNodeDiv class is the equivalent of TNode for divided objects.

- Implemented a program (Fortran) to translate a GEANT geometry file with
  all its attributes and functionality into a ROOT file and macro (C++ code).

- Some additional utilities in the Histogram and Ntuple classes.
//
// 21/09/95  19.13.58  by  Nenad Buncic
//
- Changes in Pad: All X3D dependent statements are moved to X3D itself.
- Changes in X3D: New functions: AllocateX3DBuffer(), FillX3DBuffer(),
                MakePolygonArray(). These are our preprocessor functions
                to X3D, for now.
- New classes: TObject3D and TShape. And also new shapes - TBRIK, TTRD1,
               TTRD2, TTRAP, TTUBE, TTUBS, TCONE, TCONS, TPARA, TGTRA,
               TPGON, TPCON.
//
// 21/09/95  16.35.39  by  Fons Rademakers
//
- New class TSystem. This is an abstract base class providing an
  machine independent interface to general OS features. For each new OS
  one should make a derived class from TSystem. Among others, TSystem
  provides functions for loading, listing and unloading dynamic
  libraries. Once a dynamic library is connected the ctor's for the
  global variables are called and once unloaded the dtor's are called.
  Using this scheme classes are automatically know in the interpreter
  and no relinking of the application is anymore necessary.
  To make the loading work correctly you have to define the environment
  variable ROOTDIR. The dynamic loader looks, currently, in the path
  ".:$ROOTDIR/lib" for dynamic libraries.

- New class TUnixSystem. This is the concrete class implementing the
  interface to the Unix OS. TUnixSystem inherits from TSystem.

- New class TSysEvtHandler. This is an ABC providing an interface for
  system event handlers.

- New class TFileHandler. This class handles events on file descriptors.
  Once an event handler is installed it gets called whenever an event
  occurs on its file descritor. To install a TFileHandler use
  TSystem::AddFileHandler.

- New class TSignalHandler. This class handles signals. The Notify() member
  is called whenever the specified signal is intercepted. To install a
  TSignalHandler use TSystem::AddSignalHandler.

- $RConfig: added also a dtor to the _ClassInit_ macro. This dtor is mainly
  necessary when a dynamic library is unloaded, because in that case it
  makes sure that the class definition is removed from the gClassTable,
  the gROOT->fClasses and from the fDirect direct access class table.

- Class MethodArg: strip blanks from defval in ctor.

- Exception handling macros introduced in $Exception and Exception.
  Using these macros one can simulate the coming C++ try, catch and throw
  exception handling features. Usage:

  TRY {
     something
  } CATCH(n) {
     handle error
  } ENDTRY;

  also is provided RETRY which cause the re-execution of the routine
  in which tree the exception occured. This is useful in case of an eventloop,
  when after an exception the eventloop has to be entered again.

  RETRY {
     eventloop();
  } ENDTRY;

  To jump to the CATCH or RETRY block use the function Throw().

- Class TH1: made some empty function abstract (using AbstractMethod()).

- RMain: removed the my_argc stuff for the scat.sl. Use gSystem->Load(scat)
  to load the lib.

- TApplication: member Run() now uses the RETRY, ENDTRY exception handling
  mechanism.
//
// 15/09/95  11.59.07  by  Rene Brun
//
- Add new Member functions in TH1 classes
  TAxis *GetXaxis()  returns pointer to X axis structure
  TAxis *GetYaxis()  returns pointer to Y axis structure
  TAxis *GetZaxis()  returns pointer to Z axis structure
  see Help TAxis to see list of functions
  for example :
      TAxis *x = h200.GetXaxis()
      x->GetNbins()

  void SetCellContent(Int_t binx, Int_t biny, Double_t content)
    to set the content of a 2-D at binx and biny.
    Note that binx = 0 is the underflow bin in X (same for y)
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/09   14/09/95 18.15.24
//
// 14/09/95  18.27.59  by  Rene Brun
//
- Files root.cmz and rae.cmz have been merged in root.cmz.
  The previous RAE decks are now in root/rae directory
  and /rae/include in //root/incrae.

- By default the installation macro creates $ROOTLIB/root.slib
  and the following individual smaller libraries:
     base.sl      corresponds to subdirectory base
     clib.sl       ""                         c
     cont.sl                                  cont
     dict.sl                                  dict
     func.sl                                  func
     graf.sl                                  g
     graf3d.sl                                g3d
     hist.sl                                  h
     minuit.sl                                minuit
     postscript.sl                            postscript
     rae.sl                                   rae
     rintlib.sl                               rint
     x11.sl                                   x11
     x3d.sl                                   x3d

- This scheme speeds-up considerably the linking phase.

- Installation procedures in $KUMACS have been modified to reflect the above
  changes.

- New aliases MAKE and LIBS created by cmzlogon.kumac
  Executing MAKE in a subdirectory will recompile all decks in the subdir
  out of date and will also regenerate the corresponding shared library.
  Executing MAKE in the top directory will recompile all out of date decks
  as well as the corresponding shared libraries.

- The bind_rint procedure in cmzlogon.kumac has been modified:
  The sequence $ROOTLIB/root.sl $ROOTLIB/rae.sl is replaced by $ROOTLIB/*.sl
//
// 14/09/95  18.27.59  by  Fons Rademakers
//
- TObject: new member function IsSortable(). This function should be
  overriden by classes that implement the Compare() function. These
  classes can then be sorted by TOrdCollection, TObjArray and TSortedList.

- New class TOrdCollection. This collection implements list semantics using
  an array. The table is automatically expanded when getting full, or shrunk
  when objects are removed. It uses much less space than TList but inserting
  elements might involve copying many elements in the array to open up the
  empty slot. When the stored objects implement the Compare() function
  the collection can also be sorted and elements can then efficiently
  be found using the BinarySearch() function.

- New class TOrdCollectionIter to iterate over TOrdCollection.

- New class TSortedList. In this list objects can only be added using the
  Add() function (AddLast(), AddFirst(), etc. will call Add() to preserve
  the sorting order). Elements can be stored in ascending or descending order.
  TListIter is also used to iterate over a TSortedList.
//
// 13/09/95  15.27.59  by  Rene Brun
//
- Add new member function Is3D() in TObject and TObject3D
//
// 13/09/95  13.31.50  by  Rene Brun
//
- Implement logic in THN::Draw to draw expressions of original ntuple variables.

- Examples of commands:
     Root > hn.Draw
     Root > hn.Draw(y)
     Root > hn.Draw(z+8)
     Root > hn.Draw(z:y)
     Root > hn.Draw(z:y,z>2)
     Root > hn.Draw(0.01*z:y,z>2)
     Root > hn.Draw(cos(z):sin(y):z)
     Root > hn.Draw(cos(z):sin(y):z,"","",5000)
     Root > p2.x3d
     Root > hn.Draw(cos(z):sin(y):z)
     Root > hn.Draw(cos(z):sin(y):z)
     Root > hn.Draw(cos(z))
     Root > hn.Draw(cos(z),x*y*z)
     Root > hn.Draw(cos(z),x*y)
     Root > hn.Draw(cos(z),x)
     Root > hn.Draw(cos(z),1)
     Root > hn.Draw(cos(z),2)
     Root > hn.Draw(log(z))
     Root > hn.Draw(log10(z))
     Root > hn.Draw(log10(z)+cos(y))
     Root > hn.Draw(log10(z)+cos(y),"",e1)
     Root > hn.Draw(log10(x))
     Root > hn.Draw(log10(abs(x)))
     Root > hn.Draw(log10(abs(x+y)))
     Root > hn.Draw(log10(abs(x+y+3.78*log10(z))))
//
// 13/09/95  13.08.07  by  Nenad Buncic
//
- New base class TObject3D. This class is a base class for all 3-D primitives.

- Change classids for all existing 3-D primitives starting at 300+..

- Optimize number of lines to draw a 3-D polymarker.

- New function X3DCleanUp in all 3-D primitives to free allocated memory.
  The pad.x3d makes two passes on all 3-d primitives.
  A first pass to evaluate the size (or an approximation of the size)
  of the points, segments and lines.
  A second pass to fill the x3d structure.

//
//______________________________________________________________________________
//
//::>          VERSION  0.03/08   12/09/95 11.12.30
//
// 12/09/95  08.49.39  by Rene Brun
//
- Speed-up Ntuple processing. A direct access table (to be replaced by ObjArray)
  points directly to each ntuple buffer.

- 1-D, 2-D and 3-D projections of Ntuples implemented.

- Class PolyMarker completly rewritten. Used by THN::Draw.

- Fix bug in Dynamic in case a non-existing member function is invoked.

- Several changes in Minuit to compile under VisualC++ (V.Fine)

- References to include strings.h removed (not available on PCs).

- Replace math.h by RMath.h and the corresponding calls in several classes.

- Bug fixed in TH1::Copy1 (members fMaximum & fMinimum were not copied).
//
// 12/09/95  08.49.39  by Nenad Buncic
//
- Many changes in PAD, X3d and PolyMarker3D.

- X3d supports now polylines and polymarkers.
  Currently, only one type of 3-D polymarker is supported (3 lines).
//
// 12/09/95  00.18.49  by  Fons Rademakers
//
- New class TObjArray. This class manages an array of objects. Main feature:
  via the operator[] one can access the array elements in a natural way.
  For usage see the test program /user/rdm/root/tarray.cc (later in root.cmz).
  Arrays can be sorted (objects need to override in that case their Compare()
  member) via Sort() and elements can be quickly found using the member
  BinarySearch().

- New class TObjArrayIter. TObjArrayIter inherits from TIterator. TObjArrayIter
  is an iterator for the TObjArray class.

- TList: moved a number of members down to the base classes TCollection and
  TSeqCollection.

- Base classes ported to the MAC using the MetroWerks CodeWarrior compiler.
  This compiler supports already the proposed ANSI C++ I/O library.

- TFile: via preprocessor flag ANSILIB supports now ANSI C++ I/O.
  New member functions:
     - Bool_t IsOpen()
     - void Seek(Long_t offset, ERelativeTo pos = kBeg)
     - Bool_t Read(char *buf, int len)
     - Bool_t Write(const char *buf, int len)
     - void Flush() const

  Changed a number of decks to use these new TFile members.

- Put cin_to, cout_from and sprintf_from prototypes in $Cin, $Cout and $Sprintf
  keeps.

- TObject: IndentLevel() and gDirLevel (as fgDirLevel) static in TObject.
  Removed all extern declarations of these functions.

- TList: Fixed some nasty bugs in Delete() (see comments in that routine).
  NOTE: that all classes that are stored in lists in TROOT should remove
  themselves from these lists in their dtor's (see next item).

- TStyles: dtor now removes style from gROOT->GetListOfStyles().

//
//______________________________________________________________________________
//
//::>          VERSION  0.03/07   06/09/95 15.35.22
//
//  ---------> News from Rene Brun
- All decks renamed to UpperCase convention.

- dict changed to generate automatically a Class_ReadObject static function.
  the line c->DefineCallBack(Class_ReadObject) is also added in the Dictionary.

- The Readback mechanism is now automatic thanks to the change in dict.

- Routines HClasses and GClasses do not contain anymore the calls
  to the class DefineBack function.

- The function ROOT::GetClassByID has been changed.
  if the pointer to the class fDirect[classid] = 0, the dictionary is
  automatically built via GetDict.

- All the above changes are reflected in many ROOT classes.
  In particular the statements such as AppenDirectory or AppenPad
  previously in the ReadBack functions have been moved to the base classes
  for the corresponding functions (TH1 for histograms, TLine, TBox and Text).

- The Write member functions previously in TH1 are now obsolete and replaced
  by the TNamed::Write. That means that all classes inheriting from TNamed
  can write automatically an object to the CurrentDirectory.

- The calls to the constructors for TFormula, TF1 and TF2 have been modified
  to include the name of the function as the first parameter.
   TFormula(const char *name,const char *expression)
   TF1(const char *name,const char *formula, Float_t xmin, Float_t xmax)
   TF2(const char *name,const char *formula, Float_t xmin, Float_t xmax, Float_t ymin, Float_t ymax)
   Example:
    Root > p2.cd
    Root > TF1 k1(k1,expo+gaus+gaus,0,5)
    Root > k1.SetParNames(Constant,Slope,Cgauss1,Mean1,Sigma1,Cgauss2,Mean2,Sigma2)
    Root > k1.SetParameters(5,-1,90,1.5,0.3,20,3.5,0.2)
    Root > TH1F hr(hr,"Test of FillRandom",100,0,5)
    Root > hr.SetMarkerStyle(21)
    Root > hr.FillRandom(k1)
    Root > hr.Fit(k1,"v",e1p)

//*  ---------> News from Nenad Buncic
- Changes in View. PadRange of current pad is now by default
  set to (-1,-1,1,1). Also, bug fixed in the SetOutlineToCube().

- Changes in Pad. Method x3d() has been completely redefined, because
  'x3d' package is now linkable with ROOT, so there is no need for
  file data exchange between them.

- New include $x3d

- New directory X3D including the full x3d package (see below).
  To use the x3d package once you have entered 3-D primitives in a pad, do:
    pad.x3d
  This will automatically create a new window where x3d operates.

//*-*      x3d: wireframe viewer and animator for X Window System
         ======================================================
         Author: Mark Spychalla  spy@castlab.engr.wisc.edu

  x3d allows you to view wireframe images. When the image is loaded
  you may control its movement with the left mouse button. Hold down
  the left button and move the mouse vertically to rotate the image
  about the X axis and horizontally to rotate about the X axis.
  **** x3d QUICK HELP **************************************

   QUIT                    q Q     MOVE OBJECT DOWN      u U
   TOGGLE CONTROLS STYLE   o O     MOVE OBJECT UP        i I
   TOGGLE STEREO DISPLAY   s S     MOVE OBJECT RIGHT     h H
   TOGGLE BLUE STEREO VIEW d D     MOVE OBJECT BACKWARD  j J
   TOGGLE DOUBLE BUFFER    f F     MOVE OBJECT FOREWARD  k K
   TOGGLE HELP MENU        m M     MOVE OBJECT LEFT      l L

   ROTATE ABOUT X      x X a A     AUTOROTATE ABOUT X  1 2 3
   ROTATE ABOUT Y      y Y b B     AUTOROTATE ABOUT Y  4 5 6
   ROTATE ABOUT Z      z Z c C     AUTOROTATE ABOUT Z  7 8 9

   ADJUST FOCUS        [ ] { }     HIDDEN LINE MODE      e E
   WIREFRAME MODE          w W     HIDDEN SURFACE MODE   r R

   POINTER MOVEMENT WITH LEFT BUTTON :

   ROTATE OBJECT ABOUT X   Vertical
   ROTATE OBJECT ABOUT Z   Horizontal
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/06   04/09/95 10.45.06
//
- Several new features are available in the class TFormula:
  The TFormula constructor automatically adds the new Formula to
  the List of functions in gROOT.
  An already defined Formula can be referenced in a new formula.
  However, remember to give a name to your formula before using it again.
  Example of use with the derived class TF1:
     TF1 k1("sin(x)/x",0,10)
     k1.SetName(k1)
     k1.Draw
     TF1 k2("0.1*x + k1",0,10)
     k2.SetName(k2)
     k2.Draw("cs")  //superimpose new function on top of previous picture

  Comparisons operators are also supported (&&, ||, ==, <=, >=, !)
  Examples:
    sin(x*(x<0.5 || x>1))
    If the result of a comparison is TRUE, the result is 1, otherwise 0.

- New class THN introduced (Memory-resident Row-Wise ntuples).
  Only skeleton is available.
  Example:
   THN *hn = new THN("hn","My first Ntuple","x:y:z:Fons:Rene:Nenad")

   hn->Draw("sqrt(x)","Fons > Rene && Nenad=1")
   hn->Print()
   hn->Project("h1","y","x**2+y**2>1") //where h1 is the name of a TH1F

  A memory resident row wise ntuple is a linked list of buffers holding
  tuples (x1,x2,x3,x4,..xn) consecutively.
  Buffers of size bufsize are created. When the buffer is full, a new
  buffer is linked to the previous buffer
  varlist contains the names of the ntuple variables in the format
   "name1:name2:name3:....:namen"

 The only data type supported is Float_t

- New Member Function FillRandom(char *fname, Int_t ntimes) is TH1 classes.
  The distribution contained in the function fname (TF1) is integrated
  over the channel contents.
  It is normalized to 1.
  Getting one random number implies:
    - Generating a random number between 0 and 1 (say r1)
    - Look in which bin in the normalized integral r1 corresponds to
    - Fill histogram channel
  ntimes random numbers are generated

- Fitting now implemented for 1-D and 2-D distributions
  Try the following macro for a 1-D fit:
    Root > TF1 k1(expo+gaus+gaus,0,5)
    Root > k1.SetName(k1)
    Root > k1.SetParName(0,Constant)
    Root > k1.SetParName(1,Slope)
    Root > k1.SetParName(2,Cgauss1)
    Root > k1.SetParName(3,Mean1)
    Root > k1.SetParName(4,Sigma1)
    Root > k1.SetParName(5,Cgauss2)
    Root > k1.SetParName(6,Mean2)
    Root > k1.SetParName(7,Sigma2)
    Root > k1.SetParameter(0,5)
    Root > k1.SetParameter(1,-1)
    Root > k1.SetParameter(2,90)
    Root > k1.SetParameter(3,1.5)
    Root > k1.SetParameter(4,0.3)
    Root > k1.SetParameter(5,20)
    Root > k1.SetParameter(6,3.5)
    Root > k1.SetParameter(7,0.2)
    Root > TH1F hr(hr,"Test of FillRandom",100,0,5)
    Root > hr.SetMarkerStyle(21)
    Root > hr.FillRandom(k1)
    Root > hr.Fit(k1,"",e1p)

   Try the following macro for a 2-D fit. Here h200 is in file2.root
    Root > <<This macro will take some time to execute
    Root > <<It computes a 2-D function with 9 parameters (sum of products of 2 gaussians)
    Root > <<It fills a 2-D histogram from this theoretical distribution (5000 entries)
    Root > <<Then Minimization process to compute the best 9 coefficients
    Root > <<============================================================
    Root > <<At the end, the scatter plot is shown with the superimposed fit
    Root > TF2 f200(xygaus+xygaus,-4,4,-4,4)
    Root > f200.SetName(f200)
    Root > f200.SetParameter(0,10)
    Root > f200.SetParameter(1,-2)
    Root > f200.SetParameter(2,0.05)
    Root > f200.SetParameter(3,-2)
    Root > f200.SetParameter(4,0.05)
    Root > f200.SetParameter(5,20)
    Root > f200.SetParameter(6,2)
    Root > f200.SetParameter(7,0.05)
    Root > f200.SetParameter(8,2)
    Root > f200.SetParameter(9,0.05)
    Root > f200.SetLineWidth(2)
    Root > p2.Clear
    Root > h200.Fit(f200)
    Root > f200.Draw(scont1)

- Changes in View. Now, allows user defined outline (instead of rotating rube).

   Removed:  method      - void DrawCube()
     Added:  data member - TList fOutline
             method      - void SetOutlineToCube()
   Changed:  method ExecuteRotateView() - call to DrawCube() replaced
                                          by call to fOutline.Paint

- Changes in Pad. Added support for 'x3d' package.
     Added:  method - void x3d(char * option)

//
// 02/09/95  11.16.04  by  Fons Rademakers
//
- TReference: class and all its uses have been removed. TReference has
  been obsoleted by the new TList class. The functionality of TReference
  to store in addition to the TObject* also an (drawing) option has
  been emulated by allowing TList's to also store optionally an option.

- TList now support the additional storing of an option with each list
  member. This is done via the new TObjOptLink class, that inherits from
  TObjLink, which stores the TString option.

  New member functions which allow the storage of an option:
    Add(TObject *obj, const Option_t *opt)
    AddFirst(TObject *obj, const Option_t *opt)
    AddLast(TObject *obj, const Option_t *opt)

  New member functions which give access to the TList's TObjLink entries:
    FirstLink()
    LastLink()

  There are now basically four ways to iterate over a TList (in order
  of preference, if not forced by other constraints):
    1) Using the ForEach macro:
         GetListOfPrimitives()->ForEach(TObject,Paint)(option);

    2) Using the TList iterator TListIter (via the auxiliary class TIter)
         TIter next(GetListOfPrimitives());
         while (TObject *obj = next())
            obj->Draw(next.GetOption());

    3) Using the TObjLink list entries (that wrap the TObject*)
         TObjLink *lnk = GetListOfPrimitives()->FirstLink();
         while (lnk) {
            lnk->GetObject()->Draw(lnk->GetOption());
            lnk = lnk->Next();
         }

    4) Using the TList's After() and Before() member functions
         TFree *idcur = this;
         while (idcur) {
            ...
            ...
            idcur = (TFree*)GetListOfFree()->After(idcur);
         }

   Methods 2, 3 and 4 can also easily iterate backwards using either
   a backward TIter (using argument kIterBackward) or by using
   LastLink() and lnk->Prev() or by using the Before() member.

- Global edits:
    - removed all GetFirst...() functions. They were not used anymore
      and can be emulated using, e.g. GetListOfPrimitives()->First()
    - renamed all GetHead...() functions to GetListOf...(), this increases
      a lot the clearity of the code. Search in your code for GetHead
      and change to GetListOf (exception, the original GetHead() is changed
      to GetList()).
      Therefore do in your old code:
        1) global edit:  GetHead     ->  GetListOf
        2)               GetListOf(  ->  GetList(
//
// 25/08/95  16.18.25  by  Fons Rademakers
//
Introduced the new TList class. This class allows TObjects to be stored
in a doubly-linked list without the need for TObject to have fPrevious and
fNext links. TObjects entered in a TList are wrapped by a TObjLink object
which provides the fNext and fPrev links.

- TObject

  Removed data fields:
    fParent
    fNext
    fPrevious
    fgEachExec

  Removed member functions:
    AppendEntry()
    AppendDirectory()
    AppendPad()
    PrependEntry()
    InsertEntry()
    DeleteEntry()
    FindObject()
    GetListParent()
    GetNext()
    GetPrevious()
    GetParent()
    SetNext()
    SetPrevious()
    SetParent()
    ForEach()

- TList provides the following new member functions:

    AddLast()     (was AppendObj())
    AddBefore()   (was InsertObjBefore())
    AddAfter()    (was InsertObjAfter())
    AddFirst()    (was PrependObj())
    Remove()      (was DeleteObj())
    First()       (was FirstEntry())
    Last()        (was LastEntry())
    ForEach       (was ForEachObj)    -- macro


  Semenatics for Clear and Delete of lists has changed.

  Clear() means to remove all objects from the list without touching the
  objects themselves (function RemoveAll() is equal to Clear()).

  Delete() means to remove all objects from the list and to delete the objects
  themselves (except when the objects are not on the heap).

  To loop over a TList use the TIter auxiliary class (defined in $Collection).
  See the code for examples. TIter overloads operator() to hand the next
  list element back.

- TLego, introduced typedef's for the Surface, Drawface and Lego functions.

- All GetFirst...() functions can be removed because they are not used
  anymore.

- All GetHead...() should be renamed to GetListOf...(), e.g. GetHeadClass()
  should be GetListOfClass(). This will make the code more readable.
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/05   24/08/95 16.15.35
//
- New classes TF1 and TF2. TF1 is a 1-Dim function (TFormula with a range).
  TF2 is a 2-D function with a range in x and y.
  To Try the new TF1 and TF2 classes, try, for example:
  Root > exec hist1.mac
  Root > p2.cd
  Root > TF1 k1(sin(x)/x,0,10)
  Root > k1.Draw
  Root > k1.Draw(lego1)  (here point to pad p2 and rotate)
  Root > TF2 k2(sin(x)*cos(y),-2,2,-2,2)
  Root > k2.Draw   (k2 is drawn by default as a contour plot)
  Root > k2.Draw(lego1)
  Root > TF1 k3(gaus,-3,3)
  Root > k3.SetName(blabla)
  Root > k3.SetParameter(0,100)
  Root > k3.SetParameter(1,0)
  Root > k3.SetParameter(2,1)
  Root > h101.Fit(blabla) (This command will only work in the coming version)
  Root > k3.Print
  Root >

- New member functions added to the H1 class to support fitting.
  Very preliminary implementation of the TH1::Fit member function.

- New DECK HFIT added in directory H.

- New classes PolyLine3D and PolyMarker3D added by Nenad Buncic.

- The TLego class has been split into TView and TLego.

- Changes in Pad. The fLego pointer is replaced by fView.
  The TView class is used to specify the 3-D viewing parameters in one pad.
  Before adding 3-D primitives to a pad, a TView must be created.
  Note that Lego automatically creates a View.
  The Rotating Cube function can be used to interactively rotate any 3-D
  objects in a pad when a TView exist.

- Several small bugs fixed in the interpreter RINT. The problem with
  nested parenthesis is solved.
//
//::>          VERSION  0.03/04   21/08/95 18.08.31
//
- New class TFormula (see TFormula constructor) for definition
  and functionality.

- Global Edit on ClassDefs: Added T in front of each class name.

- New version of Dictionary. With this new version, there is no need now
  to call explicitely the Class::Dictionary() member function. This call
  happens automatically at run time. This has the advantage to speed up
  the initialisation process and consumes less space in memory.
  Only classes really used have their dictionary loaded.

- Several changes in basic service classes such as TString.

- Cleanup of ClassIDs. There were several clashes.

- Two new TDynamic objects have been added (gObjectTable and gClassTable).
  gObjectTable.Print shows the list of all active class objects.
  gClassTable.Print shows the list of classes with some statistics.

- New directory FUNC containing the new class TFunction.
  New include $Function.

- New static functions Printf and Strip in class TString.
//
//______________________________________________________________________________
//
//::>          VERSION  0.03/03   17/08/95 17.03.19
//
- New Classes TMinuit and TMinuitOld introduced in new directory minuit
  (see features of this class in the DECK,Minuit header).

- A statement like loop 3 exec junk.mac is now authorized.
//
//::>          VERSION  0.03/02   14/08/95 16.19.29
//
Minor changes due to a bad stamping of the first version
//
//::>          VERSION  0.03/01   14/08/95 14.57.08
//
New features:

  - Introduced the ABC TCollection. TCollection inherits from TObject and
    provides a generic interface to all collection classes.
    The TCollection header defines also the ForEachObj macro, which uses
    the TIter iterator wrapper class. The TIter iterator behaviour depends
    on the collection given to the TIter constructor.

  - Introduced the ABS TIterator. TIterator provides the generic interface
    for all collection iterators.

  - Changed TListHead to TList. TList inherits from TCollection. TList
    is a double linked list which can contain TObject's.

  - Introduced TListIter. TListIter inherits from TIterator. TListIter
    is an iterator for the TList and TSortedList classes.

  - The ClassID's are:
      TCollection      150
      TList            151
      TSortedList      152
      TIterator        160
      TIter            161
      TListIter        162

  - Changes in TObject:
      Added:
         Bool_t IsEqual(TObject *obj)
         Int_t  Compare(TObject *obj)
         UInt_t Hash()

      Changed:
         GetObject()      ->  FindObject()
         GetParent()      ->  GetListParent()
         ParentEntry()    ->  GetParent()
         PreviousEntry()  ->  GetPrevious()
         NextEntry()      ->  GetNext()

  - Changes in TList (formerly TListHead):
      Added:
         void AppendObj(TObject *obj)
         void InsertObjBefore(TObject *before, TObject *obj)
         void InsertObjAfter(TObject *after, TObject *obj)
         void PrependObj(TObject *obj)
         void DeleteObj(TObject *obj)
         TObject *FindObject(const Text_t *name) const
         TObject *FindObject(TObject *obj) const;
         TIterator *MakeIterator(Bool_t dir = kIterForward) const;

      Changed:
         GetNEntry()   ->  GetSize()    (now in TCollection)

  - Changes in TClass:
      Added:
         Bool_t      InheritsFrom(const TClass *cl);
         Bool_t      InheritsFrom(const Text_t *cl);

      Changed:
         GetFirstInherit()   ->  GetFirstBase()
         GetHeadInherit()    ->  GetHeadbase()
         GetInheritedClass() ->  GetBaseClass()

  - Changes in TInherit:
      Renamed class TInherit to TBaseClass, because it contains base
      classes and not inherited classes.

=================================================================

TObjectTable:
   - TObjectTable inherits from TObject. TObjectTable keeps track of all
     active objects.
   - There is only one TObjectTable in the program. This table can be
     accessed via the global gObjectTable.

TClass:
   - Added (used by TObjectTable):
       UInt_t      GetInstanceCount()
       UInt_t      GetHeapInstanceCount()
       Int_t       Size()

=================================================================

New features:

- Introduced class TStorage which encapsulates the heap memory management.
  TStorage has no data members and no ctor and dtor. It only provides a
  namespace for the memory management functions.
  TStorage provides a.o.:
  - Overloaded versions of the global new and delete operators.
  - Object allocator setting heap flag for use by TObject (machine independent,
    instead of the heapEND method).
  - Memory usage monitoring and statistics routines (can be de-activated
    using #ifdef's).
  - Extensive debugging facilities which detect memory overwrites and
    other illegal activities (can also be de-activated using #ifdef's).

- Introduced error reporting and handling routines (decks $Error and Error)
  accepting printf style formatting arguments (variable number of arguments).
  The error handling facility is available via inheritance from TObject and
  as stand-alone routines.

- Introduced class TMath which encapsulates most math routines and provides
  overloaded versions (no templates), for almost all builtin data type, of
  routines like: min, max, abs, etc. Also this class has no data members,
  it only provides a namespace for the math functions.
  Instead of using <math.h>, use TMath.

- Introduced class TString and supporting classes TRefCnt, TRegexp and pattern
  matching routines (in deck Match). Removed TRstring and modified all decks
  using TRstring to use TString. In the process made many classes to accept
  "const char *" instead of "char *". We should use this additional type
  safety feature of C++ more often. Retrofitting the code with "const"
  is a pain (ripple effect). To avoid problems with include file searches
  on the Macintosh the name of the String KEEP is RString (generates include
  file "RString.h").


Extensions to existing classes:

TObject:
   - Overloaded new and delete using TStorage.
   - Changed size of fBits to UInt_t.
   - Introduced bit handling routines: SetBit, ResetBit, TestBit and InvertBit.
   - Introduced bit constants and mask for system and user bits. Currently
     there is space for 8 system bits and 24 user bits.
     System bits are: kIsOnHeap         (set when TObject on heap)
                      kNotDeleted       (set when TObject created and unset
                                         when deleted, allows error generation
                                         in case TObject gets deleted twice)
   - Added error handling routines: Warning, Error, SysError and Fatal.
     Each error routine adds the class name to the location (i.e. name
     of member function in which error occured). When a Fatal occurs
     the system calls abort().
   - Moved GetObject from TNamed to TObject (otherwise TCanvas'es and TPad's
     could not be found).

TROOT:
   - Removed Error() from TROOT and use now instead the new routines from
     TObject.
   - Made operator new() protected. This has the effect that no TROOT objects
     can be allocated from the heap. The TROOT object has to be a global on
     the stack, which ensures that TROOT's destructor is automatically called
     at the end of the program. The TROOT destructor closes all open files
     and free's system resources, like forked processes, shared libraries,
     open network connections and shared memory. Now there is no change that
     a user forgets to explicitely delete the TROOT object.
   - TROOT now inherits from TDirectory instead of TSortable. TROOT is actually
     a directory that contains all in-memory directories. Can now also use
     ROOT->cd().
   - Replaced all void* by appropriate class*'s. Whenever there is a cast
     we should be suspicious.

TClass:
   - The TClass constructor has new arguments specifying the declaration
     file name (.h file) the implementation file name (.cc) and the line
     numbers in both files where the declaration and implementation starts.
   - New member function AddInstance keeps track of the number of object
     instances per class.

Dict:
   - Handles member functions with variable number of arguments, ... (ellipses
     specifier), by ignoring these functions.
   - In case operator new() is protected or private no UI functions using
     new() are generated.
   - Members returning a reference return a void (could not cast the
     void * return type to a reference).
   - Member arguments of a local class typedef or enum type get now correctly
     the "T<class>::" specifier prepended.
   - Adds for classes that contain the macro ClassDef the member function IsA()
     (which is contained in the ClassDef macro).


Removed <math.h> from many decks.

Changed "LinkHead" to "ListHead" (global edit in car file).
Changed "ROOT" to "gROOT" (global edit in car file).

Changed "Sizeof()" to "Sizeof() const" (global edit in car file). Since "const"
is part of the function signature all Sizeof() members need to be const,
otherwise the overridding does not work correctly.

=================================================================

Directory $KUMACS contains new utility macros:
  draw_class  invoked by alias class
  draw_doc         ""          doc
  draw_tree        ''          tree

The Patch, Utils has been restructured to merge all Fortran utilities
used to parse the C++ header files into one single deck REAH.
REAH is called by drawclass, drawdoc, drawtree and dict.
