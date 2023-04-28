/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <dumba@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 06:55:14 by makurz            #+#    #+#             */
/*   Updated: 2023/04/28 06:57:55 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

size_t	ft_strlen_c(const char *str)
{
	size_t	i;

	i = 0;
	while (*str && !ft_isspace(*str++))
		++i;
	return (i);
}

int	ft_count_words(const char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (ft_isspace(*str))
			str++;
		else
		{
			count++;
			str += ft_strlen_c(str);
		}
	}
	return (count);
}

void	ft_arrfree(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i++]);
		arr[i] = NULL;
	}
	free(arr);
	arr = NULL;
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		count;
	char	**arr;
	int		i;
	int		clean;

	if (argc != 2)
		return (write(1, "\n", 1), 1);
	str = argv[1];
	i = 0;
	count = ft_count_words(str);
	arr = malloc(sizeof(char*) * (count + 1));
	if (arr == NULL)
		return (1);
	arr[count] = NULL;
	while (i < count)
	{
		if (ft_isspace(*str))
			str++;
		else
		{
			arr[i] = ft_strdup(str, ft_strlen_c(str));
			if (arr[i] == NULL)
				return (ft_arrfree(arr, (count - i)), 1);
			str += ft_strlen_c(str);
			++i;
		}
	}
	clean = count;
	--count;
	while (count >= 0)
	{
		ft_putstr(arr[count]);
		if (count != 0)
			write(1, " ", 1);
		--count;
	}
	ft_arrfree(arr, clean);
	return (write(1, "\n", 1), 0);
}
