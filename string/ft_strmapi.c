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

// Returns a new string 'ptr'.
// The function 'f' is applied to every character + index of the string 's'.
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t size = ft_strlen(s);
	char *ptr = ft_calloc((size + 1), sizeof(*ptr));

	if (ptr == NULL)
		return NULL;
	ptr[size] = '\0';
	while (size--)
		ptr[size] = f((unsigned int)size, s[size]);
	return ptr;
}
