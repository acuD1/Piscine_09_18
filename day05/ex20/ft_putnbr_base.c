/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:45:26 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/13 16:04:22 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_n_lenght(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (str[j] == str[i])
				return (0);
			j--;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_l;

	base_l = ft_check_n_lenght(base);
	if (base_l > 1)
	{
		if (nbr >= base_l)
		{
			ft_putnbr_base(nbr / base_l, base);
			ft_putnbr_base(nbr % base_l, base);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			if (nbr == -2147483648)
			{
				ft_putnbr_base(-(nbr / base_l), base);
				ft_putchar(base[-(nbr % base_l)]);
			}
			else
				ft_putnbr_base(-nbr, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
