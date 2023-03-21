/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:31:24 by makurz            #+#    #+#             */
/*   Updated: 2023/03/20 12:29:10 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_tmp;
	const char	*src_tmp;

	dst_tmp = (char *) dst;
	src_tmp = (const char *) src;
	if (dst < src)
	{
		while (len--)
			*dst_tmp++ = *src_tmp++;
	}
	if (src < dst)
	{
		dst_tmp = dst_tmp + len - 1;
		src_tmp = src_tmp + len - 1;
		while (len--)
			*dst_tmp-- = *src_tmp--;
	}
	return (dst);
}
