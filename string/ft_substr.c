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

#include "ft_string.h"

// Returns a substring from 's' from the 'start' location with length 'len'.
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t size = ft_strlen(s);

  if (size < start)
    return ft_strdup("");
  if (size - start < len)
    len = size - start;
  char *dst = ft_calloc((len + 1), sizeof(*dst));
  if (dst == NULL)
    return NULL;
  dst[len + 1] = '\0';
  return ft_memcpy(dst, s + start, len);
}
