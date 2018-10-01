/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 10:38:45 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:10 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *elem;

	elem = begin_list;
	if (begin_list == NULL)
		return (0);
	while (elem != NULL)
	{
		if (cmp(elem->data, data_ref) == 0)
			return (elem);
		elem = elem->next;
	}
	return (0);
}
