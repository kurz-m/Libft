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

#ifndef _FT_IO_H
#define _FT_IO_H

// functions regarding input and output
int ft_putchar_fd(char c, int fd);
int ft_putendl_fd(char *s, int fd);
int ft_putstr_fd(char *s, int fd);

#endif /* ft_io.h */
