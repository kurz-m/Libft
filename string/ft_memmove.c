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

// Copies 'n' bytes from memory space 'src' to memory space 'dst'.
// Memory may overlap.
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_tmp = (unsigned char *)dst;
	const unsigned char *src_tmp = (const unsigned char *)src;

	if (dst < src) {
		while (len--)
			*dst_tmp++ = *src_tmp++;
	}
	if (src < dst) {
		dst_tmp += len - 1;
		src_tmp += len - 1;
		while (len--)
			*dst_tmp-- = *src_tmp--;
	}
	return dst;
}
