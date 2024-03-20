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
#include "libft.h"

char **ft_split(char const *str, char c) {
  int count;
  char **arr;
  int i;

  i = 0;
  count = ft_count_words(str, c);
  arr = ft_calloc(sizeof(char *), (count + 1));
  if (arr == NULL)
    return NULL;
  arr[count] = NULL;
  while (i < count)
  {
    if (*str == c)
      str++;
    else
    {
      arr[i] = ft_substr(str, 0, ft_strlen_c(str, c));
      if (arr[i] == NULL)
        return ft_arrfree(arr);
      str += ft_strlen_c(str, c);
      ++i;
    }
  }
  return arr;
}
