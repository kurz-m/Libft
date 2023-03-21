/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:25:35 by makurz            #+#    #+#             */
/*   Updated: 2023/03/21 15:54:09 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_buf_size(int n)
{
	size_t			size;

	size = 0;
	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		++size;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nb;
	size_t	size;

	size = ft_buf_size(n);
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (0);
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ptr[0] = '-';
	}
	ptr[size] = 0;
	ptr[size - 1] = '0';
	while (nb > 0)
	{
		ptr[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ptr);
}