//*CMZ :  2.24/04 16/05/2000  09.16.06  by  Rene Brun
//*CMZ :  2.24/01 17/02/2000  10.41.34  by  Fons Rademakers
//*CMZ :  2.23/12 26/01/2000  09.24.07  by  Rene Brun
//*CMZ :  1.00/09 21/04/97  16.43.26  by  Fons Rademakers
//*-- Author :    Rene Brun   14/04/97

#ifndef ROOT_TCut
#define ROOT_TCut

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TCut                                                                 //
//                                                                      //
// A specialized string object used in TTree selections.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TNamed
#include "TNamed.h"
#endif

class TCut : public TNamed {

public:
   TCut();
   TCut(const char *title);
   TCut(const char *name, const char *title);
   TCut(const TCut &cut);
   virtual ~TCut();

   // Assignment
   TCut&    operator=(const char *rhs);
   TCut&    operator=(const TCut &rhs);
   TCut&    operator+=(const char *rhs);
   TCut&    operator+=(const TCut &rhs);
   TCut&    operator*=(const char *rhs);
   TCut&    operator*=(const TCut &rhs);

   friend TCut operator+(const TCut &lhs, const char *rhs);
   friend TCut operator+(const char *lhs, const TCut &rhs);
   friend TCut operator+(const TCut &lhs, const TCut &rhs);
   friend TCut operator*(const TCut &lhs, const char *rhs);
   friend TCut operator*(const char *lhs, const TCut &rhs);
   friend TCut operator*(const TCut &lhs, const TCut &rhs);
   friend TCut operator&&(const TCut &lhs, const char *rhs);
   friend TCut operator&&(const char *lhs, const TCut &rhs);
   friend TCut operator&&(const TCut &lhs, const TCut &rhs);
   friend TCut operator||(const TCut &lhs, const char *rhs);
   friend TCut operator||(const char *lhs, const TCut &rhs);
   friend TCut operator||(const TCut &lhs, const TCut &rhs);
   friend TCut operator!(const TCut &rhs);

   // Type conversion
   operator const char*() const { return GetTitle(); }

   ClassDef(TCut,1)  //A specialized string object used for TTree selections
};

#endif
