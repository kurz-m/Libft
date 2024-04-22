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
#include "ft_string.h"
#include <stdbool.h>

// This function parses the specifier and calls the relevant function.
static inline bool ft_parse_specifier(char c, va_list args, int *printed)
{
  bool check = true;

  if (c == 'c')
    check &= f_putchar(va_arg(args, int), printed);
  else if (c == 's')
    check &= f_putstr(va_arg(args, char *), printed);
  else if (c == 'p')
    check &= ft_putptr(va_arg(args, void *), printed);
  else if (c == 'i' || c == 'd')
    check &= ft_putnbr((long)va_arg(args, int), printed);
  else if (c == 'u')
    check &= ft_putunbr(va_arg(args, unsigned int), printed);
  else if (c == 'x')
    check &= ft_putnbrbase(va_arg(args, unsigned int), LHEX, printed);
  else if (c == 'X')
    check &= ft_putnbrbase(va_arg(args, unsigned int), UHEX, printed);
  else if (c == '%')
    check &= f_putchar('%', printed);
  return check;
}

/* `<SUMMARY>`
 * Writes a formatted string to STDOUT_FILENO.
 * Can handle %c, %s, %d, %i, %p, %u, %x, and %X as as identifier.
 * `<PARAM>`
 * `format`: The format string, with specifiers (e.g. %s).
 * `...`: Additional string arguments to format.
 * `<RETURN>`
 * Number of characters printed; does not handle write errors. */
int ft_printf(const char *format, ...)
{
  t_printf work = {
    .fd = 1,
    .format = format,
    .buff = {0},
    .done = 0,
  };
  va_start(work.args, format);

  while (*work.format != '\0')
  {
    if (*work.format == '%')
    {

    }
    else
    {
      
    }
    ++work.format;
  }

  if (write(work.fd, work.buff, work.to_print) == -1)
  {
    work.done = -1;
  }
all_done:
  va_end(work.args);
  return work.done;
}

/* `<SUMMARY>`
 * Writes a formatted string to the given file descriptor.
 * Can only handle %s as identifier.
 * `<PARAM>`
 * `fd`: The file descriptor to write to.
 * `format`: The format string, with %s specifiers.
 * `...`: Additional string arguments to format.
 * `<RETURN>`
 * Number of characters printed; does not handle write errors. */
int ft_fprintf(int fd, const char *format, ...)
{
  int printed;
  char *str;
  va_list args;

  printed = 0;
  va_start(args, format);
  if (!format)
    return (0);
  while (*format != '\0') {
    printed += write(fd, format, ft_strlen_c(format, '%'));
    format += ft_strlen_c(format, '%');
    if (*format == '%' && *(format + 1) == 's')
    {
      str = va_arg(args, char *);
      printed += write(fd, str, ft_strlen(str));
      format += 2;
    }
    else if (*format == '%')
      write(fd, format++, 1);
  }
  va_end(args);
  return (printed);
}
