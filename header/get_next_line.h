/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:09:22 by makurz            #+#    #+#             */
/*   Updated: 2023/04/16 11:30:27 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 20
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>

typedef struct s_gnl
{
	char	*new_line;
	bool	line_bool;
	size_t	i;
	size_t	k;
}	t_gnl;

char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char *s1, char *s2, t_gnl str);
int		ft_clean_stash(char *str, t_gnl next);

#endif // GET_NEXT_LINE_BONUS_H
