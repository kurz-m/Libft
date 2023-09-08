/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:24:05 by makurz            #+#    #+#             */
/*   Updated: 2023/09/08 18:59:49 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrdup(const char **src)
{
	int		i;
	size_t	size;
	char	**dst;

	if (src == NULL)
		return (NULL);
	size = ft_arrlen(src) + 1;
	i = -1;
	dst = ft_calloc(size, sizeof(*dst));
	if (dst == NULL)
		return (NULL);
	while (src[++i])
		dst[i] = ft_strdup(src[i]);
	return (dst);
}
