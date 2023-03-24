/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:38:21 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:48:09 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(1, ft_isalnum('a'));
	ASSERT_EQUAL_int(1, ft_isalnum('Z'));
	ASSERT_EQUAL_int(0, ft_isalnum('@'));
	ASSERT_EQUAL_int(0, ft_isalnum('['));
	ASSERT_EQUAL_int(1, ft_isalnum('1'));
	ASSERT_EQUAL_int(1, ft_isalnum('2'));
	ASSERT_EQUAL_int(1, ft_isalnum('A'));
	ASSERT_EQUAL_int(1, ft_isalnum('z'));
	ASSERT_EQUAL_int(0, ft_isalnum('_'));
	ASSERT_EQUAL_int(0, ft_isalnum('%'));
	ASSERT_EQUAL_int(0, ft_isalnum('#'));
	ASSERT_EQUAL_int(1, ft_isalnum('0'));
	ASSERT_EQUAL_int(1, ft_isalnum('9'));
}
