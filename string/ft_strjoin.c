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

// Returns a freeable string 'dst', which is concatenated from 's1' and 's2'.
char *ft_strjoin(const char *s1, const char *s2)
{
	size_t size = ft_strlen(s1) + ft_strlen(s2) + 1;
	char *dst = ft_calloc(size, sizeof(*dst));

	if (NULL == dst)
		return NULL;
	dst = ft_strcpy(dst, s1);
	ft_strlcat(dst, s2, size);
	return dst;
}
