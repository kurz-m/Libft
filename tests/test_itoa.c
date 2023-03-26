/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:21:00 by makurz            #+#    #+#             */
/*   Updated: 2023/03/26 13:14:59 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n\033[34mThis is the test for %s\033[0m\n\n", __FILE__);
	ASSERT_EQUAL_str("-438", ft_itoa(-438));
	ASSERT_EQUAL_str("2147483647", ft_itoa(INT_MAX));
	ASSERT_EQUAL_str("-2147483648", ft_itoa(INT_MIN));
	ASSERT_EQUAL_str("0", ft_itoa(0));
	ASSERT_EQUAL_str("3920", ft_itoa(3920));
}
