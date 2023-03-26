/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:18:24 by makurz            #+#    #+#             */
/*   Updated: 2023/03/26 13:26:10 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	char	*str;
	char	c;

	str = "testing cases";
	printf("\n\033[34mThis is the test for %s\033[0m\n\n", __FILE__);
	ASSERT_EQUAL_ptr(strchr(str, '\0'), ft_strchr(str, '\0'));
	ASSERT_EQUAL_ptr(strchr(str, 't'), ft_strchr(str, 't'));
	ASSERT_EQUAL_ptr(strchr(str, 'i'), ft_strchr(str, 'i'));
	ASSERT_EQUAL_ptr(strchr(str, 'b'), ft_strchr(str, 'b'));
	ASSERT_EQUAL_ptr(strchr("", '\0'), ft_strchr("", '\0'));
}
