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

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stddef.h>

char **ft_arrdup(const char **src);
void *ft_arrfree(char **arr);
size_t ft_arrlen(const char **arr);
void ft_arrprint(const char **arr);
char **ft_resize_array(char **src, size_t size, size_t capacity);

#endif /* array.h */
