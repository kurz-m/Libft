/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:22:37 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 16:07:12 by makurz           ###   ########.fr       */
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

static int	ft_alloc_words(char **dst, const char *s, char c)
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
			if (!dst[n])
				return (n);
			start = -1;
			++n;
		}
		++i;
	}
	dst[n] = 0;
	return (0);
}

static int	ft_free_words(char **dst, int allocated)
{
	while (allocated--)
		free(dst[allocated]);
	free(dst);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		shield;
	size_t	words;

	shield = 0;
	words = ft_words(s, c);
	dst = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!dst)
		return (0);
	shield = ft_alloc_words(dst, s, c);
	if (shield)
	{
		ft_free_words(dst, shield);
		return (0);
	}
	return (dst);
}
