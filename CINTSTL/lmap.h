/*CMZ :  2.22/10 23/07/99  14.42.32  by  Masaharu Goto*/
/*-- Author :    Masaharu Goto   23/07/99*/
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 */

#ifndef LMAP_H
#define LMAP_H

#ifdef MAP_H
#undef MAP_H
#undef TREE_H
#define __MAP_WAS_DEFINED
#endif

#define Allocator long_allocator
#define map long_map
#define rb_tree long_rb_tree
#include <lngalloc.h>
#include <map.h>

#undef MAP_H
#undef TREE_H

#ifdef __MAP_WAS_DEFINED
#define MAP_H
#define TREE_H
#undef  __MAP_WAS_DEFINED
#endif

#undef Allocator
#undef map
#undef rb_tree

#endif
