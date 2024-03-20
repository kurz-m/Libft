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

#include "string.h"
#include <stdbool.h>

// Returns a freeable copy of the string 's1.
// The start and end are trimmed with the characters from 'set'.
char *ft_strtrim(const char *s1, const char *set)
{
  size_t end = ft_strlen(s1);
  char *s_end = (char *)s1 + end - 1;

  bool lok_tab[256] = {false};
  for (const char *t = set; *t != '\0'; ++t)
  {
    lok_tab[*t] = true;
  }

  while (*s1 && lok_tab[*s1])
    ++s1;

  /* return empty string when all chars got trimmed */
  if (*s1 == '\0')
    return ft_strdup("");

  while (s_end != s1 && lok_tab[*s_end])
    --s_end;

  return ft_strndup(s1, s_end - s1 + 1);
}
