/*CMZ :  2.23/12 17/01/2000  17.44.34  by  Rene Brun*/
/*CMZ :  2.00/06 12/05/98  16.01.47  by  Rene Brun*/
/*CMZ :  2.00/04 06/04/98  20.43.58  by  Fons Rademakers*/
/*CMZ :  1.02/00 23/07/97  19.45.12  by  Valery Fine(fine@vxcern.cern.ch)*/
/*-- Author :*/

/* Access for application keys in mmap'd malloc managed region.
   Copyright 1992 Free Software Foundation, Inc.

   Contributed by Fred Fish at Cygnus Support.   fnf@cygnus.com

This file is part of the GNU C Library.

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

/* This module provides access to some keys that the application can use to
   provide persistent access to locations in the mapped memory section.
   The intent is that these keys are to be used sparingly as sort of
   persistent global variables which the application can use to reinitialize
   access to data in the mapped region.

   For the moment, these keys are simply stored in the malloc descriptor
   itself, in an array of fixed length.  This should be fixed so that there
   can be an unlimited number of keys, possibly using a multilevel access
   scheme of some sort. */

#ifndef WIN32
#  include <sys/types.h>
#  include <sys/mman.h>
#endif /* WIN32 */

#include "mmprivate.h"

int
mmalloc_setkey (md, keynum, key)
  PTR md;
  int keynum;
  PTR key;
{
  struct mdesc *mdp = (struct mdesc *) md;
  int result = 0;

  if ((mdp != NULL) && (keynum >= 0) && (keynum < MMALLOC_KEYS))
    {
      mdp -> keys [keynum] = key;
#ifndef WIN32
#ifndef VMS
#ifndef R__LYNXOS
      msync((void *)mdp, sizeof(struct mdesc), MS_ASYNC);
#endif
#endif
#endif
      result++;
    }
  return (result);
}

PTR
mmalloc_getkey (md, keynum)
  PTR md;
  int keynum;
{
  struct mdesc *mdp = (struct mdesc *) md;
  PTR keyval = NULL;

  if ((mdp != NULL) && (keynum >= 0) && (keynum < MMALLOC_KEYS))
    {
      keyval = (PTR)((long)mdp -> keys [keynum] + mdp->offset);
    }
  return (keyval);
}
