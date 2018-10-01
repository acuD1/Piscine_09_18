/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:39:38 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:26 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*elem;
	void	*tmp;

	elem = *begin_list;
	if (*begin_list == NULL)
		return ;
	while (elem->next != NULL)
	{
		if (cmp(elem->data, elem->next->data) == 0)
		{
			tmp = elem->data;
			elem->data = elem->next->data;
			elem->next->data = tmp;
			elem = *begin_list;
		}
		else
			elem = elem->next;
	}
	elem = *begin_list;
}
