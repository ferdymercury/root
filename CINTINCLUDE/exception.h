/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
#ifndef G__EXCEPTION_H
#define G__EXCEPTION_H

namespace std {

// no implementation

class exception;
class bad_exception;
typedef void (*unexpected_handler)();
unexpected_handler set_unexpected(unexpected_handler f) /* throw() */ ;
void unexpected();
typedef void (*terminate_handler)();
terminate_handler set_terminate(terminate_handler f) /* throw() */ ;
void terminate();
bool uncaught_exception();

class exception {
 public:
  exception() /* throw() */ ;
  exception(const exception&) /* throw() */ ;
  exception& operator=(const exception&) /* throw() */ ;
  virtual ~exception() /* throw() */ ;
  virtual const char* what() const /* throw() */;
};

class bad_exception : public exception {
 public:
  bad_exception() /* throw() */ ;
  bad_exception(const bad_exception&) /* throw() */ ;
  bad_exception& operator=(const bad_exception&) /* throw() */ ;
  virtual ~bad_exception() /* throw() */ ;
  virtual const char* what() const /* throw() */ ;
};

}

#endif
