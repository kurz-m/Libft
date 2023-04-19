/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:24:46 by makurz            #+#    #+#             */
/*   Updated: 2023/04/19 08:16:05 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

// Returns a freeable string 'dst', which is concatenated from 's1' and 's2'.
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
	if (dst == NULL)
		return (NULL);
	dst = ft_memcpy(dst, s1, len_s1 + 1);
	ft_strlcat(dst, s2, dstsize);
	return (dst);
}
