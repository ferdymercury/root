//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  2.23/01 27/08/99  22.33.10  by  Rene Brun
//*CMZ :  1.03/09 06/12/97  20.01.01  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/06/96

#ifndef ROOT_TMethodCall
#define ROOT_TMethodCall

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TMethodCall                                                          //
//                                                                      //
// Method or function calling interface. Objects of this class contain  //
// the (CINT) environment to call a global function or a method for an  //
// object of a specific class with the desired arguments. This class is //
// espicially useful when a method has to be called more times for      //
// different objects and/or with different arguments. If a function or  //
// method needs to be called only once one better uses                  //
// TInterpreter::Execute().                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif

class TClass;
class TFunction;
class G__CallFunc;

enum EReturnType { kLong, kDouble, kOther };


class TMethodCall : public TObject {

private:
   G__CallFunc   *fFunc;      //CINT method invocation environment
   Long_t         fOffset;    //offset added to object pointer before method invocation
   TClass        *fClass;     //pointer to the class info
   TFunction     *fMetPtr;    //pointer to the method or function info
   TString        fMethod;    //method name
   TString        fParams;    //argument string
   TString        fProto;     //prototype string
   Bool_t         fDtorOnly;  //call only dtor and not delete when calling ~xxx
   EReturnType    fRetType;   //method return type

   void Execute(const char *,  const char *) { }    // versions of TObject
   void Execute(TMethod *, TObjArray *) { }

public:
   TMethodCall();
   TMethodCall(TClass *cl, const char *method, const char *params);
   TMethodCall(const char *function, const char *params);
   ~TMethodCall();

   void           Init(TClass *cl, const char *method, const char *params);
   void           Init(const char *function, const char *params);
   void           InitWithPrototype(TClass *cl, const char *method, const char *proto);
   void           InitWithPrototype(const char *function, const char *proto);
   void           CallDtorOnly(Bool_t set = kTRUE) { fDtorOnly = set; }

   TFunction     *GetMethod();
   const char    *GetMethodName() const { return fMethod.Data(); }
   const char    *GetParams() const { return fParams.Data(); }
   const char    *GetProto() const { return fProto.Data(); }
   EReturnType    ReturnType();

   void     SetParamPtrs(void *paramArr);

   void     Execute(void *object);
   void     Execute(void *object, const char *params);
   void     Execute(void *object, Long_t &retLong);
   void     Execute(void *object, const char *params, Long_t &retLong);
   void     Execute(void *object, Double_t &retDouble);
   void     Execute(void *object, const char *params, Double_t &retDouble);

   void     Execute(void *object, char **retText);
   void     Execute(void *object, const char *params, char **retText);

   void     Execute();
   void     Execute(const char *params);
   void     Execute(Long_t &retLong);
   void     Execute(const char *params, Long_t &retLong);
   void     Execute(Double_t &retDouble);
   void     Execute(const char *params, Double_t &retDouble);

   ClassDef(TMethodCall,0)  //Method calling interface
};

inline void TMethodCall::Execute()
   { Execute((void *)0); }
inline void TMethodCall::Execute(const char *params)
   { Execute((void *)0, params); }
inline void TMethodCall::Execute(Long_t &retLong)
   { Execute((void *)0, retLong); }
inline void TMethodCall::Execute(const char *params, Long_t &retLong)
   { Execute((void *)0, params, retLong); }
inline void TMethodCall::Execute(Double_t &retDouble)
   { Execute((void *)0, retDouble); }
inline void TMethodCall::Execute(const char *params, Double_t &retDouble)
   { Execute((void *)0, params, retDouble); }

#endif
