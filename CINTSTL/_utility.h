/*CMZ :  2.23/10 10/12/99  18.00.22  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
#ifndef UTILITY_H
#define UTILITY_H

/////////////////////////////////////////////////////////////////////////
// auto_ptr
/////////////////////////////////////////////////////////////////////////
template<class T> class auto_ptr {
 public:
  /* explicit */ auto_ptr(T* pin) { p=pin; }
  auto_ptr(auto_ptr& x) { p=new T(*x); }
  auto_ptr& operator=(auto_ptr& x) { release(); p=new T(*x); return(*this); }
  ~auto_ptr() { release(); }
#ifndef __CINT__
  template<class Y> auto_ptr(auto_ptr<Y>& x) { p=new T(*x); }
  template<class Y> auto_ptr& operator=(auto_ptr<Y>& x)
    { release(); p=new T(*x); return(*this); }
#endif

  T& operator*() const { if(p) return(*p); else return(T()); }
  T* operator->() const { return p; }
  T* get() const { return p; }
  T* release() { if(p) delete p; p=0; }
  T* reset(T* pin=0) { if(p) delete p; p=pin; }

 private:
  T* p;
};

#endif





