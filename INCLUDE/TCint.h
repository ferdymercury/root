//*CMZ :  2.21/03 19/01/99  18.27.39  by  Fons Rademakers
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

#ifndef ROOT_TCint
#define ROOT_TCint

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCint                                                                //
//                                                                      //
// This class defines an interface to the CINT C/C++ interpreter made   //
// by Masaharu Goto of HP Japan.                                        //
//                                                                      //
// CINT is an almost full ANSI compliant C/C++ interpreter.             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TInterpreter
#include "TInterpreter.h"
#endif

// do not want to load fproto.h since it will cause problems in G__Rint
// (double declared functions)
#define G__FPROTO_H
#include "common.h"

#ifndef WIN32
# define  TWin32SendClass char
#endif

class G__ClassInfo;
class TMethod;
class TObjArray;

class TCint : public TInterpreter {

private:
   Int_t           fMore;           //1 if more input is required
   char            fPrompt[64];     //proposed prompt string
   G__dictposition fDictPos;        //CINT dictionary context after init
   G__dictposition fDictPosGlobals; //CINT dictionary context after ResetGlobals()

   TCint() : fMore(-1) { }  //for Dictionary() only
   virtual void Execute(TMethod *, TObjArray *) { }

protected:
   virtual void ExecThreadCB(TWin32SendClass *command);

public:
   TCint(const char *name, const char *title);
   virtual ~TCint();

   void    EndOfLineAction();
   Int_t   GetMore() const { return fMore; }
   char   *GetPrompt() { return fPrompt; }
   Int_t   InitializeDictionaries();
   void    LoadMacro(const char *filename);
   Int_t   ProcessLine(const char *line);
   Int_t   ProcessLineAsynch(const char *line);
   Int_t   ProcessLineSynch(const char *line);
   void    PrintIntro();
   void    Reset();
   void    ResetAll();
   void    ResetGlobals();
   Int_t   DeleteGlobal(void *obj);
   void    SaveContext();
   void    SaveGlobalsContext();
   void    UpdateListOfGlobals();
   void    UpdateListOfGlobalFunctions();
   void    SetClassInfo(TClass *cl);
   Long_t  Calc(const char *line);
   void    CreateListOfBaseClasses(TClass *cl);
   void    CreateListOfDataMembers(TClass *cl);
   void    CreateListOfMethods(TClass *cl);
   void    CreateListOfMethodArgs(TFunction *m);
   void    CreateListOfTypes();
   void   *GetInterfaceMethod(TClass *cl, Text_t *method, Text_t *params);
   void   *GetInterfaceMethodWithPrototype(TClass *cl, Text_t *method, Text_t *proto);
   void    Execute(Text_t *function, Text_t *params);
   void    Execute(TObject *obj, TClass *cl, Text_t *method, Text_t *params);
   void    Execute(TObject *obj, TClass *cl, TMethod *method, TObjArray *params);
   Int_t   ExecuteMacro(const char *filename);
   const char *TypeName(const char *typeDesc);

   static void  *FindObject(char *name, G__ClassInfo *type, void **prevObj, void **assocPtr);
   static void  UpdateAllCanvases();

   ClassDef(TCint,0)  //Interface to CINT C/C++ interpreter
};

#endif

