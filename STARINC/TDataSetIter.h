//*CMZ :  2.23/12 26/01/2000  12.24.44  by  Valery Fine(fine@bnl.gov)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   13/08/98

#ifndef ROOT_TDataSetIter
#define ROOT_TDataSetIter


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// $Id: TDataSetIter.h,v 1.20 1999/12/29 02:37:00 fine Exp $
//
// TDataSetIter                                                       //
//                                                                      //
// Iterator of TDataSet lists.                                        //
//                                                                      //
// Provides "standard" features of the TIter class for TDataSet object//
//                             and                                      //
// allows navigating TDataSet structure using the custom "directory"  //
//    notation (see TDataSet::Find(const Char *path) method)          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

//*KEEP,TList.
#include "TList.h"
//*KEEP,TNamed.
#include "TNamed.h"
//*KEND.

#include "TDataSet.h"

class TDataSetIter : public TObject{
protected:
   TIter           *fNext;            // "standard" ROOT iterator for containers
   TIter           *fNextSet[100];    // the list of the TList iterators to bypass the whole dataset
   Int_t            fDepth;           // the current depth of the passing
   Int_t            fMaxDepth;        // the max depth of the passing (=1 by default)

   const TDataSet *fDataSet;        // Pointer to the last selected TDataSet
   TDataSet       *fRootDataSet;    // Pointer to the root TDataSet
   TDataSet       *fWorkingDataSet; // Pointer to the working TDataSet
   TDataSet       *NextDataSet(TIter &next);
   TDataSet       *NextDataSet(Int_t nDataSet);
   static const TDataSet *fNullDataSet;
   const TDataSet *GetNullSet();    // return a fake pointer == -1 casted to (TDataSet *)
public:
  TDataSetIter(TDataSet *l=0, Int_t depth=1, Bool_t dir=kIterForward);
  TDataSetIter(TDataSet *l, Bool_t dir);
  virtual         ~TDataSetIter();

  virtual TDataSet    *Add(TDataSet *set){return Add(set,(TDataSet *)0);}
  virtual TDataSet    *Add(TDataSet *set, const Char_t *path);
  virtual TDataSet    *Add(TDataSet *set, TDataSet *dataset);

  virtual TDataSet    *Cd(const Char_t *dirname);
  virtual TDataSet    *Cd(TDataSet *ds);
  virtual TDataSet    *operator()( EDataSetPass mode=kContinue ) {return  Next(mode);}
  virtual TDataSet    *operator()(const Char_t *path) { return Find(path); }
  virtual TDataSet    *operator[](const Char_t *path);
  virtual Int_t          GetDepth() const {return fDepth;}
  virtual TDataSet    *Cwd() const {return fWorkingDataSet;}
  virtual TDataSet    *Dir(Char_t *dirname);
  virtual Int_t          Du() const;            // summarize dataset usage
  virtual Int_t          Df() const {return 0;} // report number of free "table" blocks.

  virtual TDataSet    *Find(const Char_t *path, TDataSet *rootset=0,Bool_t mkdir=kFALSE);
  virtual TDataSet    *FindByPath(const Char_t *path, TDataSet *rootset=0,Bool_t mkdir=kFALSE);
  virtual TDataSet    *FindObject(const Char_t *name,const Char_t *path="",Option_t *opt="");
  virtual TDataSet    *FindByName(const Char_t *name,const Char_t *path="",Option_t *opt="");
  virtual TDataSet    *FindObject(TDataSet *set,const Char_t *path,Option_t *opt="");
  virtual Int_t          Flag(UInt_t flag=kMark,EBitOpt reset=kSet){return Flag((TDataSet *)0,flag,reset);}
  virtual Int_t          Flag(const Char_t *path,UInt_t flag=kMark,EBitOpt reset=kSet);
  virtual Int_t          Flag(TDataSet *dataset,UInt_t flag=kMark,EBitOpt reset=kSet);

  virtual TDataSet    *Ls(const Char_t *dirname="",Option_t *opt="");
  virtual TDataSet    *Ls(const Char_t *dirname,Int_t depth);
  virtual TDataSet    *ls(const Char_t *dirname="",Option_t *opt="")   {return Ls(dirname,opt);}
  virtual TDataSet    *ls(const Char_t *dirname,Int_t depth){return Ls(dirname,depth);}
  virtual TDataSet    *Mkdir(const Char_t *dirname);
  virtual TDataSet    *Md(const Char_t *dirname)                       {return Mkdir(dirname);}
  virtual TString        Path(const Char_t *path)                        {TDataSet *set = Find(path); return set ? TString (""):set->Path();}
  virtual TString        Path() {return fWorkingDataSet ? TString ("") : fWorkingDataSet->Path();}
  virtual TDataSet    *Pwd(Option_t *opt="") const                     {if (Cwd()) Cwd()->ls(opt); return Cwd();}
  virtual Int_t          Rmdir(TDataSet *dataset,Option_t *option="");
  virtual Int_t          Rmdir(const Char_t *dirname,Option_t *option=""){return Rmdir(Find(dirname),option);}
  virtual Int_t          Rd(const Char_t *dirname,Option_t *option="")   {return Rmdir(Find(dirname),option);}

  virtual TDataSet    *Shunt(TDataSet *set){return Shunt(set,(TDataSet *)0);}
  virtual TDataSet    *Shunt(TDataSet *set, const Char_t *path);
  virtual TDataSet    *Shunt(TDataSet *set, TDataSet *dataset);

  virtual TDataSet    *Next( EDataSetPass mode=kContinue);
  virtual TDataSet    *Next(const Char_t *path, TDataSet *rootset=0,Bool_t mkdir=kFALSE){return Find(path,rootset,mkdir);}
  virtual void           Notify(TDataSet *dataset);
  const Option_t *GetOption() const                                      { return fNext ? fNext->GetOption():0; }
  virtual void           Reset(TDataSet *l=0,Int_t depth=0);
  virtual const TDataSet *operator *() const ;
  ClassDef(TDataSetIter,0) // class-iterator to navigate TDataSet structure
};

inline const TDataSet *TDataSetIter::operator *() const { return fDataSet == fNullDataSet ? fWorkingDataSet : fDataSet; }
inline const TDataSet *TDataSetIter::GetNullSet() { return fNullDataSet; } // return a fake pointer == -1 casted to (TDataSet *)

//__________________________________________________
// $Log: TDataSetIter.h,v $
// Revision 1.20  1999/12/29 02:37:00  fine
// remove warning to make Linux happy
//
// Revision 1.19  1999/12/28 23:32:01  fine
// TDataSetIter  operator++ removed to avoid a future problem
//
// Revision 1.18  1999/12/28 21:24:07  fine
// TDataSetIter opeartor * and operator ++ have been implemented
//__________________________________________________
#endif

