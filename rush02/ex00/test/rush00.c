/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:42:20 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:36:29 by arsciand         ###   ########.fr       */
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
		fill_line(x, 'o', '-', 'o');
		while (line <= y - 2)
		{
			fill_line(x, '|', ' ', '|');
			line++;
		}
		if (y > 1)
		{
			fill_line(x, 'o', '-', 'o');
			line++;
		}
	}
}
