/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:25:35 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/16 11:30:07 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		fill_line(x, '/', '*', '\\');
		while (line <= y - 2)
		{
			fill_line(x, '*', ' ', '*');
			line++;
		}
		if (y > 1)
		{
			fill_line(x, '\\', '*', '/');
			line++;
		}
	}
}
