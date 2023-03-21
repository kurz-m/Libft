/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:02:58 by makurz            #+#    #+#             */
/*   Updated: 2023/03/21 16:15:16 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*xsrc;
	char		*xdst;

	i = 0;
	xsrc = src;
	xdst = dst;
	if (!dst && !src)
		return (dst);
	while (i++ < n)
		*xdst++ = *xsrc++;
	return (dst);
}
