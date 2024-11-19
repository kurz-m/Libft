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

// Returns a freeable copy of the string 's1' with at most 'n' bytes copied.
char *ft_strndup(const char *s1, size_t n)
{
	size_t len = ft_strnlen(s1, n);
	char *copy = ft_calloc(len + 1, sizeof(*copy));

	if (copy == NULL)
		return NULL;
	copy[len] = '\0';
	return ft_memcpy(copy, s1, len);
}
