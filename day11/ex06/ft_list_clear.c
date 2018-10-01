/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 08:02:24 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:28:22 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*destroy;

	elem = *begin_list;
	destroy = NULL;
	if (*begin_list == NULL)
		return ;
	while (elem != NULL)
	{
		destroy = elem->next;
		free(elem);
		elem = destroy;
	}
	begin_list = NULL;
}
