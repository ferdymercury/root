//*CMZ :  2.00/12 02/10/98  16.42.30  by  Fons Rademakers
//*CMZ :  2.00/05 20/04/98  10.40.21  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  12.04.17  by  Fons Rademakers
//*-- Author :    Rene Brun   05/01/95

#ifndef ROOT_TDatime
#define ROOT_TDatime

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
   virtual ~TDatime() { }
   virtual const char  *AsString() const;
   UInt_t               Convert() const;
   virtual void         Copy(TDatime &datime);
   UInt_t               Get() const { return fDatime; }
   virtual Int_t        GetDate();
   virtual Int_t        GetTime();
   virtual void         FillBuffer(char *&buffer);
   virtual void         Print(Option_t *option="");
   virtual void         ReadBuffer(char *&buffer);
   virtual void         Set();
   virtual void         Set(Int_t date, Int_t time);
   virtual void         Set(Int_t year, Int_t month, Int_t day,
                            Int_t hour, Int_t min, Int_t sec);
   virtual Int_t        Sizeof() const {return sizeof(UInt_t);}

   static void GetDateTime(UInt_t datetime, Int_t &date, Int_t &time);

   ClassDef(TDatime,1)  //Date and time 950130 124559
};

#endif
