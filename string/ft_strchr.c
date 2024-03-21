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

// Returns the first occurrence of the character 'c' in the string 's'.
char *ft_strchr(const char *s, int c)
{
  unsigned char ch = (unsigned char)c;

  while (*s)
  {
    if (*s == ch)
      return ((char *)s);
    ++s;
  }
  return (*s == ch) ? (char *)s : NULL;
}
