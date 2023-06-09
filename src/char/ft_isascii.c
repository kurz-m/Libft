/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:44:32 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 13:56:40 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if 'c' is an ASCII character.
int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
		return (0);
	return (1);
}
