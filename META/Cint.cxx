//*CMZ :  2.21/03 19/01/99  18.33.32  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  08.32.37  by  Fons Rademakers
//*CMZ :  2.00/10 28/07/98  12.50.40  by  Fons Rademakers
//*CMZ :  2.00/05 20/04/98  15.13.21  by  Fons Rademakers
//*CMZ :  1.03/09 12/12/97  19.27.01  by  Rene Brun
//*-- Author :    Fons Rademakers   01/03/96

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
// This class defines an interface to the CINT C/C++ interpreter made   //
// by Masaharu Goto from HP Japan.                                      //
//                                                                      //
// CINT is an almost full ANSI compliant C/C++ interpreter.             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TCint.h"
#include "TROOT.h"
#include "TApplication.h"
#include "TGlobal.h"
#include "TDataType.h"
#include "TClass.h"
#include "TBaseClass.h"
#include "TDataMember.h"
#include "TMethod.h"
#include "TMethodArg.h"
#include "TObjArray.h"
#include "TObjString.h"
#include "TString.h"
#include "TList.h"
#include "G__ci.h"


#ifdef WIN32
#  ifndef ROOT_TGWin32Command
#    include "TGWin32Command.h"
#    undef GetClassInfo
#  endif
#endif

R__EXTERN int optind;

// reference cint includes
// make sure fproto.h is loaded (it was excluded in TCint.h)
#undef G__FPROTO_H
#include "fproto.h"
#include "Api.h"
#include "TCanvas.h"

// It is a "fantom" method to synchronize user keyboard input
// and ROOT prompt line (for WIN32)
const char *fantomline = "TRint::EndOfLineAction();";


ClassImp(TCint)

//______________________________________________________________________________
TCint::TCint(const char *name, const char *title) : TInterpreter(name, title)
{
   // Initialize the CINT interpreter interface.

   fMore      = 0;
   fPrompt[0] = 0;

   G__InitGetSpecialObject(&TCint::FindObject);

   ResetAll();
#ifndef WIN32
   optind = 1;  // make sure getopt() works in the main program
#endif
}

//______________________________________________________________________________
TCint::~TCint()
{
   // Destroy the CINT interpreter interface.

   if (fMore != -1)
      G__scratch_all();
}

//______________________________________________________________________________
Int_t TCint::InitializeDictionaries()
{
   // Initialize all registered dictionaries. Normally this is already done
   // by G__init_cint() and G__dlmod().

   return G__call_setup_funcs();
}

//______________________________________________________________________________
void TCint::EndOfLineAction()
{
   // It calls a "fantom" method to synchronize user keyboard input
   // and ROOT prompt line.

    ProcessLineSynch(fantomline);
}

//______________________________________________________________________________
void TCint::ExecThreadCB(TWin32SendClass *command)
{
   // This function must be called from the "Command thread only".

#ifdef WIN32
   char *line = (char *)(command->GetData(0));
   Int_t iret = ProcessLine((const char *)line);
   delete [] line;
   if (LOWORD(command->GetCOP()) == kSendWaitClass)
      ((TWin32SendWaitClass *)command)->Release();
   else
      delete command;
#else
   if (command) { }
#endif
}

//______________________________________________________________________________
void TCint::LoadMacro(const char *filename)
{
   // Load a macro file in CINT's memory.

   ProcessLine(Form(".L %s", filename));
}

//______________________________________________________________________________
Int_t TCint::ProcessLine(const char *line)
{
   // Let CINT process a command line.

   Int_t ret = 0;

   if (gApplication && gApplication->IsCmdThread()) {
      gROOT->SetLineIsProcessing();

      // It checks whether the input line contains the "fantom" method
      // to synchronize user keyboard input and ROOT prompt line

      if (strstr(line,fantomline))
          TCint::UpdateAllCanvases();
      else
          ret = G__process_cmd((char *)line, fPrompt, &fMore);
      gROOT->SetLineHasBeenProcessed();
   } else
      ret = ProcessLineAsynch(line);

   return ret;
}

//______________________________________________________________________________
Int_t TCint::ProcessLineAsynch(const char *line)
{
   // Let CINT process a command line asynch.

#ifndef WIN32
   return ProcessLine(line);
#else
   char *cmd = new char[strlen(line)+1];
   strcpy(cmd,line);
   TWin32SendClass *code = new TWin32SendClass(this,(UInt_t)cmd,0,0,0);
   ExecCommandThread(code,kFALSE);
   return 0;
#endif
}

//______________________________________________________________________________
Int_t TCint::ProcessLineSynch(const char *line)
{
   // Let CINT process a command line synchronously, i.e we are waiting
   // it will be finished.

  if (gApplication && gApplication->IsCmdThread())
     return ProcessLine(line);
#ifdef WIN32
   char *cmd = new char[strlen(line)+1];
   strcpy(cmd,line);
   TWin32SendWaitClass code(this,(UInt_t)cmd,0,0,0);
   ExecCommandThread(&code,kFALSE);
   code.Wait();
#endif
   return 0;
}

//______________________________________________________________________________
Long_t TCint::Calc(const char *line)
{
   // Directly execute an executable statement (e.g. "func()", "3+5", etc.
   // however not declarations, like "Int_t x;").

   Long_t result;

   result = (Long_t) G__int(G__calc((char *)line));
   return result;
}

//______________________________________________________________________________
void TCint::PrintIntro()
{
   // Print CINT introduction and help message.

   Printf("\nCINT/ROOT C/C++ Interpreter version %s", G__cint_version());
   Printf("Type ? for help. Commands must be C++ statements.");
   Printf("Enclose multiple statements between { }.");
}

//______________________________________________________________________________
void TCint::Reset()
{
   // Reset the CINT state to the state saved by the last call to
   // TCint::SaveContext().

   G__scratch_upto(&fDictPos);
}

//______________________________________________________________________________
void TCint::ResetAll()
{
   // Reset the CINT state to its initial state.

   G__init_cint("cint");
   G__init_process_cmd();
}

//______________________________________________________________________________
void TCint::ResetGlobals()
{
   // Reset the CINT global object state to the state saved by the last
   // call to TCint::SaveGlobalsContext().

   G__scratch_globals_upto(&fDictPosGlobals);
}

//______________________________________________________________________________
Int_t TCint::DeleteGlobal(void *obj)
{
   // Delete obj from CINT symbol table so it cannot be accessed anymore.
   // Returns 1 in case of success and 0 in case object was not in table.

   return G__deleteglobal(obj);
}

//______________________________________________________________________________
void TCint::SaveContext()
{
   // Save the current CINT state.

   G__store_dictposition(&fDictPos);
}

//______________________________________________________________________________
void TCint::SaveGlobalsContext()
{
   // Save the current CINT state of global objects.

   G__store_dictposition(&fDictPosGlobals);
}

//______________________________________________________________________________
void TCint::UpdateListOfGlobals()
{
   // Update the list of pointers to global variables. This function
   // is called by TROOT::GetListOfGlobals().

   G__DataMemberInfo *a;
   int last  = 0;
   int nglob = 0;

   // find the number of global objects
   G__DataMemberInfo t;
   while (t.Next()) nglob++;

   for (int i = 0; i < nglob; i++) {
      a = new G__DataMemberInfo();
      a->Next();   // initial positioning

      for (int j = 0; j < last; j++)
         a->Next();

      // if name cannot be obtained no use to put in list
      if (a->IsValid() && a->Name()) {
         // first remove if already in list
         TGlobal *g = (TGlobal *)gROOT->fGlobals->FindObject(a->Name());
         if (g) {
            gROOT->fGlobals->Remove(g);
            delete g;
         }
         gROOT->fGlobals->Add(new TGlobal(a));
      } else
         delete a;

      last++;
   }
}

//______________________________________________________________________________
void TCint::UpdateListOfGlobalFunctions()
{
   // Update the list of pointers to global functions. This function
   // is called by TROOT::GetListOfGlobalFunctions().

   G__MethodInfo *a;
   int last  = 0;
   int nglob = 0;

   // find the number of global functions
   G__MethodInfo t;
   while (t.Next()) nglob++;

   for (int i = 0; i < nglob; i++) {
      a = new G__MethodInfo();
      a->Next();   // initial positioning

      for (int j = 0; j < last; j++)
         a->Next();

      // if name cannot be obtained no use to put in list
      if (a->IsValid() && a->Name()) {
         gROOT->fGlobalFunctions->Add(new TFunction(a));
      } else
         delete a;

      last++;
   }
}

//______________________________________________________________________________
void TCint::SetClassInfo(TClass *cl)
{
   // Set pointer to CINT's G__ClassInfo in TClass.

   if (!cl->fClassInfo) {
      cl->fClassInfo = new G__ClassInfo(cl->GetName());

      if (!cl->fClassInfo->IsValid()) {
         // this happens when no CINT dictionary is available
         delete cl->fClassInfo;
         cl->fClassInfo = 0;
      }
   }
}

//______________________________________________________________________________
void TCint::CreateListOfBaseClasses(TClass *cl)
{
   // Create list of pointers to base class(es) for TClass cl.

   if (!cl->fBase) {

      cl->fBase = new TList(cl);

      G__BaseClassInfo *a;
      int last  = 0;
      int nbase = 0;

      G__BaseClassInfo t(*cl->GetClassInfo());
      while (t.Next()) nbase++;

      for (int i = 0; i < nbase; i++) {
         a = new G__BaseClassInfo(*cl->GetClassInfo());
         a->Next();   // initial positioning

         for (int j = 0; j < last; j++)
            a->Next();

         // if name cannot be obtained no use to put in list
         if (a->IsValid() && a->Name())
            cl->fBase->Add(new TBaseClass(a, cl));
         else
            delete a;

         last++;
      }
   }
}

//______________________________________________________________________________
void TCint::CreateListOfDataMembers(TClass *cl)
{
   // Create list of pointers to data members for TClass cl.

   if (!cl->fData) {

      cl->fData = new TList(cl);

      G__DataMemberInfo *a;
      int last = 0;
      int nmem = cl->GetClassInfo()->NDataMembers();

      for (int i = 0; i < nmem; i++) {
         a = new G__DataMemberInfo(*cl->GetClassInfo());
         a->Next();   // initial positioning

         for (int j = 0; j < last; j++)
            a->Next();

         // if name cannot be obtained no use to put in list
         if (a->IsValid() && a->Name() && strcmp(a->Name(), "G__virtualinfo"))
            cl->fData->Add(new TDataMember(a, cl));
         else
            delete a;

         last++;
      }
   }
}

//______________________________________________________________________________
void TCint::CreateListOfMethods(TClass *cl)
{
   // Create list of pointers to methods for TClass cl.

   if (!cl->fMethod) {

      cl->fMethod = new TList(cl);

      G__MethodInfo *a;
      int last = 0;
      int nmet = cl->GetClassInfo()->NMethods();

      for (int i = 0; i < nmet; i++) {
         a = new G__MethodInfo(*cl->GetClassInfo());
         a->Next();   // initial positioning

         for (int j = 0; j < last; j++)
            a->Next();

         // if name cannot be obtained no use to put in list
         if (a->IsValid() && a->Name())
            cl->fMethod->Add(new TMethod(a, cl));
         else
            delete a;

         last++;
      }
   }
}

//______________________________________________________________________________
void TCint::CreateListOfMethodArgs(TFunction *m)
{
   // Create list of pointers to method arguments for TMethod m.

   if (!m->fMethodArgs) {

      m->fMethodArgs = new TList(m);

      G__MethodArgInfo *a;
      int last = 0;
      int narg = m->GetNargs();

      for (int i = 0; i < narg; i++) {
         a = new G__MethodArgInfo(*m->fInfo);
         a->Next();   // initial positioning

         for (int j = 0; j < last; j++)
            a->Next();

         // if type cannot be obtained no use to put in list
         if (a->IsValid() && a->Type())
            m->fMethodArgs->Add(new TMethodArg(a, m));
         else
            delete a;

         last++;
      }
   }
}

//______________________________________________________________________________
void TCint::CreateListOfTypes()
{
   // Create list of pointers to datatype (typedef) definitions. This
   // function is called by TROOT::GetListOfTypes().

   if (!gROOT->fTypes) {

      gROOT->fTypes = new TList(gROOT);

      G__TypedefInfo *a;
      int last  = 0;
      int ntype = 0;

      // find the number of typedefs
      G__TypedefInfo t;
      while (t.Next()) ntype++;

      for (int i = 0; i < ntype; i++) {
         a = new G__TypedefInfo();
         a->Next();   // initial positioning

         for (int j = 0; j < last; j++)
            a->Next();

         // if name cannot be obtained no use to put in list
         if (a->IsValid() && a->Name())
            gROOT->fTypes->Add(new TDataType(a));
         else
            delete a;

         last++;
      }
   }
}

//______________________________________________________________________________
void *TCint::GetInterfaceMethod(TClass *cl, Text_t *method, Text_t *params)
{
   // Return pointer to CINT interface function for a method of a class with
   // parameters params (params is a string of actual arguments, not formal
   // ones). If the class is 0 the global function list will be searched.

   G__CallFunc  func;
   long         offset;

   if (cl)
      func.SetFunc(cl->GetClassInfo(), method, params, &offset);
   else {
      G__ClassInfo gcl;   // default G__ClassInfo is global environment
      func.SetFunc(&gcl, method, params, &offset);
   }
   return (void *)func.InterfaceMethod();
}

//______________________________________________________________________________
void *TCint::GetInterfaceMethodWithPrototype(TClass *cl, Text_t *method, Text_t *proto)
{
   // Return pointer to CINT interface function for a method of a class with
   // a certain prototype, i.e. "char*,int,float". If the class is 0 the global
   // function list will be searched.

   G__InterfaceMethod f;
   long               offset;

   if (cl)
      f = cl->GetClassInfo()->GetMethod(method, proto, &offset).InterfaceMethod();
   else {
      G__ClassInfo gcl;   // default G__ClassInfo is global environment
      f = gcl.GetMethod(method, proto, &offset).InterfaceMethod();
   }
   return (void *)f;
}

//______________________________________________________________________________
void TCint::Execute(Text_t *function, Text_t *params)
{
   // Execute a global function with arguments params.

   long         offset;
   G__CallFunc  func;
   G__ClassInfo cl;

   // set pointer to interface method and arguments
   func.SetFunc(&cl, function, params, &offset);

   // call function
   func.Exec(0);
}

//______________________________________________________________________________
void TCint::Execute(TObject *obj, TClass *cl, Text_t *method, Text_t *params)
{
   // Execute a method from class cl with arguments params.

   void       *address;
   long        offset;
   G__CallFunc func;

   // set pointer to interface method and arguments
   func.SetFunc(cl->GetClassInfo(), method, params, &offset);

   // call function
   address = (void*)((Long_t)obj + offset);
   func.Exec(address);
}

//______________________________________________________________________________
void TCint::Execute(TObject *obj, TClass *cl, TMethod *method, TObjArray *params)
{
   // Execute a method from class cl with the arguments in array params
   // (params[0] ... params[n] = array of TObjString parameters).

   // Convert the TObjArray array of TObjString parameters to a character
   // string of comma separated parameters.
   // The parameters of type 'char' are enclosed in double quotes and all
   // internal quotes are escaped.

   if (!method) {
      Error("Execute","No method was defined");
      return;
   }

   TList *argList = method->GetListOfMethodArgs();

   // Check number of actual parameters against of expected formal ones

   Int_t nparms = argList->LastIndex()+1;
   Int_t argc   = params ? params->LastIndex()+1:0;

   if (nparms != argc) {
      Error("Execute","Wrong number of the parameters");
      return;
   }

   const Text_t *listpar = "";
   TString complete(10);

   if (params)
   {
       // Create a character string of parameters from TObjArray
       TIter next(params);
       for (Int_t i = 0; i < argc; i ++)
       {
           TMethodArg *arg = (TMethodArg *) argList->At( i );
           G__TypedefInfo type( arg->GetFullTypeName() );
           TObjString *nxtpar = (TObjString *)next();
           if (i) complete.Append(',');
           if (!strncmp( type.TrueName(), "char", 4 ))
           {
               TString chpar('\"');
               chpar.Append((nxtpar->String()).ReplaceAll("\"","\\\""));
               // At this point we have to check if string contains \\"
               // and apply some more sophisticated parser. Not implemented yet!
               complete.Append(chpar);
               complete.Append('\"');
           }
           else
               complete.Append(nxtpar->String());
       }
       listpar = complete.Data();
   }

   Execute(obj, cl, (Text_t *)method->GetName(), (char *)listpar);
}

//______________________________________________________________________________
Int_t TCint::ExecuteMacro(const char *filename)
{
   // Execute a CINT macro.

   G__value result = G__exec_tempfile((char*)filename);
   return 0;  // could get return value from result, but what about return type?
}

//______________________________________________________________________________
const char *TCint::TypeName(const char *typeDesc)
{
   // Return the absolute type of typeDesc.
   // E.g.: typeDesc = "class TNamed**", returns "TNamed".
   // You need to use the result immediately before it is being overwritten.

   static char t[64];
   char *s;
   if ((s = strchr(typeDesc, ' ')))
      strcpy(t, s+1);
   else
      strcpy(t, typeDesc);

   int l = strlen(t);
   while (l > 0 && t[l-1] == '*') t[--l] = 0;

   return t;
}

//______________________________________________________________________________
void *TCint::FindObject(char *item, G__ClassInfo *type, void **prevObj,
                        void **assocPtr)
{
   // Static function called by CINT when it finds an un-indentified object.
   // This function tries to find the UO in the ROOT files, directories, etc.
   // This functions has been registered by the TCint ctor.

   if (!*prevObj || *assocPtr != gDirectory)
      *prevObj = gROOT->FindObject(item, *assocPtr);

   if (*prevObj) type->Init(((TObject *)*prevObj)->ClassName());
   return *prevObj;
}

//______________________________________________________________________________
void TCint::UpdateAllCanvases()
{
   // Update all canvases at end the terminal input command.

   TIter next(gROOT->GetListOfCanvases());
   TCanvas *canvas;
   while ((canvas = (TCanvas *)next()))
      canvas->Update();
}
