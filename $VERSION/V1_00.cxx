//*CMZ :          16/12/97  16.42.19  by  Rene Brun
//*-- Author :    Rene Brun   21/02/97
//
// 16/12/1997  16.40.09  by  Rene Brun
//
//
// 16/12/1997  16.38.08  by  Rene Brun
//
//
// 16/12/1997  16.31.08  by  Rene Brun
//
//
// 16/12/1997  16.23.14  by  Rene Brun
//
//
// 16/12/1997  16.19.43  by  Rene Brun
//
//________________________________________________________________________
//
//::>          VERSION  1.00/10   25/04/97 14.13.29
//

        Summary of the main changes or new features in version 1.00
        ===========================================================


===========> New features

- Implement the operators +, *, + and - for all histogram classes.
  $TH1, $TH2, $TH3 includes modified and also decks h1, h2 and h3.
  Example:
    if h1 and h2 are two histogram objects from class TH1F, one can do
    Root > TH1F h3 = h1+h2
    Root > TH1F h3 = 3.5*h1 - 6.7*h2
    NOTE: If h1 and h2 are pointers to histogram objects, you must do:
          Root > TH1F h3 = (*h1) + (*h2)
          In this case, h1+h2 would mean adding the 2 pointers !!

- Implement new class TCut
   A specialized string object used for TTree selections.
   A TCut object has a name and a title. It does not add any data
   members compared to a TNamed. It only add a set of operators to
   facilitate logical string concatenation. For example, assume
     cut1 = "x<1"  and cut2 = "y>2"
   then
     cut1 && cut2 will be the string "(x<1)&&(y>2)"

   Operators =, +=, +, -, !, &&, || overloaded.
   Examples of use:
     Root > TCut c1 = "x<1"
     Root > TCut c2 = "y<0"
     Root > TCut c3 = c1&&c2
     Root > ntuple.Draw("x", c1)
     Root > ntuple.Draw("x", c1||"x>0")
     Root > ntuple.Draw("x", c1&&c2)

- Important change in TTree::Branch for case with a TBranchObject.
  An additional parameter is specified to provide the address of the pointer
  to the object (instead of the pointer to the object).
  This change makes easier the definition of a Tree. Classes TBranchObject
  and TLeafObject modified accordingly.
  Test program Event and MainEvent modified.

- New member function TTree::SetBranchStatus to enable/disable reading
  one or all branches.

- New class TChain derived from TTree.  A chain of trees or chains.                                          //
  Enter a new element in the chain via the TChain::Add function.
  Once a chain is defined, one can use the normal TTree functions
  to Draw,Scan,etc.
  Use TChain::SetBranchStatus to activate one or more branches for all
  the trees in the chain.

- New class TEventList.
  A TEventList object is a list of selected events (entries) in a TTree
  Use function Enter to enter an element in the list
  The function Add may be used to merge two lists.
  The function Subtract may be used to subtract two lists.
   Operators + and - correspond to functions Add and Subtract.
   A TEventList object can be saved on a file via the Write function.
  NOTE: We are planning to use EventList as an input to TTree::Draw,etc
        in the next release.

- Add new member function TTree::MakeCode.
  This function generates the skeleton analysis code for a Tree.

- Modify TTree::Draw to add the selection string in the title of the plotted
  histogram.

- Important change in TNtuple. Each variable is now going to a separate branch.
  The change is backward compatible.

- Implement logic in TFormula to support constant strings.
  Modify TTreeFormula::EvalInstance accordingly.
  This change allows queries on columns with characters:
  Example; Ntuple.Draw("energy", "particle="Pion"");

- Implement new function TMinuit::SetFCN to be called in an interactive session.
  This new function can be used to set the address of the Minuit fitting function.
  A new tutorial (called Ifit.C) has been added to illustrate how
  to use Minuit interactively.
  by the shape SetPoints member function.

- Implement TF1::SetParLimits and TF1::GetParLimits.
  New data members fParMin and fParMax in class TF1.
  Several member functions modified to take into account the new members.

- Modify TH1::Fit to activate the option "B" to fit with bounded parameters.
  level up. E.g.: "file.root:/aa/bb" or "../../cc" work as expected.

- Modify the FitPanel to take into account current histogram range.

- Implement possibility to zoom in/out using the slider in DrawPanel.

- Implement new member functions TAxis::SetRange, GetFirst and GetLast.
  TAxis::SetRange(int first, int last) can be used to specify a bin range.
  Default range is [1,nbins].
  The axis range is taken into account during the Draw and Fit operations.

- Changes in TPad::Print to support PostScript Landscape mode.
  The choice between Portrait and Landscape mode is automatic when printing
  a canvas. If the canvas is horizontal, Landscape mode is selected.
  If the canvas is vertical, Portrait mode is selected.
  If the Print function is called from a macro or program, the mode can be
  specified in the second parameter.
    Example: mycanvas->Print("myfile.ps","Portrait");
  The PostScript paper size can be specified via:
     gStyle->SetPaperSize(xsize,ysize).

- Implement new member functions in class TStyle:
  TStyle::SetPaperSize to set the PostScript paper size in cm
  TStyle::GetPaperSize to return this size
  New data members fPaperSizeX and fPaperSizeY.

- Implement TGraph::Print and TGraphErrors::Print.

- New menu option "Histogram title" in the canvas Option menu.
  Corresponding changes in TMotifCanvas and TWin32Canvas.
  TH1::PaintTitle deletes an existing title when option is disabled.

- Changes and new functionality in TDirectory::cd and TDirectory::Get.
  One can now give a parameter to the cd function. This parameter is the path
  where to cd within a file.
  In the same way, one can give a full path name for the Get function.
  Note that TDirectory::Get always read an object into the associated

- TDirectory: syntax for path description for function cd() extended.
  The path can now contain a file name and the .. symbol to go one
  memory directory and not in the current directory.

- Implement picking for all 3-D primitives including geometry shapes.
  For polylines, the sensitive area is the region around the polyline.
  For polymarkers, it is the area around any point.
  For the geometry shapes, it is one the vertex points as computed

- TGraph: can now get access to the x and y-axis via GetXaxis() and GetYaxis().
  No need anymore to go via GetHistogram().

- Redesign the color algorithm for contours, legos and surfaces.
  Take into account user defined contour levels.
  Use gStyle->GetColorPalette

- Modify TLego::SetColorFunction to start numbering colors at 0.

- Changes in TAttText::Modify. The text size in pixels is now computed
  taking into account the smaller scale between the X and Y of the canvas.
  The previous algorithm was considering only the vertical axis.
  So the new meaning of the parameter textsize in SetTextSize(textsize) is:
   The textsize in pixels (say charheight) will be:
      charheight = textsize*canvas_height if current pad is horizontal.
      charheight = textsize*canvas_width  if current pad is vertical.

- New classes TWebFile and TURL (see class description).
    A TWebFile is like a normal TFile except that it reads its data
    via a (slightly modified) apache web server. A TWebFile is a
    read-only file.

- Modified TCollection::Write to also support the option
  to write only 1 key for the full collection instead of 1 key
  per element of the collection.
  If you have a list (TList, TObjArray, etc) list, you can:
   list->Write(); // by default wite one key per element
   list->Write("name",1); write only one key with name="name"

- TFile: switched from buffered ifstream and ofstream to unbuffered
  Posix open(), read(), write(), lseek() and fsync(). Since ROOT buffers
  all I/O there is no need for the buffering of the stream library.

- Restructured the shared library layout. It is now possible to link programs
  that don't need graphics (batch jobs) without the ROOT low level and
  devices dependent graphics libraries:
    libGpad.so
    libMotif.so
    libGX11.so
    libWidgets.so
    libX3d.so
  and without all Motif and X11 related libraries.

- New option in h2root:
  This program is invoked via:
     h2root hbook_file_name root_file_name  compress tolower
  if the second parameter root_file_name is missing the name will be
  automatically generated from the hbook file name. Example:
       h2root test.hbook
     is identical to
       h2root test.hbook test.root
  if compress is missing (or = 1)the ROOT file will be compressed
  if compress = 0 the ROOT file will not be compressed.
  if tolower is missing (or = 1) ntuple column names are converted to lower case

==============> New set of classes for Client/Server communication
- TSocket
     This class implements client sockets. A socket is an endpoint for
     communication between two machines.
     The actual work is done via the TSystem class (either TUnixSystem,
     TWin32System or TMacSystem).

- TServerSocket
     This class implements server sockets. A server socket waits for
     requests to come in over the network. It performs some operation
     based on that request and then possibly returns a full duplex socket
     to the requester. The actual work is done via the TSystem class
     (either TUnixSystem, TWin32System or TMacSystem).

- TMonitor
     This class monitors activity on a number of network sockets.
     The actual monitoring is done by TSystem::DispatchOneEvent().
     Typical usage: create a TMonitor object. Register a number of
     TSocket objects and call TMonitor::Select(). Select() returns the
     socket object which has data waiting. TSocket objects can be added,
     removed, (temporary) enabled or disabled.

- TMessage
     Message buffer class used for serializing objects and sending them
     over a network. This class inherits from TBuffer the basic I/O
     serializer.

==============> PROOF (The Parallel ROOT Facility)
- Started the implementation of the PROOF system. Using PROOF one can
  analyze trees in parallel on a cluster of computers. The PROOF system
  consists of the proofd from-end program which is started via inetd.
  Proofd takes care of user authentication and overlays itself then
  with the desired version of the proofserv executable. The proofserv
  is a basically the same as the ROOT interactive module except that
  it reads its commands from a socket instead of from the terminal.
  Since it is a remote server it will not do graphics and therefore
  is not linked with any graphics libraries (Motif/X11, etc.).

  Setting up a PROOF system (currently) requires that all machines in
  the cluster share each others disks via NFS. Also the user must run
  the interactive ROOT session on the cluster (i.e. his home directory
  must be accessable on all nodes in the cluster via the same pathname).

  Each node in the cluster needs the following lines in the /etc/services file:

    proofserv  349/tcp
    proofslave 359/tcp

  And in the /etc/inetd.conf file:

    proofserv stream tcp nowait root /usr/proof/bin/proofd proofserv /usr/proof
    proofslave stream tcp nowait root /usr/proof/bin/proofd proofslave /usr/proof

  Also each node must have a link to a directory called /usr/proof (or to
  whatever directory is specified on the two lines for inetd.conf). This
  /usr/proof directory must contain:

    bin/proofd
    bin/proofserv.970213
    etc/proof.conf
    lib/*.so   (all ROOT shared libraries)

  The file proof.conf describes the PROOF cluster and has the following format:

    # PROOF config file. It has a very simple format
    #
    # node <hostname> [perfindex]
    # slave <hostname> [perfindex]
    # user <username> on <hostname>
    #
    # For each node in the cluster add a "node" line.
    # For each node in the cluster that can run a slave server add a "slave" line.
    # Perfindex is a number between 0-200, with a PPro 200 being 40. The
    # perfindex is used for load balancing.
    #
    # Users can be redirected to have their master server run on a predetermined
    # node. For that use the "user" line.
    #

    node pcna49a

    slave pcna49a
    slave pcna49b
    slave pcna49c
    slave pcna49d
    slave pcna49e

    user rdm on pcna49d

  Note that all lines must start column 1. For the time being forget about
  the "node" and "user" lines (will be used later). When starting PROOF
  the system will look for the config file in following places, in order
  of preference:

    ./.proof.conf
    ~/.proof.conf
    /usr/proof/etc/proof.conf

  The possiblity to customize the cluster might be dis-abled in case one
  wants to run a general PROOF service where one generally does not want
  that each user uses his own configuration.

  To start a PROOF session type:

    TProof *p = new TProof("proof")

- New program rootd. The PROOF frontend (see above). Use install_proofd
  to build it.

- New program proofserv. The PROOF server proper. Use install_proofserv
  to build it.

- New class TProofServ. This class inherits from TApplication provides
  the proofserv application environment.


=========> OPEN/GL interface
  The Windows/NT version includes an interface to OPEN/GL.
  This interface is an alternative to X3D.
  Note that this is a very preliminary implementation. The GL viewer
  is very primitive in its current state.
  Next version should include a real viewer and should also works
  on Unix systems. Comments are welcome.

=======> Important bug fixes
- Fix a problem in CINT/Pause to support .x macro.C > macro.log

- Fix a bug in TGraph::Fit. The estimation of the initial values
  of parameters was wrong in case of polynomial fits (pol0 and pol1).
  (thanks to Nick).

//_________________________________________________________________________
For more details, see the full list of changes and additions in the ROOT
history file (sequential history from the developpers) below.
//_________________________________________________________________________
///////////////////////////////////////////////////////////////////////////
//
// 25/04/1997  13.18.38  by  Rene Brun
//
- Implement new function TMinuit::SetFCN to be called in an interactive session.
  This new function can be used to set the address of the Minuit fitting function.
  A new tutorial (called Ifit.C) has been added to illustrate how
  to use Minuit interactively.

- Implement new class TCut
   A specialized string object used for TTree selections.
   A TCut object has a name and a title. It does not add any data
   members compared to a TNamed. It only add a set of operators to
   facilitate logical string concatenation. For example, assume
     cut1 = "x<1"  and cut2 = "y>2"
   then
     cut1 && cut2 will be the string "(x<1)&&(y>2)"

   Operators =, +=, +, -, !, &&, || overloaded.
   Examples of use:
     Root > TCut c1 = "x<1"
     Root > TCut c2 = "y<0"
     Root > TCut c3 = c1&&c2
     Root > ntuple.Draw("x", c1)
     Root > ntuple.Draw("x", c1||"x>0")
     Root > ntuple.Draw("x", c1&&c2)

- New option in h2root:
  This program is invoked via:
     h2root hbook_file_name root_file_name  compress tolower
  if the second parameter root_file_name is missing the name will be
  automatically generated from the hbook file name. Example:
       h2root test.hbook
     is identical to
       h2root test.hbook test.root
  if compress is missing (or = 1)the ROOT file will be compressed
  if compress = 0 the ROOT file will not be compressed.
  if tolower is missing (or = 1) ntuple column names are converted to lower case


//
// 25/04/1997  11.15.32  by  Valery Fine(fine@vxcern.cern.ch)
//
- Getline   fclose() statements have been protected. There was a problem
            to start ROOT from a read-only directory (from CD-ROM
            for example)
//________________________________________________________________________
//
//::>          VERSION  1.00/09   24/04/97 18.49.48
//
// 24/04/1997  18.41.01  by  Rene Brun
//
- TChain::Draw, Loop, Scan now working.
  Possibility to draw the result of an object-member function with chains.

- Modify TLeafxx includes (removing fMethod).

- Changes in TTreeFormula. Replace TObjArray fLeaves by an array of integers
  holding the Tree leaves numbers used in the formula expression.
  Include TTreeFormula::Streamer in class.

- Modify TTree to take into account chains.

- Changes in test program tcollex.

- Change ntuple1 tutorial to use goff option.

- Rename MbaseWindow to TBaseWindow.

- Modify cint_motif and cint_motif2 to select -DMotifDict.

- Modify MakeCint to add prgama directive to compile with no optimization.

- New include OptimizeOff.

- Regenerate all dictionaries.
// 23/04/1997  18.29.37  by  Valery Fine(fine@vxcern.cern.ch)
//
- WIN32 multithreading:

  TInterpeter::EndOfLineAction()  method has been introduced for WIN to synchronize
  TCint::EndOfLineAction()        the console and command threads by end of user
                                  keyboard input.
  TRint::HandleTermInput()        has been changed to call for WIN32
                                      gInterpreter->EndOfLineAction();
                                  instead of
                                      gROOT->GetListOfCanvases()->ForEach(TCanvas,Update)();
                                 (it causes unexpected updating of the canvas's under WIN32)

  Currently ROOT under Win32 needs 3 concurrent threads:

    1. Console (main) thread to handle keyboard input
    2. Command thread to communicate with CINT
    3. Window thread to conrol all graphics windows
//
//________________________________________________________________________
//
//::>          VERSION  1.00/08   17/04/97 15.39.56
//
//
// 17/04/1997  20.51.22  by  Fons Rademakers
//
- TList: TList specific FindObject(). Much more efficient than the generic
  version in TCollection. Especially speeds up THashTable's which have a
  high collision rate (because of the many TList::FindObject()'s involved).

- TBuffer: new static functions SetGlobalReadParam(), SetGlobalWriteParam(),
  GetGlobalReadParam() and GetGlobalWriteParam(). Using these functions one
  can globally optimize the TBuffer performance when writing objects containing
  a large number of sub-objects.

- TApplication: fix in ProcessFile() to correctly handle I/O redirection
  in case of macro execution: .x test.C > aap.log
//
// 17/04/1997  08.25.33  by  Rene Brun
//
- Merge with Valery's version. This includes a few changes in TRotmatrix
  and TNode for the OpenGL interface.

- Merge with Fons's version. This fixes a problem in Application
  to pipe the result of a macro to a log file.

- Changes in TH1::PaintHist, TH1::PaintFunctions and TGraph::PaintGrapHist
  to support fill areas for functions.

- Fix problem in TH1::PaintContour. TH1::Draw with options "cont1" or "cont2"
  did not work.

- Change fMaxEventLoop parameter in TTree from one million to one billion.

- Implement logic in TFormula to support constant strings.
  Modify TTreeFormula::EvalInstance accordingly.
  This change allows queries on columns with characters:
  Example; Ntuple.Draw("energy", "particle="Pion"");

- Important change in TNtuple. Each variable is now going to a separate branch.
  The change is backward compatible.

- Change TGaxis::PaintAxis to improve default title position.

- Fix a problem in TTree::Draw when using an already existing profile histogram.
  The existing profile was always deleted.

- Implement functions TTree::GetMaximum and TTree::GetMinimum()
//________________________________________________________________________
//
//::>          VERSION  1.00/07   04/04/97 15.01.37
//
//
// 04/04/1997  08.54.11  by  Rene Brun
//
//
- Stamp beta version before leaving for CHEP97.

- Clean up several decks, replacing/deleting cout by printf.

- Implement the few changes necessary to run ROOT on MacLinux
    (thanks to Damir Buskulic, LAPP).
  Changes appear in RConfig for the definition of MKLINUX and Getline.

- Update TPostScript::Text to compute the text size in the same way
  as in TattText::Modify.
//
// 27/03/1997  18.44.52  by  by  Valery Fine(fine@vxcern.cern.ch)
//
- WIN32 multithreading:

  Bool_t TApplication::IsCmdThread() -  To check what thread we are running in
  Bool_t TApplicationImp::IsCmdThread()

  ProcesssLine                       -  checks IsCmdThread to implement synch/asynch call
                                        This allows under Windows NT to make sure the CINT
                                        is called within one thread only and avoid dead locks.
                                        All calls to ProcessLineAsych have been replaced to
                                        the "Normal" ProcessLine.

  TCint::ProcessLineSynch            -  a new function if one need very synch implementation
                                        of ProcessLine

  TApplication::ProcessFile          -  calls ProcessLineSynch to process the logon script

  TWin32Applcation                   -  clean up the multithread management

- Continue towards OpenGL:

  TGLKernelABC & TGLKernel  - two classes to implement the platform indepened part of
                              OpenGL, those defined via <GL/gl.h> and <GL/glu.h>
                              We need two classes to avoid the direct linking with
                              OpenGL library if is is not present of unwanted.

  TGLKernelABC *gGLKernel   - A new global variable pointing TGLKenrelABC class
                              with the empty implemetation of GL interface.
                              User of ROOT must load a DLL with a real implementation
                              of TGLKernel class to turn OpenGL on.

  TViewOpenGL               - new class is derived from TView to use OpenGL 3D view

  TGXW::CreateOpenGLContext(int wid) - to map/unmap the wid (pixmap or window) with

  TGXW::DeleteOpenGLContext(int wid)   the OpenGL context
                                       It is assumed the  TGXW::SelectWindow(int wid)
                                       makes the current OpenGL context for the selected wid

  TNode, TShape have been changed to gain an access to OpenGL implemetation via
  TGLKernelABC class

  TGXWOpenGL                - a new class to implement the platform specific part of OpenGL
                              (namely either glX... for X11 of wgl... for Win32 class).
                              It is used with TGWin32 implemenation of TGXW.
  Double_t* TRotMatrix::GetGLMatrix(Double_t *rGLMatrix);  - New method to convert this "ROOT"
                                                             matrix to the OpenGL [4x4]

  Double_t* TNode::MakeGLMatrix(Double_t *rmat, Double_t *rGLmat); - New method to convert this "ROOT"
                                                                     matrix to the OpenGL [4x4]
//
// 26/03/1997  09.26.53  by  Rene Brun
//
- Add a protection in TH1::PaintErrors (thanks W.Khorsh).
  log(xmin) was evaluated in case of linear scale.

- Walter Karig from GSI found the reason for the bug with ROOT terminal output
  on Digital Unix and AIX. The ioctl function works there not in the right way.
  With POSIX tcsetattr function (this was selected only for SGI Unix)
  ROOT terminal output is now ok!
//________________________________________________________________________
//
//::>          VERSION  1.00/06   23/03/97 19.32.02
//
//
// 23/03/1997  17.57.26  by  Rene Brun
//
- Modify TGraph::ExecuteEvent to accept an umlimited number of points.
  Previous version limited to 100 points.

- Merge with Fons's version. This includes:
    Cleanup of $TObject. IsaButton and IsaPad removed.
    Replace these two functions by IsA()->InheritsFrom("TButton"), etc.

- New rootcint and makecint processing correctly enums.
  TProfile uses now default Streamer (with enums).

- Add option SOURCE in all installation procedures.
  if CMZ option SOURCE is selected, only source files will be written
  and no files compiled or libraries created.

- Modify macro install to also call a new macro install_others.
  The install_others macro install all source files not specific
  to the current selected operating system.
  This makes sure that the root/src directory contains identical source
  files for all systems.

- Modify bind_root_winnt to also reference Root_Win32.lib. This change
  was required by the move of InitGui from Rint to Win32.

- Replace all +IF,MotifDict by CPP direcrives in INCMOTIF and MOTIF.

- Move includes from patches Unix, WinNT and MAC to patch include.
  Modify BASE/Root to remove IF=WIN32 or MAC or UNIX.
  Use CPP instead.

- Create 3 new decks MOTIF/InitGuiMotif, Win32/InitGuiWin32 and MAC/InitGuiMac.
  These 3 decks are copies of the old RINT/InitGui now deleted.
  All 3 decks include a function called InitGui.

- Modify StopWatch. Remove +IF=.

- In TFormula::Analyze change two statements with a test of a substring
  against one single character 'a' to a string "a". TString class should
  be checked to understand why TFormula was crashing on Windows95 and
  not on Windows/NT ?

- Optimize TGaxis::PaintAxis for a better position of the axis labels
  in case of non horizontal or vertical axes (legos).

- Modify the TLego class to take into account TH1::SetMaximum.

- Modify install_cint for Windows/NT (MAKEINFO).

- Add IF=DRAFT to deck ObjectView in patch WinNT. (two functions missing).

- Protect DrawPanelHist and Fitpanel in case the referenced object
  is not an histogram.

- Modify TH1::PaintLego to better set the label offset for the Z axis.

//________________________________________________________________________
//
//::>          VERSION  1.00/05   21/03/97 18.51.31
//
//
// 21/03/1997  11.37.02  by  Rene Brun
//
- Mods in TF1 and TF2. New data members fMinimum and fMaximum.
  Better mapping of color table in case of logz scale.

- Modify TPad::Clear to delete the TFrame.

- Change default value for TAttAxis::fLabelSize from 0.04 to 0.05.

- Modify TH1::PaintInit to compute the Maximum scale after the Minimum.

- Modify TGaxis::PaintAxis to draw the x10 text at a better place.

- Modify all installation procedures to generate *.cxx files instead of *.C.
  Many classes referencing *.C files modified accordingly.

- Modify test macros eventa and eventb to reflect the new convention
  to set branch addresses.

- Change in TProfile::Fill (cast to Stat_t) to avoid a problem
  when compiling on HP pa7200 based machines.

- Modify all TLeaf classes to support the case of fixed length arrays.

- Modified TCollection::Write to also support the option
  to write only 1 key for the full collection instead of 1 key
  per element of the collection.
  If you have a list (TList, TObjArray, etc) list, you can:
   list->Write(); // by default wite one key per element
   list->Write("name",1); write only one key with name="name"

- Fix a problem in rootcint in case of an array of objects.
//________________________________________________________________________
//
//::>          VERSION  1.00/04   17/03/97 19.15.44
//
// 17/03/1997  08.31.54  by  Rene Brun
//
- Merge with latest version from Masa.

- Mods by Fons in TButton, TFitPanel, TDrawPanel to avoid flashing.

- Implement new class TLeafC called by TBranch for char* types.

- Modify h2root to process columns with chars.
//________________________________________________________________________
//
//::>          VERSION  1.00/03   16/03/97 18.11.08
//
- Modify Makefile for Solaris and SolarisPC to add -lgen -lsocket.

- Merge with Fons version with a few fixes in TButton and TCanvas
  to avoid flashing when DrawPanel or FitPanel are active.

- New version of CINT including fix from Masa in var (solves problem
  with macro Fitfunc when execited in a loop.
//
// 15/03/1997  10.19.38  by  Rene Brun
//
- Modify test/Makefile to circumvent bugs in DEC/Alpha CXX linker.

- Changes by Masa in $G__ci and in pragma to bypass a security check
  problem on 64 bit machines.

- Changes in UnixSystem to introduce +SEQ,G_ci instead of include
  and to introduce ALPHACXX cpp flag.

- Corresponding changes in GLOBALS.
//________________________________________________________________________
//
//::>          VERSION  1.00/02   14/03/97 12.59.25
//
//
// 14/03/1997  12.37.30  by  Rene Brun
//
- Remove limitation to 255 characters in TFormula::Analyze.

- Protect histogram title in TTree::Draw in case of very long selection
  expressions.

- Activate code in TGraph::Fit to call interpreted functions.

- Merge with Fons's version.
  This new version includes a new version of CINT from Masa.
  Several changes in class TMethodCall

- Changes in TF1 and TH1 to implement the new TMethodCall facility.
  TF1 destructor and copy constructor take care of fMethodCall.

- Changes in TTree and TTreeFormula to allow queries of the type:
   nt.Draw("px[1]") where px[1] is an element of array px.

- Correct bug in string handling in TMinuit::mncrck called by mncont.

- Optimize PostScript page layout. If canvas is horizontal, Postscript
  Landscape is selected. If canvas is vertical, Portrait mode is selected.

- Changes in TAttText::Modify. The text size in pixels is now computed
  taking into account the smaller scale between the X and Y of the canvas.
  The previous algorithm was considering only the vertical axis.
  So the new meaning of the parameter textsize in SetTextSize(textsize) is:
   The textsize in pixels (say charheight) will be:
      charheight = textsize*canvas_height if current pad is horizontal.
      charheight = textsize*canvas_width  if current pad is vertical.

- Changes in TH1::PaintErrors. Symbols outside the current pad frame
  are clipped by default.

- Implement possibility to zoom in/out using the slider in DrawPanel.

- Implement new member functions TAxis::SetRange, GetFirst and GetLast.
  TAxis::SetRange(int first, int last) can be used to specify a bin range.
  Default range is [1,nbins].
  The axis range is taken into account during the Draw and Fit operations.

- Modify the FitPanel to take into account current histogram range.

- Implement new function TAttAxis::SavePrimitive.

- Changes in TH1::SavePrimitive to also save the axis attributes.

- Include new version of TBrowser from Nenad.
//
// 12/03/1997  19.46.27  by  Fons Rademakers
//
- TSystem, TUnixSystem: new function IgnoreInterrupt(ignore). If ignore==kTRUE
  SIGINT is ignored (ctlr-c), ignore=kFALSE returns to the previous sighandler.
  This function should be used just before and after critical methods like
  writing to disk.

- TMonitor: new Select(Long_t timeout). Returns -1 in case timer times out
  before activity on the monitored sockets.
//
// 12/03/1997  12.31.35  by  Fons Rademakers
//
- TDirectory: syntax for path description for function cd() extended.
  The path can now contain a file name and the .. symbol to go one
  level up. E.g.: "file.root:/aa/bb" or "../../cc" work as expected.

- TDirectory: new global (i.e. static) function Cd() with the same
  syntax as cd() (see above). Cd() starts always relatively from
  gDirectory in case of a relative path.

- TDirectory: new member functions GetPath() and pwd(). GetPath() returns
  the path to this directory and pwd() prints this path.

- TFile: handles shell meta characters in file names, like ~ $ .., etc.

- TApplication: ProcessLine() handles shell meta characters in macro names,
  like: .x ~/mac.C or .x $ROOTSYS/mac2.C.

- TDataType: also store basic types as identity typedefs: typedef int int.
  This info is added when creating the list of types in TROOT::GetListOfTypes().
//
// 05/03/1997  18.01.20  by  Rene Brun
//
- Modify class TStyle. Move function GetColorPalette to implementation.
  Implement a circular algorithm in case the color index is greater
  than the number of colors.

- Redesign the color algorithm for contours, legos and surfaces.
  Take into account user defined contour levels.
  Use gStyle->GetColorPalette

- Modify TLego::SetColorFunction to start numbering colors at 0.
//________________________________________________________________________
//
//::>          VERSION  1.00/01   05/03/97 09.10.38
//
//
- Merge with Fons version. More error (CRTL/C) protections
  in parallel version.

- Log scales working again.

// 03/03/1997  11.14.11  by  Rene Brun
//
- Merge with Fons and Nenad's versions.

- First serious attempt to improve performance for I/O for Trees.
  With these changes, ROOT is now always faster than PAW to process ntuples.
//
// 27/02/1997  10.50.43  by  Fons Rademakers
//
- TFile: added global and per file read and write byte counters.
  TFile::GetBytesRead(), TFile::GetBytesWritten(), TFile::GetFileBytesRead()
  and TFile::GetFileBytesWritten(). Also changed Read(char *, int) to
  ReadBuffer(char *, int) (to be consistent with WriteBuffer(const char *, int).

- TSocket: added global and per socket sent and receive byte counters.
  TSocket::GetBytesSent(), TSocket::GetBytesRecv(),
  TSocket::GetSocketBytesSent() and TSocket::GetSocketBytesRecv().

- TSystem, TUnixSystem: added interface to syslog.h logging facility (used
  bye the PROOF server.

- rootcint: use unique symbols in the generated functions in order to reduce
  any possible clashes with class members. The string "R__" is used and
  NO user class should have member variables starting with this string.
//________________________________________________________________________
//
//::>          VERSION  1.00/00   21/02/97 17.52.52
//
//
// 19/02/1997  13.09.34  by  Fons Rademakers
//
- Started the implementation of the PROOF system. Using PROOF one can
  analyze trees in parallel on a cluster of computers. The PROOF system
  consists of the proofd from-end program which is started via inetd.
  Proofd takes care of user authentication and overlays itself then
  with the desired version of the proofserv executable. The proofserv
  is a basically the same as the ROOT interactive module except that
  it reads its commands from a socket instead of from the terminal.
  Since it is a remote server it will not do graphics and therefore
  is not linked with any graphics libraries (Motif/X11, etc.).

  Setting up a PROOF system (currently) requires that all machines in
  the cluster share each others disks via NFS. Also the user must run
  the interactive ROOT session on the cluster (i.e. his home directory
  must be accessable on all nodes in the cluster via the same pathname).

  Each node in the cluster needs the following lines in the /etc/services file:

    proofserv  349/tcp
    proofslave 359/tcp

  And in the /etc/inetd.conf file:

    proofserv stream tcp nowait root /usr/proof/bin/proofd proofserv /usr/proof
    proofslave stream tcp nowait root /usr/proof/bin/proofd proofslave /usr/proof

  Also each node must have a link to a directory called /usr/proof (or to
  whatever directory is specified on the two lines for inetd.conf). This
  /usr/proof directory must contain:

    bin/proofd
    bin/proofserv.970213
    etc/proof.conf
    lib/*.so   (all ROOT shared libraries)

  The file proof.conf describes the PROOF cluster and has the following format:

    # PROOF config file. It has a very simple format
    #
    # node <hostname> [perfindex]
    # slave <hostname> [perfindex]
    # user <username> on <hostname>
    #
    # For each node in the cluster add a "node" line.
    # For each node in the cluster that can run a slave server add a "slave" line.
    # Perfindex is a number between 0-200, with a PPro 200 being 40. The
    # perfindex is used for load balancing.
    #
    # Users can be redirected to have their master server run on a predetermined
    # node. For that use the "user" line.
    #

    node pcna49a

    slave pcna49a
    slave pcna49b
    slave pcna49c
    slave pcna49d
    slave pcna49e

    user rdm on pcna49d

  Note that all lines must start column 1. For the time being forget about
  the "node" and "user" lines (will be used later). When starting PROOF
  the system will look for the config file in following places, in order
  of preference:

    ./.proof.conf
    ~/.proof.conf
    /usr/proof/etc/proof.conf

  The possiblity to customize the cluster might be dis-abled in case one
  wants to run a general PROOF service where one generally does not want
  that each user uses his own configuration.

  To start a PROOF session type:

    TProof *p = new TProof("proof")

- New program rootd. The PROOF frontend (see above). Use install_proofd
  to build it.

- New program proofserv. The PROOF server proper. Use install_proofserv
  to build it.

- New class TProofServ. This class inherits from TApplication provides
  the proofserv application environment.

- Restructured the shared library layout. It is now possible to link programs
  that don't need graphics (batch jobs) without the ROOT low level and
  devices dependent graphics libraries:
    libGpad.so
    libMotif.so
    libGX11.so
    libWidgets.so
    libX3d.so
  and without all Motif and X11 related libraries.

- All ROOT batch test programs now link and run fine without the graphics
  libraries.

- Global edit to change the name of TROOT::GetListOfClass() to
  TROOT::GetListOfClasses(). Better late then never.

- TBrowser: force load list of global functions before starting.

- Fixed bug in TCanvas that caused a crash in X11 in case the canvas
  title contained a "." (the title was used to created a X resource string
  and the . was not really appreciated).

- TGraph: can now get access to the x and y-axis via GetXaxis() and GetYaxis().
  No need anymore to go via GetHistogram().

- All interpreter interface classes (meta classes) are now in library
  libMeta.so.

- New class TFunction. TFunction describes a global function as known via
  the interpreter. TROOT::GetListOfGlobalFunctions(kTRUE) returns a list
  of all currently known global functions.

//
// 19/02/1997  11.56.41  by  Rene Brun
//
- Implement TGraph::Streamer and TGraphErrors::Streamer.
  Modify TGraph and TGraphErrors constructors to remove parameter option.
  With this change, TGraph and TGraphErrors objects can now be saved on a ROOT file.

- Modify many classes to add the const specifier in functions
  with a Text_t parameter.

- Create new Directory META. This new directory contain all the
  ROOT Meta classes; TClass, TMethod,etc.
  New macro cint_meta.
  Corresponding classes moved from BASE to META or RINT to META.

- Important change in TTree::Branch for case with a TBranchObject.
  An additional parameter is specified to provide the address of the pointer
  to the object (instead of the pointer to the object).
  This change makes easier the definition of a Tree. Classes TBranchObject
  and TLeafObject modified accordingly.
  Test program Event and MainEvent modified.

- Introduce new TBrowser from Nenad. This supports new icons.
//
// 13/02/1997  16.45.02  by  Rene Brun
//
- Correct TPad::Print and TPostScript::Initialize. (EPS workstation
  should be 113 and not -113)
//
// 12/02/1997  16.34.29  by  Rene Brun
//
- Implement TF1::SetParLimits and TF1::GetParLimits.
  New data members fParMin and fParMax in class TF1.
  Several member functions modified to take into account the new members.

- Modify TH1::Fit to activate the option "B" to fit with bounded parameters.
//________________________________________________________________________
//
//
// 11/02/1997  09.05.05  by  Rene Brun
//
- Merge with Nenad's version.
  This version includes changes in $Rtypes (new macro ClassImpIcon).
  Many changes in TMotifBrowser to support user defined icons in the
  class implementation.
  Only histogram classes define icons currently.

- New class TEventList.
  A TEventList object is a list of selected events (entries) in a TTree
  Use function Enter to enter an element in the list
  The function Add may be used to merge two lists.
  The function Subtract may be used to subtract two lists.
   Operators + and - correspond to functions Add and Subtract.
   A TEventList object can be saved on a file via the Write function.

- New class TChainElement describing a TChain element.

- Class TTree has an additional data member fPackets, a string describing
  which slave processor has processed a given packet in the parallel version.

- Implement picking for all 3-D primitives including geometry shapes.
  For polylines, the sensitive area is the region around the polyline.
  For polymarkers, it is the area around any point.
  For the geometry shapes, it is one the vertex points as computed
  by the shape SetPoints member function.

- TNode derives from TAttLine and TAttFill.
  Shapes attributes are copied to node attributes when a node is created.
  Node attributes are copied to shape attributes when a node is paint.
//
// 08/02/1997  14.23.57  by  Rene Brun
//
- Changes and new functionality in TDirectory::cd and TDirectory::Get.
  One can now give a parameter to the cd function. This parameter is the path
  where to cd within a file.
  In the same way, one can give a full path name for the Get function.
  Note that TDirectory::Get always read an object into the associated
  memory directory and not in the current directory.

- New class TChain derived from TTree.  A chain of trees or chains.                                          //
  Enter a new element in the chain via the TChain::Add function.
  Once a chain is defined, one can use the normal TTree functions
  to Draw,Scan,etc.
  Use TChain::SetBranchStatus to activate one or more branches for all
  the trees in the chain.

- New class TSelector.
  A TSelector object is used by the TTree::Draw, TTree::Scan,
  TTree::Loop to navigate in a TTree and make selections.
  The following members functions are called by the TTree functions.
    Init:      to initialize the selector
    Start:     called everytime a loop on the tree starts.
               a convenient place to create your histograms.
    Finish:    called at the end of a loop on a TTree.
               a convenient place to draw/fit your histograms.
    BeginFile: called when a TChain is processed at the begining of
               of a new file.
    EndFile:   called when a TChain is processed at the end of a file.                                         //
    Execute:   called for each selected event.

- New member function TTree::SetBranchStatus to enable/disable reading
  one or all branches.

- New member function TTree::Loop.
  In case of a Tree, Loop iterates over all events of the Tree.
  In case of a chain, iterates over all files/trees in the chain and for each
  tree, iterates over all events.

- Changes in TLeafObject. Protection in case fObjAddress is not null.

- TTree::Clean renamed to TTree::ClearFormula.

- Protect TBranchObject::Browse to do nothing in case a BranchObject
  is double-clicked in the browser.

- New menu option "Histogram title" in the canvas Option menu.
  Corresponding changes in TMotifCanvas and TWin32Canvas.
  TH1::PaintTitle deletes an existing title when option is disabled.

- Installation procedure under Windows restructured.
  new macros bind_root_winnt and bind_root_winnt.
  VisualC++ is now the default option. Select SYMANTEC option.

- New member function TGXW::Init, TGX11::Init, TGWIN32::Init.
  This function is used to support the batch option under Windows.

- Changes in test program MainEvent and in Event.

- Optimisation in TClonesArray::Streamer. Do not save empty pointers
  at the end of the list.
//________________________________________________________________________
//
// 01/02/1997  12.14.34  by  Rene Brun
//
- Remove all references to WinNTVisualC++. This is now the default
  under WinNT. To install with SYMANTEC, you must SELECT SYMANTEC
  in cmzlogon.kumac.

- Optimize TBranch::Fill to optimize the time when the branch basket
  must be written to the file.

- Change parameter kMAXFILEBUFFER in TKey from 32768 to 262144.

- Small changes in test/MainEvent.
//
//________________________________________________________________________
//
//           31/01/97 14.49.17
//
- Fix a problem in rootcint. A problem could occur when the name
  of the output file had 10 characters exactly (strlen -> strlen+1).

- Edit test/Makefile for Unix systems.
  Create a new deck test/MakefileWIN32.
  Modify install_test accordingly.

- Modify TTree::Draw to add the selection string in the title of the plotted
  histogram.

- Fix a bug in TGraph::Fit. The estimation of the initial values
  of parameters was wrong in case of polynomial fits (pol0 and pol1).
  (thanks to Nick).

- Implement TGraph::Print and TGraphErrors::Print.

//
// 29/01/1997  07.58.38  by  Rene Brun
//
- Changes in TLeafObject::ReadBasket.
  The previous object (if any) is not deleted anymore.
  This is the user responsability.
  Macros eventa and eventb modified accordingly.
//
// 28/01/97  22.31.08  by  Fons Rademakers
//
- TFile: switched from buffered ifstream and ofstream to unbuffered
  Posix open(), read(), write(), lseek() and fsync(). Since ROOT buffers
  all I/O there is no need for the buffering of the stream library.

- TBuffer: optimized the byteswapping routines.
//
// 24/01/1997  18.40.50  by  Rene Brun
//
- Fix problem in TTree::EventLoop.
  test if(!ndata) changed to if(!ndata && fMultiplicity).

- Merge with new Nenad version including:
  New version of TMotifBrowser, IconBox.

- Merge with Fons version including an optimized version of TBuffer.
  The old bytefromto converted to frombuf and tobuf.
  Big performance improvement on byte-swapping machines.
//
// 24/01/1997  08.56.01  by  Rene Brun
//
- Fix a bug in h2root. Setting minimum or maximum was wrong.
  Copy underflows and overflows bin contents.
//
// 23/01/1997  10.34.20  by  Rene Brun
//
- Implement new member functions in class TStyle:
  TStyle::SetPaperSize to set the PostScript paper size in cm
  TStyle::GetPaperSize to return this size
  New data members fPaperSizeX and fPaperSizeY.

- Changes in TPostScript::Range to reset the members fXsize and fYsize.

- Changes in TPad::Print to support PostScript Landscape mode.
  The choice between Portrait and Landscape mode is automatic when printing
  a canvas. If the canvas is horizontal, Landscape mode is selected.
  If the canvas is vertical, Portrait mode is selected.
  If the Print function is called from a macro or program, the mode can be
  specified in the second parameter.
    Example: mycanvas->Print("myfile.ps","Portrait");
  The PostScript paper size can be specified via:
     gStyle->SetPaperSize(xsize,ysize).
//
// 22/01/1997  19.01.40  by  Rene Brun
//
- Fix a bug in TTree::EventLoop. When a branch with variable length array
 was histogrammed and if the branch count was 0, the histogram was filled.

- Remove the deletion of the TClonesArray in TBranchClones destructor.
  Deleting this array is the task of the user (he created it!).

- Delete branches of a TBranchObject in the TBranchObject destructor.

- Removed deletion of fBuffer in TKey destructor. fBuffer must already be
  empty at this point.
//
// 21/01/1997  16.43.02  by  Rene Brun
//
- Modify macro eventa in directory test.
  Create the object event outside the loop.

- Add new member function TTree::MakeCode.
  This function generates the skeleton analysis code for a Tree.
//
// 20/01/1997  15.42.00  by  Rene Brun
//
- Add one member function THtml::GetIcon.
  Protections introduced in the THtml class.

- Implement call to TIcon in TMotifBrowser.

- Change TTree::TTree to set fMaxVirtualSize to the corresponding argument value.
  Do not set it to 64000000 in case maxvirtualsize is 0.

- New classes TWebFile and TURL (see class description).

- $TDirectory, $TFile and $TSortable modified. (Introduce const for some
  arguments in constructors).

- Activate the code in TTree::Branch and TBranchClones::TBranchClones
  to create leafs of type TLeafB when a data member of type Char_t or UChar_t
  is specified.

- Changes in class TLeafB to implement the Import and Export functions.

- Implement the operators +, *, + and - for all histogram classes.
  $TH1, $TH2, $TH3 includes modified and also decks h1, h2 and h3.

- Fix a problem in CINT/Pause to support .x macro.C > macro.log

- Small changes in tutorials archi, first and second.

- Correct a typo in TFormula constructor: gaus(0) instead of gaus(1).

- Split the test program Event into MainEvent and Event. This change
  was required to build the libEvent.dll fiel under Windows/NT.
  As a consequence the install_test and Makefile changed accordingly.

- The macros bind_dll, bind_root, globals, insatll_root, install_rootcint
  modified to be more symetric between Unix and Windows.

- Small change in class TWinNtSystem.
