//*CMZ :  1.03/05 11/10/97  14.05.00  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// error                                                                //
//                                                                      //
// Set of error handling routines for daemon process.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <syslog.h>
#include <errno.h>
#include <string.h>

#if defined(hpux9)
extern "C" {
   extern void openlog(const char *, int, int);
   extern void syslog(int, const char *, ...);
}
#endif

#include "rootdp.h"


//______________________________________________________________________________
static void Perror(char *buf)
{
   int len = strlen(buf);
#if (defined(__sun) && defined (__SVR4)) || defined (__linux) || defined(_AIX)
   sprintf(buf+len, " (%s)", strerror(errno));
#else
   if (errno >= 0 && errno < sys_nerr)
      sprintf(buf+len, " (%s)", sys_errlist[errno]);
#endif
}

//______________________________________________________________________________
void ErrorInit(const char *ident)
{
   // Open syslog.

   openlog(ident, (LOG_PID | LOG_CONS), LOG_DAEMON);
}

//______________________________________________________________________________
void ErrorInfo(const char *va_(fmt), ...)
{
   // Write info message to syslog.

   char    buf[1024];
   va_list ap;

   va_start(ap,va_(fmt));
   vsprintf(buf, fmt, ap);
   va_end(ap);

   syslog(LOG_INFO, buf);
}

//______________________________________________________________________________
void ErrorSys(ERootdErrors code, const char *va_(fmt), ...)
{
   // Write system error message to syslog and exit.

   char    buf[1024];
   va_list ap;

   va_start(ap,va_(fmt));
   vsprintf(buf, fmt, ap);
   va_end(ap);

   Perror(buf);
   syslog(LOG_ERR, buf);
   NetSendError(code);
   RootdClose();
   exit(1);
}

//______________________________________________________________________________
void ErrorFatal(ERootdErrors code, const char *va_(fmt), ...)
{
   // Write fatal message to syslog and exit.

   char    buf[1024];
   va_list ap;

   va_start(ap,va_(fmt));
   vsprintf(buf, fmt, ap);
   va_end(ap);

   syslog(LOG_ERR, buf);
   NetSendError(code);
   RootdClose();
   exit(1);
}
