/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:11:03 by makurz            #+#    #+#             */
/*   Updated: 2023/09/05 10:13:50 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// joins 2 strings together and frees the memory of the string
// given by the 'delete' character.
char	*ft_strjoinfree(char *s1, char *s2, char delete)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	if (delete == 'L' || delete == 'B')
		free(s1);
	if (delete == 'R' || delete == 'B')
		free(s2);
	return (new);
}
