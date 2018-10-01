/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 08:16:25 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:22:38 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' ? 1 : 0);
}

int		count_w(char *str)
{
	int i;
	int n_w;

	i = 0;
	n_w = 0;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i])
			n_w++;
		while (!is_space(str[i]) && str[i])
			i++;
	}
	return (n_w);
}

void	do_print(char *str, char *tab, int i, int j)
{
	int in_w;

	in_w = 0;
	while (in_w < j)
	{
		tab[in_w] = str[i + in_w];
		in_w++;
	}
	tab[in_w] = '\0';
}

int		do_split(char *str, char **tab, int i, int in_w)
{
	int j;

	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		if (str[i])
		{
			j = 0;
			while (!is_space(str[i + j]) && str[i + j] != '\0')
				j++;
			if (!(tab[in_w] = malloc(sizeof(char) * (j + 1))))
				return (0);
			do_print(str, tab[in_w], i, j);
			i += j;
			in_w++;
		}
	}
	tab[in_w] = NULL;
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		n_w;
	char	**tab;

	tab = 0;
	n_w = count_w(str);
	if (!(tab = malloc(sizeof(char*) * (n_w + 1))))
		return (0);
	if ((do_split(str, tab, 0, 0) != 0))
		return (0);
	return (tab);
}
