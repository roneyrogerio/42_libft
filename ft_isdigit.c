/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:17:11 by rde-oliv          #+#    #+#             */
/*   Updated: 2020/01/24 12:55:56 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	return (0);
}