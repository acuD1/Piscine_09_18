/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:31:46 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/07 16:34:14 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	j = 0;
	while (j < size)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	ft_sort_integer_table(tab, length);
	while (i < length - 1)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i += 2;
	}
	return (tab[i]);
}
