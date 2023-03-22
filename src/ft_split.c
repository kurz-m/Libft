/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:22:37 by makurz            #+#    #+#             */
/*   Updated: 2023/03/22 16:51:28 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	int		i;
	int		shield;
	size_t	n;

	i = 0;
	n = 0;
	shield = 0;
	while (s[i])
	{
		if (s[i] != c && shield == 0)
		{
			shield = 1;
			++n;
		}
		else if (s[i] == c)
			shield = 0;
		++i;
	}
	return (n);
}

static void	ft_alloc_words(char **dst, const char *s, char c)
{
	int		n;
	int		start;
	size_t	i;

	i = 0;
	n = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start == -1)
		{
			start = i;
		}
		else if (start >= 0 && (s[i] == c || !s[i]))
		{
			dst[n] = ft_substr(s, start, i - start);
			start = -1;
			++n;
		}
		++i;
	}
	dst[n] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;

	words = ft_words(s, c);
	ptr = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!ptr)
		return (0);
	ft_alloc_words(ptr, s, c);
	return (ptr);
}
