/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 08:11:08 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:28:27 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*elem;
	unsigned int	i;

	i = 0;
	elem = begin_list;
	if (begin_list == NULL)
		return (0);
	while (elem != NULL)
	{
		if (i == nbr)
			return (elem);
		elem = elem->next;
		i++;
	}
	return (0);
}
