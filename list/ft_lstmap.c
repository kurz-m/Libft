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

// Creates a copy of the list 'lst' and applies the function 'f'
// to the content of it. Frees the list if memory allocation fails.
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *node = NULL;
  t_list *tmp = NULL;
  t_list *head = NULL;

  if (lst == NULL)
    return (NULL);
  head = ft_lstnew(NULL);
  head->content = f(lst->content);
  tmp = head;
  lst = lst->next;
  while (lst) {
    node = ft_lstnew(f(lst->content));
    if (node == NULL)
    {
      ft_lstclear(&head, del);
      return NULL;
    }
    tmp->next = node;
    tmp = node;
    lst = lst->next;
  }
  return head;
}
