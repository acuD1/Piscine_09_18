/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:44:51 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/20 13:50:04 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else if ((*begin_list1)->next == NULL)
		(*begin_list1)->next = begin_list2;
	else
		ft_list_merge(&((*begin_list1)->next), begin_list2);
}
