//*CMZ :  0.90/07 28/11/96  22.57.21  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/11/96

#ifndef ROOT_TTime
#define ROOT_TTime

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
// TTime                                                                //
//                                                                      //
// Basic time type with millisecond precision.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif


class TTime {

private:
   Long_t   fMilliSec;

public:
   TTime() { fMilliSec = 0; }
   TTime(Long_t msec) { fMilliSec = msec; }
   TTime(const TTime &t) { fMilliSec = t.fMilliSec; }

   TTime operator=(const TTime &t);

   TTime operator+=(const TTime &t);
   TTime operator-=(const TTime &t);
   TTime operator*=(const TTime &t);
   TTime operator/=(const TTime &t);

   friend inline TTime operator+(const TTime &t1, const TTime &t2);
   friend inline TTime operator-(const TTime &t1, const TTime &t2);
   friend inline TTime operator*(const TTime &t1, const TTime &t2);
   friend inline TTime operator/(const TTime &t1, const TTime &t2);

   friend inline Bool_t operator== (const TTime &t1, const TTime &t2);
   friend inline Bool_t operator!= (const TTime &t1, const TTime &t2);
   friend inline Bool_t operator<  (const TTime &t1, const TTime &t2);
   friend inline Bool_t operator<= (const TTime &t1, const TTime &t2);
   friend inline Bool_t operator>  (const TTime &t1, const TTime &t2);
   friend inline Bool_t operator>= (const TTime &t1, const TTime &t2);

   operator long() const;
   const char *AsString() const;

   ClassDef(TTime,1)  //Basic time type with milli second precision
};

inline TTime TTime::operator= (const TTime &t)
        { fMilliSec = t.fMilliSec; return *this; }
inline TTime TTime::operator+=(const TTime &t)
        { fMilliSec += t.fMilliSec; return *this; }
inline TTime TTime::operator-=(const TTime &t)
        { fMilliSec -= t.fMilliSec; return *this; }
inline TTime TTime::operator*=(const TTime &t)
        { fMilliSec *= t.fMilliSec; return *this; }
inline TTime TTime::operator/=(const TTime &t)
        { fMilliSec /= t.fMilliSec; return *this; }
inline TTime::operator long() const
        { return fMilliSec; }

inline TTime operator+(const TTime &t1, const TTime &t2)
        { return TTime(t1.fMilliSec + t2.fMilliSec); }
inline TTime operator-(const TTime &t1, const TTime &t2)
        { return TTime(t1.fMilliSec - t2.fMilliSec); }
inline TTime operator*(const TTime &t1, const TTime &t2)
        { return TTime(t1.fMilliSec * t2.fMilliSec); }
inline TTime operator/(const TTime &t1, const TTime &t2)
        { return TTime(t1.fMilliSec / t2.fMilliSec); }

inline Bool_t operator== (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec == t2.fMilliSec; }
inline Bool_t operator!= (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec != t2.fMilliSec; }
inline Bool_t operator< (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec < t2.fMilliSec; }
inline Bool_t operator<= (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec <= t2.fMilliSec; }
inline Bool_t operator> (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec > t2.fMilliSec; }
inline Bool_t operator>= (const TTime &t1, const TTime &t2)
        { return t1.fMilliSec >= t2.fMilliSec; }

#endif
