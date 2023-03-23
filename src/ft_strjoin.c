/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:24:46 by makurz            #+#    #+#             */
/*   Updated: 2023/03/22 10:02:22 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len_s1;
	size_t	len_s2;
	size_t	dstsize;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dstsize = len_s1 + len_s2 + 1;
	dst = (char *) malloc(sizeof(char) * dstsize);
	if (!dst)
		return (0);
	dst = ft_memcpy(dst, s1, len_s1 + 1);
	ft_strlcat(dst, s2, dstsize);
	return (dst);
}
