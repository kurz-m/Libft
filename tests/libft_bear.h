/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bear.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:27:36 by makurz            #+#    #+#             */
/*   Updated: 2023/03/26 13:20:43 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST
# define LIBFT_TEST

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

// do {} while (0) to group multiple statements into one block!
# define ASSERT_EQUAL_int(expected, actual) \
	do \
	{ \
		if ((expected) != (actual)) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %d but got %d\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
		if ((expected) == (actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %d actual %d\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_size_t(expected, actual) \
	do \
	{ \
		if ((expected) != (actual)) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %zu but got %zu\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
		if ((expected) == (actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %zu actual %zu\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_cmp(expected, actual) \
	do \
	{ \
		if (((expected > 0) && (actual < 0)) || ((expected < 0) && (actual > 0)) || ((expected == 0) && (actual != 0))) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %d but got %d\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
		else if (((expected > 0) && (actual > 0)) || ((expected < 0) && (actual < 0)) || (expected == actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %d actual %d\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_str(expected, actual) \
	do \
	{ \
		if (strcmp(expected, actual)) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %s but got %s\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
		else if (!strcmp(expected, actual)) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %s actual %s\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

# define ASSERT_EQUAL_ptr(expected, actual) \
	do \
	{ \
		if (expected != actual) \
		{ \
			printf("\033[31mx\033[0m Test failed in %s at line %d: expected %p but got %p\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
		else if (expected == actual) \
		{ \
			printf("\033[32m\xE2\x9C\x93\033[0m Test passed in %s at line %d: expected %p actual %p\n.", \
			__FILE__, __LINE__, expected, actual); \
		} \
	} while (0)

// function to limit the allocatable memory amount of malloc()
void	*limited_malloc(size_t size);

#endif
