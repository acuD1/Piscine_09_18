/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_fct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:19:10 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/16 21:33:00 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb += 1;
			ft_putnbr(-nb / 10);
			ft_putchar('8');
		}
		else if (nb < (-9))
		{
			ft_putnbr(-nb / 10);
			ft_putchar((-nb % 10) + '0');
		}
		else
			ft_putnbr(-nb);
	}
}

char	*converter(int *num, char *str)
{
	if (!(*str >= '0' && *str <= '9') || *str == '\0')
		return (str);
	*num = (*num * 10) + (*str - '0');
	return (converter(num, (str + 1)));
}

int		ft_atoi(char **upstr)
{
	char	*str;
	int		num;
	int		neg;

	num = 0;
	neg = 0;
	str = *upstr;
	if (!*str)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ' ? 1 : 0)
		str++;
	if (*str >= '0' && *str <= '9')
		upstr[0] = converter(&num, str);
	else if (*str == '-' && str[1] >= '0' && str[1] <= '9')
	{
		neg += 1;
		upstr[0] = converter(&num, str + 1);
	}
	else
	{
		upstr[0] = str;
		return (0);
	}
	return (neg == 1 ? num * -1 : num);
}
