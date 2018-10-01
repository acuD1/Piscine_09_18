/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:18:29 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/07 13:22:24 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;
	int flag;
	int o;

	i = 0;
	o = 0;
	flag = 0;
	while (i < length)
	{
		j = i;
		if (tab[i][o] == 0)
		{
			tab[i] = tab[i + 1];
			flag += 1;
		}
		while (tab[j] == tab[j + 1] && tab[j + 1] != '\0')
		{
			tab[j] = tab[j + 1];
			j++;
		}
		i++;
	}
	tab[length - flag][0] = '\0';
	return (length - flag);
}
