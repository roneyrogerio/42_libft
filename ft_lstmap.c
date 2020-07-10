/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:42:05 by rde-oliv          #+#    #+#             */
/*   Updated: 2020/07/10 06:00:59 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_int.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		if (!new_lst)
			new_lst = elem;
		else
			ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
