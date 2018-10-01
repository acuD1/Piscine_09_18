/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:11:36 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:35:49 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_linec(int **sudoku, int line, int put_nu)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (sudoku[line][col] == put_nu)
			return (0);
		col++;
	}
	return (1);
}

int		ft_colc(int **sudoku, int col, int put_nu)
{
	int line;

	line = 0;
	while (line < 9)
	{
		if (sudoku[line][col] == put_nu)
			return (0);
		line++;
	}
	return (1);
}

int		ft_blocc(int **sudoku, int line, int col, int put_nu)
{
	int	bl;
	int	bc;

	bl = line;
	bc = col;
	while ((bl % 3) != 2)
		bl++;
	while ((bc % 3) != 2)
		bc++;
	line = bl - 2;
	while (line <= bl)
	{
		col = bc - 2;
		while (col <= bc)
		{
			if (sudoku[line][col] == put_nu)
				return (0);
			col++;
		}
		line++;
	}
	return (1);
}

int		ft_multic(int **sudoku, int line, int col, int put_nu)
{
	if (ft_linec(sudoku, line, put_nu) == 1
			&& ft_colc(sudoku, col, put_nu) == 1
			&& ft_blocc(sudoku, line, col, put_nu) == 1)
		return (1);
	else
		return (0);
}

int		ft_avc(char *av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		if (av[i] < '1' || av[i] > '9' || av[i] != '.')
			return (0);
		j = i++;
		while (av[j])
		{
			if ((av[j] <= '1' && av[j] >= '9') && av[i] == av[j])
				return (0);
			j++;
		}
		i++;
		if (i != 9)
			return (0);
	}
	return (1);
}
