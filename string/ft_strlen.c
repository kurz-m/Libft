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

#include "ft_string.h"
#include <stdint.h>

#ifdef __x86_64__
#define has_zero(x) ((x - 0x0101010101010101) & ~x & 0x8080808080808080)
#else
#define has_zero(x) ((x - 0x01010101) & ~x & 0x80808080)
#endif /* __x86_64__ */

typedef unsigned long int op_t;

// Returns the length of the string 's'.
size_t ft_strlen(const char *s) {
  const char *run_ptr = s;

  /* use this loop to align the pointer address */
  uintptr_t align = -(uintptr_t)s % sizeof(op_t);
  for (int i = 0; i < align; ++i) {
    unsigned char c1 = *run_ptr;
    if (c1 == '\0')
      return run_ptr - s;
    ++run_ptr;
  }

  const op_t *x = (const op_t *)run_ptr;

  /* searches for zero byte within a register size */
  while (!has_zero(*x))
    ++x;

  run_ptr = (const char *)x;

  while (*run_ptr != '\0')
    ++run_ptr;

  return run_ptr - s;
}
