//*CMZ :  2.24/02 05/04/2000  18.32.18  by  Fons Rademakers
//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.00/10 28/07/98  10.46.05  by  Fons Rademakers
//*CMZ :  1.03/09 04/12/97  19.37.51  by  Fons Rademakers
//*-- Author :    Fons Rademakers   22/09/95

#ifndef ROOT_TEnv
#define ROOT_TEnv

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
   void     Read(const char *name) { TObject::Read(name); }
   void     Write(TObject *obj);
   void     Write(const char *name=0, Int_t opt=0, Int_t bufs=0)
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
   virtual ~TEnv();

   TOrdCollection     *GetTable() { return fTable; }
   Bool_t              Defined(const char *name)
                                  { return Getvalue(name) != 0; }

   virtual Int_t       GetValue(const char *name, Int_t dflt);
   virtual const char *GetValue(const char *name, const char *dflt);
   virtual TObject    *GetValue(const char *name, TObject *dflt);

   virtual void        SetValue(const char *name, const char *value,
                                EEnvLevel level = kEnvChange, const char *type = 0);
   virtual void        SetValue(const char *name, const TString &value,
                                EEnvLevel level, const char *type);
   virtual void        SetValue(const char *name, EEnvLevel level = kEnvChange);
   virtual void        SetValue(const char *name, Int_t value);
   virtual void        SetValue(const char *name, Double_t value);

   virtual TEnvRec    *Lookup(const char *n);
   virtual void        ReadFile(const char *fname, EEnvLevel level);
   virtual void        Save();
   virtual void        SaveLevel(EEnvLevel level);
   virtual void        Print(Option_t *option="");
   virtual void        PrintEnv(EEnvLevel level = kEnvAll);

   ClassDef(TEnv,0)  //Handle ROOT configuration resources
};

R__EXTERN TEnv *gEnv;

#endif
