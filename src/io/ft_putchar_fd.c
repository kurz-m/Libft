/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:37:27 by makurz            #+#    #+#             */
/*   Updated: 2023/04/16 11:31:37 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

// Outputs the char 'c' to the file descriptor 'fd'.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
