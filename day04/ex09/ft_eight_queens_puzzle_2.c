/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:19:18 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/01 14:25:34 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_puzzle(int *chess)
{
	int line;

	line = 0;
	while (line < 8)
	{
		ft_putchar(chess[line] + '1');
		line++;
	}
	ft_putchar('\n');
}

int		check(int *chess, int col)
{
	int line;

	line = 0;
	while (line < col)
	{
		if (chess[col] == chess[line])
			return (0);
		else if ((col - line) == (chess[line] - chess[col]))
			return (0);
		else if ((col - line) == (chess[col] - chess[line]))
			return (0);
		line++;
	}
	return (1);
}

void	do_puzzle(int *chess, int col)
{
	int line;

	line = 0;
	while (line < 8)
	{
		chess[col] = line;
		if (check(chess, col) != 0)
			do_puzzle(chess, col + 1);
		line++;
	}
	if (col == 8)
		print_puzzle(chess);
}

void	ft_eight_queens_puzzle_2(void)
{
	int chess[8];

	do_puzzle(chess, 0);
}
