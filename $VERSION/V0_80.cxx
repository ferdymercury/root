//*CMZ :  0.80/03 01/09/96  14.20.18  by  Rene Brun
//*-- Author :    Rene Brun   14/08/96
//________________________________________________________________________
//
//::>          VERSION  0.80/03   01/09/96 14.20.18
//
// 01/09/96 14.20.18 by  Rene Brun
//
- The new RootCint compiler has been introduced. RootCint replaces both
  the old DICT compiler and the CINT compiler.
  RootCint is a special version of CINT adapted to Root. It can generate
  the new Streamer and ShowMembers member functions for the compiled classes.

- The CINT source code has been moved to the root.cmz file in the following
  subdirectories:
    - cint  : with the original cint/src files
            : with the cint/main files
    - incint: with the CINT include files (copy of cint/src/*.h)
    - cintinclude: with the RunTime header files required by CINT.

- A new macro ImportCint in $KUMACS imports a new version of CINT from
  Masa Goto original CINT source files. Running this macro deletes all decks
  in directories cint, incint and cintinclude before importing the new code.

- A new macro CintSetup in $KUMACS sets the compiler directives for the
  various platforms.

- The macro Install in $KUMACS has been rewritten to also install CINT
  in addition to the standard ROOT files.

- The old DICT compiler has been deleted.

- RootCint generates two new class member functions: Streamer and ShowMembers.
  Streamer replaces the old functions FillBuffer, ReadBuffer and Sizeof.
  ShowMembers is used by TObject::Inspect and TObject::Dump to get access
  to class private data members. This function when called from an object
  will traverse recursively all the subobjects of an object where the exact
  addresses of the data members are known.

- Dynamic loading from external shared libraries has been implemented
  on all supported Unix platforms.

- The previous member functions  FillBuffer, ReadBuffer and Sizeof have been
  deleted from all the ROOT classes.
  All ROOT I/O including Ntuples and trees is now going via the Streamer
  mechanism.

- ROOT include files have been renamed. The name of the include is now
  the class name itself. For example H1.h has been renamed to TH1.h.
  Are still kept with the same name Htypes.h, Gtypes.h.
  Rconfig.h has been renamed TConfig.h.

- Many changes in the THtml class to take advantage of the new information
  provided by CINT.

- The class THProfile has been renamed to TProfile.

- The old Editor classes and EditButtons have been deleted.

- New classes TAttLineCanvas, TAttFillCanvas, TAttTextCanvas and TAttMarkerCanvas.
  These classes are used by the new graphics editor to edit graphical object
  attributes.

- A new graphics editor is introduced.
  To get the editor, select the item "Editor" in the "File" menu.
  The Editor shows a controlbar to draw new primitives (lines, text, pads,
  diamonds, arcs, ellipses, Paves, PaveText,etc).

- Many functions have been removed from the list of items in the pop-up
  context menus and replaced by new SetAttributes functions.
  In particular:
    - SetLineAttributes shows a line attribute editor panel
    - SetFillAttributes shows a fill attribute editor panel
    - SetTextAttributes shows a text attribute editor panel
    - SetMarkerAttributes shows a marker attribute editor panel
  For example, to change the line attributes of an object, select the object
  clicking on the right mouse button and select the item SetLineAttributes.
  This will show the line editor panel. Select a combination of attributes,
  color, line style and width, then click on button APPLY. Once an object
  has been selected, one can APPLY different combinations of attributes to it.

  The new graphics editor supports many more interactive manipilations.
  For example, text can be moved, resized and rotated with the mouse.

- New class TDiamond to draw a diamond shape.

- New options in the "File" menu:
    - SaveAs canvas.C  generates a C++ macro with all the statements
      necessary to reproduce this canvas. For example if your canvas
      is named c1, selecting this option will generate a file c1.C.
      You can then execute the Root interactive command .x c1.C.
      This is a very powerful option to be used in conjunction with the graphics
      editor.
    - SaveAs canvas.ps generates a Postscript version of the canvas.
    - SaveAs canvas.eps generates an Encapsulated Postscript version of the canvas.
    - SaveAs canvas.gif generates a GIF version of the canvas.

- New class TBrowser: a general object browser.

- New class TSystemFile to describe a system file for the new Browser.
- New class TFileType associated to TSystemFile. gROOT has a list of know
  file types.

- Many changes and improvements in class TContextMenu.

- When creating a canvas, if a previous canvas with the same name exists,
  its is deleted.

- Most standard Tutorials have been modified to reflect the new functionality.

- Besides the new ShowMembers function, rootcint generates a new static function
  called class::NewObject used to make an instance of a class object.
  The include $Rconfig has been modified to generate the function prototype
  for NewObject.

- TClass::New has been rewritten to invoke the new class::NewObject function
  instead of the old logic going via GetMethod.

- TKey::Read as well as several collection classes ReadBuffer functions modified
  to invoke the new NEwObject function instead of the old logic via GetCallback().

- Many changes in class TDataMember due to the above mods.

- The function TClass::BuildRealData has been totally rewritten to make use
  of the new function class::ShowMembers. The final composed name of each data
  member is stored in the TRealData object.

- Functions TObject::Dump and TObject::Inspect have been rewritten to use
  the new class::ShowMembers info.

- Changes in classes BranchClones, LeafClass, Tree and TreeFormula to take
  into accound the new Realdata info.

- New function TVirtualPad::SetSelected. This function can be called from
  the DistancetoPrimitive functions to force the selection of a subobject of
  an object. For example, this new function is called from the TH1::DistancetoPrimitive
  to select axis or a fitted function or a user added object in the histogram
  list (see below).

- New function TF1::DistancetoPrimitive.

- New function TView::GetDistancetoAxis used by TH1::DistancetoPrimitive
  to evaluate the distance to a given axis.

- Deep changes in the class TAxis. This class inherits now from TNamed and hence
  from TObject. This change allows the usual object->DistancetoPrimitive
  to be easily implemented.

- TLine::DistancetoPrimitive has been modified to fix a small problem in case
  of vertical or horizontal lines.

- Several changes in the TH1 class. TH1::DistancetoPrimitive has been
  extensively modified to allow picking of the histogram/lego axes
  as well as the fitted functions.
  With this change, one can now edit the axes attributes using the pop-up
  menu and also the fitted function attributes.

- Implement TAxis::DistancetoPrimitive and TAxis::ExecuteEvent functions.

- global gMinuit made visible from CINT in macro cint_minuit.

- In class TMinuit, change the convention fron numbering parameters from
  1->npar  to 0->npar-1 to be consistent with ROOT/C/C++ conventions.

- In TAttText::Modify change the GXW angle only when necessary. Fixes also
  a problem under WIN32: Y axis titles were not drawn parallel to the Y axis.

- Change algorithm in TH1::PaintErrors. In the previous version, the size of
  the marker size was a function of the pad size. It is not anymore.

- Split cint_base into cint_base and cint_cont.

- Delete function TNamed::Read

- Implement new function TObject::Read.
  This new function does not require the ROOT dictionary.

- Modify TObject::Write(Option_t *option) to TObject::Write(const char*name).
  With this change, one can write any object derived from TObject and specify
  the name of the key = name.
  The previous implementation of TObject::Write assumed that the object
  was derived from TNamed.

- Modify TDirectory::Write in the foreach loop.

- New function TKey::Read(TObject *obj) called by TObject::Read.

- Modify references to gif and html files to allow for relative names.
//
