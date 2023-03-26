/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:52:17 by makurz            #+#    #+#             */
/*   Updated: 2023/03/26 21:56:29 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "libft_bear.h"

int	main(void)
{
	// Test case 1
	char	str1[] = "abcabc";

	printf("\n\033[34mThis is the test for %s\033[0m\n\n", __FILE__);
	ft_bzero(str1, 3);
	ASSERT_EQUAL_strn("\0\0\0abc", str1, 6, 0);

	// Test case 2
	char	str2[] = "tester";

	ft_bzero(str2, 0);
	ASSERT_EQUAL_strn("tester", str2, 6, 0);

	// Test case 3
	char	str3[] = "abcabc";

	ft_bzero(str3, 6);
	ASSERT_EQUAL_strn("\0\0\0\0\0\0", str3, 6, 0);

	//// Test case 4
	//char	str4[] = "abcabc";

	//ft_bzero(str4, 3);
	//ASSERT_EQUAL_strn("\0\0\0abc", str4, 6, 0);

	//// Test case 5
	//char	str5[] = "abcabc";

	//ft_bzero(str5, 3);
	//ASSERT_EQUAL_strn("\0\0\0abc", str5, 6, 0);
	return (0);
}

