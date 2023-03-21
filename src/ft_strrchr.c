/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:10:43 by makurz            #+#    #+#             */
/*   Updated: 2023/03/20 17:21:32 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *) s + len;
	if (*ptr == (unsigned char) c)
		return (ptr);
	ptr--;
	while (len--)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr--;
	}
	return (0);
}
