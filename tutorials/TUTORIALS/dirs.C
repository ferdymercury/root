//*CMZ :  2.20/00 04/11/98  08.56.53  by  Rene Brun
//*CMZ :  2.00/10 07/07/98  16.52.42  by  Rene Brun
//*CMZ :  2.00/00 02/03/98  09.25.25  by  Rene Brun
//*-- Author :    Rene Brun   02/03/98
{
// .........................macro dirs.C............................
// This macro illustrates how to create a hierarchy of directories
// in a Root file.
// 10 directories called plane0, plane1, plane9 are created.
// Each plane directory contains 200 histograms.
//
// Run this macro (Note that the macro delete the TFile object at the end!)
// Connect the file again in read mode:
//   Root > TFile *top = new TFile("top.root");
// The hierarchy can be browsed by the Root browser as shown below
//   Root > TBrowser b;
//    click on the left pane on one of the plane directories.
//    this shows the list of all histograms in this directory.
//    Double click on one histogram to draw it (left mouse button).
//    Select different options with the right mouse button.
//
//  You can see the begin_html <a href="gif/dirs.gif" >picture of the browser </a> end_html
//
//    Instead of using the browser, you can also do:
//   Root > top->cd();
//   Root > plane3->cd();
//   Root > h3_90N->Draw();

   gROOT->Reset();

    // create a new Root file
   TFile *top = new TFile("top.root","recreate");

   // create a subdirectory "tof" in this file
   TDirectory *cdtof = top->mkdir("tof");
   cdtof->cd();    // make the "tof" directory the current directory

   // create a new subdirectory for each plane
   const Int_t nplanes = 10;
   const Int_t ncounters = 100;
   char dirname[50];
   char hname[20];
   char htitle[80];
   for (Int_t i=0;i<nplanes;i++) {
      sprintf(dirname,"plane%d",i);
      TDirectory *cdplane = cdtof->mkdir(dirname);
      cdplane->cd();
      // create counter histograms
      for (Int_t j=0;j<ncounters;j++) {
         sprintf(hname,"h%d_%dN",i,j);
         sprintf(htitle,"hist for counter:%d in plane:%d North",j,i);
         TH1F *hn = new TH1F(hname,htitle,100,0,100);
         sprintf(hname,"h%d_%dS",i,j);
         sprintf(htitle,"hist for counter:%d in plane:%d South",j,i);
         TH1F *hs = new TH1F(hname,htitle,100,0,100);
      }
      cdtof->cd();    // change current directory to top
   }

     // .. fill histograms

     // save histogram hierarchy in the file
   top->Write();
   delete top;
}

