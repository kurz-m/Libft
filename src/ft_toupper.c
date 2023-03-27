/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:24:36 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 14:33:15 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	if (c > 122 || c < 97)
		return (0);
	return (1);
}

// Converts lowercase characters to uppercase characters.
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
