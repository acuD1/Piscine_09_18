/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:15:06 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/24 15:18:47 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	elem = *begin_list;
	else
		while (elem->next != NULL)
			elem = elem->next;
	elem->next = ft_create_elem(data);
}
