//*CMZ :  2.24/03 12/04/2000  19.08.26  by  Rene Brun
//*CMZ :  2.23/11 07/01/2000  12.55.12  by  Rene Brun
//*-- Author :    Rene Brun   07/01/2000
void exec1()
{
   //example of macro called when a pad is redrawn
   //one must create a TExec object in the following way
   // TExec ex("ex",".x exec1.C");
   // ex.Draw();
   // this macro prints the bin number and the bin content when one clicks
   //on the histogram contour of any histogram in a pad
   int event = gPad->GetEvent();
   if (event != 11) return;
   int px = gPad->GetEventX();
   TObject *select = gPad->GetSelected();
   if (!select) return;
   if (select->InheritsFrom("TH1")) {
      TH1 *h = (TH1*)select;
      Float_t xx = gPad->AbsPixeltoX(px);
      Float_t x  = gPad->PadtoX(xx);
      Int_t binx = h->GetXaxis()->FindBin(x);
      printf("event=%d, hist:%s, bin=%d, content=%f\n",event,h->GetName(),binx,h->GetBinContent(binx));
   }
}

