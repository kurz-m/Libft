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

#include "ft_io.h"
#include "ft_string.h"
#include <unistd.h>

// Outputs the str 's' to the file descriptor 'fd'.
int ft_putstr_fd(char *s, int fd)
{
  ssize_t printed = write(fd, s, ft_strlen(s));
  if (printed == -1) {
    return -1;
  }
  return printed;
}
