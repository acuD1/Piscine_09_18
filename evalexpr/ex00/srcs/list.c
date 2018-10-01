/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:59:29 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:51 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

t_node	*add_node(t_node *list, int flag, int nbr, char fct)
{
	t_node	*begin_list;
	t_node	*tmp;

	begin_list = list == NULL ? NULL : list;
	if (!(tmp = malloc(sizeof(t_node))))
		return (0);
	tmp->flag = flag;
	tmp->nbr = nbr;
	tmp->fct = fct;
	tmp->next = NULL;
	if (list)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = tmp;
	}
	return (begin_list == NULL ? tmp : begin_list);
}

void	destroy_list(t_node *list)
{
	t_node	*tmp;

	while (list != NULL)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}
