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

#include <stdint.h>

#include "ft_memcpy.h"
#include "ft_string-misc.h"
#include "ft_string.h"

// Copies 'n' bytes from memory space 'src' to memory space 'dst'.
void *ft_memcpy(void *dst, const void *src, size_t n)
{
  op_t *long_s = (op_t *)src;
  op_t *long_d = (op_t *)dst;

  /* only use fast forword copying if there are enough bytes */
  if (n > 16)
  {
    /* use this loop to align the pointer address */
    uintptr_t align = -(uintptr_t)long_d % FT_OPSIZE;
    n -= align;
    BYTE_COPY_FWD(long_d, long_s, align);

    while (n >= FT_OPSIZE)
    {
      *long_d++ = *long_s++;
      n -= FT_OPSIZE;
    }
  }

  BYTE_COPY_FWD(long_d, long_s, n);
  return dst;
}
