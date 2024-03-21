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

// Compares 'n' characters from 's1' and 's2' and returning 0 on match,
// < 0 if value of 's1' < 's2', > 0 if value of 's1' > 's2'.
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  unsigned char c1, c2;

  while (n-- > 0)
  {
    c1 = (unsigned char)*s1++;
    c2 = (unsigned char)*s2++;
    int diff = c1 - c2;
    if (diff != 0)
      return diff;
    if (c1 == '\0')
      return 0;
  }
  return 0;
}
