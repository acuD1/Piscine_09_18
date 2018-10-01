/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:29:24 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:36:49 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_calcul(int n)
{
	int	base;

	if (n == 0)
	{
		return (5);
	}
	if (n % 2 == 0)
		base = (n + 2) * (n + 3) - 11 - n + 2 * (((n / 2) + 1) * ((n / 2) + 2));
	else
		base = (n + 2) * (n + 3) + 2 * ((n / 2) + 1) * ((n / 2) + 2) - 9;
	return (base - 2);
}

void	stage_print(int hauteur, int star, int size, int *space)
{
	int			base;
	int			current_space;
	static int	line;

	current_space = *space;
	base = base_calcul(size + 1);
	if (hauteur < 3 + size)
	{
		line = current_space;
		stage_print(hauteur + 1, star + 2, size, space);
	//	printf("S:%d | C_S:%d\n", *space, current_space);
		while (2 * current_space >= ((*space)-hauteur*2+(hauteur * size)))
		{
			ft_putchar(' ');
			current_space-=2;
		}
		ft_putchar('/');
		while (star < base)
		{
			ft_putchar('*');
			star++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		return ;
	}
	return ;
}

void	sastantua(int size)
{
	int		etage;
	int		space;

	etage = 0;
	space += (base_calcul(size) / size) - 1;
	while (etage < size)
	{
		stage_print(0, 0, etage, &space);
		etage++;
	}
}

int		main(int ac, char **av)
{
	int	height;

	if (ac < 2)
		return (0);
	sastantua(atoi(av[1]));
	return (0);
}
