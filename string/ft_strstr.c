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
char *ft_strstr(const char *haystack, const char *needle)
{
  const unsigned char *hs = (const unsigned char *)haystack;
  const unsigned char *ne = (const unsigned char *)needle;

  if (ne[0] == '\0')
    return (char *)hs;
  hs = (const unsigned char *)ft_strchr((const char *)hs, ne[0]);
  if (hs == NULL || ne[1] == '\0')
    return (char *)hs;

  size_t needle_len = ft_strlen(needle);
  size_t hay_len = ft_strlen((const char *)hs);
  if (hay_len < needle_len)
    return NULL;

  while (*hs && hay_len-- >= needle_len)
  {
    if (ft_memcmp(hs, ne, needle_len))
      return (char *)hs;
    ++hs;
  }
  return NULL;
}
