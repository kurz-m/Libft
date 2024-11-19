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

// Searches 'n' bytes in 's' for 'c' returning the first occurrence.
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char ch = (unsigned char)c;

	while (n--) {
		if (*str == ch)
			return str;
		str++;
	}
	return NULL;
}
