/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <dumba@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 06:55:14 by makurz            #+#    #+#             */
/*   Updated: 2023/04/28 07:22:50 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

static int	ft_count_words(const char *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			count++;
			str += ft_strlen_c(str, 32);
		}
	}
	return (count);
}

char	**maintmp(char const *str, char c)
{
	int		count;
	char	**arr;
	int		i;

	i = 0;
	count = ft_count_words(str, c);
	arr = ft_calloc(sizeof(char*), (count + 1));
	if (arr == NULL)
		return (NULL);
	arr[count] = NULL;
	while (i < count)
	{
		if (*str == c)
			str++;
		else
		{
			arr[i] = ft_substr(str, 0, ft_strlen_c(str, 32));
			if (arr[i] == NULL)
				return (ft_arrfree(arr), NULL);
			str += ft_strlen_c(str, 32);
			++i;
		}
	}
	return (arr);
}
