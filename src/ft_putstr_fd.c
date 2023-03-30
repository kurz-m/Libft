/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:07:26 by makurz            #+#    #+#             */
/*   Updated: 2023/03/30 19:55:03 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the str 's' to the file descriptor 'fd'.
void	ft_putstr_fd(char *s, int fd)
{
	int		size;

	size = ft_strlen(s);
	write(fd, s, size);
}
