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
#include <stdlib.h>

// Deletes and frees the given node and every successor of that node.
void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *tmp = NULL;
  t_list *tmp_free = NULL;

  if (lst == NULL)
    return;
  tmp = *lst;
  while (tmp != NULL)
  {
    (*del)(tmp->content);
    tmp_free = tmp;
    tmp = tmp->next;
    free(tmp_free);
  }
  *lst = NULL;
}
