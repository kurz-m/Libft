/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:51:09 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 13:52:03 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_size_t(strlen(""), ft_strlen(""));
	ASSERT_EQUAL_size_t(strlen("abc"), ft_strlen("abc"));
	ASSERT_EQUAL_size_t(strlen("Hallo"), ft_strlen("Hallo"));
	ASSERT_EQUAL_size_t(strlen("   H2\n\fallo !!"), ft_strlen("   H2\n\fallo !!"));
}
