//*CMZ :  2.23/12 26/01/2000  16.14.05  by  Valery Fine(fine@bnl.gov)
//*-- Author :
TestSaveView(const Char_t *filename="$ROOTSYS/tutorials/na49.root")
{
 //
 // Creates a "naive" data-base of the nodes position using
 // the "native" file system directory tree.
 // The "naive" data-nase can be maintained with CVS then
 //
  gSystem->Load("Root_STAR");
  TFile na(filename);
  TGeometry *n49 =(TGeometry*)gROOT->FindObject("na49");
  TVolume n49Volumes(*(n49->GetNode("CAVE1")));

  TVolumeView *viewFull = new TVolumeView(n49Volumes);

  TDataSetIter next(viewFull,0);
  TVolumeView *view = 0;
  Int_t iCounter = 0;
  TString fileName;
  TString topDirectory="./";
  TString curDirectory = topDirectory;
  Char_t *fullPath = gSystem->ConcatFileName(curDirectory.Data(),viewFull->GetName());
  gSystem->MakeDirectory(fullPath);
  delete [] fullPath;

  while( (view = (TVolumeView *)next()) )
  {

       UInt_t numPosition = view->GetPosition()->GetId();

       curDirectory = topDirectory;
       curDirectory += view->PathP();
       fileName = "Position";
       fileName += ".C.";
       fileName += "year_1b";

       // Create directory
       cout << "Dir: " << curDirectory.Data() << endl;
       if (gSystem->MakeDirectory(curDirectory.Data())) {
          printf(" can not create %s for %s \n",curDirectory.Data(), view->GetName());
          return;
       }

       fullPath = gSystem->ConcatFileName(curDirectory.Data(),fileName.Data());
       ofstream out;
       out.open(fullPath);
//==       cout << iCounter+1 << ". " << fullPath << endl;
       delete [] fullPath;
       view->SavePrimitive(out);
       out.close();
       iCounter++;
  }
  cout << iCounter << " files have been create" << endl;
};
