/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 09:29:42 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:05 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*elem;

	elem = begin_list;
	if (begin_list == NULL)
		return ;
	while (elem != NULL)
	{
		if (cmp(elem->data, data_ref) == 0)
			f(elem->data);
		elem = elem->next;
	}
}
