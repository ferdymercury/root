//*CMZ :  2.21/03 19/01/99  18.27.58  by  Fons Rademakers
//*CMZ :  1.03/09 06/12/97  19.23.29  by  Fons Rademakers
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

#ifndef ROOT_TInterpreter
#define ROOT_TInterpreter

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TInterpreter                                                         //
//                                                                      //
// This class defines an abstract interface to a generic command line   //
// interpreter.                                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

#ifdef WIN32
# ifndef ROOT_TWin32HookViaThread
#include "TWin32HookViaThread.h"
# endif
#endif

class TClass;
class TFunction;
class TMethod;
class TObjArray;


class TInterpreter :
#ifdef WIN32
           protected TWin32HookViaThread,
#endif
           public TNamed {

protected:
   virtual void Execute(TMethod *method, TObjArray *params) = 0;

public:
   TInterpreter() { }   // for Dictionary
   TInterpreter(const char *name, const char *title = "Generic Interpreter");
   virtual ~TInterpreter() { }

   virtual void     EndOfLineAction() = 0;
   virtual Int_t    GetMore() const = 0;
   virtual char    *GetPrompt() = 0;
   virtual Int_t    InitializeDictionaries() = 0;
   virtual void     LoadMacro(const char *filename) = 0;
   virtual Int_t    ProcessLine(const char *line) = 0;
   virtual Int_t    ProcessLineSynch(const char *line) = 0;
   virtual void     PrintIntro() = 0;
   virtual void     Reset() = 0;
   virtual void     ResetAll() = 0;
   virtual void     ResetGlobals() = 0;
   virtual Int_t    DeleteGlobal(void *obj) = 0;
   virtual void     SaveContext() = 0;
   virtual void     SaveGlobalsContext() = 0;
   virtual void     UpdateListOfGlobals() = 0;
   virtual void     UpdateListOfGlobalFunctions() = 0;
   virtual void     SetClassInfo(TClass *cl) = 0;
   virtual Long_t   Calc(const char *line) = 0;
   virtual void     CreateListOfBaseClasses(TClass *cl) = 0;
   virtual void     CreateListOfDataMembers(TClass *cl) = 0;
   virtual void     CreateListOfMethods(TClass *cl) = 0;
   virtual void     CreateListOfMethodArgs(TFunction *m) = 0;
   virtual void     CreateListOfTypes() = 0;
   virtual void    *GetInterfaceMethod(TClass *cl, Text_t *method, Text_t *params) = 0;
   virtual void    *GetInterfaceMethodWithPrototype(TClass *cl, Text_t *method, Text_t *proto) = 0;
   virtual void     Execute(Text_t *function, Text_t *params) = 0;
   virtual void     Execute(TObject *obj, TClass *cl, Text_t *method, Text_t *params) = 0;
   virtual void     Execute(TObject *obj, TClass *cl, TMethod *method, TObjArray *params) = 0;
   virtual Int_t    ExecuteMacro(const char *filename) = 0;
   virtual const char *TypeName(const char *s) = 0;

   ClassDef(TInterpreter,0)  //ABC defining interface to generic interpreter
};

R__EXTERN TInterpreter *gInterpreter;

#endif
