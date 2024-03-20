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

// Compares 'n' bytes in 's1' and 's2' and returning 0 on a match,
// < 0 if value of 's1' < 's2', > 0 if value of 's1' > 's2'.
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i = 0;
  unsigned char *src1 = (unsigned char *)s1;
  unsigned char *src2 = (unsigned char *)s2;

  for (size_t i = 0; i < n; ++i)
  {
    unsigned char c1 = *src1++;
    unsigned char c2 = *src2++;
    int diff = c1 - c2;
    if (diff != 0)
      return diff;
  }
  return 0;
}
