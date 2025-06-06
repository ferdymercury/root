// Author: Enric Tejedor CERN  08/2019
// Original PyROOT code by Wim Lavrijsen, LBL

/*************************************************************************
 * Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TPython
#define ROOT_TPython

// ROOT
#include "TObject.h"

#include <any>
#include <cstdint>

// Python
struct _object;
typedef _object PyObject;

namespace ROOT {
namespace Internal {

// Internal helper for PyROOT to swap with an object is at a specific address.
template<class T>
inline void SwapWithObjAtAddr(T &a, std::intptr_t b) { std::swap(a, *reinterpret_cast<T*>(b)); }

}
}

// Access to the python interpreter and API onto PyROOT.
class TPython {

private:
   static Bool_t Initialize();

public:
   // import a python module, making its classes available
   static Bool_t Import(const char *name);

   // load a python script as if it were a macro
   static void LoadMacro(const char *name);

   // execute a python stand-alone script, with argv CLI arguments
   static void ExecScript(const char *name, int argc = 0, const char **argv = nullptr);

   // execute a python statement (e.g. "import ROOT" )
   static Bool_t Exec(const char *cmd, std::any *result = nullptr, std::string const& resultName="_anyresult");

   // bind a ROOT object with, at the python side, the name "label"
   static Bool_t Bind(TObject *object, const char *label);

   // enter an interactive python session (exit with ^D)
   static void Prompt();

   // type verifiers for CPPInstance
   static Bool_t CPPInstance_Check(PyObject *pyobject);
   static Bool_t CPPInstance_CheckExact(PyObject *pyobject);

   // type verifiers for CPPOverload
   static Bool_t CPPOverload_Check(PyObject *pyobject);
   static Bool_t CPPOverload_CheckExact(PyObject *pyobject);

   // CPPInstance to void* conversion
   static void *CPPInstance_AsVoidPtr(PyObject *pyobject);

   // void* to CPPInstance conversion, returns a new reference
   static PyObject *CPPInstance_FromVoidPtr(void *addr, const char *classname, Bool_t python_owns = kFALSE);

   virtual ~TPython() {}
   ClassDef(TPython, 0) // Access to the python interpreter
};

#endif
