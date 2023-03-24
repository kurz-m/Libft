/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:52:43 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:53:33 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(1, ft_isalpha('a'));
	ASSERT_EQUAL_int(1, ft_isalpha('Z'));
	ASSERT_EQUAL_int(0, ft_isalpha('@'));
	ASSERT_EQUAL_int(0, ft_isalpha('['));
	ASSERT_EQUAL_int(0, ft_isalpha('1'));
	ASSERT_EQUAL_int(0, ft_isalpha('2'));
}
