//*CMZ :  0.90/08 02/12/96  12.02.58  by  Rene Brun
//*-- Author :    Rene Brun   03/04/96
{
  gROOT->Reset();
  TCanvas *c = 0;
  c = (TCanvas*)gROOT->FindObject("c1"); if (c) c->Delete(); c = 0;
  c = (TCanvas*)gROOT->FindObject("c2"); if (c) c->Delete(); c = 0;
  c = (TCanvas*)gROOT->FindObject("ntuple"); if (c) c->Delete(); c = 0;
  c = (TCanvas*)gROOT->FindObject("tornadoCanvas"); if (c) c->Delete(); c = 0;
}
