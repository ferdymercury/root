//*CMZ :  2.23/09 19/11/99  13.28.23  by  Fons Rademakers
//*CMZ :  1.03/05 11/10/97  14.05.00  by  Fons Rademakers
//*-- Author :    Fons Rademakers   11/08/97

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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

#ifdef __sun
#   if __SUNPRO_CC > 0x420
#      define GLOBAL_ERRNO
#   endif
#endif

#include "rootdp.h"

//______________________________________________________________________________
int GetErrno()
{
#ifdef GLOBAL_ERRNO
   return ::errno;
#else
   return errno;
#endif
}

//______________________________________________________________________________
void ResetErrno()
{
#ifdef GLOBAL_ERRNO
   ::errno = 0;
#else
   errno = 0;
#endif
}

//______________________________________________________________________________
static void Perror(char *buf)
{
   // Return in buf the message belonging to errno.

   int len = strlen(buf);
#if (defined(__sun) && defined (__SVR4)) || defined (__linux) || defined(_AIX)
   sprintf(buf+len, " (%s)", strerror(GetErrno()));
#else
   if (GetErrno() >= 0 && GetErrno() < sys_nerr)
      sprintf(buf+len, " (%s)", sys_errlist[GetErrno()]);
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
