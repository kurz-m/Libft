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

// Returns the first occurrence of 'needle' in the string 'haystack'.
char *ft_strstr(const char *haystack, const char *needle) {
  const unsigned char *hs = (const unsigned char *)haystack;
  const unsigned char *ne = (const unsigned char *)needle;

  if (ne[0] == '\0')
    return (char *)hs;
  hs = (const unsigned char *)ft_strchr((const char *)hs, ne[0]);
  if (hs == NULL || ne[1] == '\0')
    return (char *)hs;
  char *ptr;
  size_t n_len = ft_strlen(needle);
  size_t src_len;

  if (n_len == 0)
    return ((char *)haystack);
  size_t src_len = ft_strlen(haystack);
  ptr = (char *)haystack;
  while (*ptr && src_len-- >= n_len) {
    if (*ptr == *needle && !ft_strncmp(ptr, needle, n_len))
      return (ptr);
    ptr++;
  }
  return (NULL);
}
