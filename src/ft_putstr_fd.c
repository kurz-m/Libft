/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:07:26 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 14:09:02 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the str 's' to the file descriptor 'fd'.
void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
