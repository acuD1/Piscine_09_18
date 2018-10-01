/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:54:35 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:27:17 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;
	while (i < length)
	{
		while ((f(tab[i - 1], tab[i])) < 0)
		{
			i++;
			if (((f(tab[i - 1], tab[i])) > 0) && i < length)
				return (0);
		}
		while ((f(tab[i - 1], tab[i])) > 0)
		{
			i++;
			if (((f(tab[i - 1], tab[i])) < 0) && i < length)
				return (0);
		}
		while ((f(tab[i - 1], tab[i])) == 0)
			i++;
	}
	return (1);
}
