/* Helper functions for detecting values within a word.
   Copyright (C) 2023 Markus Kurz
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

#ifndef _FT_STRING_MISC_H
#define _FT_STRING_MISC_H

#include "ft_string.h"

/* FT_OPSIZE defines the size of the byte boundary */
#define FT_OPSIZE (sizeof(op_t))

/* function for filling each byte of op_t with c_in */
static __always_inline op_t repeat_bytes(unsigned char c_in)
{
  /* This expression comes from glibc */
  return ((op_t)-1 / 0xFF) * c_in;
}

/* checks if there is a zero byte within an op_t */
static __always_inline op_t has_zero(op_t x)
{
  /* inspiration comes from
     https://graphics.stanford.edu/~seander/bithacks.html#ZeroInWord
     [1] Subtracting 1 sets 0x80 in a byte that was 0
     [2] anding (&) ~x clears 0x80 in a byte that was >= 123
     [3] anding 0x80 isolates that test bit */
  op_t lsb = repeat_bytes(0x01);
  op_t msb = repeat_bytes(0x80);
  return (x - lsb) & ~x & msb;
}

static __always_inline op_t has_value(op_t x, unsigned char c_in)
{
  /* inspiration comes from
     https://graphics.stanford.edu/~seander/bithacks.html#ValueInWord
     [1] Fill every byte of repeat with the searched byte
     [2] xoring the input with repeat zeros out that byte
     [3] call has_zero with the zeroed out byte */
  op_t repeat = repeat_bytes(c_in);
  return has_zero(x ^ repeat);
}

#endif /* ft_string-misc.h */
