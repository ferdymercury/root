//*CMZ :  2.23/12 26/01/2000  11.18.20  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   26/01/2000
#ifndef TABLE_HEADER_H
#define TABLE_HEADER_H

typedef struct  table_head_st {
   char name[32];       /* table name */
   char type[32];       /* table type */
   long maxlen;         /* # rows allocated */
   long nok;            /* # rows filled */
   long rbytes;         /* number of bytes per row */
   long dsl_pointer;    /* swizzled (DS_DATASET_T*) */
   long data_pointer;   /* swizzled (char*) */
} TABLE_HEAD_ST;

#endif /*TABLE_HEADER_H*/
