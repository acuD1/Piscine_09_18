/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:42:20 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:35:22 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	fill_line(int x, char a, char b, char c)
{
	int	col;

	col = 1;
	ft_putchar(a);
	while (col <= x - 2)
	{
		ft_putchar(b);
		col++;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	line = 1;
	if (x >= 1 && y >= 1)
	{
		while (line <= y)
		{
			printf("%d\n", line);
			if (line == 1)
			{
				fill_line(x, '/', '*', '\\');
				line++;
			}
			else if (line == y)
			{
				fill_line(x, '\\', '*', '/');
				line++;
			}
			else
			{
				fill_line(x, '*', ' ', '*');
				line++;
			}
		}
	}
}
