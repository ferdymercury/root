//*CMZ :  1.03/09 16/12/97  16.52.08  by  Rene Brun
//*-- Author :    Rene Brun   10/01/95

#ifndef ROOT_Bytes
#define ROOT_Bytes

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Bytes                                                                //
//                                                                      //
// A set of inline byte handling routines.                              //
//                                                                      //
// The set of tobuf() and frombuf() routines take care of packing a     //
// basic type value into a buffer in network byte order (i.e. they      //
// perform byte swapping when needed). The buffer does not have to      //
// start on a machine (long) word boundary.                             //
//                                                                      //
// The set of host2net() and net2host() routines convert a basic type   //
// value from host to network byte order and vice versa. On BIG ENDIAN  //
// machines this is a no op.                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif

#include <string.h>


//______________________________________________________________________________
inline void tobuf(char *&buf, UChar_t x)
{
   *buf++ = x;
}

inline void tobuf(char *&buf, UShort_t x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)&x;
   buf[0] = sw[1];
   buf[1] = sw[0];
#else
   memcpy(buf, &x, sizeof(UShort_t));
#endif
   buf += sizeof(UShort_t);
}

inline void tobuf(char *&buf, UInt_t x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)&x;
   buf[0] = sw[3];
   buf[1] = sw[2];
   buf[2] = sw[1];
   buf[3] = sw[0];
#else
   memcpy(buf, &x, sizeof(UInt_t));
#endif
   buf += sizeof(UInt_t);
}

inline void tobuf(char *&buf, ULong_t x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)&x;
#ifdef R__B64
   buf[0] = sw[7];
   buf[1] = sw[6];
   buf[2] = sw[5];
   buf[3] = sw[4];
   buf[4] = sw[3];
   buf[5] = sw[2];
   buf[6] = sw[1];
   buf[7] = sw[0];
#else
   buf[0] = sw[3];
   buf[1] = sw[2];
   buf[2] = sw[1];
   buf[3] = sw[0];
#endif
#else
   memcpy(buf, &x, sizeof(ULong_t));
#endif
   buf += sizeof(ULong_t);
}

inline void tobuf(char *&buf, Float_t x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)&x;
   buf[0] = sw[3];
   buf[1] = sw[2];
   buf[2] = sw[1];
   buf[3] = sw[0];
#else
   memcpy(buf, &x, sizeof(Float_t));
#endif
   buf += sizeof(Float_t);
}

inline void tobuf(char *&buf, Double_t x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)&x;
   buf[0] = sw[7];
   buf[1] = sw[6];
   buf[2] = sw[5];
   buf[3] = sw[4];
   buf[4] = sw[3];
   buf[5] = sw[2];
   buf[6] = sw[1];
   buf[7] = sw[0];
#else
   memcpy(buf, &x, sizeof(Double_t));
#endif
   buf += sizeof(Double_t);
}

inline void frombuf(char *&buf, UChar_t *x)
{
   *x = *buf++;
}

inline void frombuf(char *&buf, UShort_t *x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)x;
   sw[0] = buf[1];
   sw[1] = buf[0];
#else
   memcpy(x, buf, sizeof(UShort_t));
#endif
   buf += sizeof(UShort_t);
}

inline void frombuf(char *&buf, UInt_t *x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)x;
   sw[0] = buf[3];
   sw[1] = buf[2];
   sw[2] = buf[1];
   sw[3] = buf[0];
#else
   memcpy(x, buf, sizeof(UInt_t));
#endif
   buf += sizeof(UInt_t);
}

inline void frombuf(char *&buf, ULong_t *x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)x;
#ifdef R__B64
   sw[0] = buf[7];
   sw[1] = buf[6];
   sw[2] = buf[5];
   sw[3] = buf[4];
   sw[4] = buf[3];
   sw[5] = buf[2];
   sw[6] = buf[1];
   sw[7] = buf[0];
#else
   sw[0] = buf[3];
   sw[1] = buf[2];
   sw[2] = buf[1];
   sw[3] = buf[0];
#endif
#else
   memcpy(x, buf, sizeof(ULong_t));
#endif
   buf += sizeof(ULong_t);
}

inline void frombuf(char *&buf, Float_t *x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)x;
   sw[0] = buf[3];
   sw[1] = buf[2];
   sw[2] = buf[1];
   sw[3] = buf[0];
#else
   memcpy(x, buf, sizeof(Float_t));
#endif
   buf += sizeof(Float_t);
}

inline void frombuf(char *&buf, Double_t *x)
{
#ifdef R__BYTESWAP
   char *sw = (char *)x;
   sw[0] = buf[7];
   sw[1] = buf[6];
   sw[2] = buf[5];
   sw[3] = buf[4];
   sw[4] = buf[3];
   sw[5] = buf[2];
   sw[6] = buf[1];
   sw[7] = buf[0];
#else
   memcpy(x, buf, sizeof(Double_t));
#endif
   buf += sizeof(Double_t);
}

inline void tobuf(char *&buf, Char_t x)  { tobuf(buf, (UChar_t) x); }
inline void tobuf(char *&buf, Short_t x) { tobuf(buf, (UShort_t) x); }
inline void tobuf(char *&buf, Int_t x)   { tobuf(buf, (UInt_t) x); }
inline void tobuf(char *&buf, Long_t x)  { tobuf(buf, (ULong_t) x); }

inline void frombuf(char *&buf, Char_t *x)  { frombuf(buf, (UChar_t *) x); }
inline void frombuf(char *&buf, Short_t *x) { frombuf(buf, (UShort_t *) x); }
inline void frombuf(char *&buf, Int_t *x)   { frombuf(buf, (UInt_t *) x); }
inline void frombuf(char *&buf, Long_t *x)  { frombuf(buf, (ULong_t *) x); }


//______________________________________________________________________________
#ifdef R__BYTESWAP
inline UShort_t host2net(UShort_t x)
{
   return (((x & 0x00ff) << 8) | ((x & 0xff00) >> 8));
}

inline UInt_t host2net(UInt_t x)
{
   return (((x & 0x000000ffU) << 24) | ((x & 0x0000ff00U) <<  8) |
           ((x & 0x00ff0000U) >>  8) | ((x & 0xff000000U) >> 24));
}

inline ULong_t host2net(ULong_t x)
{
#ifdef R__B64
   char sw[sizeof(ULong_t)];
   *(ULong_t *)sw = x;

   char *sb = (char *)&x;
   sb[0] = sw[7];
   sb[1] = sw[6];
   sb[2] = sw[5];
   sb[3] = sw[4];
   sb[4] = sw[3];
   sb[5] = sw[2];
   sb[6] = sw[1];
   sb[7] = sw[0];
   return x;
#else
   return (ULong_t)host2net((UInt_t) x);
#endif
}

inline Float_t host2net(Float_t xx)
{
   UInt_t *x = (UInt_t *)&xx;
   *x = (((*x & 0x000000ffU) << 24) | ((*x & 0x0000ff00U) <<  8) |
         ((*x & 0x00ff0000U) >>  8) | ((*x & 0xff000000U) >> 24));
   return xx;
}

inline Double_t host2net(Double_t x)
{
   char sw[sizeof(Double_t)];
   *(Double_t *)sw = x;

   char *sb = (char *)&x;
   sb[0] = sw[7];
   sb[1] = sw[6];
   sb[2] = sw[5];
   sb[3] = sw[4];
   sb[4] = sw[3];
   sb[5] = sw[2];
   sb[6] = sw[1];
   sb[7] = sw[0];
   return x;
}
#else
inline UShort_t host2net(UShort_t x) { return x; }
inline UInt_t   host2net(UInt_t x)   { return x; }
inline ULong_t  host2net(ULong_t x)  { return x; }
inline Float_t  host2net(Float_t x)  { return x; }
inline Double_t host2net(Double_t x) { return x; }
#endif

inline Short_t  host2net(Short_t x) { return host2net((UShort_t)x); }
inline Int_t    host2net(Int_t x)   { return host2net((UInt_t)x); }
inline Long_t   host2net(Long_t x)  { return host2net((ULong_t)x); }

inline UShort_t net2host(UShort_t x) { return host2net(x); }
inline Short_t  net2host(Short_t x)  { return host2net(x); }
inline UInt_t   net2host(UInt_t x)   { return host2net(x); }
inline Int_t    net2host(Int_t x)    { return host2net(x); }
inline ULong_t  net2host(ULong_t x)  { return host2net(x); }
inline Long_t   net2host(Long_t x)   { return host2net(x); }
inline Float_t  net2host(Float_t x)  { return host2net(x); }
inline Double_t net2host(Double_t x) { return host2net(x); }

#endif
