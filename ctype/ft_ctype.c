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

#include "ft_ctype.h"

// Checks if 'c' is either a decimal digit (0-9) or an alphabetic character.
inline int ft_isalnum(int c)
{
  return (ft_isdigit(c) || ft_isalpha(c)) ? 1 : 0;
}

// Checks if 'c' is an alphabetic character.
inline int ft_isalpha(int c)
{
  return (ft_islower(c) || ft_isupper(c)) ? 1 : 0;
}

// Checks if 'c' is an ASCII character.
inline int ft_isascii(int c)
{
  return ((c & ~0x1F) == 0);
}

// Checks if 'c' is a space or a tab.
inline int ft_isblank(int c)
{
  return (c == 32 || c == 9) ? 1 : 0;
}

// Checks if 'c' is a control character.
inline int ft_iscntrl(int c)
{
  return ((c >= 0 && c < 32) || c == 127) ? 1 : 0;
}

// Checks if 'c' is a decimal digit (0-9).
inline int ft_isdigit(int c)
{
  return (c <= '9' && c >= '0') ? 1 : 0;
}

inline int ft_islower(int c)
{
  return (c > 122 || c < 97 ? 0 : 1);
}

inline int ft_isprint(int c)
{
  return (c > 31 && c < 127) ? 1 : 0;
}

inline int ft_isspace(int c)
{
  return (c == 32 || (c > 8 && c < 14)) ? 1 : 0;
}

inline int ft_isupper(int c)
{
  return (c < 91 && c > 64) ? 1 : 0;
}

inline int ft_isxdigit(int c)
{
  return (ft_isdigit(c) || (c > 64 && c < 71) || (c > 96 && c < 103)) ? 1 : 0;
}

inline int ft_tolower(int c)
{
  return (ft_isupper(c)) ? (c ^ (1 << 5)) : c;
}

inline int ft_toupper(int c)
{
  return (ft_islower(c)) ? (c ^ (1 << 5)) : c;
}
