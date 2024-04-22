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

// define size of working buffer
#define WORKBUFFER 1000

// define bases for hex and dec
#define DEC "0123456789"
#define UHEX "0123456789ABCDEF"
#define LHEX "0123456789abcdef"
#define TRUE 1
#define FALSE 0

typedef struct s_printf {
  int fd;
  const char *format;
  char buff[WORKBUFFER];
  va_list args;
  unsigned int to_print;
  int done;
} t_printf;

// Name all the prototypes
int ft_fprintf(int fd, const char *format, ...);
int ft_printf(const char *format, ...);
int f_putchar(char c, int *printed);
int f_putstr(char *s, int *printed);
size_t ft_strlen(const char *s);
int ft_putnbr(long nbr, int *printed);
int ft_putunbr(unsigned int nbr, int *printed);
int ft_putnbrbase(size_t nb, char *base, int *printed);
int ft_putptr(void *ptr, int *printed);

#endif
