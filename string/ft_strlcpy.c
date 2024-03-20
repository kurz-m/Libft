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

#include "string.h"

// Copies 'src' into 'dst' and '\0'-terminates it.
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t src_len = ft_strlen(src);

  if (src_len >= size)
  {
    if (size > 0)
    {
      /* Copy src to dst and then just overwrite last char */
      ft_memcpy(dst, src, size);
      dst[size - 1] = '\0';
    }
  }
  else
    /* copy the whole src string */
    ft_memcpy(dst, src, size);
  return src_len;
}
