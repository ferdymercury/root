//*CMZ :  0.90/05 19/11/96  16.50.37  by  Rene Brun
//*-- Author :    Rene Brun   17/07/96
{
//   Before executing this macro, the file makegeometry.C must have been executed
//
   gBenchmark->Start("geometry");
   TFile na("na49.root","RECREATE");
   TGeometry *n49 =(TGeometry*)gROOT->FindObject("na49");
   n49->Write();
   na.Write();
   na.Close();
   gBenchmark->Show("geometry");
   gROOT->Reset();
}
