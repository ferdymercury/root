/*CMZ :  2.00/06 12/05/98  16.17.26  by  Rene Brun*/
/*CMZ :  2.00/04 06/04/98  20.45.27  by  Fons Rademakers*/
/*CMZ :  1.03/09 16/12/97  16.21.58  by  Rene Brun*/
/*-- Author :*/

/* Allocate memory on a page boundary.
   Copyright (C) 1991 Free Software Foundation, Inc.

The GNU C Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The GNU C Library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the GNU C Library; see the file COPYING.LIB.  If
not, write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#include "mmprivate.h"

#ifndef WIN32
#  include <unistd.h>
#endif

#if defined(R__LINUX) && !defined(R__MKLINUX) && !(R__GLIBC)
extern size_t getpagesize PARAMS ((void));
#else
extern int getpagesize PARAMS ((void));
#endif

#ifdef VMS
#undef _SC_PAGE_SIZE
#undef _SC_PAGESIZE
#endif

/* Cache the pagesize for the current host machine.  Note that if the host
   does not readily provide a getpagesize() function, we need to emulate it
   elsewhere, not clutter up this file with lots of kluges to try to figure
   it out. */

static size_t pagesize;

PTR
mvalloc (md, size)
  PTR md;
  size_t size;
{
  if (pagesize == 0)
    {
#ifdef _SC_PAGE_SIZE
      pagesize = sysconf(_SC_PAGE_SIZE);
#else
# ifdef _SC_PAGESIZE
      pagesize = sysconf(_SC_PAGESIZE);
# else
      pagesize = getpagesize();
# endif
#endif
    }

  return (mmemalign (md, pagesize, size));
}

#ifndef NO_SBRK_MALLOC

PTR
valloc (size)
  size_t size;
{
  return mvalloc ((PTR) NULL, size);
}

#endif

