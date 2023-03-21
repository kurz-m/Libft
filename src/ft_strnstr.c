/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:55:17 by makurz            #+#    #+#             */
/*   Updated: 2023/03/20 17:27:35 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *) haystack);
	ptr = (char *) haystack;
	while (*ptr && len-- >= n_len)
	{
		if (*ptr == *needle && !ft_strncmp(ptr, needle, n_len))
			return (ptr);
		ptr++;
	}
	return (0);
}