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

#include "get_next_line.h"
#include "string.h"

// Main function body of get_next_line
// First 'if' statement checks for valid inputs
// While loop is there for creating the new new_line
// and also filling the stash for keeping string after the new_line
char *get_next_line(int fd)
{
  static char stash[BUFFER_SIZE + 1] = {0};
  t_gnl next = (t_gnl){.new_line = NULL};

  if (fd < 0 || BUFFER_SIZE < 1)
    return NULL;
  while (stash[0] != '\0' || read(fd, stash, BUFFER_SIZE) > 0) {
    next.new_line = ft_strjoin_gnl(next.new_line, stash, next);
    if (next.new_line == NULL)
      return NULL;
    if (ft_clean_stash(stash, next) == true)
      break;
    if (read(fd, stash, 0) < 0)
      return free(next.new_line), NULL;
  }
  return next.new_line;
}
