/*CMZ :  2.22/10 23/07/99  14.42.34  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
// lib/prec_stl/set

#ifndef PREC_STL_SET
#define PREC_STL_SET
#pragma link off global PREC_STL_SET;
#pragma link C++ nestedtypedef;
#pragma link C++ nestedclass;

// Imported from ANSI/ISO C++ 1997/Nov draft
// Got some ideas from Scott Snyder, Fermi-lab
// Modified by Masaharu Goto

#include <utility>
#include <memory>
#include <iterator>
#include <functional>

#if defined(G__GNUC)
template<class Key,class Compare=less<Key>
        ,class Allocator=alloc>
#elif defined(G__HPUX)
template<class Key,class Compare=less<Key>
        ,class Allocator=allocator>
#else
template<class Key,class Compare=less<Key>
        ,class Allocator=allocator<Key> >
#endif
class set {
 public:
  // types:
  typedef Key                                   key_type;
  typedef Key                                   value_type;
  typedef Compare                               key_compare;
  typedef Compare                               value_compare;
  typedef Allocator                             allocator_type;
#if defined(G__GNUC) || defined(G__HPUX)
  typedef Key*                                  pointer;
  typedef const Key*                            const_pointer;
  typedef Key&                                  reference;
  typedef const Key&                            const_reference;
  typedef size_t                                size_type;
  typedef ptrdiff_t                             difference_type;
#else
  typedef typename Allocator::pointer           pointer;
  typedef typename Allocator::const_pointer     const_pointer;
  typedef typename Allocator::reference         reference;
  typedef typename Allocator::const_reference   const_reference;
  typedef typename Allocator::size_type         size_type;
  typedef typename Allocator::difference_type   difference_type;
#endif

#ifdef G__VISUAL
  class iterator : public _Bidit<Key,difference_type>
#else
  class iterator : public bidirectional_iterator<Key,difference_type>
#endif
	{
   public:
    iterator() ;
    iterator(const iterator& x) ;
#ifndef G__BORLAND
    iterator& operator=(const iterator& x) ;
#endif
#if defined(G__VISUAL) || defind(G__GNUC)
    value_type operator*() const;
#else
    value_type& operator*() const;
#endif
    iterator& operator++();
    iterator operator++(int a);
    iterator& operator--();
    iterator operator--(int a);
#ifdef G__VISUAL
    bool operator==(const iterator& x) ;
    bool operator!=(const iterator& x) ;
#endif
#ifdef G__HPUX
    bool operator==(const iterator& x) ;
#endif
  };
#ifdef G__GNUC
  friend bool operator==(const set::iterator& x ,const set::iterator& y) const;
  friend bool operator!=(const set::iterator& x ,const set::iterator& y) const;
#endif
#ifdef G__HPUX
  friend bool operator!=(const set::iterator& x,const set::iterator& y)const;
#endif

#ifdef G__VISUAL
  class reverse_iterator : public _Bidit<Key,difference_type>
#else
  class reverse_iterator : public bidirectional_iterator<Key,difference_type>
#endif
	{
   public:
    reverse_iterator(const reverse_iterator& x);
#ifndef G__BORLAND
    reverse_iterator& operator=(const reverse_iterator& x) ;
#endif
#if defined(G__VISUAL) || defind(G__GNUC)
    value_type operator*() const;
#else
    value_type& operator*() const;
#endif
    reverse_iterator& operator++();
    reverse_iterator operator++(int a);
    reverse_iterator& operator--();
    reverse_iterator operator--(int a);
   private:
  };
  friend bool operator==(const set::reverse_iterator& x
                        ,const set::reverse_iterator& y) const;
  friend bool operator!=(const set::reverse_iterator& x
                        ,const set::reverse_iterator& y) const;

  typedef const iterator const_iterator;
  typedef const reverse_iterator const_reverse_iterator;

  // _lib.set.cons_ construct/copy/destroy:
  //set(const Compare& comp=Compare(), const Allocator&=Allocator());
  set();
#if 0
  template <class InputIterator>
   set(InputIterator first, InputIterator last,
       const Compare& comp = Compare(), const Allocator& = Allocator());
#endif
  set(const set& x);
  ~set();
  set& operator= (const set& x);
  //allocator_type get_allocator() const;
  // iterators:
  iterator               begin();
  //const_iterator         begin() const;
  iterator               end();
  //const_iterator         end() const;
  reverse_iterator       rbegin();
  //const_reverse_iterator rbegin() const;
  reverse_iterator       rend();
  //const_reverse_iterator rend() const;

  // capacity:
  bool          empty() const;
  size_type     size() const;
  size_type     max_size() const;
  // modifiers:
  //pair<iterator,bool> insert(const Key& x);
  iterator            insert(iterator position, const Key& x);
#if 0
  template <class InputIterator>
   void insert(InputIterator first, InputIterator last);
#endif
  void      erase(iterator position);
#if 0
  size_type erase(const key& x);
#endif
  void      erase(iterator first, iterator last);
  void swap(set<Key,Compare,Allocator>&);
  void clear();
  // observers:
  //key_compare   key_comp() const;
  //value_compare value_comp() const;
  // set operations:
  iterator  find(const Key& x) const;
  size_type count(const Key& x) const;
  iterator  lower_bound(const Key& x) const;
  iterator  upper_bound(const Key& x) const;
  //pair<iterator,iterator> equal_range(const Key& x) const;

  friend bool operator==(const set& x, const set& y);
  friend bool operator< (const set& x, const set& y);
  friend bool operator!=(const set& x, const set& y);
  friend bool operator> (const set& x, const set& y);
  friend bool operator>=(const set& x, const set& y);
  friend bool operator<=(const set& x, const set& y);
  // specialized algorithms:
  friend void swap(set& x, set& y);

};

#endif
