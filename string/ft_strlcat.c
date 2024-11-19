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

// Concatenates 'dst' and 'src'.
// '\0'-terminates the result except for 'dst' being longer than size.
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len = ft_strlen(src);

	if (size == 0)
		return src_len;

	size_t dst_len = ft_strlen(dst);
	if (dst_len != size) {
		/* copy only the remaining number of chars in the
		   destination buffer. Leave room for nul terminator */
		size_t remaining = size - dst_len - 1;

		/* copy only remaining chars from src */
		if (remaining > src_len)
			remaining = src_len;

		char *target = dst + dst_len;
		ft_memcpy(target, src, remaining);
		target[remaining] = '\0';
	}
	return dst_len + src_len;
}
