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

#include <errno.h>
#include <limits.h>
#ifndef __set_errno
#define __set_errno(Val) errno = (Val)
#endif /* __set_errno */

#include "ft_ctype.h"
#include "ft_string.h"

// Converts a string to a long.
long ft_atol(const char *s, int base) {
  unsigned long i = 0;
  int sign = 1;
  int neg = 0;
  const char *end;
  char c;

  if (base < 0 || base == 1 || base > 36) {
    __set_errno(EINVAL);
    return 0;
  }

  while (ft_isspace(*s))
    ++s;
  switch (*s) {
  case '-':
    neg = 1;
  case '+':
    ++s;
  }

  /* check for prefixes of number */
  if (*s == '0')
  {
    if ((base == 0 || base == 16) && ft_toupper((s[1]) == 'X'))
    {
      s += 2;
      base = 16;
    }
    else if ((base == 0 || base == 2) && ft_toupper((s[1]) == 'B'))
    {
      s += 2;
      base = 2;
    }
    else if (base == 0)
      base = 8;
  }
  else if (base == 0)
    base = 10;

  /* find end of the digit string */
  end = s;
  for (c = *end; c != '\0'; c = *++end)
  {
    if ((c < '0' || c > '9') &&
        (!ft_isalpha(c) || (int)(ft_toupper(c) - 'A' + 10) >= base))
      break;
  }

  c = *s;

  for (; c != '\0'; c = *++s)
  {
    if (s == end)
      break;
    if (c >= '0' && c <= '9')
      c -= '0';
    else if (ft_isalpha(c))
      c = ft_toupper(c) - 'A' + 10;
    else
      break;
    if ((int)c >= base)
      break;
    else {
      i *= base;
      i += c;
    }
  }
  return neg ? -i : i;
}
