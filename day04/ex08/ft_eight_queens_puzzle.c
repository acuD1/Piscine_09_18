/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:06:53 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/01 14:26:16 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	do_puzzle(int *chess, int col, int *val)
{
	int line;

	line = 0;
	while (line++ < 8)
	{
		chess[col] = line;
		if (check(chess, col) != 0)
			do_puzzle(chess, col + 1, val);
	}
	if (col == 8)
		*val += 1;
}

int		ft_eight_queens_puzzle(void)
{
	int chess[8];
	int val;

	val = 0;
	do_puzzle(chess, 0, &val);
	return (val);
}
