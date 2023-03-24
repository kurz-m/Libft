/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:54:31 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:54:54 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(1, ft_isdigit('1'));
	ASSERT_EQUAL_int(1, ft_isdigit('5'));
	ASSERT_EQUAL_int(1, ft_isdigit('9'));
	ASSERT_EQUAL_int(1, ft_isdigit('0'));
	ASSERT_EQUAL_int(0, ft_isdigit('a'));
	ASSERT_EQUAL_int(0, ft_isdigit('@'));
	ASSERT_EQUAL_int(0, ft_isdigit('F'));
	ASSERT_EQUAL_int(0, ft_isdigit('t'));
}
