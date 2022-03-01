<<<<<<< HEAD
#include "TString.h"
#include "TInterpreter.h"
#include "TSystem.h"

void libs(TString classname, const int suffix)
{
   const char *libname;

   // Find in which library classname sits
   classname.ReplaceAll("_1",":");
   classname.ReplaceAll("_01"," ");
   int i = classname.Index("_3");
   if (i>0) classname.Remove(i,classname.Length()-i);

   libname = gInterpreter->GetClassSharedLibs(classname.Data());

   // Library was not found, try to find it from a template in $ROOTSYS/lib/*.rootmap
   if (!libname) {
      gSystem->Exec(Form("grep %s $ROOTSYS/lib/*.rootmap | grep -m 1 map:class | sed -e 's/^.*class //' > classname%d.txt",classname.Data(),suffix));
      FILE *f = fopen(Form("classname%d.txt",suffix), "r");
      if (!f) return;
      char c[160];
      char *str = fgets(c,160,f);
      fclose(f);
      remove(Form("classname%d.txt",suffix));
      if (!str) {
         printf("%s cannot be found in any of the .rootmap files\n", classname.Data());
         remove(Form("libslist%d.dot",suffix));
         return;
      }
      TString cname = c;
      cname.Remove(cname.Length()-1, 1);
      libname = gInterpreter->GetClassSharedLibs(cname.Data());
      if (!libname) {
         printf("Cannot find library for the class %s\n",cname.Data());
         return;
      }
   }

   // Print the library name in a external file
   TString mainlib = libname;
   mainlib.ReplaceAll(" ","");
   mainlib.ReplaceAll(".so","");
   FILE *f = fopen(Form("mainlib%d.dot",suffix), "w");
   if (!f) return;
   fprintf(f,"   mainlib [label=%s];\n",mainlib.Data());
   fclose(f);

   // List of libraries used by libname via ldd on linux and otool on Mac

   gSystem->Exec(Form("$DOXYGEN_LDD $ROOTSYS/lib/%s | grep -v %s > libslist%d.dot",libname,libname,suffix));
}
