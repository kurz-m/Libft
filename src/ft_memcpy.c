/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:02:58 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 14:05:00 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies 'n' bytes from memory space 'src' to memory space 'dst'.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*tmp_src;
	char		*tmp_dst;

	i = 0;
	if (!dst && !src)
		return (dst);
	tmp_src = (const char *) src;
	tmp_dst = (char *) dst;
	while (i++ < n)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
