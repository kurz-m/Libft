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

#include "get_next_line.h"
#include "ft_string.h"

// Resets the stash and keeps string after new_line char.
inline int ft_clean_stash(char *str, t_gnl next)
{
  next.line_bool = false;
  next.i = 0;
  next.k = 0;
  while (str[next.i])
  {
    if (next.line_bool == true)
      str[next.k++] = str[next.i];
    if (str[next.i] == '\n')
      next.line_bool = true;
    str[next.i++] = '\0';
  }
  return next.line_bool;
}

// joins the strings until a new_line appears.
inline char *ft_strjoin_gnl(char *s1, char *s2, t_gnl str)
{
  size_t size_1 = ft_strlen_c(s1, '\n');
  size_t size_2 = ft_strlen_c(s2, '\n');

  str.new_line = malloc(size_1 + size_2 + 1);
  if (str.new_line == NULL)
    return NULL;
  str.i = size_1;
  str.k = 0;
  ft_memcpy(str.new_line, s1, size_1 + 1);
  ft_strlcat(str.new_line, s2, size_2);
  free(s1);
  s1 = NULL;
  return str.new_line;
}
