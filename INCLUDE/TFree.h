//*CMZ :  0.90/08 02/12/96  11.28.27  by  Rene Brun
//*-- Author :    Rene Brun   28/12/94

#ifndef ROOT_TFree
#define ROOT_TFree

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
// TFree                                                                //
//                                                                      //
// Description of free segments on a file.                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TFree : public TObject {

protected:
        Seek_t        fFirst;            //First free word of segment
        Seek_t        fLast;             //Last free word of segment

public:
        TFree();
        TFree(Seek_t first, Seek_t last);
        virtual ~TFree();
               TFree     *AddFree(Seek_t first, Seek_t last);
        virtual void     FillBuffer(char *&buffer);
               TFree     *GetBestFree(Int_t nbytes);
              Seek_t     GetFirst() {return fFirst;}
              Seek_t     GetLast() {return fLast;}
        virtual void     ReadBuffer(char *&buffer);
                void     SetFirst(Seek_t first) {fFirst=first;}
                void     SetLast(Seek_t last) {fLast=last;}
               Int_t     Sizeof() const {return sizeof(Version_t) + 2*sizeof(Seek_t);}

        ClassDef(TFree,1)  //Description of free segments on a file
};

#endif
