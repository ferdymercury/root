/*CMZ :  2.23/10 10/12/99  18.00.16  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   10/12/99*/
#ifndef G__SYSTYPES_H
#define G__SYSTYPES_H
typedef int ssize_t;
typedef int pid_t;
typedef unsigned int pid_t;
typedef void* ptr_t;
typedef struct dev_t {
  unsigned long l,u;
  dev_t(unsigned long i){l=i;u=0;}
  void operator=(unsigned long i){l=i;u=0;}
} dev_t;
#pragma link off class dev_t;
#pragma link off typedef dev_t;
typedef unsigned long gid_t;
typedef unsigned long uid_t;
typedef unsigned long mode_t;
typedef long off_t;
typedef unsigned long ino_t;
typedef unsigned long nlink_t;
typedef unsigned short ushort;
typedef int key_t;
#endif
