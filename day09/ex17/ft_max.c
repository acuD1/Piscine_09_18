/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:13:45 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:26:16 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	max = 0;
	i = 0;
	while (i < length && tab)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
