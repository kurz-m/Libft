/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:48:32 by makurz            #+#    #+#             */
/*   Updated: 2023/03/21 10:05:39 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;
	size_t	size;

	i = 0;
	size = len;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < (start + len))
		size = len - ((start + len - ft_strlen(s)));
	dst = (char *) malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (0);
	while (size--)
	{
		dst[i] = s[start + i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}
