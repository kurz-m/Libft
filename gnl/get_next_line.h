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

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_gnl
{
  char *new_line;
  bool line_bool;
  size_t i;
  size_t k;
} t_gnl;

char *get_next_line(int fd);
char *ft_strjoin_gnl(char *s1, char *s2, t_gnl str);
int ft_clean_stash(char *str, t_gnl next);

#endif /* get_next_line.h */
