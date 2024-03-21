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

#include "ft_array.h"
#include "ft_string.h"

/* `<SUMMARY>`
 * Function for deep copying an array of strings to a new variable.
 * `<PARAM>`
 * `src`: input array of string.
 * `<RETURN>`
 * Returns a freeable array of string with the same size and values
 * as `src`.*/
char **ft_arrdup(const char **src)
{
  int i = -1;
  size_t size;
  char **dst;

  if (src == NULL)
    return NULL;
  size = ft_arrlen(src) + 1;
  dst = ft_calloc(size, sizeof(*dst));
  if (dst == NULL)
    return NULL;
  while (src[++i])
    dst[i] = ft_strdup(src[i]);
  return dst;
}
