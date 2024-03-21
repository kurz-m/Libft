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

#include "ft_list.h"
#include <stddef.h>

// Returns the size of the list 'lst'.
int ft_lstsize(t_list *lst)
{
  if (lst == NULL)
    return 0;

  int size = 1;
  t_list *it = lst;
  while (NULL != it->next)
  {
    ++size;
    it = it->next;
  }
  return size;
}
