/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:21:18 by makurz            #+#    #+#             */
/*   Updated: 2023/04/16 11:31:47 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

// Outputs the string 's' to the file descriptor 'fd', followed by a new line.
void	ft_putendl_fd(char *s, int fd)
{
	int		size;

	size = ft_strlen(s);
	write(fd, s, size);
	ft_putchar_fd('\n', fd);
}
