/*CMZ :  2.22/10 23/07/99  14.42.34  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
// lib/prec_stl/utility

#ifndef PREC_STL_UTILITY
#define PREC_STL_UTILITY
#pragma link off global PREC_STL_UTILITY;
#pragma link C++ nestedtypedef;
#pragma link C++ nestedclass;

template <class T1, class T2>
struct pair {
    T1 first;
    T2 second;
    pair() : first(T1()), second(T2()) {}
    pair(const T1& a, const T2& b) : first(a), second(b) {}
};

#endif
