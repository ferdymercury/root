//*CMZ :  2.24/05 08/05/2000  16.25.51  by  Valery Fine(fine@bnl.gov)
//*-- Author :    Valery Fine(fine@bnl.gov)   05/05/2000
{
#include "iostream.h"
   TStopwatch watch;

   Bool_t NT=kFALSE;
   if (strcmp(gSystem.GetName(),"WinNT") == 0 ) NT=kTRUE;
   if (NT) gSystem->Load("ROOT_STAR");
   else  gSystem->Load("libSTAR");

   printf("\n The share library has been loaded: ");
   watch.Print(); watch->Start(); printf("\n");
   TFile *f = TFile::Open("http://www.star.bnl.gov/~fine/atlas.root");
//   TFile *f = TFile::Open("atlas.root");
   ATLS->ls();
   printf(" The geometry file has been picked: ");
   watch.Print(); watch->Start(); printf("\n");
   // We will not go  beoynd the 5-th level of the source structure
   const Int_t maxDepth = 5; //6
   TDataSetIter nextVolume((TDataSet *)ATLS,maxDepth);
   TVolume *volume = 0;
   Int_t viCounter = 0;
   Int_t nonCounter = 0;
   Int_t dep = -1;
   Int_t skipLevel = 1;
   EDataSetPass mode = 0; // kContinue;
   while (volume = (TVolume *)nextVolume() ) {
     dep = nextVolume.GetDepth();
     if (dep => skipLevel ) {
        volume->Mark();
        if (!strcmp(volume->GetName(),"MUC1")) volume->SetVisibility(11);
        else volume->SetVisibility(0);
        viCounter++;
        if (!(viCounter%50000)) printf(" vis: vol. # %d / level %d \n", viCounter, dep);
     } else {
        volume->UnMark();
        nonCounter++;
        volume->SetVisibility(2);
     }
   }
   printf(" visiable = %d, unvisible = %d ", viCounter, nonCounter);

   watch.Print(); watch->Start(); printf("\n");
   const Int_t level2Convert = 4;
   TVolumeView view(*ATLS,level2Convert);
   watch.Print(); watch->Start();

   TCanvas *atCanv = new TCanvas("atlas1st","1-st layer Atlas view",600,600);
   atCanv->Divide(2,2);
   Int_t padCnt = 0;

   atCanv->cd(++padCnt);
   view.Draw("1,1");
   gPad->Update();
   printf(" first layer: ");
   watch.Print(); watch->Start(); printf("\n");

   atCanv->cd(++padCnt);
   view.Draw("2:2");
   gPad->GetView()->Top();
   printf(" second layer: ");
   watch.Print(); watch->Start();

   atCanv->cd(++padCnt);
   view.Draw("3,3");
   gPad->Update();
   printf(" Third layer: ");
   watch.Print(); watch->Start(); printf("\n");

   watch.Print(); watch->Start();
   atCanv->cd(++padCnt);
   view.Draw("1-2");
   gPad->Update();
   printf(" First + Second layers: ");
   watch.Print(); watch->Start(); printf("\n");

   printf(" Adding rulers and changing backgrounds\n");
   for (Int_t ii=1;ii<=4;ii++){
     atCanv->cd(ii);
     gPad->SetFillColor(kBlack);
     TAxis3D::ToggleRulers(gPad);
     gPad->Modified();
     gPad->Update();
   }
   watch.Print(); watch->Start(); printf("\n");
}
