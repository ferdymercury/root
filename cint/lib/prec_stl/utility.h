/*CMZ :  2.24/05 16/05/2000  12.04.03  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   16/05/2000*/
// lib/prec_stl/utility

#pragma ifndef PREC_STL_UTILITY
#pragma define PREC_STL_UTILITY
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

#pragma endif
