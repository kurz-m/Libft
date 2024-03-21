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

#include "ft_ctype.h"
#include "ft_string.h"

static inline int ft_sign(int c)
{
  if (c == '-')
    return -1;
  return 1;
}

// Converts a string to an int.
// Arbitrary amount of leading white spaces, optional plus/minus sign.
int ft_atoi(const char *str) {
  int i = 0;
  int result = 0;
  int sign = 1;

  while (ft_isspace(str[i]))
    i++;
  if (str[i] == '-' || str[i] == '+')
    sign = ft_sign(str[i++]);
  while (ft_isdigit(str[i]))
  {
    result = result * 10 + (str[i] - '0');
    ++i;
  }
  return result * sign;
}
