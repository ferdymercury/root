//*CMZ :  0.90/05 13/11/96  09.50.34  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Rene Brun   25/01/96
{
+SELF, IF=WIN32.
   gSystem.Load("Root_Tree.DLL"); // We have to load this DLL "by hand" to manage NTuples
+SELF.
   printf("\nWelcome to the ROOT tutorials\n\n");
   printf("\nType \".x demos.C\" to get a toolbar from which to execute the demos\n");
   printf("\nType \".x demoshelp.C\" to see the help window\n\n");
}

