//*CMZ :  2.24/02 05/04/2000  16.41.59  by  Fons Rademakers
//*CMZ :  2.24/01 31/03/2000  08.53.16  by  Fons Rademakers
//*CMZ :  2.23/09 03/11/99  18.30.03  by  Fons Rademakers
//*CMZ :  2.22/07 29/06/99  16.22.56  by  Fons Rademakers
//*CMZ :  2.00/12 02/10/98  16.42.30  by  Fons Rademakers
//*CMZ :  2.00/05 20/04/98  10.40.21  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  12.04.17  by  Fons Rademakers
//*-- Author :    Rene Brun   05/01/95

#ifndef ROOT_TDatime
#define ROOT_TDatime

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
// TDatime                                                              //
//                                                                      //
// Data and time 950130 124559.                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_Htypes
#include "Htypes.h"
#endif


class TDatime {

protected:
   UInt_t     fDatime;            //Date (relative to 1995) + time

public:
   TDatime();
   TDatime(const TDatime &d) { fDatime = d.fDatime; }
   TDatime(UInt_t time) { fDatime = time; }
   TDatime(Int_t date, Int_t time);
   TDatime(Int_t year, Int_t month, Int_t day,
           Int_t hour, Int_t min, Int_t sec);
   TDatime(const char *sqlDateTime);

   TDatime operator=(const TDatime &d);

   const char  *AsString() const;
   const char  *AsSQLString() const;
   UInt_t       Convert() const;
   void         Copy(TDatime &datime);
   UInt_t       Get() const { return fDatime; }
   Int_t        GetDate();
   Int_t        GetTime();
   void         FillBuffer(char *&buffer);
   void         Print(Option_t *option="");
   void         ReadBuffer(char *&buffer);
   void         Set();
   void         Set(Int_t date, Int_t time);
   void         Set(Int_t year, Int_t month, Int_t day,
                    Int_t hour, Int_t min, Int_t sec);
   Int_t        Sizeof() const {return sizeof(UInt_t);}

   friend Bool_t operator==(const TDatime &d1, const TDatime &d2);
   friend Bool_t operator!=(const TDatime &d1, const TDatime &d2);
   friend Bool_t operator< (const TDatime &d1, const TDatime &d2);
   friend Bool_t operator<=(const TDatime &d1, const TDatime &d2);
   friend Bool_t operator> (const TDatime &d1, const TDatime &d2);
   friend Bool_t operator>=(const TDatime &d1, const TDatime &d2);

   static void GetDateTime(UInt_t datetime, Int_t &date, Int_t &time);

   ClassDef(TDatime,1)  //Date and time 950130 124559
};


inline TDatime TDatime::operator=(const TDatime &d)
   { fDatime = d.fDatime; return *this; }

inline Bool_t operator==(const TDatime &d1, const TDatime &d2)
   { return d1.fDatime == d2.fDatime; }
inline Bool_t operator!=(const TDatime &d1, const TDatime &d2)
   { return d1.fDatime != d2.fDatime; }
inline Bool_t operator< (const TDatime &d1, const TDatime &d2)
   { return d1.fDatime < d2.fDatime; }
inline Bool_t operator<=(const TDatime &d1, const TDatime &d2)
   { return d1.fDatime <= d2.fDatime; }
inline Bool_t operator> (const TDatime &d1, const TDatime &d2)
   { return d1.fDatime > d2.fDatime; }
inline Bool_t operator>=(const TDatime &d1, const TDatime &d2)
   { return d1.fDatime >= d2.fDatime; }

#endif
