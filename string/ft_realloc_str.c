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
#include <stdlib.h>

char *ft_realloc_str(const char *ptr, size_t size)
{
	char *buf = ft_calloc(size, sizeof(*ptr));
	if (buf == NULL)
		return NULL;
	return ft_memcpy(buf, ptr, ft_strlen(ptr));
}
