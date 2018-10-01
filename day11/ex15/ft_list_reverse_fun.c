/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:54:56 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:37 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *elem;
	t_list *elem_p;
	t_list *elem_n;

	elem = begin_list;
	elem_p = NULL;
	elem_n = NULL;
	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	while (elem != NULL)
	{
		elem_n = elem->next;
		elem->next = elem_p;
		elem_p = elem;
		elem = elem_n;
	}
	begin_list = elem_p;
}
