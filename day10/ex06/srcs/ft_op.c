/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:01:51 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/18 16:44:36 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
	ft_putchar('\n');
}

void	mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
	ft_putchar('\n');
}
