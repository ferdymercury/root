//*CMZ :  2.20/05 14/12/98  17.43.16  by  Rene Brun
//*-- Author :    Rene Brun   14/12/98
{
// macro generating the Root class categories inheritance trees

   gROOT->Reset();
   TClassTree ct("Class Tree");

   //base classes
   ct.SetClasses("*TDirectory:*TCollection:TFree:TIter*:TObjLink:TStorage:*TKey:*TEnv:*TSystem:TSystem*:*TStopwatch:TDatime:TTim*TBenchmark*TRandom:TMath:TObjectTable:TStrin*");
   ct.Print("html/gif/classcat_base.gif");
   ct.Print("html/ps/classcat_base.ps");

   //container classes
   ct.SetClasses("*TDirectory:*TCollection:TFree:TIter*:TObjLink:TStorage:*TKey:TObjectTable");
   ct.Print("html/gif/classcat_container.gif");
   ct.Print("html/ps/classcat_container.ps");

   //histogram and minimisation classes
   ct.SetClasses("*TH1:*TFormula:TMinuit:TAxis");
   ct.Print("html/gif/classcat_hist.gif");
   ct.Print("html/ps/classcat_hist.ps");

   //tree classes
   ct.SetClasses("*TTree:*TBranch:*TLeaf:*TKey:*TDirectory:TCut*:TEventList:TChain*");
   ct.Print("html/gif/classcat_tree.gif");
   ct.Print("html/ps/classcat_tree.ps");

   //2-d graphics classes
   ct.SetClasses("*TBox:TStyle:*TGXW:TGaxis:*TText:TPostScript:*TFormula:TColor:*TEllipse:*TLine:*TMarker:*TGraph:TPoly*");
   ct.Print("html/gif/classcat_graf2d.gif");
   ct.Print("html/ps/classcat_graf2d.ps");

   //3-d graphics classes
   ct.SetClasses("*TShape:*TNode:TGeometry:TLego:TView:TPoly*:TRotMatrix:*TMaterial");
   ct.Print("html/gif/classcat_graf3d.gif");
   ct.Print("html/ps/classcat_graf3d.ps");

   //GUI classes
   ct.SetClasses("*TGFrame");
   ct.Print("html/gif/classcat_gui.gif");
   ct.Print("html/ps/classcat_gui.ps");

   //Browser, viewer, inspector classes
   ct.SetClasses("*TBrowser:TTreeViewer:TClassTree");
   ct.Print("html/gif/classcat_browse.gif");
   ct.Print("html/ps/classcat_browse.ps");

   //meta classes
   ct.SetClasses("*TDictionary:TTogg*:*TCint:TMethodCall:*TInterpreter:TClassTable:TObjectTable");
   ct.Print("html/gif/classcat_meta.gif");
   ct.Print("html/ps/classcat_meta.ps");

   //net classes
   ct.SetClasses("TInetAddress:*TSocket:*TBuffer:*TMonitor:*TUrl:TNetFile:TWebFile");
   ct.Print("html/gif/classcat_net.gif");
   ct.Print("html/ps/classcat_net.ps");

   //linear algebra and matrix classes
   ct.SetClasses("TMatr*:TLazymatrix:*TVector");
   ct.Print("html/gif/classcat_linalgebra.gif");
   ct.Print("html/ps/classcat_linalgebra.ps");

}
