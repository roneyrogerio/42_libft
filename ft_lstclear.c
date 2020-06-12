/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:56:01 by rde-oliv          #+#    #+#             */
/*   Updated: 2020/06/12 03:54:40 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

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
