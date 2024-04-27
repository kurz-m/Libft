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

#ifndef _FT_STRING_H
#define _FT_STRING_H

#ifndef op_t
typedef unsigned long int op_t;
#endif /* op_t */

/* get size_t and NULL from <stddef.h> */
#include <stddef.h>
#include <sys/types.h>

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
char *ft_realloc_str(const char *ptr, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memrchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_mempcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
int ft_atoi(const char *str);
long ft_atol(const char *str, int base);
int ft_count_words(const char *str, char c);
int ft_isinstr(int c, const char *str);
int ft_isinstrr(int c, const char *str, int i);
char *ft_itoa(int n);
char **ft_split(char const *s, char c);
char *ft_stpcpy(char *dst, const char *src);
char *ft_strchr(const unsigned char *s, int c);
char *ft_strchrnul(const unsigned char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dst, const char *src);
char *ft_strdup(const char *s1);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strjoinfree(char *s1, char *s2, char control);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *s);
ssize_t ft_safe_strlen(const char *s);
size_t ft_strlen_c(const char *str, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strnchr(const char *s, size_t size, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strndup(const char *s1, size_t n);
size_t ft_strnlen(const char *s, size_t maxlen);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strreplace(char *target, char *new_str);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif /* ft_string.h */
