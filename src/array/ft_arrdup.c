/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:24:05 by makurz            #+#    #+#             */
/*   Updated: 2023/04/17 12:43:29 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

char	**ft_arrdup(const char **src)
{
	int		i;
	size_t	size;
	char	**dst;

	if (src == NULL)
		return (NULL);
	size = ft_arrlen(src) + 1;
	i = -1;
	dst = malloc(sizeof(*dst) * (size));
	if (dst == NULL)
		return (NULL);
	while (src[++i])
		dst[i] = ft_strdup(src[i]);
	return (dst);
}
