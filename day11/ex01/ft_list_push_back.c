/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:15:06 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/20 14:18:19 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = *begin_list;
	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
		while (elem->next != NULL)
			elem = elem->next;
	elem->next = ft_create_elem(data);
}
