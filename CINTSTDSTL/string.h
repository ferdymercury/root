/*CMZ :  2.22/10 23/07/99  14.42.33  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
// string

#ifndef G__STRING
#define G__STRING

namespace std {

#ifndef G__STRING_DLL
#pragma include_noerr <string.dll>
#endif

#ifdef __MAKECINT__

#include <prec_stl/string>

#else // __MAKECINT__

#ifdef G__STRING_DLL

#include <iostream>
ostream& operator<<(ostream& ost,const string& x) {
  ost << x.c_str() ;
  return(ost);
}

istream& operator>>(istream& ist,string& x) {
  string y; //bug workaround, dummy to void bytecode compilation
  char buf[1001];
  ist >> buf;
  x = buf;
  return(ist);
}

#else // G__STRING_DLL

#include <bstring.h>

#ifdef G__BORLAND
#include <iostream>
ostream& operator<<(ostream& ost,const string& x) {
  ost << x.c_str() ;
  return(ost);
}

istream& operator>>(istream& ist,string& x) {
  string y; //bug workaround, dummy to void bytecode compilation
  char buf[1001];
  ist >> buf;
  x = buf;
  return(ist);
}
#endif // G__BORLAND

#endif // G__STRING_DLL

int G__ateval(const string& x) {
  cout << "(string 0x" << &x << ")\"" << x << "\"" << endl;
  return(1);
}

#endif // __MAKECINT__

} // end namespace std

#endif
