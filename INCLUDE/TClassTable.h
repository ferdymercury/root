//*CMZ :  0.90/01 07/10/96  18.12.34  by  Rene Brun
//*-- Author :    Fons Rademakers   11/08/95

#ifndef ROOT_TClassTable
#define ROOT_TClassTable

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
// TClassTable                                                          //
//                                                                      //
// This class registers for all classes their name, id and dictionary   //
// function in a hash table.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif


struct ClassRec_t {
   char          *name;
   Version_t      id;
   VoidFuncPtr_t  dict;
   ClassRec_t    *next;
};


class TClassTable : public TObject {

private:
   TClassTable();

   static ClassRec_t  *FindElement(const char *cname, Bool_t insert=kFALSE);
   static void         SortTable();

   static ClassRec_t **fgTable;
   static ClassRec_t **fgSortedTable;
   static int          fgSize;
   static int          fgTally;
   static Bool_t       fgSorted;
   static int          fgCursor;

public:
   ~TClassTable();

   static void          Add(const char *cname, Version_t id, VoidFuncPtr_t dict);
   int                  Classes();
   static Version_t     GetID(const char *cname);
   static VoidFuncPtr_t GetDict(const char *cname);
   static void          Init();
   static char         *Next();
   void                 Print(Option_t *option="");
   static void          PrintTable();
   static void          Remove(const char *cname);
   static void          Terminate();

   ClassDef(TClassTable,0)  //Table of known classes
};

R__EXTERN TClassTable *gClassTable;

extern void AddClass(const char *cname, Version_t id, VoidFuncPtr_t dict);
extern void RemoveClass(const char *cname);

#endif
