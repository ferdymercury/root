//*CMZ :  2.23/12 26/01/2000  16.14.05  by  Valery Fine(fine@bnl.gov)
//*-- Author :
{
  // Create TVolume object from TNode one
  gSystem->Load("Root_STAR");
  TFile na("$ROOTSYS/tutorials/na49.root");
  TGeometry *n49 =(TGeometry*)gROOT->FindObject("na49");
  TVolume n49Volumes(*(n49->GetNode("CAVE1")));
  new TBrowser("na49",&n49Volumes);
  n49Volumes.Draw();
}
