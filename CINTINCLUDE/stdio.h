/*CMZ :  2.22/10 23/07/99  14.42.26  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
#ifndef G__STDIO_H
#define G__STDIO_H
#ifndef NULL
#pragma setstdio
#endif
typedef long fpos_t;
typedef unsigned int size_t;
#define 	_IOFBF (0)
#define 	_IOLBF (1)
#define 	_IONBF (2)
#define 	BUFSIZ (1024)
#define 	FILENAME_MAX (1024)
#define 	L_tmpnam (20)
#define 	TMP_MAX (238328)
#ifndef SEEK_CUR
#define 	SEEK_CUR (1)
#endif
#ifndef SEEK_END
#define 	SEEK_END (2)
#endif
#ifndef SEEK_SET
#define 	SEEK_SET (0)
#endif
#ifdef __cplusplus
#include <bool.h>
#endif
#endif
