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
#include "printf.h"
#include "ft_string.h"
#include <stdlib.h>

/* SUMMARY
   Takes an array of strings and creates a new array of strings
   with a new capacity and copies the old src to the new array
   and freeing the src pointer afterwards.
   PARAM
   `src`: array of strings to copy.
   `size``: length of the old array of strings.
   `capacity`: length of the new array of strings.
   RETURN
   Returns the newly created array of strings with the old
   strings assigned to it and the new length of `capacity`. */
char **ft_resize_array(char **src, size_t size, size_t capacity)
{
  size_t i = 0;
  char **new_array = ft_calloc(capacity + 1, sizeof(*new_array));

  if (new_array == NULL)
    return NULL;
  while (i < size)
  {
    new_array[i] = src[i];
    ++i;
  }
  free(src);
  return new_array;
}
