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

// Add a 'new_node'-node to the end of a list.
void ft_lstadd_back(t_list **lst, t_list *new_node)
{
  t_list *last = NULL;

  if (*lst == NULL)
    *lst = new_node;
  else
  {
    last = ft_lstlast(*lst);
    last->next = new_node;
  }
}
