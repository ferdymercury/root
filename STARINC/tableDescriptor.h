//*CMZ :  2.23/12 26/01/2000  09.42.35  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :
/* tableDescriptor.h */
#ifndef TABLEDESCRIPTOR_H
#define TABLEDESCRIPTOR_H
// $Id: tableDescriptor.h,v 1.6 2000/01/12 18:07:25 fine Exp $"
#ifdef NORESTRICTIONS
# define TABLEDESCRIPTOR_SPEC   \
 "struct tableDescriptor {      \
    char         *fColumnName; \
    unsigned int *fIndexArray; \
    unsigned int fOffset;      \
    unsigned int fSize;        \
    unsigned int fTypeSize;    \
    unsigned int fDimensions;  \
    EColumnType  fType;        \
};"
#else
# define TABLEDESCRIPTOR_SPEC      \
 "struct tableDescriptor {         \
    char         fColumnName[20]; \
    unsigned int fIndexArray[2];  \
    unsigned int fOffset;         \
    unsigned int fSize;           \
    unsigned int fTypeSize;       \
    unsigned int fDimensions;     \
    EColumnType  fType;           \
};"
#endif

/*   this is a name clas with ROOT
 * enum EColumnType {kNAN, kFloat, kInt, kLong, kShort, kDouble, kUInt
 *                     ,kULong, kUShort, kUChar, kChar };
 */

/*  This is to introduce an artificial restriction demanded by STAR database group
 *
 *    1. the name may be 19 symbols at most
 *    2. the number of the dimensions is 2 at most
 *
 *  To lift this restriction one has to provide -DNORESTRICTIONS CPP symbol and
 *  recompile code.
 */
typedef struct tableDescriptor_st {
#ifdef NORESTRICTIONS
    char         *fColumnName; /* The name of this data-member                                          */
    unsigned int *fIndexArray; /* The array of the sizes for each dimensions fIndexArray[fDimensions] */
#else
    char         fColumnName[32];  /* The name of this data-member: see dstype.h for dsl compatible mode */
    unsigned int fIndexArray[2];   /* The array of the sizes for each dimensions fIndexArray[fDimensions] */
#endif
    unsigned int fOffset;      /* The first byte in the row of this column                              */
    unsigned int fSize;        /* The full size of the selected column in bytes                         */
    unsigned int fTypeSize;    /* The type size of the selected column in bytes                         */
    unsigned int fDimensions;  /* The number of the dimensions for array                                */
    Int_t        fType;        /* The data type of the selected column                                  */
} TABLEDESCRIPTOR_ST;
// $Log: tableDescriptor.h,v $
// Revision 1.6  2000/01/12 18:07:25  fine
//  cvs symbols have been added and copyright class introduced
//"
