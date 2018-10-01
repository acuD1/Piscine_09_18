/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:48:34 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:23:48 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
}

void	ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}

void	print_normalized_hour(int hour)
{
	if (hour <= 12)
	{
		ft_putnbr(hour);
		ft_putstr(":00 A.M.");
	}
	else if (hour == 12)
		ft_putstr("12:00 P.M.");
	else if (hour > 12 && hour < 24)
	{
		hour = hour - 12;
		ft_putnbr(hour);
		ft_putstr(":00 P.M.");
	}
	else
		ft_putstr("12:00 A.M.");
}

void	ft_takes_place(int hour)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_normalized_hour(hour);
	hour++;
	ft_putstr(" AND ");
	if (hour == 25)
		print_normalized_hour(1);
	else
	{
		print_normalized_hour(hour);
		ft_putchar('\n');
	}
}
