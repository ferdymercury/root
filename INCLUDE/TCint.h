//*CMZ :  2.24/03 20/04/2000  14.33.11  by  Fons Rademakers
//*CMZ :  2.24/01 11/03/2000  09.29.11  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  09.24.06  by  Rene Brun
//*CMZ :  2.23/09 11/11/99  08.41.51  by  Rene Brun
//*CMZ :  2.23/07 25/10/99  15.19.53  by  Fons Rademakers
//*CMZ :  2.23/03 17/09/99  15.41.13  by  Rene Brun
//*CMZ :  2.23/01 26/08/99  12.17.02  by  Rene Brun
//*CMZ :  2.22/07 02/07/99  08.44.41  by  Rene Brun
//*CMZ :  2.22/05 14/06/99  12.42.21  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/03/96

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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
#ifndef __CINT__
#include "common.h"
#else
struct G__dictposition;
#endif

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
   TString         fSharedLibs;     //Hold a list of lib loaded by G__loadfile
   TString         fIncludePath;    //Hold a list of lib include path

   TCint() : fMore(-1) { }  //for Dictionary() only
   virtual void Execute(TMethod *, TObjArray *) { }

protected:
   virtual void ExecThreadCB(TWin32SendClass *command);

public:
   TCint(const char *name, const char *title);
   virtual ~TCint();

   void    AddIncludePath(const char *path);
   void    ClearFileBusy();
   void    EndOfLineAction();
   Int_t   GetMore() const { return fMore; }
   char   *GetPrompt() { return fPrompt; }
   const char *GetSharedLibs();
   const char *GetIncludePath();
   Int_t   InitializeDictionaries();
   Bool_t  IsLoaded(const char *filename) const;
   void    LoadMacro(const char *filename);
   Int_t   ProcessLine(const char *line);
   Int_t   ProcessLineAsynch(const char *line);
   Int_t   ProcessLineSynch(const char *line);
   void    PrintIntro();
   void    Reset();
   void    ResetAll();
   void    ResetGlobals();
   void    RewindDictionary();
   Int_t   DeleteGlobal(void *obj);
   void    SaveContext();
   void    SaveGlobalsContext();
   void    UpdateListOfGlobals();
   void    UpdateListOfGlobalFunctions();
   void    UpdateListOfTypes();
   void    SetClassInfo(TClass *cl);
   Long_t  Calc(const char *line);
   void    CreateListOfBaseClasses(TClass *cl);
   void    CreateListOfDataMembers(TClass *cl);
   void    CreateListOfMethods(TClass *cl);
   void    CreateListOfMethodArgs(TFunction *m);
   void   *GetInterfaceMethod(TClass *cl, char *method, char *params);
   void   *GetInterfaceMethodWithPrototype(TClass *cl, char *method, char *proto);
   void    Execute(const char *function, const char *params);
   void    Execute(TObject *obj, TClass *cl, const char *method, const char *params);
   void    Execute(TObject *obj, TClass *cl, TMethod *method, TObjArray *params);
   Int_t   ExecuteMacro(const char *filename);
   const char *TypeName(const char *typeDesc);

   static void *FindObject(char *name, G__ClassInfo *type, void **prevObj, void **assocPtr);
   static void  UpdateClassInfo(char *name, Long_t tagnum);
   static void  UpdateAllCanvases();

   ClassDef(TCint,0)  //Interface to CINT C/C++ interpreter
};

#endif

