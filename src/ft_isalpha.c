/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:35:19 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 13:57:12 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	if (c > 90 || c < 65)
		return (0);
	return (1);
}

static int	ft_islower(int c)
{
	if (c > 122 || c < 97)
		return (0);
	return (1);
}

// Checks if 'c' is an alphabetic character.
int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
