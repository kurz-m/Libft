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

int bufwriter(t_printf *work, const uchar_t *add, size_t size) {
  int diff = 0;
  size_t i = 0;

  while (WORKBUFFER - work->to_print < size) {
    diff = WORKBUFFER - work->to_print;
    ft_memcpy((work->buff + work->to_print), (add + i), diff);
    size -= diff;
    i += diff;
    work->to_print += diff;
    work->done += diff;
    if (write(work->fd, work->buff, work->to_print) == -1) {
      work->done = -1;
      return work->done;
    }
  }
  ft_memcpy((work->buff + work->to_print), (add + i), diff);
  work->to_print += size;
  work->done += size;
  return work->done;
}

int ft_printf(const char *format, ...)
{
  /* initialize the working struct for printf */
  t_printf work = {
      .fd = 1,
      .f = (const uchar_t *)format,
      .end_fmt = NULL,
      .buff = {0},
      .to_print = 0,
      .done = 0,
  };
  /* pointer to the end of the leading string literal */
  const uchar_t *lead_str_end = NULL;
  /* initialize the variadic arguments function */
  va_start(work.args, format);

  /* find the first format specifier */
  work.f = lead_str_end = __find_spec((const uchar_t *)format);

  /* store the leading string into the internal buffer */
  if (bufwriter(&work, (const uchar_t *)format,
                lead_str_end - (const uchar_t *)format) == -1)
    goto all_done;

  /* check if only a string has to be printed */
  if (*work.f == '\0')
    goto all_done;

  do {
    /* do all the specifier handling here */
    /* TODO: here comes the specifier handling */

    /* NOTE: search for the next specifier */
    work.f = __find_spec(work.end_fmt = ++work.f);
    if (bufwriter(&work, work.end_fmt, work.f - work.end_fmt) ==
        -1)
      goto all_done;
  } while (*work.f != '\0');

all_done:
  /* Flush buffer before exiting the function */
  if (write(work.fd, work.buff, work.to_print) == -1) {
    work.done = -1;
  }
  va_end(work.args);
  return work.done;
}

int ft_fprintf(int fd, const char *format, ...) {
  /* initialize the working struct for printf */
  t_printf work = {
      .fd = fd,
      .f = (const uchar_t *)format,
      .end_fmt = NULL,
      .buff = {0},
      .to_print = 0,
      .done = 0,
  };
  /* pointer to the end of the leading string literal */
  const uchar_t *lead_str_end = NULL;
  /* initialize the variadic arguments function */
  va_start(work.args, format);

  /* find the first format specifier */
  work.f = lead_str_end = __find_spec((const uchar_t *)format);

  /* store the leading string into the internal buffer */
  if (bufwriter(&work, (const uchar_t *)format,
                lead_str_end - (const uchar_t *)format) == -1)
    goto all_done;

  /* check if only a string has to be printed */
  if (*work.f == '\0')
    goto all_done;

  do {
    /* do all the specifier handling here */
    /* TODO: here comes the specifier handling */

    /* NOTE: search for the next specifier */
    work.f = __find_spec(work.end_fmt = ++work.f);
    if (bufwriter(&work, work.end_fmt, work.f - work.end_fmt) ==
        -1)
      goto all_done;
  } while (*work.f != '\0');

all_done:
  /* Flush buffer before exiting the function */
  if (write(work.fd, work.buff, work.to_print) == -1) {
    work.done = -1;
  }
  va_end(work.args);
  return work.done;
}
