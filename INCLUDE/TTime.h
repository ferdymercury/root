//*CMZ :  2.23/09 03/11/99  16.21.48  by  Fons Rademakers
//*CMZ :  0.90/07 28/11/96  22.57.21  by  Fons Rademakers
//*-- Author :    Fons Rademakers   28/11/96

#ifndef ROOT_TTime
#define ROOT_TTime

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

   friend TTime operator+(const TTime &t1, const TTime &t2);
   friend TTime operator-(const TTime &t1, const TTime &t2);
   friend TTime operator*(const TTime &t1, const TTime &t2);
   friend TTime operator/(const TTime &t1, const TTime &t2);

   friend Bool_t operator== (const TTime &t1, const TTime &t2);
   friend Bool_t operator!= (const TTime &t1, const TTime &t2);
   friend Bool_t operator<  (const TTime &t1, const TTime &t2);
   friend Bool_t operator<= (const TTime &t1, const TTime &t2);
   friend Bool_t operator>  (const TTime &t1, const TTime &t2);
   friend Bool_t operator>= (const TTime &t1, const TTime &t2);

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
