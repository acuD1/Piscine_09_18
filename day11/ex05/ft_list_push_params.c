/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 07:45:24 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:28:17 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	t_list	*head;
	int		i;

	i = 0;
	head = NULL;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = head;
		head = elem;
		i++;
	}
	return (head);
}
