/*CMZ :  2.00/11 21/08/98  09.12.26  by  Rene Brun*/
/*CMZ :  0.90/10 05/12/96  12.35.16  by  Valery Fine(fine@vxcern.cern.ch)*/
/*-- Author :    Valery Fine(fine@vxcern.cern.ch)   17/09/96*/

/*
  This include file defines DllImport/DllExport macro
  to build DLLs under Windows OS.

  They are defined as dummy for UNIX's
*/

#ifndef ROOT_DllImport
#define ROOT_DllImport

#ifndef __CINT__
#if defined(WIN32) && defined(_DLL)
#  define DllImport     __declspec( dllimport )
#  define DllExport     __declspec( dllexport )
#else
#  define DllImport
#  define DllExport
#endif
#  define R__EXTERN       DllImport extern
#  ifndef EXTERN
#     define EXTERN       DllImport extern
#  endif
#endif


#endif
