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

// Returns a new node with 'content'.
t_list *ft_lstnew(void *content)
{
  t_list *new_node;

  new_node = NULL;
  new_node = (t_list *)malloc(sizeof(t_list));
  if (new_node == NULL)
    return NULL;
  new_node->content = content;
  new_node->next = NULL;
  return new_node;
}
