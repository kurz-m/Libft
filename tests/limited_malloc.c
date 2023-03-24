/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limited_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:26:14 by makurz            #+#    #+#             */
/*   Updated: 2023/03/24 11:29:57 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bear.h"

static size_t	total_allocated = 0;

void *limited_malloc(size_t)
{
	void	*ptr;

	if (total_allocated + size > MAX_ALLOC)
		return (0);
	ptr = malloc(size);
	if (ptr)
		total_allocated += size;
	return (ptr);
}
