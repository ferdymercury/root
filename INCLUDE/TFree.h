//*CMZ :  0.90/08 02/12/96  11.28.27  by  Rene Brun
//*-- Author :    Rene Brun   28/12/94

#ifndef ROOT_TFree
#define ROOT_TFree

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
