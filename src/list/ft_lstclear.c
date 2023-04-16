/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:44:02 by makurz            #+#    #+#             */
/*   Updated: 2023/03/27 21:15:02 by makurz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

// Deletes and frees the given node and every successor of that node.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp_free;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		(*del)(tmp->content);
		tmp_free = tmp;
		tmp = tmp->next;
		free(tmp_free);
	}
	*lst = NULL;
}
