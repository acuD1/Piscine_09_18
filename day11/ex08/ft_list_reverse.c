/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 08:19:49 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/19 13:57:43 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *elem;
	t_list *elem_p;
	t_list *elem_n;

	elem = *begin_list;
	elem_p = NULL;
	elem_n = NULL;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (elem != NULL)
	{
		elem_n = elem->next;
		elem->next = elem_p;
		elem_p = elem;
		elem = elem_n;
	}
	*begin_list = elem_p;
}
