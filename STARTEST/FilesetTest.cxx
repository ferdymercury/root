//*CMZ :  2.23/12 26/01/2000  16.12.59  by  Valery Fine(fine@bnl.gov)
//*-- Author :
{
 gSystem.Load("Root_STAR");

 // Create TDataSet from the current file system
 TFileSet set("./");
 TDataSet *nextset=0;
 printf(" \n\ntry the simple ctor\n");
 TDataSetIter next(&set,0);
 // Loop over "directory tree" in memory
 while(nextset = next())  { nextset->ls();  printf(" Level %d \n",next->GetDepth()); }
 new TBrowser("Browser",&set);
}
