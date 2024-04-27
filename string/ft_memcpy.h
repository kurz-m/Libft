/* Copyright (C) 2023 Markus Kurz
   This file is part of the LIBFT C Library.

   The LIBFT C Library is my own implementation for the
   42 project 'libft', which recodes functions from the
   regular GNU C Library. It is a free to use library;
   you can redistribute and/or modify it under the terms
   of the MIT Licence.

   This library mostly suits my needs regarding 42 projects
   within the outer circle of the projects and is therefore
   not Norm conform as needed within the core curriculum.

   The MIT Licence will be situated within the root directory. */

#ifndef _FT_MEMCPY_H
#define _FT_MEMCPY_H

#include <stddef.h>

typedef unsigned char byte;

/* Copy exactly nbytes by copying each single byte from src_bp to dst_bp.
   This function is mostly used for aligning the memory addresses. */
static inline void *byte_copy_fwd(void *dst, const void *src, size_t n)
{
  const byte *s = (const byte *)src;
  byte *d = (byte *)dst;

  while (n-- != 0)
  {
    *d++ = *s++;
  }
  return dst;
}

#endif /* ft_memcpy.h */
