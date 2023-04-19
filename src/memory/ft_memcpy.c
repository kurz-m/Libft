/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:02:58 by makurz            #+#    #+#             */
/*   Updated: 2023/04/18 22:16:35 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

// Copies 'n' bytes from memory space 'src' to memory space 'dst'.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dst;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_src = (const unsigned char *) src;
	tmp_dst = (unsigned char *) dst;
	while (i++ < n)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
