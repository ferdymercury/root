//*CMZ :  0.90/01 18/10/96  18.42.33  by  Rene Brun
//*-- Author :    Rene Brun   18/10/96
{
//   example of macro to read data from an ascii file and
//   create a root file with an histogram and an ntuple.

   gROOT->Reset();

   FILE *fp = fopen("basic.dat","r");
   if (fp <= 0) printf("Sorry, cannot open file basic.dat\n");

   Float_t x,y,z;
   Int_t ncols;
   Int_t nlines = 0;
   TFile *f = new TFile("basic.root","RECREATE");
   TH1F *h1 = new TH1F("h1","x distribution",100,-4,4);
   TNtuple *ntuple = new TNtuple("ntuple","data from ascii file","x:y:z");

   while (fp) {
      ncols = fscanf(fp,"%f %f %f",&x, &y, &z);
      if (ncols < 0) break;
      if (nlines < 5) printf("x=%8f, y=%8f, z=%8f\n",x,y,z);
      h1->Fill(x);
      ntuple->Fill(x,y,z);
      nlines++;
   }
   printf(" found %d points\n",nlines);

   fclose(fp);

   f->Write();
}
