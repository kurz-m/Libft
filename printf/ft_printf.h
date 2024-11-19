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
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#include "ft_string.h"
// define size of working buffer
#define WORKBUFFER 1000

typedef unsigned char uchar_t;

#define TRUE  1
#define FALSE 0

typedef enum e_spec {
	F_UCASE = (1 << 0),
	F_LCASE = (1 << 1),
} t_spec;

typedef struct s_printf {
	int fd;			/*<< Filedescriptor to write to */
	const uchar_t *f;	/*<< Current char on fmt string */
	const uchar_t *end_fmt; /*<< End of the format specifier */
	int flags;		/*<< Flags */
	char buff[WORKBUFFER];	/*<< Buffer for the formatted string */
	va_list args;		/*<< variadic arguments */
	unsigned int to_print;	/*<< Amount to print */
	int done;		/*<< Return value for the printf function */
} t_printf;

int bufwriter(t_printf *work, void *add, size_t size);
void format_int(intmax_t value, t_printf *work);
void format_int_base(uintmax_t value, int base, t_printf *work);

static inline const uchar_t *__find_spec(const uchar_t *fmt)
{
	return (const uchar_t *)ft_strchrnul(fmt, '%');
}

static inline void print_ptr_addr(t_printf *work)
{
	if (bufwriter(work, "0x", 2) == -1) {
		return;
	}
	void *ptr = va_arg(work->args, void *);
	format_int_base((uintptr_t)ptr, 16, work);
}

static inline void prepare_nb(t_printf *work)
{
	intmax_t n = (intmax_t)va_arg(work->args, int);

	format_int(n, work);
}

static inline void prepare_nb_base(t_printf *work, int base)
{
	uintmax_t n = (uintmax_t)va_arg(work->args, unsigned int);

	format_int_base(n, base, work);
}

static inline void ft_put_string(t_printf *work)
{
	char *str = va_arg(work->args, char *);

	if (str == NULL) {
		bufwriter(work, "(null)", 6);
	} else {
		bufwriter(work, str, ft_strlen(str));
	}
}

static inline void ft_put_char(t_printf *work)
{
	char c = (char)va_arg(work->args, int);

	bufwriter(work, &c, 1);
}

// Name all the prototypes
int ft_printf(const char *format, ...);
int ft_fprintf(int fd, const char *format, ...);

#endif
