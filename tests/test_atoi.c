/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:55:43 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:57:14 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	printf("\n##This is the test for %s##\n\n", __FILE__);
	ASSERT_EQUAL_int(atoi("   ++438a"), ft_atoi("   ++438a"));
	ASSERT_EQUAL_int(atoi(" \f\r\t-438ac"), ft_atoi(" \f\r\t-438ac"));
	ASSERT_EQUAL_int(atoi("43"), ft_atoi("43"));
	ASSERT_EQUAL_int(atoi("\f\f\f +4901"), ft_atoi("\f\f\f +4901"));
}
