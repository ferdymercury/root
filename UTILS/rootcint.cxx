//*CMZ :  2.20/05 14/12/98  15.12.06  by  Fons Rademakers
//*CMZ :  2.20/00 16/11/98  12.30.43  by  Fons Rademakers
//*CMZ :  2.00/13 19/10/98  18.22.29  by  Fons Rademakers
//*CMZ :  2.00/11 25/08/98  13.13.14  by  Fons Rademakers
//*CMZ :  2.00/05 17/04/98  01.26.31  by  Fons Rademakers
//*CMZ :  2.00/00 05/03/98  20.09.55  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  15.06.42  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/07/96

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// rootcint                                                             //
//                                                                      //
// This program generates the Streamer(), TBuffer &operator>>() and     //
// ShowMembers() methods for ROOT classes, i.e. classes using the       //
// ClassDef and ClassImp macros.                                        //
// In addition rootcint can also generate the CINT dictionaries         //
// needed in order to get access to ones classes via the interpreter.   //
//                                                                      //
// Rootcint can be used like:                                           //
//                                                                      //
//   rootcint TAttAxis.h[-][!] ... [LinkDef.h] > AxisDict.C             //
//                                                                      //
// or                                                                   //
//                                                                      //
//  rootcint [-f] [AxisDict.C] [-c] TAttAxis.h[-][!] ... [LinkDef.h]    //
//                                                                      //
// The difference between the two is that in the first case only the    //
// Streamer() and ShowMembers() methods are generated while in the      //
// latter case a complete compileable file is generated (including      //
// the include statements). The first method also allows the            //
// output to be appended to an already existing file (using >>).        //
// The optional minus behind the include file name tells rootcint       //
// to not generate the Streamer() method. A custom method must be       //
// provided by the user in that case.                                   //
// When using option -c also the interpreter method interface stubs     //
// will be written to the output file (AxisDict.C in the above case).   //
// By default the output file will not be overwritten if it exists.     //
// Use the -f (force) option to overwite the output file.               //
//                                                                      //
// Before specifying the first header file one can also add include     //
// file directories to be searched and preprocessor defines, like:      //
//   -I$MYPROJECT/include -DDebug=1                                     //
//                                                                      //
// The (optional) file LinkDef.h looks like:                            //
//                                                                      //
// #ifdef __CINT__                                                      //
//                                                                      //
// #pragma link off all globals;                                        //
// #pragma link off all classes;                                        //
// #pragma link off all functions;                                      //
//                                                                      //
// #pragma link C++ class TAxis;                                        //
// #pragma link C++ class TAttAxis-;                                    //
// #pragma link C++ class TArrayC-!;                                    //
//                                                                      //
// #pragma link C++ function StrDup;                                    //
// #pragma link C++ function operator+(const TString&,const TString&);  //
//                                                                      //
// #pragma link C++ global gROOT;                                       //
// #pragma link C++ global gEnv;                                        //
//                                                                      //
// #pragma link C++ enum EMessageTypes;                                 //
//                                                                      //
// #endif                                                               //
//                                                                      //
// This file tells rootcint for which classes the method interface      //
// stubs should be generated. A trailing - in the class name tells      //
// rootcint to not generate the Streamer() method. This is necessary    //
// for those classes that need a customized Streamer() method.          //
// A trailing ! in the class name tells rootcint to not generate the    //
// operator>>(TBuffer &b, MyClass *&obj) method. This is necessary to   //
// be able to write pointers to objects of classes not inheriting from  //
// TObject.                                                             //
// When this file is not specified a default version exporting the      //
// classes with the names equal to the include files minus the .h is    //
// generated.                                                           //
//                                                                      //
// *** IMPORTANT ***                                                    //
// 1) LinkDef.h must be the last argument on the rootcint command line. //
// 2) Note that the LinkDef file name MUST contain the string:          //
//    LinkDef.h or linkdef.h, i.e. NA49_LinkDef.h is fine just like,    //
//    mylinkdef.h.                                                      //
//                                                                      //
// ----------- historical ---------                                     //
//                                                                      //
// Note that the file rootcint.C is constructed in such a way that it   //
// can also be interpreted by CINT. The above two statements become in  //
// that case:                                                           //
//                                                                      //
// cint -I$ROOTSYS/include +V TAttAxis.h TAxis.h LinkDef.h rootcint.C \ //
//                            TAttAxis.h TAxis.h > AxisGen.C            //
//                                                                      //
// or                                                                   //
//                                                                      //
// cint -I$ROOTSYS/include +V TAttAxis.h TAxis.h LinkDef.h rootcint.C \ //
//                            AxisGen.C TAttAxis.h TAxis.h              //
//                                                                      //
// The +V and -I$ROOTSYS/include options are added to the list of       //
// arguments in the compiled version of rootcint.                       //
//////////////////////////////////////////////////////////////////////////

#ifndef __CINT__
#include "Api.h"
#include "Rtypes.h"

extern "C" {
   R__EXTERN short G__othermain;
   R__EXTERN int   G__globalcomp;
   int G__main(int argc, char **argv);
   void G__exit(int rtn);
}

const char *help =
"\n"
"This program generates the Streamer(), TBuffer &operator>>() and\n"
"ShowMembers() methods for ROOT classes, i.e. classes using the\n"
"ClassDef and ClassImp macros.\n"
"In addition rootcint can also generate the CINT dictionaries\n"
"needed in order to get access to ones classes via the interpreter.\n"
"\n"
"Rootcint can be used like:\n"
"\n"
"  rootcint TAttAxis.h[-][!] ... [LinkDef.h] > AxisDict.C\n"
"\n"
"or\n"
"\n"
"  rootcint [-f] [AxisDict.C] [-c] TAttAxis.h[-][!] ... [LinkDef.h]\n"
"\n"
"The difference between the two is that in the first case only the\n"
"Streamer() and ShowMembers() methods are generated while in the\n"
"latter case a complete compileable file is generated (including\n"
"the include statements). The first method also allows the\n"
"output to be appended to an already existing file (using >>).\n"
"The optional minus behind the include file name tells rootcint\n"
"to not generate the Streamer() method. A custom method must be\n"
"provided by the user in that case.\n"
"When using option -c also the interpreter method interface stubs\n"
"will be written to the output file (AxisDict.C in the above case).\n"
"By default the output file will not be overwritten if it exists.\n"
"Use the -f (force) option to overwite the output file.\n"
"\n"
"Before specifying the first header file one can also add include\n"
"file directories to be searched and preprocessor defines, like:\n"
"   -I$../include -DDebug\n"
"\n"
"The (optional) file LinkDef.h looks like:\n"
"\n"
"#ifdef __CINT__\n"
"\n"
"#pragma link off all globals;\n"
"#pragma link off all classes;\n"
"#pragma link off all functions;\n"
"\n"
"#pragma link C++ class TAxis;\n"
"#pragma link C++ class TAttAxis-;\n"
"#pragma link C++ class TArrayC-!;\n"
"\n"
"#pragma link C++ function StrDup;\n"
"#pragma link C++ function operator+(const TString&,const TString&);\n"
"\n"
"#pragma link C++ global gROOT;\n"
"#pragma link C++ global gEnv;\n"
"\n"
"#pragma link C++ enum EMessageTypes;\n"
"\n"
"#endif\n"
"\n"
"This file tells rootcint for which classes the method interface\n"
"stubs should be generated. A trailing - in the class name tells\n"
"rootcint to not generate the Streamer() method. This is necessary\n"
"for those classes that need a customized Streamer() method.\n"
"A trailing ! in the class name tells rootcint to not generate the\n"
"operator>>(TBuffer &b, MyClass *&obj) method. This is necessary to\n"
"be able to write pointers to objects of classes not inheriting from\n"
"TObject.\n"
"When this file is not specified a default version exporting the\n"
"classes with the names equal to the include files minus the .h is\n"
"generated.\n"
"\n"
"*** IMPORTANT ***\n"
"1) LinkDef.h must be the last argument on the rootcint command line.\n"
"2) Note that the LinkDef file name MUST contain the string:\n"
"   LinkDef.h or linkdef.h, i.e. NA49_LinkDef.h is fine just like,\n"
"   mylinkdef.h.\n";

#else
#include <ertti.h>
#endif

#ifdef __MWERKS__
#include <console.h>
#endif

#include <time.h>


char *autold = "G__autoLinkDef.h";

FILE *fp;

//______________________________________________________________________________
int PointerToPointer(G__DataMemberInfo &m)
{
   if (strstr(m.Type()->Name(), "**")) return 1;
   return 0;
}

//______________________________________________________________________________
void WriteInputOperator(G__ClassInfo &cl)
{
   fprintf(fp, "//_______________________________________");
   fprintf(fp, "_______________________________________\n");
   fprintf(fp, "TBuffer &operator>>(TBuffer &buf, %s *&obj)\n{\n", cl.Name());
   fprintf(fp, "   // Read a pointer to an object of class %s.\n\n", cl.Name());

   if (cl.IsBase("TObject") || !strcmp(cl.Name(), "TObject")) {
      fprintf(fp, "   obj = (%s *) buf.ReadObject(%s::Class());\n", cl.Name(),
              cl.Name());
   } else {
      fprintf(fp, "   ::Error(\"%s::operator>>\", \"objects not inheriting"
                  " from TObject need a specialized operator>>"
                  " function\"); if (obj) { }\n", cl.Name());
   }
   fprintf(fp, "   return buf;\n}\n\n");
}

//______________________________________________________________________________
void WriteStreamer(G__ClassInfo &cl)
{
   fprintf(fp, "//_______________________________________");
   fprintf(fp, "_______________________________________\n");
   fprintf(fp, "void %s::Streamer(TBuffer &R__b)\n{\n", cl.Name());
   fprintf(fp, "   // Stream an object of class %s.\n\n", cl.Name());

   // In case of VersionID<=0 write dummy streamer only calling
   // its base class Streamer(s). If no base class(es) let Streamer
   // print error message, i.e. this Streamer should never have been called.
   char a[80];
   int version;
   sprintf(a, "%s::Class_Version()", cl.Name());
   version = (int)G__int(G__calc(a));
   if (version <= 0) {
      G__BaseClassInfo b(cl);

      int basestreamer = 0;
      while (b.Next())
         if (b.HasMethod("Streamer")) {
            fprintf(fp, "   %s::Streamer(R__b);\n", b.Name());
            basestreamer++;
         }
      if (!basestreamer) {
         fprintf(fp, "   ::Error(\"%s::Streamer\", \"version id <=0 in ClassDef,"
                  " dummy Streamer() called\"); if (R__b.IsReading()) { }\n", cl.Name());
      }
      fprintf(fp, "}\n\n");
      return;
   }

   // loop twice: first time write reading code, second time writing code
   for (int i = 0; i < 2; i++) {

      int decli = 0;

      if (i == 0) {
         fprintf(fp, "   if (R__b.IsReading()) {\n");
         fprintf(fp, "      Version_t R__v = R__b.ReadVersion(); if (R__v) { }\n");
      } else {
         fprintf(fp, "   } else {\n");
         fprintf(fp, "      R__b.WriteVersion(%s::IsA());\n",cl.Name());
      }

      // Stream base class(es) when they have the Streamer() method
      G__BaseClassInfo b(cl);

      while (b.Next())
         if (b.HasMethod("Streamer"))
            fprintf(fp, "      %s::Streamer(R__b);\n", b.Name());

      // Stream data members
      G__DataMemberInfo m(cl);

      while (m.Next()) {

         // we skip:
         //  - static members
         //  - members with an ! as first character in the title (comment) field
         //  - the member G__virtualinfo inserted by the CINT RTTI system

         if (!(m.Property() & G__BIT_ISSTATIC) &&
             strncmp(m.Title(), "!", 1)        &&
             strcmp(m.Name(), "G__virtualinfo")) {

            // fundamental type: short, int, long, etc....
            if (((m.Type())->Property() & G__BIT_ISFUNDAMENTAL) ||
                ((m.Type())->Property() & G__BIT_ISENUM)) {
               if (m.Property() & G__BIT_ISARRAY &&
                   m.Property() & G__BIT_ISPOINTER) {
                  int s = 1;
                  for (int dim = 0; dim < m.ArrayDim(); dim++)
                     s *= m.MaxIndex(dim);
                  if (!decli) {
                     fprintf(fp, "      int R__i;\n");
                     decli = 1;
                  }
                  fprintf(fp, "      for (R__i = 0; R__i < %d; R__i++)\n", s);
                 if (i == 0) {
                     fprintf(stderr,"*** Datamember %s::%s: array of pointers to fundamental type (need manual intervention)\n", cl.Name(), m.Name());
                     fprintf(fp, "         ;//R__b.ReadArray(%s);\n", m.Name());
                  } else {
                     fprintf(fp, "         ;//R__b.WriteArray(%s, __COUNTER__);\n", m.Name());
                  }
               } else if (m.Property() & G__BIT_ISPOINTER) {
                  if (i == 0) {
                     fprintf(stderr,"*** Datamember %s::%s: pointer to fundamental type (need manual intervention)\n", cl.Name(), m.Name());
                     fprintf(fp, "      //R__b.ReadArray(%s);\n", m.Name());
                  } else {
                     fprintf(fp, "      //R__b.WriteArray(%s, __COUNTER__);\n", m.Name());
                  }
               } else if (m.Property() & G__BIT_ISARRAY) {
                  if (i == 0) {
                     if (m.ArrayDim() > 1) {
                        if ((m.Type())->Property() & G__BIT_ISENUM)
                           fprintf(fp, "      R__b.ReadStaticArray((Int_t*)%s);\n", m.Name());
                        else
                           fprintf(fp, "      R__b.ReadStaticArray((%s*)%s);\n", m.Type()->TrueName(), m.Name());
                     } else {
                        if ((m.Type())->Property() & G__BIT_ISENUM)
                           fprintf(fp, "      R__b.ReadStaticArray((Int_t*)%s);\n", m.Name());
                        else
                           fprintf(fp, "      R__b.ReadStaticArray(%s);\n", m.Name());
                      }
                  } else {
                     int s = 1;
                     for (int dim = 0; dim < m.ArrayDim(); dim++)
                        s *= m.MaxIndex(dim);
                     if (m.ArrayDim() > 1) {
                        if ((m.Type())->Property() & G__BIT_ISENUM)
                           fprintf(fp, "      R__b.WriteArray((Int_t*)%s, %d);\n", m.Name(), s);
                        else
                           fprintf(fp, "      R__b.WriteArray((%s*)%s, %d);\n", m.Type()->TrueName(), m.Name(), s);
                     } else {
                        if ((m.Type())->Property() & G__BIT_ISENUM)
                           fprintf(fp, "      R__b.WriteArray((Int_t*)%s, %d);\n", m.Name(), s);
                        else
                           fprintf(fp, "      R__b.WriteArray(%s, %d);\n", m.Name(), s);
                     }
                  }
               } else if ((m.Type())->Property() & G__BIT_ISENUM) {
                  if (i == 0)
                     fprintf(fp, "      R__b >> (Int_t&)%s;\n", m.Name());
                  else
                     fprintf(fp, "      R__b << (Int_t)%s;\n", m.Name());
               } else {
                  if (i == 0)
                     fprintf(fp, "      R__b >> %s;\n", m.Name());
                  else
                     fprintf(fp, "      R__b << %s;\n", m.Name());
               }
            } else {
               // we have an object
               if (m.Property() & G__BIT_ISARRAY &&
                   m.Property() & G__BIT_ISPOINTER) {
                  int s = 1;
                  for (int dim = 0; dim < m.ArrayDim(); dim++)
                     s *= m.MaxIndex(dim);
                  if (!decli) {
                     fprintf(fp, "      int R__i;\n");
                     decli = 1;
                  }
                  fprintf(fp, "      for (R__i = 0; R__i < %d; R__i++)\n", s);
                  if (i == 0) {
                     fprintf(fp, "         R__b >> %s[R__i];\n", m.Name());
                  } else {
                     fprintf(fp, "         R__b << %s[R__i];\n", m.Name());
                  }
               } else if (m.Property() & G__BIT_ISPOINTER) {
                  // This is always good. However, in case of a pointer
                  // to an object that is guarenteed to be there and not
                  // being referenced by other objects we could use
                  //     xx->Streamer(b);
                  // Optimize this with control statement in title.
                  if (PointerToPointer(m)) {
                     if (i == 0) {
                        fprintf(stderr,"*** Datamember %s::%s: pointer to pointer (need manual intervention)\n", cl.Name(), m.Name());
                        fprintf(fp, "      //R__b.ReadArray(%s);\n", m.Name());
                     } else {
                        fprintf(fp, "      //R__b.WriteArray(%s, __COUNTER__);\n", m.Name());
                     }
                  } else {
                     if (strstr(m.Type()->Name(), "TClonesArray")) {
                        fprintf(fp, "      %s->Streamer(R__b);\n", m.Name());
                     } else {
                        if (i == 0)
                           fprintf(fp, "      R__b >> %s;\n", m.Name());
                        else {
                           if (m.Type()->IsBase("TObject") && m.Type()->IsBase("TArray"))
                              fprintf(fp, "      R__b << (TObject*)%s;\n", m.Name());
                           else
                              fprintf(fp, "      R__b << %s;\n", m.Name());
                        }
                     }
                  }
               } else if (m.Property() & G__BIT_ISARRAY) {
                  int s = 1;
                  for (int dim = 0; dim < m.ArrayDim(); dim++)
                     s *= m.MaxIndex(dim);
                  if (!decli) {
                     fprintf(fp, "      int R__i;\n");
                     decli = 1;
                  }
                  fprintf(fp, "      for (R__i = 0; R__i < %d; R__i++)\n", s);
                  fprintf(fp, "         %s[R__i].Streamer(R__b);\n", m.Name());
               } else {
                  if ((m.Type())->HasMethod("Streamer"))
                     fprintf(fp, "      %s.Streamer(R__b);\n", m.Name());
                  else {
                     if (i == 0)
                        fprintf(stderr, "*** Datamember %s::%s: object has no Streamer() method (need manual intervention)\n",
                                cl.Name(), m.Name());
                     fprintf(fp, "      //%s.Streamer(R__b);\n", m.Name());
                  }
               }
            }
         }
      }
   }
   fprintf(fp, "   }\n");
   fprintf(fp, "}\n\n");
}

//______________________________________________________________________________
void WriteShowMembers(G__ClassInfo &cl)
{
   fprintf(fp, "//_______________________________________");
   fprintf(fp, "_______________________________________\n");
   fprintf(fp, "void %s::ShowMembers(TMemberInspector &R__insp, char *R__parent)\n{\n", cl.Name());
   fprintf(fp, "   // Inspect the data members of an object of class %s.\n\n", cl.Name());
   fprintf(fp, "   TClass *R__cl  = %s::IsA();\n", cl.Name());
   fprintf(fp, "   Int_t   R__ncp = strlen(R__parent);\n");
   fprintf(fp, "   if (R__ncp || R__cl || R__insp.IsA()) { }\n");

   // Inspect data members
   G__DataMemberInfo m(cl);
   char cdim[12], cvar[64];

   while (m.Next()) {

      // we skip:
      //  - static members
      //  - the member G__virtualinfo inserted by the CINT RTTI system

      if (!(m.Property() & G__BIT_ISSTATIC) &&
          strcmp(m.Name(), "G__virtualinfo")) {

         // fundamental type: short, int, long, etc....
         if (((m.Type())->Property() & G__BIT_ISFUNDAMENTAL) ||
             ((m.Type())->Property() & G__BIT_ISENUM)) {
            if (m.Property() & G__BIT_ISARRAY &&
                m.Property() & G__BIT_ISPOINTER) {
               sprintf(cvar, "*%s", m.Name());
               for (int dim = 0; dim < m.ArrayDim(); dim++) {
                  sprintf(cdim, "[%d]", m.MaxIndex(dim));
                  strcat(cvar, cdim);
               }
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"%s\", &%s);\n",
                       cvar, m.Name());
            } else if (m.Property() & G__BIT_ISPOINTER) {
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"*%s\", &%s);\n",
                       m.Name(), m.Name());
            } else if (m.Property() & G__BIT_ISARRAY) {
               sprintf(cvar, "%s", m.Name());
               for (int dim = 0; dim < m.ArrayDim(); dim++) {
                  sprintf(cdim, "[%d]", m.MaxIndex(dim));
                  strcat(cvar, cdim);
               }
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"%s\", %s);\n",
                       cvar, m.Name());
            } else {
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"%s\", &%s);\n",
                       m.Name(), m.Name());
            }
         } else {
            // we have an object
            if (m.Property() & G__BIT_ISARRAY &&
                m.Property() & G__BIT_ISPOINTER) {
               sprintf(cvar, "*%s", m.Name());
               for (int dim = 0; dim < m.ArrayDim(); dim++) {
                  sprintf(cdim, "[%d]", m.MaxIndex(dim));
                  strcat(cvar, cdim);
               }
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"%s\", &%s);\n", cvar,
                       m.Name());
            } else if (m.Property() & G__BIT_ISPOINTER) {
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"*%s\", &%s);\n",
                       m.Name(), m.Name());
            } else if (m.Property() & G__BIT_ISARRAY) {
               sprintf(cvar, "%s", m.Name());
               for (int dim = 0; dim < m.ArrayDim(); dim++) {
                  sprintf(cdim, "[%d]", m.MaxIndex(dim));
                  strcat(cvar, cdim);
               }
               fprintf(fp, "   R__insp.Inspect(R__cl, R__parent, \"%s\", %s);\n",
                       cvar, m.Name());
            } else {
               if ((m.Type())->HasMethod("ShowMembers"))
                  fprintf(fp, "   %s.ShowMembers(R__insp, strcat(R__parent,\"%s.\")); R__parent[R__ncp] = 0;\n",
                          m.Name(), m.Name());
            }
         }
      }
   }

   // Write ShowMembers for base class(es) when they have the ShowMember() method
   G__BaseClassInfo b(cl);

   while (b.Next())
      if (b.HasMethod("ShowMembers"))
         fprintf(fp, "   %s::ShowMembers(R__insp, R__parent);\n", b.Name());

   fprintf(fp, "}\n\n");
}

//______________________________________________________________________________
void GenerateLinkdef(int *argc, char **argv, int iv)
{
   FILE *fl = fopen(autold, "w");

   fprintf(fl, "#ifdef __CINT__\n\n");
   fprintf(fl, "#pragma link off all globals;\n");
   fprintf(fl, "#pragma link off all classes;\n");
   fprintf(fl, "#pragma link off all functions;\n\n");

   for (int i = iv; i < *argc; i++) {
      char *s, trail[3];
      int   nostr = 0, noinp = 0, l = strlen(argv[i])-1;
      for (int j = 0; j < 2; j++) {
         if (argv[i][l] == '-') {
            argv[i][l] = '\0';
            nostr = 1;
            l--;
         }
         if (argv[i][l] == '!') {
            argv[i][l] = '\0';
            noinp = 1;
            l--;
         }
      }
      if (nostr || noinp) {
         trail[0] = 0;
         if (nostr) strcat(trail, "-");
         if (noinp) strcat(trail, "!");
      }
      if ((s = strrchr(argv[i], '.'))) *s = '\0';
      if (nostr || noinp)
         fprintf(fl, "#pragma link C++ class %s%s;\n", argv[i], trail);
      else
         fprintf(fl, "#pragma link C++ class %s;\n", argv[i]);
      if (s) *s = '.';
   }
   argv[(*argc)++] = autold;

   fprintf(fl, "\n#endif\n");
   fclose(fl);
}

//______________________________________________________________________________
int main(int argc, char **argv)
{
#ifdef __MWERKS__
   argc = ccommand(&argv);
#endif

   if (argc < 2) {
      fprintf(stderr, "Usage: %s [-f] [out.C|.cc|.cpp|.cxx] [-c] file1.h[-] file2.h[-] ... [LinkDef.h]\n", argv[0]);
      fprintf(stderr, "For more extensive help type: %s -?\n", argv[0]);
      return 1;
   }

   int i, ic, ifl, force;
   int icc = 0;

   if (!strcmp(argv[1], "-f")) {
      force = 1;
      ic    = 2;
   } else {
      force = 0;
      ic    = 1;
   }

   if (strstr(argv[ic],".C")  || strstr(argv[ic],".cpp") ||
       strstr(argv[ic],".cp") || strstr(argv[ic],".cxx") ||
       strstr(argv[ic],".cc")) {
      if ((fp = fopen(argv[ic], "r")) != 0) {
         fclose(fp);
         if (!force) {
            fprintf(stderr, "Output file %s already exists\n", argv[ic]);
            return 1;
         }
      }
      fp = fopen(argv[ic], "w");
      fclose(fp);    // make sure file is created and empty
      ifl = ic;
      ic++;
   } else if (!strcmp(argv[1], "-?")) {
      fprintf(stderr, "%s\n", help);
      return 1;
   } else {
      fp = stdout;
      ic = 1;
      if (force) ic = 2;
      ifl = 0;
   }

#ifndef __CINT__
   int   argcc, iv, il;
   char  path1[128], path2[128];
   char *argvv[500];

   if (getenv("ROOTSYS")) {
#ifdef __MWERKS__
      sprintf(path1,"-I%s:include", getenv("ROOTSYS"));
      sprintf(path2,"-I%s:src", getenv("ROOTSYS"));
#else
      sprintf(path1,"-I%s/include", getenv("ROOTSYS"));
      sprintf(path2,"-I%s/src", getenv("ROOTSYS"));
#endif
   } else {
      fprintf(stderr, "$ROOTSYS not defined\n");
      return 1;
   }

   argvv[0] = argv[0];
   argcc = 1;

   if (!strcmp(argv[ic], "-c")) {
      icc++;
      if (ifl) {
         char *s;
         ic++;
         argvv[argcc++] = "-q0";
         argvv[argcc++] = "-n";
         argvv[argcc] = (char *)calloc(strlen(argv[ifl])+1, 1);
         strcpy(argvv[argcc], argv[ifl]); argcc++;
         argvv[argcc++] = "-N";
         s = strchr(argv[ifl],'.');
         argvv[argcc] = (char *)calloc(strlen(argv[ifl]), 1);
         strncpy(argvv[argcc], argv[ifl], s-argv[ifl]); argcc++;

         while (*argv[ic] == '-' || *argv[ic] == '+') {
            argvv[argcc++] = argv[ic++];
         }

         argvv[argcc++] = path1;
         argvv[argcc++] = path2;
#ifdef __hpux
         argvv[argcc++] = "-I/usr/include/X11R5";
#endif
         argvv[argcc++] = "-DTRUE=1";
         argvv[argcc++] = "-DFALSE=0";
         argvv[argcc++] = "-Dexternalref=extern";
         argvv[argcc++] = "-DSYSV";
         argvv[argcc++] = "-V";        // include info on private members
         argvv[argcc++] = "-c-1";
         argvv[argcc++] = "-D__MAKECINT__";
         argvv[argcc++] = "+V";        // turn on class comment mode
         argvv[argcc++] = "TROOT.h";
         argvv[argcc++] = "TMemberInspector.h";
      } else {
         fprintf(stderr, "Option -c can only be used when an output file has been specified\n");
         return 1;
      }
   }

   iv = 0;
   il = 0;
   for (i = ic; i < argc; i++) {
      if (!iv && *argv[i] != '-' && *argv[i] != '+') {
         if (!icc) {
            argvv[argcc++] = path1;
            argvv[argcc++] = path2;
            argvv[argcc++] = "+V";
         }
         iv = argcc;
      }
      if (strstr(argv[i],"LinkDef.h") || strstr(argv[i],"linkdef.h")) {
         il++;
         if (i != argc-1) {
            fprintf(stderr, "%s must be last file on command line\n", argv[i]);
            return 1;
         }
      }
      if (!strcmp(argv[i], "-c")) {
         fprintf(stderr, "Option -c must come directly after the output file\n");
         return 1;
      }
      argvv[argcc++] = argv[i];
   }

   if (!il)
      GenerateLinkdef(&argcc, argvv, iv);

   G__othermain = 2;
   if (G__main(argcc, argvv) < 0) {
      fprintf(stderr, "Error loading headers...\n");
      return 1;
   }
   G__globalcomp = 0;  // G__NOLINK

   if (!il) remove(autold);
#endif

   if (ifl)
      fp = fopen(argv[ifl], "a");
   else
      fp = stdout;

   time_t t = time(0);
   fprintf(fp, "//\n// File generated by %s at %.24s.\n", argv[0], ctime(&t));
   fprintf(fp, "// Do NOT change. Changes will be lost next time file is generated\n//\n\n");
   fprintf(fp, "#include \"TBuffer.h\"\n");
   fprintf(fp, "#include \"TMemberInspector.h\"\n");
   fprintf(fp, "#include \"TError.h\"\n\n");

   // Loop over all command line arguments and write include statements.
   // Skip options and [G__]LinkDef.h.
   if (ifl && !icc) {
      for (i = ic; i < argc; i++) {
         if (*argv[i] != '-' && *argv[i] != '+' &&
             !strstr(argv[i],"LinkDef.h") && !strstr(argv[i],"linkdef.h"))
            fprintf(fp, "#include \"%s\"\n", argv[i]);
      }
      fprintf(fp, "\n");
   }

   // loop over all classes and create Streamer() & Showmembers() methods
   G__ClassInfo cl;

   while (cl.Next()) {
      if ((cl.Property() & G__BIT_ISCLASS) && cl.Linkage() == G__CPPLINK) {
         if (cl.HasMethod("Streamer")) {
            if (!(cl.RootFlag() & G__NOINPUTOPERATOR))
               WriteInputOperator(cl);
            else
               fprintf(stderr, "Class %s: Do not generate operator>>()\n",
                       cl.Name());
            if (!(cl.RootFlag() & G__NOSTREAMER))
               WriteStreamer(cl);
            else
               fprintf(stderr, "Class %s: Do not generate Streamer()\n", cl.Name());
         } else {
            fprintf(stderr, "Class %s: Streamer() not declared\n", cl.Name());
         }
         if (cl.HasMethod("ShowMembers")) {
            WriteShowMembers(cl);
         } else {
            fprintf(stderr, "Class %s: ShowMembers() not declared\n", cl.Name());
         }
      }
   }

   fclose(fp);

   G__globalcomp = -1;  // G__CPPLINK
   G__exit(0);

   return 0;
}
