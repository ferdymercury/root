//*CMZ :  0.90/01 07/10/96  18.12.34  by  Rene Brun
//*-- Author :    Fons Rademakers   11/08/95

#ifndef ROOT_TClassTable
#define ROOT_TClassTable

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
