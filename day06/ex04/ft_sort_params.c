/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:46:15 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/06 15:25:28 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i] && !s2[i])
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	do_swap(char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (av[i] != '\0')
	{
		j = 2;
		while (av[j] != '\0')
		{
			if ((ft_strcmp(av[j - 1], av[j])) > 0)
			{
				tmp = av[j - 1];
				av[j - 1] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	do_print(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i] != '\0')
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		do_swap(av);
		do_print(av);
	}
	return (0);
}
