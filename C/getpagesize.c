/*CMZ :  1.03/09 05/12/97  14.43.46  by  Fons Rademakers*/
/*-- Author :*/
#ifdef WIN32
#include <windows.h>
#include "mmalloc.h"

int getpagesize()
{
  SYSTEM_INFO siSysInfo;   /* struct for hardware information */
  /* Copy the hardware information to the SYSTEM_INFO structure. */

  GetSystemInfo(&siSysInfo);
  return  siSysInfo.dwPageSize;
}

#else

#ifndef __GNUC__
/* Prevent "empty translation unit" warnings. */
static char file_intentionally_empty = 69;
#endif

#endif
