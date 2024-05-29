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
#include <unistd.h>

int ft_arrprint(const char **arr)
{
  ssize_t printed = 0;
  char tmp[10000] = {0};
  size_t size = 0;

  if (arr == NULL)
    return -1;
  while (*arr != NULL)
  {
    size = ft_strlen(*arr);
    ft_memcpy(tmp, *arr, size);
    tmp[size + 1] = '\n';
    printed += write(1, tmp, size + 1);
    if (printed == -1) {
      return -1;
    }
    ft_memset(tmp, 0, size + 1);
    ++arr;
  }

  return printed;
}
