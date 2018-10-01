/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:19:27 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/13 11:12:05 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char *str, char *charset, int i)
{
	int ichar;
	int char_l;

	ichar = 0;
	while (charset[ichar])
		char_l++;
	while (str[i] && charset[ichar] && str[i] == charset[ichar])
	{
		i++;
		ichar++;
	}
	if (ichar == char_l)
		return 1;
	else
		return 0;
}

int		count_w(char *str, char *charset)
{
	int i;
	int n_w;

	i = 0;
	n_w = 0;
	while (str[i])
	{
		while (is_sep(&str[i], charset, i))
			i++;
		if (str[i])
			n_w++;
		while (!is_sep(&str[i], charset, i) && str[i])
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

int		do_split(char *str, char **tab, int i, int in_w, char *charset)
{
	int j;

	while (str[i])
	{
		while (is_sep(&str[i], charset, i) && str[i])
			i++;
		if (str[i])
		{
			j = 0;
			while (!is_sep(&str[i + j], charset, i) && str[i + j] != '\0')
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

char	**ft_split(char *str, char *charset)
{
	int		n_w;
	char	**tab;

	tab = 0;
	n_w = count_w(str, charset);
	if (!(tab = malloc(sizeof(char*) * (n_w + 1))))
		return (0);
	if ((do_split(str, tab, 0, 0, charset) != 0))
		return (0);
	return (tab);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	char **tab;

	tab = ft_split(av[1], av[2]);
	while (*tab != NULL)
		printf("%s\n", *tab++);
	return (0);

}
