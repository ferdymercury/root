//*CMZ :  1.03/09 16/12/97  17.53.37  by  Rene Brun
//*-- Author :    Rene Brun   11/08/97
//________________________________________________________________________
//
//::>          VERSION  1.03/09   16/12/97 17.53.37
//
// 16/12/1997  16.59.42  by  Rene Brun & Fons Rademakers
//
- The main feature of this new version is a general CLEANUP of most
  ROOT classes. The complete Root system can now be compiled with NO WARNINGS
  on all supported platforms. The compiler option "-w" has been removed.
  On Linux, the option -Wall is now the default.
  We strongly encourage our users to also compile with the option warnings
  activated.
  During this cleanup operation, we found some inconsistencies in a few classes.
  The following changes are not backward compatible:
     TDirectory::Read  has been renamed TDirectory::ReadAll
     TDirectory::Write has a new signature.
     TKey::Read  has been renamed TKey::ReadObj.
     TMatrix::Clear has been renamed TMatrix::Zero.

- Following this cleanup, you must regenerate the dictionaries
  for your classes. In particular, the copy constructor of TCollection is
  now private. We did this to prevent people from accidentally copying or
  assigning collections. In the old version there was no correct copy ctor
  for collections and naive usage of passing collections around could cause
  unexpected behaviour.

- All ROOT specific DEFINEs have been renamed to R__oldname
     AIX       ->   R__AIX
     ALPHA     ->   R__ALPHA
     B64       ->   R__B64
     BYTESWAP  ->   R__BYTESWAP
     GNU       ->   R__GNU
     HPUX      ->   R__HPUX
     I386      ->   R__I386
     INT16     ->   R__INT16
     LINUX     ->   R__LINUX
     MAC       ->   R__MAC
     MKLINUX   ->   R__MKLINUX
     MWERKS    ->   R__MWERKS
     SGI       ->   R__SGI
     SOLARIS   ->   R__SOLARIS
     SUN       ->   R__SUN
     UNIX      ->   R__UNIX

- Fix a problem in TMath::Atan2(y,x). When x=0 returns pi/2 and not 0.
  (thanks Ping Yeh).

- Remove list of global functions from the list of browsable objects
  in TROOT.

- Change TGaxis::PaintAxis to support tickmarks on the negative side of the axis.
  TAxis::SetTickLength accepts now negative values.

- Change TColor::SetRGB to always call TGXW::SetRGB.

- Several changes in TGraph::PaintGraph. Minimum and Maximum were not
  read correctly in TGraph::Streamer.

- Implement option "B"ound in TGraph::Fit.

- Modify TGraph::GetHistogram. Returns pointer to
    1- TH1F histogram used to draw axis when option "A" given in Draw.
    2- TH1F histogram hframe when TPad::DrawFrame is called instead.

- Optimisation of TGraphErrors to clip correctly error bars
  in case of LogY scale.

- Implement TPolyMarker::SavePrimitive.

- Changes in TNode::DistancetoPrimitive.

- Modify TBranch::Print. The ouput of TTree::Print shows only two lines
  per branch. Format optimized.

- TBranchClones constructor issues a warning in case the class referenced
  by the TClonesArray contains pointers.

- TBranchObject constructor calls TClass::BuildRealData if necessary.
  In the old version, this task was left to TBranch::Fill.

- A few protections added in h2root. In case of a 2-D array in a CWN,
  the maximum of a leafcount was not correctly set, giving possible problems
  when reading the Tree (thanks Laurent Mirabito for an example).

//
// 05/12/1997  17.18.35  by  Rene Brun
//
- Delete TNamed::Draw. Uses now TObject::Draw.

- Fix a memory leak in TLeafObject::FillBasket.
  When a TBranchObject has a branch with a null pointer, Root creates a Zombie
  object. This zombie was not deleted.

- Modify TPad::PaintBox to accept a new fill style (range [3020,3099]).
  TPave, TBox objects filled with these styles have the same fill style
  as [3010,3019] but use the object color instead of black.

- Modify TBranchObject constructor to always create a TLeafObject.

- Modify TBranch::Streamer to reinitialize global gBranch after reading
  all branches of a branch and before reading all leaves of a branch.
  With these modifications, one can call a member function of the top level
  object. For example in the $ROOTSYS/test/Event program, one can do:
      Root > T.Draw("event.GetNtrack()")
  where event is the name of the top level branch.

- Modify TGraph constructor to initialize the default values
  for the graph maximum and minimum in case the constructor is called
  with null x and y arrays. This case happens when a canvas containing
  a TGraph object is saved as a macro.

- In TTree::Branch and TLeaf::TLeaf implement changes to support
  static arrays data members in case of the top level object.
  This functionality was already implemented for TBranchclones only.

- Fix problem in TPadOpenGLView::MoveModelView.
  A TStopWatch was systematically created twice.

- Support for positive and negative tick marks size in class TGaxis.

- Fix a problem in TGraph::Streamer (thanks M.Woudstra).
  When a TGraph object was written to a file, the maximum/minimum
  for the Y scale were not correctly saved.

- Changes in TPad::CreateNewPave. When the corners of the pave
  are the same pixel, artificially make a pave with 10 pixels.

- Changes in TGaxis::Paint.
  Give possibility to specify a negative label offset.

- Fix a problem in TGraphErrors::Paint.
  In case of log scale and if the value of the error in Y was larger
  than Y itself, than the error bar was not drawn.

- Modify h2root to take into account a nasty case with Hbook.
  You had an Hbook error message when creating the file (too many records).
  Hbook file should have been created with a bigger LRECL.
  h2root will try to recover.

- Fix a problem in TNode::DistancetoPrimitive.
  In case one single node with no sons was drawn, it was not possible
  to rotate this node.

- Change maximum size of a local array (member name+value+title)
  in TObject::Dump from 250 to 350.

- Change definition of local variable nwh from char to unsigned char
  in TString::ReadBuffer. This removes a limitation to 127 chars
  for keys in a directory.
//________________________________________________________________________
//
//::>          VERSION  1.03/08   24/11/97 17.21.27
//
// 24/11/1997  16.48.50  by  Fons Rademakers
//
- Fixed the copy ctor and operator= for a number of classes
  (a.o. TObject, TNamed, TH1, TH2, TArray, TUrl, TInetAddres).

- Made copy ctor and operator= private for TCollection baseclass.

- Split the global operator new(size_t), operator(size_t,void*)
  and operator delete(void*) from the TStorage class. These three global
  operators are now in their own shared library libNew.so. You can
  now link your applications without the libNew.so to not have
  ROOT's memory checking new/delete. Note, however, that without
  ROOT's new/delete you will not be able to use the shared memory
  features of TMapFile. The distributed root executable module itself
  is always linked with libNew.so (source of the root main program
  is now included in the $ROOTSYS/include directory so you can relink
  your own root module without new/delete if desired).

- Introduction of TMatrix, TVector and utility classes. Physics specific
  vectors (TVector3, TVector4, TLorentzVector) will come in the next
  version. Also more linear algebra operations using TMatrix will come
  later. For a full description of the matrix classes see:
  http://root.cern.ch/root/html/TMatrix.html#TMatrix:description
  And for some test programs see $ROOTSYS/test/vmatrix.cxx and vvector.cxx.

- TTree::SetBranchStatus, fix in setting status for single attribute
  of object in a TClonesArray.

//
// 14/11/1997  10.30.35  by  Rene Brun
//

- Two new functions in TChain to merge Root files.
  TChain::Merge(const Text_t *name)
     Merge all files in this chain into a new file
  TChain::Merge(TFile *file, Int_t basketsize, Option_t *option)
     Merge all files in this chain into a new file
     if option ="C" is given, the compression level for all branches
        in the new Tree is set to the file compression level.
     By default, the compression level of all branches is the
     original compression level in the old Trees.
     if (basketsize > 1000, the basket size for all branches of the
     new Tree will be set to basketsize.

- Modify all header files of the geometry package to declare all
  destructors virtual.

- Protect TPad::Editor in case the corners of TPavexxx or TDiamond
  are identical.

- Fix a problem in TCanvas::Build. The pointer fContextMenu was not
  initialized in some cases.

- Implement new member function TPad::RedrawAxis.
  Redrawing axis may be necessary in case of superimposed histograms
  when one or more histograms have a fill color

- Add TVirtualPad::Divide. We had only TPad::Divide.
  With this change, one can do
      gPad->Divide(2,2)
  where gPad is a global always pointing to the current pad.

- Modify TDirectory::Browse to also browse objects (histograms) only
  defined in memory.

- Modify TObject::Inspect. Data member names and values are painted
  always in black color (to avoid problems with Netscape).

- Implement new function TBranchObject::UpdateAddress.
  This function is called by TTree::Fill when the Tree consists
  of one single super branch (a TBranchObject) and the object referenced
  by this branch is at a different address than in the previous fill.
  This situation happens when for example a new Event object
  is created and deleted inside the Event loop.
  TBranchObject has a new data member fOldObject.

- Modify class TTree and TBranchClones.
  Change calling sequence for TBranchClones constructor to be consistent
  with the other branch constructors.
  For all cases of branch, the address of the pointer is given.
  In the case of a ClonesArray, it was the pointer that was given.

- Fix a problem in TBranchClones in case a TTree contains more than
  one branch with a  TClonesArray referencing the same class.
  (many thanks to Andre Schungel).
  This change has also required a new function TLeaf::SetLeafCount.

- Implement new set of functions in TStyle to set/get the definition
  of line styles. This info is only used by PostScript currently.
  See TStyle::SetLineStyleString for more information.

- Protect TCanvas::MakeDefCanvas in case the default canvas
  already exists. If c1 exists, c1_1 will be created,
  If 5 canvases already exist, then c1_6 will be created,

- Rewrite TClonesArray destructor. Really deletes now all objects in
  the clonesarray.

- In TContextMenu::Execute, sets the current pad to the pad where
  the mouse was clicked before excution the action.

- Renormalize rootmarks
//
//________________________________________________________________________
//
//::>          VERSION  1.03/07   08/11/97 13.37.55
//
//
- Implement new member functions in TH1 class to return integral of bins:
    -- TH1::Integral()
          returns integral of all bins (work for 1-D, 2-D and 3-D histograms)
    -- TH1::Integral(Int_t binx1, Int_t binx2)
          for 1-D histograms, return integral in range [binx1,binx2].
    -- TH1::Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2)
          for 2-D histograms, return integral in range [binx1,binx2],[biny1,biny2].
    -- TH1::Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Int_t binz1, Int_t binz2)
          for 3-D histograms, return integral in range [binx1,binx2],[biny1,biny2],[binz1,binz2].[binx1,binx2].

- Implement TH1::Fill(Float_t x, Float_t y, Float_t z, Stat_t w).
  This function should be used instead of TH3x::Fill to fill
  a 3-D histogram.
  Modify TH1::Fill(Float_t x, Float_t y, Stat_t w) to automatically
  invoke the 3-D Fill function with a weight=1 in case of a 3-d
  histogram.

- First attempt to compile Root with gcc under AIX (thanks pasha Murat).
  Files $kumacs/globals and root_libs modified accordingly.
  Not yet tested.

- Fix a bug in TH1::ProjectionY (thanks Torsten Henkel)
  The projection along Y had NX bins instead of NY bins.

- In TLeafObject::FillBasket and TLeafObject::ReadBasket implement support
  for NULL pointers.
  In case a TBranchObject references a NULL pointer, FillBasket creates
  a Zombie object of the class. When ReadBasket reads an object, it checks
  if it is a Zombie object and delete it.

- Modify TGraph::PaintGraph. In case option "A" is specified,
  the pad range and axis are automatically updated. If a point has been modified
  and is outside the current range, the new range will be automatically
  computed. (thanks Reiner Rohlfs and Wolgang Korsch).

- Activate TGraph::SetOption. This function was dummy before.

- Protect TTree::SetBranchAddress in case of an invalid branch name
  and prints an error message.

- Protect class TWin32ListViewCrtl in case a class IsaFolder and
  there is nothing to browse.

- g2root implemented on Linux and AIX.
  (thanks to Laurent Aphecetche)

- Protection in THtml class (Fons). Problem reported by Jim White.

- Protect TTreeFormula::DefinedVariable in case of very long expressions.
  (Thanks to Patrice Lebrun for providing a test example).

- Implement two new functions in TMinuit class;
  TMinuit::SetMaxIterations(Int_t maxiter=500)
  Int_t TMinuit::GetMaxIterations();

- Modify TH1::Fit to call TMinuit::GetMaxIterations.
  In the previous implementation, the maximum number of iterations
  was hardwired in TH1::Fit with a value of 500.
  To modify this value, before a fit, do:
      gMinuit->SetMaxIterations(myMaxIter);

- Modify $TObjPtr.
  g++ under AIX requires function Compare to be declared inline
  despite the fact that it is really given as inline in the include.

- changes in TButton::ExecuteEvent. In case of WindowsNT, one must
  execute all the ButtonUp functions in the main Thread.

- Modify macro root_dll for WindowsNT.
  Creation of Root_Pythia.dll requires $PYTHIA/Pythia.lib.

- Modify macro MaheDistWindows.
  By default, do not export Pythia library.
  The library is renamed .tmp before making the tar file
  and again renamed .dll after tar.

- Fix a problem in TTree::Draw when drawing an array element.
  The new version forces reading of the branch count in this case.
  This modification implied a new function  GetValuepointer in
  all TLeaf classes.

- Fix a problem in TGaxis::Paint when drawing an axis for which the
  wmin,wmax values have no connection at all with the current pad range.
  (thanks to Reiner Rohlfs).

- Take into accounts non-persistent data members in split mode.
  A data member is declared persistent by default.
  To make a data member non-persistent, use the character "!"
  as the first character in the comment field of this member.

- Modify TBranchClones::TBranchClones to take into account
  objects in a TClonesArray having subobjects. For example
  a Track object could have two ThreeVector objects inside.
//________________________________________________________________________
//
//::>          VERSION  1.03/06   27/10/97 18.11.42
//
//
// 27/10/1997  18.00.26  by  Rene Brun
//
- TTree::Branch modified to enable the creation of a branch in case
  a data member is a static array of basic types.
  (Thanks to Gordon Watts for providing a simple test program).

- Implement TF2::GetRange with 6 return parameters.
  This function is called from TH1::Fit. With this new function
  one can now fit a 2-d or 3-d histogram with a range specified.

- Improvements in TCanvas::SaveSource. Take into account screen factor.

//
// 24/10/1997  16.46.55  by  Fons Rademakers
//
- New version of CINT from Masa Goto intoduced (version )

- Improvements in TClonesArray::ExapandCreate and TClonesArray::RemoveAt.

- Redone all TArrayX classes. They now inherit from a common TArray
  class. Since TArray does not inherit from TObject it contains a
  private interface to TBuffer (via the statics ReadArray() and
  WriteArray()) so we can now also save pointers to TArray objects,
  which was not possible before (only embedded arrays could be streamed).
  Also added a number of new methods for the array classes, like:
    - copy constructor
    - assignment operator
    - Adopt() method (allows array to adopt any existing primitive array
      without having to make a copy)
    - AddAt() like in TObjArray
    - At() line in TObjArray
    - operator[] like in TObjArray
  last three methods also perform range checking. For the rest the
  TArrayX classes are backward compatible (also for I/O).

- Rootcint understands a new option in the LinkDef.h. In case the
  class name is trailed by a ! rootcint will not generate the
  operator>>() method. This is necessary because the default generated
  method for non TObject derived classes is not correct (prints error
  message instead of reading object). Example:
   #pragma link C++ class TArray!;
   #pragma link C++ class TArrayC-!;

//________________________________________________________________________
//
//::>          VERSION  1.03/05   16/10/97 15.40.07
//
// 15/10/1997  17.28.10  by  Rene Brun
//
- Implement TGraphErrors::GetErrorX (in addition to GetErrorY).
  Fix a problem in TGraphErrors header. GetEX and GetEY were returning
  wrong values.

- In h2root, change default buffer size from 32000 to 8000 bytes
  when converting CWNs.

- New function TStyle::Browse. This gives the possibility to automatically
  set a style from the browser.

- new class TSystemDirectory (implemented by Christian Bormann, IKF Franckfurt).
  Changes in TSystemFile.
  Thanks to these changes, the current working directory can be browsed.

- Changes in TContextMenu to use TVirtualPad instead of TPad/TCanvas.
  With this change, using a contextmenu does not force linking
  with the graphics libraries.

- Protection added in TH1::PaintHist. The log of a variable was computed
  in case of non-log scale.

- Change in TBranch::Browse. In case different branches contain leaves
  with the same name, the browser was always drawing the first occurence found.

- Mods in TBranchClones::Streamer. The branch address is now computed
  when reading the branch definition from the file. Previous implementation
  assumed that the offset of data members with respect to the object pointer
  was identical on all machines.

- Mods in TBranchObject::SetAddress. The branch address is now recomputed
  Previous implementation assumed that the offset of data members with
  respect to the object pointer was identical on all machines.

- several changes in the TPythia and TMCParticle classes.

//
// 15/10/1997  17.28.10  by  Fons Rademakers
//
- several improvements in rootd. Ported to all supported systems.
  Rootd can also be configured for anonymous usage (like anonymous
  ftp). To setup rootd to accept anonymous logins do the following
  (while being logged in as root):

 - Add the following line to /etc/passwd:

   rootd:*:71:72:Anonymous rootd:/var/spool/rootd:/bin/false

   where you may modify the uid, gid (71, 72) and the home directory
   to suite your system.

 - Add the following line to /etc/group:

   rootd:*:72:rootd

   where the gid must match the gid in /etc/passwd.

 - Create the directories:

   mkdir /var/spool/rootd
   mkdir /var/spool/rootd/tmp
   chmod 777 /var/spool/rootd/tmp

   To make writeable directories for anonymous do, for example:

   mkdir /var/spool/rootd/pub
   chown rootd:rootd /var/spool/rootd/pub

 That's all.

 Several remarks:
  - you can login to an anonymous server either with the names
    "anonymous" or "rootd".
  - the passwd should be of type user@host.do.main. Only the @ is
    enforced for the time being.
  - in anonymous mode the top of the file tree is set to the rootd
    home directory, therefore only files below the home directory
    can be accessed.
  - anonymous mode only works when the server is started via inetd.

- new function TCint::Calc.
    Directly execute an executable statement (e.g. "func()", "3+5", etc.
    however not declarations, like "Int_t x;").

- New functions in TClonesArray (Compress, RemoveAt, Remove and Sort).
  An entry in a clonesarray can be removed and a garbage collection
  can be triggered via Compress.
  Similar functions in TObjArray.

- Modify macro globals and install_test.
  globals include uptodate compiler options for hpux/g++.
  install_test includes root/macros in the distribution kit.

- Changes in TMath. Hyperbolic functions now inline.
//________________________________________________________________________
//
//::>          VERSION  1.03/04   01/10/97 08.37.28
//
//
// 30/09/1997  18.16.10  by  Rene Brun
//
- Changes in the installation procedures.
  By default the patch EG (Event Generators interface) is compiled.
  The new patches VENUS and PYTHIA are compiled if the corresponding
  options are set before running the installation procedure.

- The patch Venus includes an interface to the Venus event generator.

- The patch Pythia includes an interface to the Pythia event generator.

- The shared libraries libEG.so, libEGVenus.so and libEGPythia.so
  are part of the distribution kit (except under AIX).

//
// 30/09/1997  17.48.23  by  Fons Rademakers
//
- TApplication: the macros specified as program arguments will
  only be executed the first time Run() is called. Second or
  more calls to Run() will not re-execute the start-up macros.

- TRint: raw terminal mode will only be set when calling Run()
  and not directly by the TRint ctor. Leaving Run() will unset
  raw mode. This allows easier embedding of ROOT eventloop.

- TCollection: the Remove() method now returns pointer to
  removed object or 0 when object was not found in collection.
  This allows easy detection if removed pointer was really in
  collection.

- TUnixSystem: fix bug in dispatching of Async timer event.

- TEnv: resource values surrounded by $() will be expanded to
  shell environment value. For example:
  Root.DynamicPath:    .:~/rootlibs:$(LD_LIBRARY_PATH)
  will be expanded to:
  Root.DynamicPath:    .:~/rootlibs:/user/rdm/root/lib:/usr/local/lib

- TMath: Sign() functions now behave like the Fortran intrinsic
  SIGN funtions.

//
// 29/09/1997  18.33.46  by  Rene Brun
//
- TStyle improvements.
  The following new functions are available in the TStyle class:
     - TStyle::SetFrameBorderMode
     - TStyle::SetCanvasBorderSize
     - TStyle::SetCanvasBorderMode
     - TStyle::SetPadBorderSize
     - TStyle::SetPadBorderMode
     - TStyle::SetPadBottomMargin
     - TStyle::SetPadTopMargin
     - TStyle::SetPadLeftMargin
     - TStyle::SetPadRightMargin

     - TStyle::SetTitleXOffset
     - TStyle::SetTitleXFont
     - TStyle::SetTitleXSize
     - TStyle::SetTitleYOffset
     - TStyle::SetTitleYFont
     - TStyle::SetTitleYSize

- Changes in class TROOT.
  By default, the ROOT constructor creates two styles:
    - "Default"
    - "Plain" with all fancy 3-d effects and colors removed.
  New styles can be created by invoking the TStyle constructor
  or by making a clone of an existing style. Example
     TStyle *mystyle = gStyle->Clone();
  this statement will create a clone/copy of the current style.
  If you intend to work all the time with a given style (eg,Plain), add
  the following statement in your rootlogon.C file:
      gROOT->SetStyle("Plain");

- New function TROOT::SetStyle(const char *stylename).
  This function looks for an already defined style named stylename
  and sets it as the current style.

- New function TROOT::ForceStyle(Bool_t force)
  If this function is called, then when reading objects from a file
  their attributes will be replaced by the corresponding ones in the
  current style.
  Note that object attributes are set in the object constructor or by
  calling functions such as:
     TAttLine::SetLineColor
     TAttFill::SetFillColor, etc..

- New function TCanvas::UseCurrentStyle and TPad::UseCurrentStyle.
  These two functions may be invoked from the command line or the
  canvas/pad context menu respectively.
  When invoking these functions, all objects in the canvas/pad will see
  their attributes replaced by the corresponding attributes in the
  current style.

- Changes in TGraph::DistancetoPrimitive (thanks Wolfgang Korsch).
  When a graph/grapherrors has an associated fitted function,
  DistancetoPrimitive gives preference to the function when the mouse
  is far from the graph points.


- New CINT 5.13/28 version introduced.

- Changes in rootcint in case a class contains several static arrays.
  The code generated for Streamer defines the loop index R__i outside
  the loop.

- Changes in getline.

- Protection in TMotifBrowser.

- Changes in TBranch, TBranchClones and TBasket.
  Remove unnecessary delete of TBaskets. New function TBasket::DropBaskets.

- Changes in $TPadOpenGLView. Change from protected to public
  some member functions.

- New function TClonesArray::Compress. This function compress entries
  in a clonesarray(it removes all entries with null pointers).
//
//________________________________________________________________________
//
//::>          VERSION  1.03/03   10/09/97 08.33.38
//
//
// 09/09/1997  16.47.04  by  Rene Brun
//
- Protection in Widgets/Iconbox. Remove code freeing pixmaps.
  Prior to this change, a TBrowser could not be deleted.

- Protect TPad::Draw in case fPixmapID = -1. This may happen when
  the DrawClone item is selected on a pad.

- In TContextMenu:: , the current pad is correctly restored before
  executing the action item.
  With this change, one can now DrawClone a pad.

- Introduce new Thread patch. Implementation by Victor Perevoztchikov.

- Improve output quality (mainly Postscript) when drawing error bars.
  (change size of BASEMARKER in TGraphErrors::paint).

- Many changes in patch META by Piotr Golonka. The Root dictionary
  includes additional info when special comments are given in the adta member
  or member functions.

- Allow leading and trailing blanks in TTree::Draw for the expressions
  to be processed, including the name of the user-defined histogram.

- Merge with Piotr Golonka's new version of context menu
  and dialog boxes.

- Implement a few changes in mmconfig, mmapsup and mvalloc
  (thanks Damir Buskulic) for the implementation under MkLinux.
//________________________________________________________________________
//
//::>          VERSION  1.03/02   03/09/97 19.16.09
//
//
// 03/09/1997  15.40.40  by  Fons Rademakers
//
- TNetFile fully implemented. Its functionality is as follows:

  A TNetFile is like a normal TFile except that it reads and writes
  its data via a rootd server (for more on the rootd daemon see the
  source files ROOTD_*.cxx). TNetFile file names are in standard URL
  format with protocol "root". The following are valid TNetFile URL's:

     root://hpsalo/files/aap.root
     root://hpbrun.cern.ch/root/hsimple.root
     root://pcna49a:5151/~na49/data/run821.root
     root://pcna49d.cern.ch:5050//v1/data/run810.root

  The only difference with the well known httpd URL's is that the root
  of the remote file tree is the user's home directory. Therefore an
  absolute pathname requires a // after the host or port specifier
  (see last example). Further the expansion of the standard shell
  characters, like ~, $, .., are handled as expected.
  TNetFile (actually TUrl) uses 432 as default port for rootd.

  Connecting to a rootd requires the remote user id and password.
  TNetFile allows three ways for you to provide your login:
    1) Setting it globally via the static functions:
           TNetFile::SetUser() and TNetFile::SetPasswd()
    2) Getting it from the ~/.netrc file (same file as used by ftp)
    3) Command line prompt
  The different methods will be tried in the order given above.
  On machines with AFS rootd will authenticate using AFS.

  The rootd daemon lives in the directory $ROOTSYS/bin. It can be
  started either via inetd or by hand from the command line (no need
  to be super user). For more info about rootd see the web page:
  http://root.cern.ch/root/NetFile.html.

- Rootd daemon now fully implemented. Its functionality is as follows:

  Root remote file server daemon.
  This small server is started either by inetd when a client requests
  a connection to a rootd server or by hand (i.e. from the command
  line). The rootd server works with the ROOT TNetFile class. It
  allows remote access to ROOT database files in either read or
  write mode. By default TNetFile assumes port 432 (which requires
  rootd to be started as root). To run rootd via inetd add the
  following line to /etc/services:

  rootd     432/tcp

  and to /etc/inetd.conf:

  rootd stream tcp nowait root /user/rdm/root/bin/rootd rootd -i

  Force inetd to reread its conf file with "kill -HUP <pid inetd>".
  You can also start rootd by hand running directly under your private
  account (no root system priviliges needed). For example to start
  rootd listening on port 5151 just type:

  rootd -p 5151

  Notice: no & is needed. Rootd will go in background by itself.

  Rootd arguments:
    -i                says we were started by inetd
    -p port#          specifies a different port to listen on
    -d level          level of debug info written to syslog
                      0 = no debug (default)
                      1 = minimum
                      2 = medium
                      3 = maximum

- TFile::Open() new static method. Depending on the file name it either
  returns a TFile, TNetFile or a TWebFile. In case a TNetFile url is
  given a local TFile will be returned in case the local hostname and
  the hostname in the url are the same. Typical usage:

     TFile *f1 = TFile::Open("local/file.root");
     TFIle *f2 = TFile::Open("root://pcna49a.cern.ch/data/file.root", "new");
     TFIle *f3 = TFile::Open("http://root.cern.ch/~rdm/root/hsimple.root");
//
// 02/09/1997  16.07.48  by  Rene Brun
//
- Protect TObject::Execute in case a canvas has not yet been created.

- Implement new options in TNode::SetVisibility. The following visibility
  options are provided:
     vis = 3  node is drawn and its sons are drawn
     vis = 2  node is not drawn but its sons are drawn
     vis = 1  (default) node is drawn
     vis = 0  node is not drawn
     vis = -1 node is not drawn. Its sons are not drawn
     vis = -2 node is drawn. Its sons are not drawn
     vis = -3 Only node leaves are drawn
     vis = -4 Node is not drawn. Its immediate sons are drawn
  The macro tutorials/na49visible has been modified accordingly.

- Macro tutorials/rootmarks modified to renormalize rootmarks to current
  results on an HP735. Root version number is printed.

- Improve TGraph::Fit. An algorithm has been introduced to make
  an estimation of the errors at point of a graph.

- New member functions TGraph::GetErrorY and TGraphErrors::GetErrorY.

- Fix a problem in TH1::PaintFrame when drawing with option "cont".
  (The TFrame object cannot be created in this case).
  This was producing a corrupted picture on Postscript.

- Implement TButton::Paint (calling TPad::Paint).
  With this change TButton objects can also be painted on Postscript.

- Modify installation procedure under Windows. The Root version number
  is now automatically generated in the MakeDist,etc files.

- Add new functions (CosH,SinH,TanH,AcosH,AsinH,AtanH) in class TMath. On Unix, these
  functions call the standard C functions. Code introduced for Windows.
//________________________________________________________________________
//
//::>          VERSION  1.03/01   22/08/97 12.48.47
//
//
// 22/08/1997  11.37.51  by  Rene Brun
//
- Fix a bug in TBranch::GetEvent (Thanks Valerio Filippini).
  One must call TBuffer::ResetMap for each event.

- Implement new function TTree::CloneTree(Int-t nevents).
  This function is useful to make a copy of an existing Tree
  with a subset of the original entries. If nevents=0, no events are copied.

- Implement functions TTree::Reset and corresponding TBranch::Reset.
  TTree::Reset resets all entries of an existing Tree.

- New function TPad::DrawFrame.
  This function us useful to draw an empty frame in a given range.
  It sets the pad range automatically from the limits given in the parameters.
  It draws the x and y axis.
  Example:
    gPad->DrawFrame(-2,0,10,1000)
   draws a new frame with x in range [-2,10] and y in range [0,1000]

- Optimisation of TF1::Paint in case of log x axis.
  In case of a log x axis, the intermediate histogram is created
  using variable bin size. The corresponding bin edges are computed
  by dividing log(x) in fNpx bins (fNpx can be set via TF1::SetNpx).
  This new algorithms solves the old problem of drawing functions
  with many decades along X (thanks to Thomas Kraemerkaempe for reporting).
  TF1::DistancetoPrimitive and TF1::ExecuteEvent works correctly
  for log axis.

- Changes in TH1::distancetoPrimitive and TH1::ExecuteEvent in case
  of log axis.

- Improvements in TDrawPanelHist::ExecuteEvent in case of log scales.

- Clean function TGraph::PaintGrapHist.
  Remove obsolete code corresponding to old optionZ.

- Protect TContextMenu::Execute in case the object currently in
  the context menu is deleted.

- Modify TGX11::SetColor.
  X11 colors are only initialized when they are effectively used.
  This should speed up the creation of the first Root canvas on
  some Unix systems.
  This function is not called anymore from TColor::SetRGB on Unix.

- Small fix in h2root. Swap (Int_t and UInt_t) cases.

- Modify TMotifCanvas and TWin32Canvas to clear the pad/canvas
  without clicking on the pad when the "Clear Pad" item is selected
  in the canvas "View" menu.

- CINT version 5.13.21 introduced.

- Generate all dictionaries. Slight format change in the G__ routines.

- New patch ROOTD (root daemon).

- new class TNetfile.

- Several changes in the PostScript class.
  TPostScript::Open uses now the information set by gStyle->SetPaperSize.
  The code previously in TPad::Print to recalculate the size of
  the Postscript paper in function of the canvas/pad size has been
  moved in TPostScript::Open.
  The EPS files also use correctly the info set by gStyle->SetPaperSize.

- TPolyline::Streamer and TPolyMarker::Streamer are now operational.
  (arrays of x and y points were not saved in the previous versions).

- Several changes in TCanvas::Streamer and TPad::Streamer.
  Thanks to these changes, one can now save a complete canvas in a Root file.
  TCanvas::Draw has been rewritten to take into account the case where
  a canvas object is read from a file and drawn. For example, the
  following sequence is now working:
    Root > TFile f("canvas.root","NEW");
    Root > c1.Write();  // current canvas c1 is saved on file canvas.root.
   then in a following session , when can do:
    Root > TFile f("canvas.root");
    Root > c1.Draw();
   You get the original canvas with all its attributes.

- New member function TVirtualPad::SaveAs.
  The implementation in TPad::SaveAs replaces the functions of TPad::Print.
  TPad::SaveAs supports the new option .root to save a canvas/pad
  in a root file.
  The functions TCanvas::Print (2 forms) have been deleted.
  TPad::Print is kept for backward compatibility and calls TPad::SaveAs.

- New menu option "SaveAs canvas.root" in the FILE menu.
  Changes in TMotifCanvas and TWin32Canvas.

- New member functions TObject::Clone and TObject::DrawClone.
  TObject::Clone makes a copy of an object via the Streamer functions
    eg:  TH1F *hnew = h->Clone();
  TObject::DrawClone makes a clone of an object and draws it.
  DrawClone can be accessed interactively via the object context menu
  to draw a copy of an object.

- Mods in TTree::MakeCode. The code generated in case a leave is a static array
  was not correct.
  Note that MakeCode still does not process correctly the case of branches
  with multiple leaves.
//
//________________________________________________________________________
//
//::>          VERSION  1.03/00   11/08/97 11.02.57
//

- Modify TH1::PaintFrame. Remove the TFrame object from the pad (if it exists).
  It may happen that one changes the DrawOption (via the contextmenu).
  In case the new draw option invokes a 3-d view (lego, surf), the previous
  TFrame object must be removed from the pad list.

- Change class TAxis. Add two new data members fFirst and fLast.
  These new members are used to store the current first and last bin
  to be used in the display.
  Previous version used the fUniqueID member from TObject to store
  the catenated info first+last with 16 bits each.
  This 16 bits introduced a limitation to a maximum of 32000 bins
  that can be displayed.
  TAxis::Streamer moved from G__Base to Axis.
  Cint_base modified to not generate TAxis::Streamer.

- Modify TGraph::PaintGraph to take into account minimum and maximum
  limits along y (set via fHistogram->SetMaximum).

- Clip errors for points outside the y range in TGraphErrors::Paint.

- Fix a problem in TF1::DistancetoPrimitive (thanks Andrew Sonnenscheim).
  Problem apparent only on Alpha/Unix caused by call to EvalPar without
  calling InitPar first.

- In TGraph::Fit, do not assume that xmin and xmax are the first
  and last point respectively. Min and max are correctly computed by looping
  on all data points. With this change, a TGraph object may contain
  unordered data points and be fitted (thanks S.G. Voropaev).

- Help reorganized. New sequence $HelpText and corresponding changes
  in all Motif classes where help is referenced.

- Optimize TGaxis::PaintAxis in case of Log axis.

- Take into account logz scale when drawing a 2-d histogram with option "col"
  Use a log axis to show the color scale.

- Changes in TH1::GetSumOfWeights to support 2-d and 3-d histograms.
