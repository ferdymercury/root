/*CMZ :  2.22/10 23/07/99  14.42.34  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
// lib/prec_stl/valarray

#ifndef PREC_STL_VALARRAY
#define PREC_STL_VALARRAY
#pragma link off global PREC_STL_VALARRAY;
#pragma link C++ nestedtypedef;
#pragma link C++ nestedclass;

// Imported from ANSI/ISO C++ 1997/Nov draft
// Got some ideas from Scott Snyder, Fermi-lab
// Modified by Masaharu Goto

#include <stdlib.h>

template<class T> class valarray {
 public:
  typedef T value_type;
  // _lib.valarray.cons_ construct/destroy:
  valarray();
#ifdef __CINT__
  valarray(size_t);
#else
  explicit valarray(size_t);
#endif
  valarray(const T&, size_t);
  valarray(const T*, size_t);
  valarray(const valarray&);
#if 0
  valarray(const slice_array<T>&);
  valarray(const gslice_array<T>&);
  valarray(const mask_array<T>&);
  valarray(const indirect_array<T>&);
#endif
  ~valarray();

  // _lib.valarray.assign_ assignment:
  valarray<T>& operator=(const valarray<T>&);
  valarray<T>& operator=(const T&);
#if 0
  valarray<T>& operator=(const slice_array<T>&);
  valarray<T>& operator=(const gslice_array<T>&);
  valarray<T>& operator=(const mask_array<T>&);
  valarray<T>& operator=(const indirect_array<T>&);
#endif
  // _lib.valarray.access_ element access:
  //T                 operator[](size_t) const;
  T&                operator[](size_t);
  // _lib.valarray.sub_ subset operations:
#if 0
  valarray<T>       operator[](slice) const;
  slice_array<T>    operator[](slice);
  valarray<T>       operator[](const gslice&) const;
  gslice_array<T>   operator[](const gslice&);
  valarray<T>       operator[](const valarray<bool>&) const;
  mask_array<T>     operator[](const valarray<bool>&);
  valarray<T>       operator[](const valarray<size_t>&) const;
  indirect_array<T> operator[](const valarray<size_t>&);
#endif

#ifndef G__VISUAL
  // _lib.valarray.unary_ unary operators:
  valarray<T> operator+() const;
  valarray<T> operator-() const;
#ifndef G__BORLAND
  valarray<T> operator~() const;
  valarray<T> operator!() const;
#endif
  // _lib.valarray.cassign_ computed assignment:
  valarray<T>& operator*= (const T&);
  valarray<T>& operator/= (const T&);
  valarray<T>& operator+= (const T&);
  valarray<T>& operator-= (const T&);
  valarray<T>& operator*= (const valarray<T>&);
  valarray<T>& operator/= (const valarray<T>&);
  valarray<T>& operator+= (const valarray<T>&);
  valarray<T>& operator-= (const valarray<T>&);
#ifndef G__BORLAND
  valarray<T>& operator%= (const T&);
  valarray<T>& operator^= (const T&);
  valarray<T>& operator&= (const T&);
  valarray<T>& operator|= (const T&);
  valarray<T>& operator<<=(const T&);
  valarray<T>& operator>>=(const T&);
  valarray<T>& operator%= (const valarray<T>&);
  valarray<T>& operator^= (const valarray<T>&);
  valarray<T>& operator|= (const valarray<T>&);
  valarray<T>& operator&= (const valarray<T>&);
  valarray<T>& operator<<=(const valarray<T>&);
  valarray<T>& operator>>=(const valarray<T>&);
#endif
#endif
  // _lib.valarray.members_ member functions:
  size_t size() const;
  T    sum() const;
#ifdef G__BORLAND
  friend T min(const valarray<T>&) const;
  friend T max(const valarray<T>&) const;
#else
  T    min() const;
  T    max() const;
#endif
  valarray<T> shift (int) const;
  valarray<T> cshift(int) const;
#ifdef __CINT__
  valarray<T> apply(T (*func)(T)) const;
  valarray<T> apply(T (*func)(const T&)) const;
#else
  valarray<T> apply(T func(T)) const;
  valarray<T> apply(T func(const T&)) const;
#endif
  void resize(size_t sz, T c = T());

  friend valarray<T> operator*(const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator* (const valarray<T>&, const T&);
  friend valarray<T> operator* (const T&, const valarray<T>&);
  friend valarray<T> operator/ (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator/ (const valarray<T>&, const T&);
  friend valarray<T> operator/ (const T&, const valarray<T>&);
#ifdef G__NEVER
  // logical operator does not work for floating number
  friend valarray<T> operator% (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator% (const valarray<T>&, const T&);
  friend valarray<T> operator% (const T&, const valarray<T>&);
#endif
  friend valarray<T> operator+ (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator+ (const valarray<T>&, const T&);
  friend valarray<T> operator+ (const T&, const valarray<T>&);
  friend valarray<T> operator- (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator- (const valarray<T>&, const T&);
  friend valarray<T> operator- (const T&, const valarray<T>&);
#ifdef G__NEVER
  // logical operator does not work for floating number
  friend valarray<T> operator^ (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator^ (const valarray<T>&, const T&);
  friend valarray<T> operator^ (const T&, const valarray<T>&);
  friend valarray<T> operator& (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator& (const valarray<T>&, const T&);
  friend valarray<T> operator& (const T&, const valarray<T>&);
  friend valarray<T> operator| (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator| (const valarray<T>&, const T&);
  friend valarray<T> operator| (const T&, const valarray<T>&);
  friend valarray<T> operator<< (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator<<(const valarray<T>&, const T&);
  friend valarray<T> operator<<(const T&, const valarray<T>&);
  friend valarray<T> operator>> (const valarray<T>&, const valarray<T>&);
  friend valarray<T> operator>>(const valarray<T>&, const T&);
  friend valarray<T> operator>>(const T&, const valarray<T>&);
#endif
  friend valarray<bool> operator&& (const valarray<T>&, const valarray<T>&);
#ifdef G__BORLAND
  friend valarray<T> operator&&(const valarray<T>&, const T&);
  friend valarray<T> operator&&(const T&, const valarray<T>&);
#else
  friend valarray<bool> operator&&(const valarray<T>&, const T&);
  friend valarray<bool> operator&&(const T&, const valarray<T>&);
#endif
  friend valarray<bool> operator|| (const valarray<T>&, const valarray<T>&);
#ifdef G__BORLAND
  friend valarray<T> operator||(const valarray<T>&, const T&);
  friend valarray<T> operator||(const T&, const valarray<T>&);
#else
  friend valarray<bool> operator||(const valarray<T>&, const T&);
  friend valarray<bool> operator||(const T&, const valarray<T>&);
#endif
  friend valarray<bool> operator==(const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator==(const valarray<T>&, const T&);
  friend valarray<bool> operator==(const T&, const valarray<T>&);
  friend valarray<bool> operator!=(const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator!=(const valarray<T>&, const T&);
  friend valarray<bool> operator!=(const T&, const valarray<T>&);
  friend valarray<bool> operator< (const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator< (const valarray<T>&, const T&);
  friend valarray<bool> operator< (const T&, const valarray<T>&);
  friend valarray<bool> operator> (const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator> (const valarray<T>&, const T&);
  friend valarray<bool> operator> (const T&, const valarray<T>&);
  friend valarray<bool> operator<=(const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator<=(const valarray<T>&, const T&);
  friend valarray<bool> operator<=(const T&, const valarray<T>&);
  friend valarray<bool> operator>=(const valarray<T>&, const valarray<T>&);
  friend valarray<bool> operator>=(const valarray<T>&, const T&);
  friend valarray<bool> operator>=(const T&, const valarray<T>&);
  friend valarray<T> abs  (const valarray<T>&);
  friend valarray<T> acos (const valarray<T>&);
  friend valarray<T> asin (const valarray<T>&);
  friend valarray<T> atan (const valarray<T>&);
  friend valarray<T> atan2 (const valarray<T>&, const valarray<T>&);
  friend valarray<T> atan2(const valarray<T>&, const T&);
  friend valarray<T> atan2(const T&, const valarray<T>&);
  friend valarray<T> cos  (const valarray<T>&);
  friend valarray<T> cosh (const valarray<T>&);
  friend valarray<T> exp  (const valarray<T>&);
  friend valarray<T> log  (const valarray<T>&);
  friend valarray<T> log10(const valarray<T>&);
  friend valarray<T> pow(const valarray<T>&, const valarray<T>&);
  friend valarray<T> pow(const valarray<T>&, const T&);
  friend valarray<T> pow(const T&, const valarray<T>&);
  friend valarray<T> sin  (const valarray<T>&);
  friend valarray<T> sinh (const valarray<T>&);
  friend valarray<T> sqrt (const valarray<T>&);
  friend valarray<T> tan  (const valarray<T>&);
  friend valarray<T> tanh (const valarray<T>&);

};


#endif

