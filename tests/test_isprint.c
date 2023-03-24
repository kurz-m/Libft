/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:55:03 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:55:20 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(0, ft_isprint(200));
	ASSERT_EQUAL_int(1, ft_isprint(' '));
	ASSERT_EQUAL_int(1, ft_isprint('@'));
	ASSERT_EQUAL_int(1, ft_isprint('['));
	ASSERT_EQUAL_int(0, ft_isprint(127));
	ASSERT_EQUAL_int(1, ft_isprint('Z'));
}
