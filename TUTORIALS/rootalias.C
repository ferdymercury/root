//*CMZ :  0.90/10 05/12/96  10.22.19  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Fons Rademakers   17/03/96

+SELF, IF=-WIN32.
//_______________________________________________________
void edit(char *file)
{
   char s[64], *e;
   if (e = getenv("EDITOR"))
      sprintf(s, "%s %s", e, file);
   else
      sprintf(s, "xterm -e vi %s &", file);
   gSystem.Exec(s);
}

//_______________________________________________
void ls(char *path=0)
{
 char s[256] = "ls ";
 if (path) strcat(s,path);
 gSystem.Exec(s);
}

//_______________________________________________
void dir(char *path=0)
{
 char s[256] = "ls -l ";
 if (path) strcat(s,path);
 gSystem.Exec(s);
}

+SELF, IF=WIN32.
//_______________________________________________
void edit(char *file)
{
   char s[64], *e;
   if (e = getenv("EDITOR"))
      sprintf(s, "start %s %s", e, file);
   else
      sprintf(s, "start notepad %s", file);
   gSystem.Exec(s);
}

//_______________________________________________
void ls(char *path=0)
{
 char s[256] = "dir /w ";
 if (path) strcat(s,path);
 gSystem.Exec(s);
}

//_______________________________________________
void dir(char *path=0)
{
 char s[256] = "dir ";
 if (path) strcat(s,path);
 gSystem.Exec(s);
}

+SELF.

//_______________________________________________
char *pwd()
{
    return gSystem.WorkingDirectory();
}

//_______________________________________________
char *cd(char *path=0)
{
 if (path)
   gSystem.ChangeDirectory(path);
 return pwd();
}


//_______________________________________________
void bexec(char *macro)
{
   if (gROOT->IsBatch()) printf("Processing benchmark: %s\n",macro);
   TPaveText *summary = (TPaveText*)bench->GetPrimitive("TPave");
   TText *tmacro = summary->GetLineWith(macro);
   if (tmacro) tmacro->SetTextColor(4);
   bench->Modified(); bench->Update();

   gROOT->Macro(macro);

   TPaveText *summary2 = (TPaveText*)bench->GetPrimitive("TPave");
   TText *tmacro2 = summary2->GetLineWith(macro);
   if (tmacro2) tmacro2->SetTextColor(2);
   bench->Modified(); bench->Update();
}

