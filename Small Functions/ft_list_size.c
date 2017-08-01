/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 23:28:29 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/19 23:41:11 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;
	t_list *list;

	list = begin_list;
	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
