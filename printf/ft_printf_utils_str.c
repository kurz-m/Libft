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

#include "ft_printf.h"

// Prints the given char and counts the 'printed' to keep
// track of the printed characters.
int	f_putchar(char c, int *printed)
{
	ssize_t		check;

	check = write(1, &c, 1);
	if (check == -1)
		return (FALSE);
	return ((*printed)++, TRUE);
}

// Prints the given string and adds the printed chars 
// to the 'printed' variable to keep track of the printed characters.
int	f_putstr(char *s, int *printed)
{
	ssize_t		check;

	if (s == NULL)
	{
		check = write(1, "(null)", 6);
		if (check == -1)
			return (FALSE);
		(*printed) += 6;
	}
	else
	{
		check = write(1, s, ft_strlen(s));
		if (check == -1)
			return (FALSE);
		(*printed) += ft_strlen(s);
	}
	return (TRUE);
}
