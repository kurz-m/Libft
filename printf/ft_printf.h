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

#ifndef _FT_PRINTF_H
#define _FT_PRINTF_H

// include the necessary libraries
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include "ft_string.h"
// define size of working buffer
#define WORKBUFFER 1000

typedef unsigned char uchar_t;

typedef enum e_spec {
  F_UCASE = (1 << 0),
  F_LCASE = (1 << 1),
} t_spec;

typedef struct s_printf {
  int fd;                 /*<< Filedescriptor to write to */
  const uchar_t *f;       /*<< Current char on fmt string */
  const uchar_t *end_fmt; /*<< End of the format specifier */
  int flags;              /*<< Flags */
  char buff[WORKBUFFER];  /*<< Buffer for the formatted string */
  va_list args;           /*<< variadic arguments */
  unsigned int to_print;  /*<< Amount to print */
  int done;               /*<< Return value for the printf function */
} t_printf;

inline const uchar_t *__find_spec(const uchar_t *fmt) {
  return (const uchar_t *)ft_strchrnul(fmt, '%');
}

// Name all the prototypes
int ft_fprintf(int fd, const char *format, ...);
int ft_printf(const char *format, ...);
int f_putchar(char c, int *printed);
int f_putstr(char *s, int *printed);
int ft_putnbr(long nbr, int *printed);
int ft_putunbr(unsigned int nbr, int *printed);
int ft_putnbrbase(size_t nb, char *base, int *printed);
int ft_putptr(void *ptr, int *printed);

#endif
