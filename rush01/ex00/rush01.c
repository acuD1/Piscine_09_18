/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:59:45 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:35:45 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_p_sudoku(int **sudoku)
{
	int line;
	int col;

	line = 0;
	while (line <= 8)
	{
		col = 0;
		while (col <= 8)
		{
			ft_putchar(sudoku[line][col] + '0');
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	ft_do_sudoku(int **sudoku, int line, int col)
{
	int put_nu;

	if (col == 10)
	{
		ft_p_sudoku(sudoku);
		return ;
	}
	line = 0;
	while (line++ < 10)
	{
		if (sudoku[col][line] == 0)
		{
			put_nu = 1;
			while (put_nu < 10)
			{
				if (ft_multic(sudoku, line, col, put_nu) == 1)
				{
					sudoku[col][line] = put_nu;
					ft_do_sudoku(sudoku, line, col + 1);
				}
				put_nu++;
			}
		}
	}
}

/*void	ft_do_sudoku(int **sudoku, int line, int col)
{
	int i;
	int put_nu;

	i = 0;
	while (i <= 8)
	{
		if (sudoku[0][i] == 0)
		{
			ft_putchar('\n');
			put_nu = 1;
			while (put_nu < 9)
			{
				if (ft_multic(sudoku, line, col, put_nu) == 1)
				{
					sudoku[0][i] = put_nu;
					ft_p_sudoku(sudoku);
				}
				put_nu++;
			}
		}
		i++;
	}
}*/
