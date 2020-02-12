/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:56:01 by rde-oliv          #+#    #+#             */
/*   Updated: 2020/02/11 18:10:58 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**ptr;
	t_list	*list;

	if (!lst || !*lst)
		return ;
	list = &**lst;
	if (list->next)
	{
		ptr = &(*lst)->next;
		ft_lstclear(ptr, del);
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
