/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:53:45 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 13:16:48 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(0, ft_isascii(200));
	ASSERT_EQUAL_int(1, ft_isascii(' '));
	ASSERT_EQUAL_int(1, ft_isascii('@'));
	ASSERT_EQUAL_int(1, ft_isascii('['));
	ASSERT_EQUAL_int(0, ft_isascii(128));
	ASSERT_EQUAL_int(1, ft_isascii('Z'));
}
