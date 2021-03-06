/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:09:57 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:27:09 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *tab_r;

	i = 0;
	if (!(tab_r = malloc(sizeof(int) * (lenght))))
		return (0);
	while (i < lenght)
	{
		tab_r[i] = f(tab[i]);
		i++;
	}
	return (tab_r);
}
