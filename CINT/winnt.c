/*CMZ :  2.22/10 23/07/99  14.42.21  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
/* /% C %/ */
/***********************************************************************
 * cint (C/C++ interpreter)
 ************************************************************************
 * Source file winnt_spec.c
 ************************************************************************
 * Description:
 *  Windows-NT missing library. Needed only for Win32 environment
 ************************************************************************
 * Copyright(c) 1991~1996  [hp] Hewlett Packard Japan, All rights reserved
 * Author                  Masaharu Goto (gotom@jpn.hp.com)
 * Copyright(c) 1995~1998  Masaharu Goto (MXJ02154@niftyserve.or.jp)
 *
 * Permission to use, copy, modify and distribute this software and its
 * documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Japan Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 ************************************************************************/

/* #include "common.h" */

#include <stdio.h>

#ifndef G__OLDIMPLEMENTATION463
extern FILE *G__serr;
#endif


/***********************************************************************
* getopt();
*
***********************************************************************/
int optind=1;
char *optarg;

int getopt(argc, argv,optlist)
int argc;
char **argv;
char *optlist;
{
  int optkey;
  char *p;
  if(optind<argc) {
    if('-'==argv[optind][0]) {
      optkey = argv[optind][1] ;
      p = optlist;
      while(*p) {
	if( (*p) == optkey ) {
	  ++p;
	  if(':'==(*p)) { /* option with argument */
	    if(argv[optind][2]) { /* -aARGUMENT */
	      optarg=argv[optind]+2;
	      optind+=1;
	      return(argv[optind-1][1]);
	    }
	    else { /* -a ARGUMENT */
	      optarg=argv[optind+1];
	      optind+=2;
	      return(argv[optind-2][1]);
	    }
	  }
	  else { /* option without argument */
	    ++optind;
	    optarg=(char*)NULL;
	    return(argv[optind-1][1]);
	  }
	}
	++p;
      }
      fprintf(G__serr,"Error: Unknown option %s\n",argv[optind]);
      ++optind;
      return(0);
    }
    else {
      return(EOF);
    }
  }
  else {
    return (EOF);
  }
}

/***********************************************************************
* alarm()
*
***********************************************************************/
void alarm(iwait)
int iwait;
{
  ;
}
