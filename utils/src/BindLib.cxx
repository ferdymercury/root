//*CMZ :  0.90/01 29/10/96  15.16.11  by  Fons Rademakers
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   13/09/96


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//___________________________________________________________________________________
main(int argc, char *argv[ ]){
// This macro reads the output of the DUMPBIN MS Utility to create
// the module definiton file to make WIN32 DLLs
//*-*
//*-* DUMPBIN /symbols win32_*.obj | grep SECT  | grep External | sort /+48 | more
//*-* Command line to generate obj moudles entry points list
//*-*
//  gROOT.Reset();

//*-*  1. The name of the Library to create
//*-*  2. List of the object module to include in that library

  if (argc != 3) {
          printf(" Usage: bind_lib <name of the library> <list of the object modules> \n\n");
          printf("        for example: bind_lib Win32 Win32_*.o \n");
          printf("        It is going to  create Root_Win32.lib library \n");
          return 1;
  }

  const int MaxLen = 1024;
  char *string = new char[MaxLen];
  const char *RootDir=getenv("ROOTSYS");
  const char *SubSystemDirName="ms";
  char *PathName=new char[strlen(RootDir)+ strlen(SubSystemDirName)+2];
  sprintf(PathName,"%s\\%s",RootDir,SubSystemDirName);
  char *LibraryName=argv[1];
  char *ListOfObj=argv[2];
//*-*
//*-* Create dump file
//*-*
  char *infilename = new char[strlen(PathName)+strlen(LibraryName)+5];
  char *otfilename = new char[strlen(PathName)+strlen(LibraryName)+5];
  sprintf(infilename,"%s\\lib\\%s.dmp",PathName,LibraryName);
  sprintf(string,"DUMPBIN /out:%s /symbols %s\\obj\\%s* | grep SECT  | grep External | sort /+48",
               infilename,PathName,ListOfObj);
  system(string);
  printf("%s \n", string);

  printf(" Input file name is %s \n",infilename);
  FILE *fin;
  fin = fopen((const char *)infilename,"r");
  if (fin == NULL) {
          perror(" Error !!!. Can't open file:");
          printf("  %s \n", infilename);
          return 1;
  }

  sprintf(otfilename,"%s\\lib\\%s.def",PathName,LibraryName);
  printf(" Output file name is %s \n",otfilename);
  FILE *fot;
  fot = fopen((const char *)otfilename,"w");
  if (fot ==NULL) {
          perror(" Error !!!. Can't open file:");
          printf(" %s \n", otfilename);
      return 1;
  }
//  delete [] filename;
//*-*
//*-* Ok, The preparations have been done, we can go ahead !
//*-*

  char *buffer = new char[MaxLen];
  char *pattern,*tail;

//*-*
//*-*  Let's prepare the header of the file
//*-*

  sprintf(buffer,"LIBRARY %s \n",LibraryName);
  fputs(buffer,fot);
  fputs("EXPORTS \n",fot);


  while(fgets(string,MaxLen,fin)){
//*-*
//*-* Look for SECT string
//*-*
    if (pattern = strstr(string,"SECT") )
    {
//*-*
//*-* Look for 'Extrenal'
//*-*
           if (pattern = strstr(pattern,"External"))
//*-*
//*-*  Look for "|"
//*-*
             if (pattern = strstr(pattern,"|")){
//*-*
//*-*  Skip one blank
//*-*
                          pattern++;
                          pattern++;
//*-*
//*-*  look for the tail
//*-*
                  if (tail = strstr(pattern,"(") );
                          else tail = strstr(pattern,"\n");
//*-*
//*-*  Cut tail off
//*-*
                          if (tail) *tail = '\0';
//*-*
//*-*  Now we have to cut of the leading "underscope" symbol if any
//*-*
                           if (pattern[0] == '_') pattern++;

//*-*  Write result
                          fputs(pattern,fot);
                          fputs("\n",fot);
//                        printf(" %s \n",pattern);
                  }
    }
  } // while
  fclose(fin);
//*-*
//*-*  delete the DMP file
//*-*
  unlink(infilename);
  fclose(fot);
  return 0;
}
