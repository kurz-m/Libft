/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:29:41 by makurz            #+#    #+#             */
/*   Updated: 2023/03/22 13:59:11 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// if (lst)
	// {
	// 	if (*lst)
	// 	{
	// 		new->next = *lst;
	// 	}
	// 	*lst = new;
	// }
	if (!new)
		return ;
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}