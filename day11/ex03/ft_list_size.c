/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:42:41 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/19 14:38:57 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		size;

	size = 0;
	elem = begin_list;
	if (begin_list == NULL)
		return (0);
	while (elem->next != NULL)
	{
		elem = elem->next;
		size++;
	}
	return (size + 1);
}
