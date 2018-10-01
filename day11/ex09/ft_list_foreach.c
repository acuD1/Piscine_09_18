/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 09:07:02 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/19 14:43:45 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *elem;

	elem = begin_list;
	if (begin_list == NULL)
		return ;
	while (elem != NULL)
	{
		f(elem->data);
		elem = elem->next;
	}
}
