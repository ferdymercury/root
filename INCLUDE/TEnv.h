//*CMZ :  2.00/10 28/07/98  10.46.05  by  Fons Rademakers
//*CMZ :  1.03/09 04/12/97  19.37.51  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/09/95

#ifndef ROOT_TEnv
#define ROOT_TEnv

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
// TEnv                                                                 //
//                                                                      //
// The TEnv class reads a config file, by default .rootrc. Three types  //
// of .rootrc files are read: global, user and local files. The global  //
// file resides in $ROOTSYS, the user file in ~/ and the local file in  //
// the current working directory.                                       //
// The format of the .rootrc file is similar to the .Xdefaults format:  //
//                                                                      //
//   <SystemName>.<RootName|ProgName>.<name>[(type)]:  <value>          //
//                                                                      //
// Where <SystemName> is either, Unix, Mac or Dos (anything from MS),   //
// <RootName> the root name as given in the TROOT ctor,                 //
// <ProgName> the current program name and                              //
// <name> is the resource name, with optionally a type specification.   //
//                                                                      //
// E.g.:                                                                //
//                                                                      //
//   Unix.rint.Root.DynamicPath: .:$ROOTSYS/lib:~/lib                   //
//   Rint.Root.Debug:  FALSE                                            //
//   TH.Root.Debug: YES                                                 //
//   *.Root.MemStat: 1                                                  //
//                                                                      //
// <SystemName> and <ProgName> or <RootName> may be the wildcard "*".   //
// A # in the first column starts comment line.                         //
//                                                                      //
// Currently the following resources are defined:                       //
//    Root.Debug                (bool)         (*)                      //
//    Root.MemStat              (int)          (*)                      //
//    Root.MemStat.size         (int)          (*)                      //
//    Root.MemStat.cnt          (int)          (*)                      //
//    Root.DynamicPath          (string)                                //
//    Rint.Logon                (string)                                //
//    Rint.Logoff               (string)                                //
//                                                                      //
// (*) work only with the <RootName> since no <ProgName> is available   //
//     at time of initialization.                                       //
//                                                                      //
// Note that the .rootrc config files contain the config for all ROOT   //
// based applications.                                                  //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include "TObject.h"
#include "TString.h"

class TOrdCollection;
class TEnv;
class TEnvParser;
class TReadEnvParser;
class TWriteEnvParser;

enum EEnvLevel {
   kEnvGlobal,
   kEnvUser,
   kEnvLocal,
   kEnvChange,
   kEnvAll
};


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TEnvRec                                                              //
//                                                                      //
// Individual TEnv records.                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TEnvRec : public TObject {

friend class  TEnv;
friend class  TEnvParser;
friend class  TReadEnvParser;
friend class  TWriteEnvParser;

private:
   TString     fName;
   TString     fType;
   TString     fValue;
   EEnvLevel   fLevel;
   Bool_t      fModified;
   TObject    *fObject;

   TEnvRec() { }

   TEnvRec(const char *n, const char *v, const char *t, EEnvLevel l);
   TEnvRec(const char *n, const TString &v, const char *t, EEnvLevel l);
   void     ChangeValue(const char *v, const char *t, EEnvLevel l);
   void     ChangeValue(const TString &v, const char *t, EEnvLevel l);
   TString  ExpandValue(const char *v);
   void     Read(TObject *obj);
   void     Read(const Text_t *name) { TObject::Read(name); }
   void     Write(TObject *obj);
   void     Write(const Text_t *name=0, Int_t opt=0, Int_t bufs=0)
                                     { TObject::Write(name, opt, bufs); }
   Int_t    Compare(TObject *obj);
};

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TEnv                                                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TEnv : public TObject {

private:
   TOrdCollection   *fTable;
   TString           fRcName;

   const char       *Getvalue(const char *name);

public:
   TEnv(const char *name="");
   ~TEnv();

   TOrdCollection   *GetTable() { return fTable; }
   Bool_t            Defined(const char *name)
                             { return Getvalue(name) != 0; }

   int               GetValue(const char *name, int dflt);
   const char       *GetValue(const char *name, const char *dflt);
   TObject          *GetValue(const char *name, TObject *dflt);

   void              SetValue(const char *name, const char *value,
                              EEnvLevel level = kEnvChange, const char *type = 0);
   void              SetValue(const char *name, const TString &value,
                              EEnvLevel level, const char *type);
   void              SetValue(const char *name, EEnvLevel level = kEnvChange);
   void              SetValue(const char *name, int value);
   void              SetValue(const char *name, double value);

   TEnvRec          *Lookup(const char *n);
   void              ReadFile(const char *fname, EEnvLevel level);
   void              Save();
   void              SaveLevel(EEnvLevel level);
   void              Print(Option_t *option="");
   void              PrintEnv(EEnvLevel level = kEnvAll);

   ClassDef(TEnv,0)  //Handle ROOT configuration resources
};

R__EXTERN TEnv *gEnv;

#endif
