/*CMZ :  2.23/10 10/12/99  18.00.24  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
// lib/prec_stl/memory

#pragma ifndef PREC_STL_MEMORY
#pragma define PREC_STL_MEMORY
#pragma link off global PREC_STL_MEMORY;
#pragma link C++ nestedtypedef;
#pragma link C++ nestedclass;

// Implemented by Scott Snyder, Fermi-lab
// Modified by Masaharu Goto
// SGI KCC porting by Philippe Canal, Fermi-lab

#include <cstddef>

#if defined(G__GNUC)

template <int inst>
class __malloc_alloc_template {
 public:
  static void * allocate(size_t n);
  static void deallocate(void *p, size_t /* n */);
  static void * reallocate(void *p, size_t /* old_sz */, size_t new_sz);
  static void (* set_malloc_handler(void (*f)()))();
};

typedef __malloc_alloc_template<0> malloc_alloc;
typedef malloc_alloc alloc;

#elif defined(G__HPUX)

class allocator {
};

#else

template <class T>
class allocator
{
public:
  typedef size_t      size_type;
  typedef ptrdiff_t   difference_type;
  typedef T*          pointer;
  typedef const T*    const_pointer;
  typedef T&          reference;
  typedef const T&    const_reference;
  typedef T           value_type;
  // template members don't really work with cint yet...
#if 0
  template <class U> struct rebind { typedef allocator<U> other; };
#endif
#if 0
  pointer address(reference _X) const ;
  const_pointer address(const_reference _X) const;
#else
#ifndef G__BORLAND
  pointer address(T& _X) const ;
  const_pointer address(const T& _X) const;
#endif
#endif
#ifndef G__BORLAND
  pointer allocate(size_type _N, const void *);
#else
  pointer allocate(size_type _N, void *);
#endif
  //char  *_Charalloc(size_type _N);
#ifndef G__KCC
  void deallocate(void *_P, size_type);
#else
  void deallocate(T *_P, size_type); ???
#endif
#ifndef G__BORLAND
  void construct(pointer _P, const T& _V);
  void destroy(pointer _P);
  size_type max_size() const;
#endif

  friend bool operator==(const allocator<T>& x, const allocator<T>& y);
  friend bool operator!=(const allocator<T>& x, const allocator<T>& y);
};

#if 0
template<class _Ty, class _U> inline
 bool operator==(const allocator<_Ty>&, const allocator<_U>&)
  {return (true); }
template<class _Ty, class _U> inline
 bool operator!=(const allocator<_Ty>&, const allocator<_U>&)
  {return (false); }
#endif

// specialized tempatel class allocator<void>
class allocator<void> {
 public:
	typedef void _Ty;
	typedef _Ty *pointer;
	typedef const _Ty *const_pointer;
	typedef _Ty value_type;
};

#endif // G__GNUC

#pragma endif
