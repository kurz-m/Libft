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

/* input a string, a char and an index
   it searches if the char is in the string from the index
   to the start of the string */
int ft_isinstrr(int c, const char *str, int i)
{
  unsigned char ch = (unsigned char)c;
  str += i;

  while (i-- >= 0)
  {
    if (*str-- == ch)
      return 1;
  }
  return 0;
}
