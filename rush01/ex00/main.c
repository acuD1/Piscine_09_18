/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:13:43 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/09 22:36:27 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_rush01(char **av)
{
	int **sudoku;
	int	line;
	int	c;

	line = 0;
	c = 0;
	if (!(sudoku = (int**)malloc(sizeof(int *) * 9)))
		return (0);
	while (line++ < 9)
	{
		if (!(sudoku[line] = (int*)malloc(sizeof(int) * 9)))
			return (0);
		c = 0;
		while (c++ < 9)
		{
			if (av[line][c] == '.')
				sudoku[line][c] = 0;
			else
				sudoku[line][c] = av[line][c] - '0';
		}
	}
	ft_p_sudoku(sudoku);
	ft_do_sudoku(sudoku, 0, 0);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 10)
	{
		i = 1;
		while (i < ac)
		{
			if (ft_avc(av[i]) == 1)
			{
				ft_putstr("Error");
				return (0);
			}
			i++;
		}
		ft_rush01(++av);
	}
	else
		ft_putstr("Error");
	return (0);
}
