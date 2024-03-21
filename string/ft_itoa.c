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

static inline size_t ft_buf_size(int n)
{
  size_t size = 0;

  if (n <= 0)
    size = 1;
  while (n != 0)
  {
    ++size;
    n /= 10;
  }
  return size;
}

// Converts an integer into a string and returns it.
char *ft_itoa(int n) {
  size_t size = ft_buf_size(n);
  char *ptr = ft_calloc((size + 1), sizeof(char));
  long nb = n;

  if (ptr == NULL)
    return NULL;
  if (nb < 0)
  {
    nb *= -1;
    ptr[0] = '-';
  }
  ptr[size] = 0;
  ptr[size - 1] = '0';
  while (nb > 0)
  {
    ptr[--size] = (nb % 10) + 48;
    nb /= 10;
  }
  return ptr;
}
