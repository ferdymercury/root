//*CMZ :  2.24/03 21/04/2000  16.16.30  by  Valery Fine(fine@bnl.gov)
//*CMZ :  2.24/01 31/03/2000  08.46.15  by  Rene Brun
//*CMZ :  2.23/12 26/01/2000  12.24.45  by  Valery Fine(fine@bnl.gov)
//*-- Author : Valery Fine   10/05/99  (E-mail: fine@bnl.gov)

#ifndef ROOT_TTable3Points
#define ROOT_TTable3Points

#include "TTablePoints.h"

class TTable3Points :  public TTablePoints
{
  protected:
        ULong_t   *fColumnOffset; //!

  public:
        enum EPointDirection {kXPoints,kYPoints,kZPoints,kTotalSize};
        TTable3Points();
        TTable3Points(TTableSorter *sorter,const void *key, const Char_t *xName="x",
                        const Char_t *yName="y", const Char_t *zName="z",Option_t *opt="");
        TTable3Points(TTableSorter *sorter,Int_t keyIndex, const Char_t *xName="x",
                        const Char_t *yName="y", const Char_t *zName="z",Option_t *opt="");
        ~TTable3Points();
        virtual void    SetAnyColumn(const Char_t *anyName, EPointDirection indx);
        virtual void    SetXColumn(const Char_t *xName){ SetAnyColumn(xName,kXPoints);}
        virtual void    SetYColumn(const Char_t *yName){ SetAnyColumn(yName,kYPoints);}
        virtual void    SetZColumn(const Char_t *zName){ SetAnyColumn(zName,kZPoints);}
        virtual Int_t   GetTotalKeys(){ return -1;}
        virtual Int_t   GetKey(Int_t ){return -1;}
        virtual Int_t   SetKeyByIndx(Int_t ){return -1;}
        virtual Int_t   SetKeyByValue(Int_t){return -1;}

        virtual Float_t   GetAnyPoint(Int_t idx, EPointDirection xAxis) const;
        virtual Float_t   GetX(Int_t idx)  const {return GetAnyPoint(idx,kXPoints);}
        virtual Float_t   GetY(Int_t idx)  const {return GetAnyPoint(idx,kYPoints);}
        virtual Float_t   GetZ(Int_t idx)  const {return GetAnyPoint(idx,kZPoints);}
 //-- abstract methods
         virtual void PaintPoints(int, float*, const char*) {}
         virtual const Float_t *GetXYZ(Int_t) {return 0;}
         virtual Float_t *GetXYZ(Float_t *xyz,Int_t idx , Int_t num=1 )const;
         virtual Float_t *GetP() const {return 0;}
         virtual Int_t    GetN() const {return -1;}

 //
        ClassDef(TTable3Points,0)  //A 3-D Points
};

#endif

