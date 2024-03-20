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

#include "libft.h"

// Returns the first occurrence of 'needle' in the string 'haystack'.
char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ptr;
	size_t	n_len;
	size_t	h_len;

	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *) haystack);
	h_len = ft_strlen(haystack);
	ptr = (char *) haystack;
	while (*ptr && h_len-- >= n_len)
	{
		if (*ptr == *needle && !ft_strncmp(ptr, needle, n_len))
			return (ptr);
		ptr++;
	}
	return (NULL);
}
