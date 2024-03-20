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

int ft_strcmp(const char *str1, const char *str2)
{
  size_t len = ft_strlen(str1);
  for (size_t i = 0; i < len; ++i)
  {
    unsigned char c1 = *str1++;
    unsigned char c2 = *str2++;
    int diff = c1 - c2;
    if (diff != 0)
      return diff;
  }
  return *str1 - *str2;
}
