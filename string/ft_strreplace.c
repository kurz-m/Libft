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

/* `<SUMMARY>`
 * Takes a freeable string as target and replaces it
 * with a newly allocated string from `new_str`.
 * `<PARAM>`
 * `target`: freeable string to be replaced.
 * `new_str`: string that is getting copied to target.
 * `<RETURN>`
 * Pointer to the newly allocated string. */
char	*ft_strreplace(char *target, char *new_str)
{
	if (NULL == new_str || NULL == target)
		return (NULL);
	free(target);
	target = NULL;
	target = ft_strdup(new_str);
	return (target);
}
