/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:28:07 by arsciand          #+#    #+#             */
/*   Updated: 2018/08/28 14:55:28 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
