/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bear.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:27:36 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 10:57:47 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST
# define LIBFT_TEST
// do {} while (0) to group multiple statements into one block!
# define ASSERT_EQUAL(expected, actual) \
	do \
	{ \
		if ((expected) != (actual)) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %d but got %d\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
		if ((expected) == (actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %d actual %d\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_size_t(expected, actual) \
	do \
	{ \
		if ((expected) != (actual)) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %zu but got %zu\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
		if ((expected) == (actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %zu actual %zu\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_cmp(expected, actual) \
	do \
	{ \
		if (((expected > 0) && (actual < 0)) || ((expected < 0) && (actual > 0)) || ((expected == 0) && (actual != 0))) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %d but got %d\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
		else if (((expected > 0) && (actual > 0)) || ((expected < 0) && (actual < 0)) || (expected == actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %d actual %d\n", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

// void	ft_isalpha_test(void);
// void	ft_isdigit_test(void);
// void	ft_isascii_test(void);
// void	ft_isprint_test(void);
// void	ft_isalnum_test(void);
// void	ft_tolower_test(void);
// void	ft_toupper_test(void);
// void	ft_atoi_test(void);
// void	ft_putchar_fd_test(char c, int fd);
// void	ft_putstr_fd_test(char *s, int fd);
// void	ft_putendl_fd_test(char *s, int fd);
// void	ft_strlen_test(void);
// void	*ft_memset_test(void *b, int c, size_t len);
// void	ft_bzero_test(void *s, size_t n);
// void	ft_memcmp_test(void);
// void	*ft_memcpy_test(void *dst, const void *src, size_t n);
// void	*ft_memchr_test(const void *s, int c, size_t n);
// void	ft_strncmp_test(void);
// char	*ft_strdup_test(const char *s1);
// void	*ft_calloc_test(size_t count, size_t size);
// size_t	ft_strlcat_test(char *dst, const char *src, size_t dstsize);
// size_t	ft_strlcpy_test(char *dst, const char *src, size_t dstsize);
// char	*ft_strjoin_test(char const *s1, char const *s2);

#endif