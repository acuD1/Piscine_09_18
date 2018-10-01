/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:02:37 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/18 16:46:05 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		op(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i == 1)
	{
		if (str[0] == '+')
			return (0);
		if (str[0] == '-')
			return (1);
		if (str[0] == '*')
			return (2);
		if (str[0] == '/')
			return (3);
		if (str[0] == '%')
			return (4);
	}
	return (-1);
}

void	do_op(int a, int op, int b)
{
	void	(*f[5])(int a, int b);

	if (op != -1)
	{
		f[0] = add;
		f[1] = sub;
		f[2] = mul;
		f[3] = div;
		f[4] = mod;
		f[op](a, b);
	}
	else
		ft_putstr("0\n");
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	do_op(ft_atoi(av[1]), op(av[2]), ft_atoi(av[3]));
}
